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

namespace chapter5_3_1
{
    /// <summary>
    /// MainWindow.xaml 的交互逻辑
    /// </summary>
    public partial class MainWindow : Window
    {

        List<BitmapImage> images = new List<BitmapImage>();

        public MainWindow()
        {
            InitializeComponent();
            //this.Loaded += new RoutedEventHandler(Window_Loaded);
        }

        //private void Window_Loaded(object sender,RoutedEventArgs e)
        //{
        //    try
        //    {
        //        images.Add(new BitmapImage(new Uri(@"/Resources/chapter5_3_1.ico", UriKind.Relative)));
        //        myimage.Source = images[0];
                
        //    }
        //    catch(Exception ex)
        //    {
        //        MessageBox.Show(ex.ToString());
        //    }
        //}
    }
}
