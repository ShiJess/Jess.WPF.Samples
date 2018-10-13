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

namespace Custom_RoutedCommand
{
    /// <summary>
    /// Interaction logic for MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
        public static RoutedCommand ColorCmd = new RoutedCommand();
        public MainWindow()
        {
            InitializeComponent();
        }
        // ExecutedRoutedEventHandler for the custom color command.
        private void ColorCmdExecuted(object sender, ExecutedRoutedEventArgs e)
        {
            Panel target = e.Source as Panel;
            if (target != null)
            {
                if (target.Background == Brushes.AliceBlue)
                {
                    target.Background = Brushes.LemonChiffon;
                }
                else
                {
                    target.Background = Brushes.AliceBlue;
                }
            }
        }

        // CanExecuteRoutedEventHandler for the custom color command.
        private void ColorCmdCanExecute(object sender, CanExecuteRoutedEventArgs e)
        {
            if (e.Source is Panel)
            {
                e.CanExecute = true;
            }
            else
            {
                e.CanExecute = false;
            }
        }

    }
}