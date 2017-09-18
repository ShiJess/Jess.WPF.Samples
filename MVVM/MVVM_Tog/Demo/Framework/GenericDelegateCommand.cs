using System;
using System.Windows.Input;

namespace Completit.Framework.Silverlight
{
    public class DelegateCommand<T> : ICommand
    {
        private readonly Predicate<T> _canExecute;
        private readonly Action<T> _execute;
        public event EventHandler CanExecuteChanged;

        public DelegateCommand( Action<T> execute ) :
            this( execute, null )
        {
        }

        public DelegateCommand( Action<T> execute, Predicate<T> canExecute )
        {
            if ( execute == null )
                throw new ArgumentNullException( "execute", "Cannot be null" );

            this._execute = execute;
            this._canExecute = canExecute;
        }

        public bool CanExecute( object parameter )
        {
            return ( ( this._canExecute == null ) || this._canExecute( ( T )parameter ) );
        }

        public void Execute( object parameter )
        {
            this._execute( ( T )parameter );
        }

        public void RaiseCanExecuteChanged()
        {
            EventHandler canExecuteChanged = this.CanExecuteChanged;
            if ( canExecuteChanged != null )
            {
                canExecuteChanged( this, EventArgs.Empty );
            }
        }
    }
}