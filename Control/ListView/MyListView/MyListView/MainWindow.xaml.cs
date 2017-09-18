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

namespace MyListView
{
    /// <summary>
    /// MainWindow.xaml 的交互逻辑
    /// </summary>
    public partial class MainWindow : Window
    {
        /// <summary>
        /// 列表数据源datatable
        /// </summary>
        protected DataTable dgvdatatable = new DataTable();

        public MainWindow()
        {
            InitializeComponent();

            SetDataTableColumn();
            for (int i = 0; i < 20;i++ )
            {
                dgvdatatable.Rows.Add("" + i, "444444" + i, "333333333" + i, "22222222" + i, "111111111" + i);
            }

            this.LV_Test.DataContext = dgvdatatable.DefaultView;

            
        }

        /// <summary>
        /// datatable添加列：序号、标题、发布时间、ID号
        /// </summary>
        protected void SetDataTableColumn()
        {
            #region 添加列
            DataColumn column = new DataColumn();
            column.DataType = System.Type.GetType("System.Int32");
            column.ColumnName = "xh";
            column.Caption = "序号";
            column.AutoIncrement = true;    //自增列
            column.AutoIncrementSeed = 1;
            column.AutoIncrementStep = 1;
            dgvdatatable.Columns.Add(column);

            DataColumn column1 = new DataColumn();
            column1.DataType = System.Type.GetType("System.String");
            column1.ColumnName = "title";
            column1.Caption = "标题";
            dgvdatatable.Columns.Add(column1);

            DataColumn column2 = new DataColumn();
            column2.DataType = System.Type.GetType("System.String");
            column2.ColumnName = "fbsj";
            column2.Caption = "发布时间";
            dgvdatatable.Columns.Add(column2);

            DataColumn column3 = new DataColumn();
            column3.DataType = System.Type.GetType("System.String");
            column3.ColumnName = "id";
            column3.Caption = "ID";
            dgvdatatable.Columns.Add(column3);

            DataColumn column4 = new DataColumn();
            column4.DataType = System.Type.GetType("System.String");
            column4.ColumnName = "other";
            column4.Caption = "其他";
            dgvdatatable.Columns.Add(column4);

            #endregion

        }
    }
}
