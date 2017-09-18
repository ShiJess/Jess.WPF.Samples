using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Shapes;

namespace mgen_mvvmDlg
{
    /// <summary>
    /// Interaction logic for DialogChrome.xaml
    /// </summary>
    public partial class DialogChrome : Window
    {
        public DialogChrome()
        {
            InitializeComponent();
        }

        public DialogChrome(UIElement content, object viewModel)
            : this()
        {
            contentGrid.Children.Add(content);
            DataContext = viewModel;

            Title = GetTitle(content);
            SizeToContent = GetSizeToContent(content);
            WindowStyle = GetWindowStyle(content);
            Width = GetWidth(content);
            Height = GetHeight(content);
            WindowStartupLocation = System.Windows.WindowStartupLocation.CenterOwner;
        }

        public event EventHandler DataUpdated;

        protected virtual void OnDataUpdated(EventArgs e)
        {
            var handler = this.DataUpdated;
            if (handler != null)
                handler(this, e);
        }

        private void Button_Click_1(object sender, RoutedEventArgs e)
        {
            Close();
            OnDataUpdated(EventArgs.Empty);
        }


        #region Title

        /// <summary>
        /// Title Attached Dependency Property
        /// </summary>
        public static readonly new DependencyProperty TitleProperty =
            DependencyProperty.RegisterAttached("Title", typeof(string), typeof(DialogChrome),
                new PropertyMetadata((string)null));

        /// <summary>
        /// Gets the Title property. This dependency property 
        /// indicates ....
        /// </summary>
        public static string GetTitle(DependencyObject d)
        {
            return (string)d.GetValue(TitleProperty);
        }

        /// <summary>
        /// Sets the Title property. This dependency property 
        /// indicates ....
        /// </summary>
        public static void SetTitle(DependencyObject d, string value)
        {
            d.SetValue(TitleProperty, value);
        }

        #endregion

        #region Width

        /// <summary>
        /// Width Attached Dependency Property
        /// </summary>
        public static readonly new DependencyProperty WidthProperty =
            DependencyProperty.RegisterAttached("Width", typeof(double), typeof(DialogChrome),
                new PropertyMetadata((double)300));

        /// <summary>
        /// Gets the Width property. This dependency property 
        /// indicates ....
        /// </summary>
        public static double GetWidth(DependencyObject d)
        {
            return (double)d.GetValue(WidthProperty);
        }

        /// <summary>
        /// Sets the Width property. This dependency property 
        /// indicates ....
        /// </summary>
        public static void SetWidth(DependencyObject d, double value)
        {
            d.SetValue(WidthProperty, value);
        }

        #endregion

        #region Height

        /// <summary>
        /// Height Attached Dependency Property
        /// </summary>
        public static readonly DependencyProperty HeightProperty =
            DependencyProperty.RegisterAttached("Height", typeof(double), typeof(DialogChrome),
                new PropertyMetadata((double)200));

        /// <summary>
        /// Gets the Height property. This dependency property 
        /// indicates ....
        /// </summary>
        public static double GetHeight(DependencyObject d)
        {
            return (double)d.GetValue(HeightProperty);
        }

        /// <summary>
        /// Sets the Height property. This dependency property 
        /// indicates ....
        /// </summary>
        public static void SetHeight(DependencyObject d, double value)
        {
            d.SetValue(HeightProperty, value);
        }

        #endregion

        #region WindowStyle

        /// <summary>
        /// WindowStyle Attached Dependency Property
        /// </summary>
        public static readonly new DependencyProperty WindowStyleProperty =
            DependencyProperty.RegisterAttached("WindowStyle", typeof(WindowStyle), typeof(DialogChrome),
                new PropertyMetadata((WindowStyle)WindowStyle.SingleBorderWindow));

        /// <summary>
        /// Gets the WindowStyle property. This dependency property 
        /// indicates ....
        /// </summary>
        public static WindowStyle GetWindowStyle(DependencyObject d)
        {
            return (WindowStyle)d.GetValue(WindowStyleProperty);
        }

        /// <summary>
        /// Sets the WindowStyle property. This dependency property 
        /// indicates ....
        /// </summary>
        public static void SetWindowStyle(DependencyObject d, WindowStyle value)
        {
            d.SetValue(WindowStyleProperty, value);
        }

        #endregion

        #region SizeToContent

        /// <summary>
        /// SizeToContent Attached Dependency Property
        /// </summary>
        public static readonly new DependencyProperty SizeToContentProperty =
            DependencyProperty.RegisterAttached("SizeToContent", typeof(SizeToContent), typeof(DialogChrome),
                new PropertyMetadata((SizeToContent)SizeToContent.Manual));

        /// <summary>
        /// Gets the SizeToContent property. This dependency property 
        /// indicates ....
        /// </summary>
        public static SizeToContent GetSizeToContent(DependencyObject d)
        {
            return (SizeToContent)d.GetValue(SizeToContentProperty);
        }

        /// <summary>
        /// Sets the SizeToContent property. This dependency property 
        /// indicates ....
        /// </summary>
        public static void SetSizeToContent(DependencyObject d, SizeToContent value)
        {
            d.SetValue(SizeToContentProperty, value);
        }

        #endregion


                
    }
}
