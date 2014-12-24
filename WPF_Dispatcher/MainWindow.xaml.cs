using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;
using System.Windows.Threading;

namespace WPF_Dispatcher
{
    /// <summary>
    /// MainWindow.xaml 的交互逻辑
    /// </summary>
    public partial class MainWindow : Window
    {
        public MainWindow()
        {
            InitializeComponent();
            this.btn_test.Click += btn_test_Click;
        }

        void btn_test_Click(object sender, RoutedEventArgs e)
        {
            Thread th = new Thread(UpdateProgressBar);
            th.Start();
        }

        /// <summary>
        /// 委托
        /// </summary>
        /// <param name="i"></param>
        private delegate void UpdateProgressBarDelegate(int i);

        /// <summary>
        /// 进度条更新
        /// </summary>
        void UpdateProgressBar()
        {
            for (int i = 0; i <= 100; i++)
            {
                //方法1
                this.Dispatcher.Invoke(new Action(() =>
                {
                    this.pb_test.Value = i;
                }));
                Thread.Sleep(100);

                //方法2
                //if (!this.pb_test.Dispatcher.CheckAccess())
                //{
                //    this.pb_test.Dispatcher.Invoke(
                //        DispatcherPriority.Normal, 
                //        new UpdateProgressBarDelegate((int progress) => { 
                //            this.pb_test.Value = progress;
                //        }),
                //        i);
                //    Thread.Sleep(100);
                //    continue;
                //}

                //方法3
                //if (!Dispatcher.CheckAccess())
                //{
                //    Dispatcher.Invoke(
                //        DispatcherPriority.Normal, 
                //        new UpdateProgressBarDelegate((int progress) => { 
                //            this.pb_test.Value = progress; 
                //        }), 
                //        i);
                //    Thread.Sleep(100);
                //    continue;
                //}
            }
        }

    }
}
