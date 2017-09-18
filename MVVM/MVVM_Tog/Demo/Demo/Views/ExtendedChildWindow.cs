using System;
using System.Net;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Documents;
using System.Windows.Ink;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Animation;
using System.Windows.Shapes;
using Framework;
using System.ComponentModel.Composition;

namespace Demo
{
    [Export( typeof( IModalDialog ) )]
    public class ExtendedChildWindow : ChildWindow, IModalDialog
    {
        public void ShowDialog()
        {
            this.Show();
        }
    }
}
