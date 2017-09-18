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
    public interface IModalDialog
    {
        bool? DialogResult
        {
            get;
            set;
        }

        object Content
        {
            get;
            set;
        }

        void ShowDialog();
        void Close();

        event EventHandler Closed;
    }
}
