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
using System.Reflection;
using System.Linq;
using System.Collections.Generic;

namespace Framework
{
    public class Memento<T>
    {
        private Dictionary<PropertyInfo, object> storedProperties = new Dictionary<PropertyInfo, object>();

        public Memento( T originator )
        {
            this.InitializeMemento( originator );
        }

        public T Originator
        {
            get;
            protected set;
        }

        public void Restore( T originator )
        {
            foreach ( var pair in this.storedProperties )
            {
                pair.Key.SetValue( originator, pair.Value, null );
            }
        }

        private void InitializeMemento( T originator )
        {
            if ( originator == null )
                throw new ArgumentNullException( "Originator", "Originator cannot be null" );

            this.Originator = originator;
            IEnumerable<PropertyInfo> propertyInfos = typeof( T ).GetProperties( 
                                         BindingFlags.Public | BindingFlags.Instance )
                                         .Where( p => p.CanRead && p.CanWrite );

            foreach ( PropertyInfo property in propertyInfos )
                this.storedProperties[ property ] = property.GetValue( originator, null );
        }
    }
}
