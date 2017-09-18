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
using System.ComponentModel.Composition;

namespace Framework
{
    [Export( typeof( IModalDialogWorker ) )]
    public class ModalDialogWorker : IModalDialogWorker
    {
        public void ShowDialog<T>( IModalDialog modalDialog, IModalView modalView, T dataContext, Action<T> onClosed )
        {
            if ( modalDialog == null )
                throw new ArgumentNullException( "modalDialog", "Cannot be null" );
            if ( modalView == null )
                throw new ArgumentNullException( "modalView", "Cannot be null" );

            EventHandler onDialogClosedHandler = null;
            EventHandler<ModalViewEventArgs> onViewClosedHandler = null;

            if ( onClosed != null )
            {
                onDialogClosedHandler = ( s, a ) =>
                {
                    modalDialog.Closed -= onDialogClosedHandler;
                    onClosed( dataContext );
                };

                onViewClosedHandler = ( s, a ) =>
                {
                    modalDialog.Closed -= onDialogClosedHandler;
                    modalView.Closed -= onViewClosedHandler;
                    modalDialog.DialogResult = a.DialogResult;
                    //modalDialog.Close();
                    onClosed( dataContext );
                };

                modalDialog.Closed += onDialogClosedHandler;
                modalView.Closed += onViewClosedHandler;
            }

            modalDialog.Content = modalView;
            modalView.DataContext = dataContext;
            modalDialog.ShowDialog();
        }
    }
}
