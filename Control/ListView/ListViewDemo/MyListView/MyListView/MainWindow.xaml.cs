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
using System.IO;

namespace MyListView
{
    /// <summary>
    /// MainWindow.xaml 的交互逻辑
    /// </summary>
    public partial class MainWindow : Window
    {
        private ListViewModelCollections curCollections = new ListViewModelCollections();
        /// <summary>
        /// 临时对象的图片集合
        /// </summary>
        public ListViewModelCollections CurCollections
        {
            get
            {
                return curCollections;
            }
        }
        public MainWindow()
        {
            InitializeComponent();
            this.photolist.ItemsSource = CurCollections;
        }

        private void btnBrowser_Click(object sender, RoutedEventArgs e)
        {
            System.Windows.Forms.FolderBrowserDialog fbd = new System.Windows.Forms.FolderBrowserDialog();
            fbd.ShowDialog();
            if (fbd.SelectedPath != string.Empty)
            {
                this.txtPath.Text = fbd.SelectedPath;
                this.CurCollections.Clear();
                DirectoryInfo di = new DirectoryInfo(System.IO.Path.GetFullPath(txtPath.Text.Trim()));
                string strFileFilter = "*.jpg;*.png;*.bmp;*.jpeg";
                string[] FileFilters = strFileFilter.Split(';');
                foreach (string Filter in FileFilters)
                {
                    FileInfo[] fis = di.GetFiles(Filter);
                    foreach (FileInfo fi in fis)
                    {
                        lvOneModel model = new lvOneModel
                        {
                            ImageFileName = fi.FullName
                        };
                        this.CurCollections.Add(model);
                     }
                }
            }
        }
    }
}
