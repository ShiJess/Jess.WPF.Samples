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
using System.ComponentModel;
using System.Diagnostics;

namespace Framework
{
    public class BusinessObjectBase : INotifyPropertyChanged
    {
        public event PropertyChangedEventHandler PropertyChanged;

        [DebuggerStepThrough, Conditional( "DEBUG" )]
        public void VerifyPropertyName( string propertyName )
        {
            if ( base.GetType().GetProperty( propertyName ) == null )
            {
                throw new ArgumentException( "Property not found", propertyName );
            }
        }

        protected virtual void OnPropertyChanged( string propertyName )
        {
            this.VerifyPropertyName( propertyName );
            PropertyChangedEventHandler propertyChanged = this.PropertyChanged;
            if ( propertyChanged != null )
            {
                propertyChanged( this, new PropertyChangedEventArgs( propertyName ) );
            }
        }
    }
}
