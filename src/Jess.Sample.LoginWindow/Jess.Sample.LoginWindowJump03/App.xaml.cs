using System;
using System.Collections.Generic;
using System.Configuration;
using System.Data;
using System.Linq;
using System.Threading;
using System.Threading.Tasks;
using System.Windows;

namespace Jess.Sample.LoginWindowJump
{
    /// <summary>
    /// App.xaml 的交互逻辑
    /// </summary>
    public partial class App : Application
    {
        public App()
        {
            this.MainWindow = new MainWindow();
            this.ShutdownMode = ShutdownMode.OnMainWindowClose;
        }

        protected override void OnStartup(StartupEventArgs e)
        {
            WindowLogin win = new WindowLogin();
            if (!(win.ShowDialog() ?? false))
            {
                this.Shutdown();
                return;
            }

            base.OnStartup(e);

            this.MainWindow.Show();
        }

    }
}