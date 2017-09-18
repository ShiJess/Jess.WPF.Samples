using System;
using System.Collections.Generic;
using System.Linq;
using System.Net;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Animation;
using System.Windows.Shapes;
using Framework;
using System.ComponentModel.Composition;

namespace Demo.Views
{
    [Export( ModalViewNames.DeleteControlName, typeof( IModalView ) )]
    public partial class DeleteControl : UserControl, IModalView
    {
        public DeleteControl()
        {
            InitializeComponent();
        }

        public event EventHandler<ModalViewEventArgs> Closed;


        protected virtual void OnClosed( ModalViewEventArgs e )
        {
            if ( this.Closed != null )
                this.Closed( this, e );
        }

        private void btnCancel_Click( object sender, RoutedEventArgs e )
        {
            this.OnClosed( new ModalViewEventArgs( false ) );
        }

        private void btnOk_Click( object sender, RoutedEventArgs e )
        {
            this.OnClosed( new ModalViewEventArgs( true ) );
        }
    }
}
