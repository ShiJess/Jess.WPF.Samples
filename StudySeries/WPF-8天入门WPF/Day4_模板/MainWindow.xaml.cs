using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;
using System.Collections.ObjectModel;

namespace Day4_模板
{
    /// <summary>
    /// MainWindow.xaml 的交互逻辑
    /// </summary>
    public partial class MainWindow : Window
    {
        public MainWindow()
        {
            InitializeComponent();
        }
    }

    public class PersonList : ObservableCollection<Person>
    {
        public PersonList()
        {
            this.Add(new Person() { Name = "史", Age = 20, Address = "南京" });
            this.Add(new Person() { Name = "杰", Age = 21, Address = "南京" });
        }
    }

    public class Person
    {
        public string Name { get; set; }
        public int Age { get; set; }
        public string Address { get; set; }
        public override string ToString()
        {
            return string.Format("姓名：{0}，年龄：{1}，地址：{2}",Name,Age,Address);
            //return base.ToString();
        }
    }
}
