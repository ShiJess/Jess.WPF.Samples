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

namespace Framework
{
    public class ModalViewEventArgs : EventArgs
    {
        public ModalViewEventArgs( bool? dialogResult )
        {
            this.DialogResult = dialogResult;
        }

        public bool? DialogResult
        {
            get;
            protected set;
        }
    }
}
