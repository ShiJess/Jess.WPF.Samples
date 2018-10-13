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

namespace Test06 {
	public partial class MainWindow : Window {
		public MainWindow() {
			InitializeComponent();
			this.Loaded += new RoutedEventHandler(MainWindow_Loaded);
		}

		void MainWindow_Loaded(object sender, RoutedEventArgs e) {

		}

		private void Label_MouseUp(object sender, MouseButtonEventArgs e) {
			busyr.IsBusy = true;
		}

		private void busyr_Cancel(object sender, EventArgs e) {
			busyr.IsBusy = false;
		}
	}
}
