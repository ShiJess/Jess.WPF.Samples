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
using System.Collections.ObjectModel;
using System.ComponentModel.Composition;

namespace Demo.Models
{
    [Export( typeof( IPersonModel ) )]
    public class PersonModel : IPersonModel
    {
        public ObservableCollection<Person> LoadData()
        {
            ObservableCollection<Person> data = new ObservableCollection<Person>();

            data.Add( new Person()
            {
                Name = "John",
                Age = 20,
                HireDate = DateTime.Today.Subtract( TimeSpan.FromDays( 10 ) ),
                IsSingle = true
            } );

            data.Add( new Person()
            {
                Name = "Xavier",
                Age = 30,
                HireDate = DateTime.Today.Subtract( TimeSpan.FromDays( 20 ) ),
                IsSingle = false
            } );

            data.Add( new Person()
            {
                Name = "Jack",
                Age = 40,
                HireDate = DateTime.Today.Subtract( TimeSpan.FromDays( 30 ) ),
                IsSingle = false
            } );

            data.Add( new Person()
            {
                Name = "Ann",
                Age = 50,
                HireDate = DateTime.Today.Subtract( TimeSpan.FromDays( 40 ) ),
                IsSingle = true
            } );

            data.Add( new Person()
            {
                Name = "Michael",
                Age = 60,
                HireDate = DateTime.Today.Subtract( TimeSpan.FromDays( 50 ) ),
                IsSingle = true
            } );

            return data;
        }
    }
}
