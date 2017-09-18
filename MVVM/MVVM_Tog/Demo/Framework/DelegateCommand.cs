using System;
using System.Windows.Input;
using System.Diagnostics;

namespace Framework
{
    public class DelegateCommand : ICommand
    {
        private readonly Func<bool> _canExecute;
        private readonly Action _execute;
        public event EventHandler CanExecuteChanged;


        public DelegateCommand( Action execute )
            : this( execute, null )
        {
        }

        public DelegateCommand( Action execute, Func<bool> canExecute )
        {
            if ( execute == null )
                throw new ArgumentNullException( "execute", "Cannot be null" );

            _execute = execute;
            _canExecute = canExecute;
        }

        [DebuggerStepThrough]
        public bool CanExecute( object parameter )
        {
            return ( ( this._canExecute == null ) ? true : this._canExecute.Invoke() );
        }

        public void Execute( object parameter )
        {
            this._execute();
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
