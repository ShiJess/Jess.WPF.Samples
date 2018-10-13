using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;

namespace Test06 {
	public class BusyDecorator : Control {
		public event EventHandler Cancel;

		public BusyDecorator() {
			this.Loaded += ControlBusyDecorator_Loaded;
		}

		private void ControlBusyDecorator_Loaded(object sender, RoutedEventArgs e) {
			var parent = this.Parent as Panel;
		}

		private void ShowAdorner() {
			if (this.adorner != null) {
				this.adorner.Visibility = Visibility.Visible;
			} else {
				var adornerLayer = AdornerLayer.GetAdornerLayer(this);

				if (adornerLayer != null) {
					var parent = this.Parent as Panel;
					this.adorner = new BusyAdorner(parent);
					this.adorner.Cancel += (s1, e1) => { if (Cancel != null) { Cancel(s1, e1); } };
					adornerLayer.Add(this.adorner);
				}
			}
		}

		private void HideAdorner() {
			if (this.adorner != null) {
				this.adorner.Visibility = Visibility.Hidden;
			}
		}

		public bool IsBusy {
			get { return (bool)GetValue(IsBusyProperty); }
			set { SetValue(IsBusyProperty, value); }
		}

		public static void OnIsBusyPropertyChangedCallback(DependencyObject d, DependencyPropertyChangedEventArgs e) {
			var self = d as BusyDecorator;
			bool showDecorator = (bool)e.NewValue;

			if (showDecorator) {
				self.ShowAdorner();
			} else {
				self.HideAdorner();
			}
		}

		public static readonly DependencyProperty IsBusyProperty =
			DependencyProperty.Register("IsBusy", typeof(bool), typeof(BusyDecorator), new UIPropertyMetadata(false, OnIsBusyPropertyChangedCallback));

		private BusyAdorner adorner;
	}

	[TemplatePart(Name = "PART_Cancel", Type = typeof(Button))]
	public class BusyChrome : Control {
		public override void OnApplyTemplate() {
			base.OnApplyTemplate();

			var cancelButton = GetTemplateChild("PART_Cancel") as Button;
			if (cancelButton != null) {
				cancelButton.Click += new RoutedEventHandler(cancelButton_Click);
			}
		}

		private void cancelButton_Click(object sender, RoutedEventArgs e) {
			var parent = VisualTreeHelper.GetParent(this) as BusyAdorner;
			parent.FireCancel();
		}

		static BusyChrome() {
			DefaultStyleKeyProperty.OverrideMetadata(typeof(BusyChrome), new FrameworkPropertyMetadata(typeof(BusyChrome)));
		}

		public static void OnAllowCancelPropertyChangedCallback(DependencyObject d, DependencyPropertyChangedEventArgs e) {
			var self = d as BusyChrome;
			bool allow = (bool)e.NewValue;
			var cancelButton = self.GetTemplateChild("PART_Cancel") as Button;

			if (cancelButton != null) {
				if (allow) {
					cancelButton.Visibility = Visibility.Visible;
				} else {
					cancelButton.Visibility = Visibility.Collapsed;
				}
			}
		}

		public bool AllowCancel {
			get { return (bool)GetValue(AllowCancelProperty); }
			set { SetValue(AllowCancelProperty, value); }
		}

		public static readonly DependencyProperty AllowCancelProperty =
			DependencyProperty.Register("AllowCancel", typeof(bool), typeof(BusyChrome), new UIPropertyMetadata(true, OnAllowCancelPropertyChangedCallback));
	}

	public class BusyAdorner : Adorner {
		public event EventHandler Cancel;

		protected override int VisualChildrenCount {
			get { return 1; }
		}

		public BusyAdorner(UIElement adornedElement)
			: base(adornedElement) {
			this.IsHitTestVisible = true;

			this.chrome = new BusyChrome();
			chrome.DataContext = adornedElement;
			this.AddVisualChild(chrome);
		}

		public void FireCancel() {
			if (Cancel != null) { Cancel(this, EventArgs.Empty); }
		}

		protected override Visual GetVisualChild(int index) {
			return this.chrome;
		}

		protected override Size ArrangeOverride(Size arrangeBounds) {
			this.chrome.Arrange(new Rect(arrangeBounds));
			return arrangeBounds;
		}

		private BusyChrome chrome;
	}
}
