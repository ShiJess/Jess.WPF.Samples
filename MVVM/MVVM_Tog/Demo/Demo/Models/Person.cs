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

namespace Demo
{
    public class Person : BusinessObjectBase
    {
        private string name;
        private int age;
        private DateTime hireDate;
        private bool isSingle;

        public bool IsSingle
        {
            get
            {
                return isSingle;
            }
            set
            {
                if ( this.IsSingle == value )
                    return;

                isSingle = value;
                this.OnPropertyChanged( "IsSingle" );
            }
        }
        
        public DateTime HireDate
        {
            get
            {
                return hireDate;
            }
            set
            {
                if ( this.HireDate == value )
                    return;

                hireDate = value;
                this.OnPropertyChanged( "HireDate" );
            }
        }

        public int Age
        {
            get
            {
                return age;
            }
            set
            {
                if ( this.Age == value )
                    return;

                age = value;
                this.OnPropertyChanged( "Age" );
            }
        }

        public string Name
        {
            get
            {
                return name;
            }
            set
            {
                if ( this.Name == value )
                    return;

                name = value;
                this.OnPropertyChanged( "Name" );
            }
        }
    }
}
