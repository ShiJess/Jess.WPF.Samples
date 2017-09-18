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

namespace Framework
{
    public class Caretaker<T> : IEditableObject
    {
        private Memento<T> memento;
        private T target;

        public T Target
        {
            get
            {
                return this.target;
            }
            protected set
            {
                if ( value == null )
                {
                    throw new ArgumentNullException( "Target", "Target cannot be null" );
                }

                if ( Object.ReferenceEquals( this.Target, value ) )
                    return;

                this.target = value;
            }
        }

        public Caretaker( T target )
        {
            this.Target = target;
        }

        public void BeginEdit()
        {
            if ( this.memento == null )
                this.memento = new Memento<T>( this.Target );
        }

        public void CancelEdit()
        {
            if ( this.memento == null )
                throw new ArgumentNullException( "Memento", "BeginEdit() is not invoked" );

            this.memento.Restore( Target );
            this.memento = null;
        }

        public void EndEdit()
        {
            if ( this.memento == null )
                throw new ArgumentNullException( "Memento", "BeginEdit() is not invoked" );

            this.memento = null;
        }
    }
}
