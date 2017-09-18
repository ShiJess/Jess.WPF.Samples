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

namespace Day5_数据绑定
{
    /// <summary>
    /// MainWindow.xaml 的交互逻辑
    /// </summary>
    public partial class MainWindow : Window
    {
        public MainWindow()
        {
            InitializeComponent();

            List<Student> list = new List<Student>();
            for (int i = 20; i < 30; i++)
            {
                list.Add(new Student() { Name = "史" + i, Age = i });
            }

            listView1.ItemsSource = list;
            
        }
    }

    public class Student
    {
        public string Name { get; set; }
        public int Age { get; set; }

        public string GetName()
        {
            return "史";
        }
    }

    public class ColorConvert : IValueConverter
    {
        public object Convert(object value,Type targetType,object parameter,System.Globalization.CultureInfo culture)
        {
            var item = value as ListViewItem;

            var view = ItemsControl.ItemsControlFromItemContainer(item) as ListView;

            var index = view.ItemContainerGenerator.IndexFromContainer(item);

            if ((view.Items[index] as Student).Age == 22)
                return Brushes.Red;

            if (index % 2 == 0)
                return Brushes.Gray;
            else
                return Brushes.Blue;
        }

        public object ConvertBack(object value,Type targetType,object parameter,System.Globalization.CultureInfo culture)
        {
            return null;
        }

    }

    public class NameCheck : ValidationRule
    {
        public override ValidationResult Validate(object value, System.Globalization.CultureInfo cultureInfo)
        {
            //throw new NotImplementedException();
            var name = Convert.ToString(value);

            if (name.Length > 4)
            {
                return new ValidationResult(false, "长度不大于4");
            }

            return ValidationResult.ValidResult;
        }
    }
}
