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
using System.Diagnostics;

namespace WPF
{
    /// <summary>
    /// MainWindow.xaml 的交互逻辑
    /// </summary>
    public partial class MainWindow : Window
    {
        public MainWindow()
        {
            InitializeComponent();
           // Debug.WriteLine("ssss");
        }

        private void button1_Click(object sender, RoutedEventArgs e)
        {
            this.frame_wpf.Source =new Uri("Animation/PageAnimation.xaml",UriKind.Relative);
        }

        private void btn_Layout_Click(object sender, RoutedEventArgs e)
        {
            this.frame_wpf.Source = new Uri("Layout/PageLayout.xaml", UriKind.Relative);
        }
    }
}
