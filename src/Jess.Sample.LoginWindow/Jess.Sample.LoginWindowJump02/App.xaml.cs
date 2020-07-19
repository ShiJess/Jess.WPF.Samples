using System;
using System.Collections.Generic;
using System.Configuration;
using System.Data;
using System.Linq;
using System.Threading.Tasks;
using System.Windows;

namespace Jess.Sample.LoginWindowJump
{
    /// <summary>
    /// App.xaml 的交互逻辑
    /// </summary>
    public partial class App : Application
    {     
        protected override void OnStartup(StartupEventArgs e)
        {          
            this.ShutdownMode = ShutdownMode.OnExplicitShutdown;
            WindowLogin win = new WindowLogin();
            if (!(win.ShowDialog() ?? false))
            {
                this.Shutdown();
                return;
            }
            this.ShutdownMode = ShutdownMode.OnLastWindowClose;

            base.OnStartup(e);
        }
    }
}
