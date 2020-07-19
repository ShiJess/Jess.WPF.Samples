using System;
using System.Collections.Generic;
using System.Configuration;
using System.Data;
using System.Linq;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Navigation;

namespace Jess.Sample.LoginWindowJump
{
    /// <summary>
    /// App.xaml 的交互逻辑
    /// </summary>
    public partial class App : Application
    {
        public App()
        {
            this.ShutdownMode = ShutdownMode.OnExplicitShutdown;
        }

        protected override void OnStartup(StartupEventArgs e)
        {
            WindowLogin win = new WindowLogin();
            if (!(win.ShowDialog() ?? false))
            {
                App.Current.Shutdown();
                //Environment.Exit(0);
                return;
            }

            base.OnStartup(e);
        }

        protected override void OnNavigating(NavigatingCancelEventArgs e)
        {            
            //e.Cancel = true;
            base.OnNavigating(e);
        }
    }
}