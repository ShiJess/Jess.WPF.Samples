using System;
using System.Collections.Generic;
using System.ComponentModel;
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

namespace WPF_Backgroundworker
{
    /// <summary>
    /// MainWindow.xaml 的交互逻辑
    /// </summary>
    public partial class MainWindow : Window
    {
        /// <summary>
        /// 后台worker
        /// </summary>
        BackgroundWorker worker = new BackgroundWorker();

        public MainWindow()
        {
            InitializeComponent();
            worker.WorkerReportsProgress = true;
            worker.DoWork += new DoWorkEventHandler(worker_DoWork);
            worker.ProgressChanged += worker_ProgressChanged;
            this.btn_test.Click += btn_test_Click;
        }

        /// <summary>
        /// 按钮点击
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        void btn_test_Click(object sender, RoutedEventArgs e)
        {
            worker.RunWorkerAsync();
        }

        /// <summary>
        /// 进度返回处理
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        void worker_ProgressChanged(object sender, ProgressChangedEventArgs e)
        {
            this.pb_test.Value = e.ProgressPercentage;
        }

        /// <summary>
        /// 业务逻辑处理
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        void worker_DoWork(object sender, DoWorkEventArgs e)
        {
            for (int i = 0; i <= 100; i++)
            {
                worker.ReportProgress(i);//返回进度
                Thread.Sleep(100);
            }
        }
    }
}
