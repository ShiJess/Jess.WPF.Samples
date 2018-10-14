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

namespace NoneStyleWindowMaximize
{
    /// <summary>
    /// MainWindow.xaml 的交互逻辑
    /// </summary>
    public partial class MainWindow : Window
    {
        public MainWindow()
        {
            InitializeComponent();

            this.btn_close.Click += Btn_close_Click;
            this.drag_panel.MouseLeftButtonDown += Drag_panel_MouseLeftButtonDown;
            this.btn_maximize.Click += Btn_maximize_Click;

            SystemParameters.StaticPropertyChanged -= SystemParameters_StaticPropertyChanged;
            SystemParameters.StaticPropertyChanged += SystemParameters_StaticPropertyChanged;
        }

        private void Drag_panel_MouseLeftButtonDown(object sender, MouseButtonEventArgs e)
        {
            try
            {
                this.DragMove();
            }
            catch { }
        }

        private void Btn_close_Click(object sender, RoutedEventArgs e)
        {
            this.Close();
        }



        double normaltop;
        double normalleft;
        double normalwidth;
        double normalheight;
        /// <summary>
        /// 最大化/还原处理
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        private void Btn_maximize_Click(object sender, RoutedEventArgs e)
        {
            //wpf最大化 全屏显示任务栏处理
            if (this.WindowState == WindowState.Normal)
            {
                normaltop = this.Top;
                normalleft = this.Left;
                normalwidth = this.Width;
                normalheight = this.Height;

                double top = SystemParameters.WorkArea.Top;
                double left = SystemParameters.WorkArea.Left;
                double right = SystemParameters.PrimaryScreenWidth - SystemParameters.WorkArea.Right;
                double bottom = SystemParameters.PrimaryScreenHeight - SystemParameters.WorkArea.Bottom;
                gd_main.Margin = new Thickness(left, top, right, bottom);

                this.WindowState = WindowState.Maximized;
            }
            else
            {
                this.WindowState = WindowState.Normal;

                //必须先设置为0,在重新设值,若前后值一样,会失效 --拖动任务栏后,还原-始终显示在屏幕最左上方
                this.Top = 0;
                this.Left = 0;
                this.Width = 0;
                this.Height = 0;

                this.Top = normaltop;
                this.Left = normalleft;
                this.Width = normalwidth;
                this.Height = normalheight;

                gd_main.Margin = new Thickness(0);
            }
        }

        private void SystemParameters_StaticPropertyChanged(object sender, System.ComponentModel.PropertyChangedEventArgs e)
        {
            if (e.PropertyName == "WorkArea")
            {
                if (this.WindowState == WindowState.Maximized)
                {
                    double top = SystemParameters.WorkArea.Top;
                    double left = SystemParameters.WorkArea.Left;
                    double right = SystemParameters.PrimaryScreenWidth - SystemParameters.WorkArea.Right;
                    double bottom = SystemParameters.PrimaryScreenHeight - SystemParameters.WorkArea.Bottom;
                    gd_main.Margin = new Thickness(left, top, right, bottom);
                }
            }
        }

    }
}
