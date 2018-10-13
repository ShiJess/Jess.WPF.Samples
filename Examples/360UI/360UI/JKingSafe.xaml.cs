using System;
using System.Collections.Generic;
using System.Text;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Shapes;

namespace _360UI
{
	/// <summary>
	/// JKingSafe.xaml 的交互逻辑
	/// </summary>
	public partial class JKingSafe : Window
	{
		public JKingSafe()
		{
			this.InitializeComponent();
			
			// 在此点之下插入创建对象所需的代码。
		}

		private void closebutton_Click(object sender, System.Windows.RoutedEventArgs e)
		{
			this.Close();
		}

		private void Window_MouseLeftButtonDown(object sender, System.Windows.Input.MouseButtonEventArgs e)
		{
			this.DragMove();
		}

		private void minibutton_Click(object sender, System.Windows.RoutedEventArgs e)
		{
			Application.Current.MainWindow.WindowState = WindowState.Minimized;
		}

		

		
	}
}