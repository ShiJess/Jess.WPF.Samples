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

namespace WebBrowserOnTransparentWindow
{
    /// <summary>
    /// Window visually hosting a web browser control; using transparency
    /// </summary>
    public partial class Window1 : Window
    {
        public Window1(): this(OverlayStyle.WinForms)
        {
        }
        public Window1(OverlayStyle style)
        {
            InitializeComponent();

            if (style == OverlayStyle.WPF)
            {
                WebBrowserOverlay wbo = new WebBrowserOverlay(_webBrowserPlacementTarget);
                WebBrowser wb = wbo.WebBrowser;
                wb.Navigate(new Uri("http://live.com"));

                _showOtherButton.Content = "Show WinForms-based overlay";
            }
            else if (style == OverlayStyle.WinForms)
            {
                WebBrowserOverlayWF wbo = new WebBrowserOverlayWF(_webBrowserPlacementTarget);
                System.Windows.Forms.WebBrowser wb = wbo.WebBrowser;
                wb.Navigate(new Uri("http://live.com"));

                _showOtherButton.Content = "Show WPF-based overlay";
            }

            _showOtherButton.Click += delegate
            {
                new Window1(style == OverlayStyle.WinForms ? OverlayStyle.WPF : OverlayStyle.WinForms).Show();                
            };
        }

        public enum OverlayStyle { 
            WPF, // Can't use opacity.
            WinForms // Flicker on resize when opacity is used without DWM composition
        };

        protected override void OnMouseMove(MouseEventArgs e)
        {
            base.OnMouseMove(e);

            if (e.LeftButton == MouseButtonState.Pressed &&
                // For some reason Slider doesn't seem to mark MouseMove events as handled.
                VisualTreeHelper.HitTest(_opacitySlider, e.GetPosition(_opacitySlider)) == null)
            {
                DragMove();
            }
        }
    }
}
