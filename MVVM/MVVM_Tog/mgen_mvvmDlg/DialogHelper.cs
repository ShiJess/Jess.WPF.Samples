using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Runtime.InteropServices;
using System.Windows.Interop;

namespace mgen_mvvmDlg
{
    //+ using System.Runtime.InteropServices;
    //+ using System.Windows.Interop;
    class DialogHelper
    {
        //从Handle中获取Window对象
        static Window GetWindowFromHwnd(IntPtr hwnd)
        {
            return (Window)HwndSource.FromHwnd(hwnd).RootVisual;
        }

        //GetForegroundWindow API
        [DllImport("user32.dll")]
        static extern IntPtr GetForegroundWindow();

        //调用GetForegroundWindow然后调用GetWindowFromHwnd
        static Window GetTopWindow()
        {
            var hwnd = GetForegroundWindow();
            if (hwnd == null)
                return null;

            return GetWindowFromHwnd(hwnd);
        }

        //显示对话框并自动设置Owner
        public static void ShowDialog(Window win)
        {
            win.Owner = GetTopWindow();
            win.ShowDialog();
        }
    }
}
