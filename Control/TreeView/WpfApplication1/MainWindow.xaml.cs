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
using System.Data;
using Xceed.Wpf.AvalonDock.Layout;

namespace WpfApplication1
{
    /// <summary>
    /// MainWindow.xaml 的交互逻辑
    /// </summary>
    public partial class MainWindow : Window
    {
        public MainWindow()
        {
            InitializeComponent();

            //InitializeComponent();
            var dataSet = getData();
            _rootNodes = dataSet.Tables["data"].DefaultView;
            _rootNodes.RowFilter = "ParentId IS NULL";
            this.DataContext = this;

        }

        private DataView _rootNodes;
        public DataView RootNodes
        {
            get { return _rootNodes; }
        }

        internal static DataSet getData()
        {
            DataTable dt = new DataTable("data");
            dt.Columns.Add("Id", typeof(int));
            dt.Columns.Add("ParentId", typeof(int));
            dt.Columns.Add("NodeDescription");

            dt.Rows.Add(1, null, "Employees");
            dt.Rows.Add(2, null, "Cars");
            dt.Rows.Add(3, 1, "Men");
            dt.Rows.Add(4, 1, "Women");
            dt.Rows.Add(5, 2, "BMW");
            dt.Rows.Add(6, 2, "Lexus");
            dt.Rows.Add(7, 3, "Adam Kowalski");
            dt.Rows.Add(8, 3, "Dawid Nowacki");
            dt.Rows.Add(9, 4, "Ilona Wacek");

            DataSet ds = new DataSet();
            ds.Tables.Add(dt);

            //add a relationship

            ds.Relations.Add("rsParentChild"
            , ds.Tables["data"].Columns["Id"]
            , ds.Tables["data"].Columns["ParentId"]);

            return ds;
        }
    }
}
