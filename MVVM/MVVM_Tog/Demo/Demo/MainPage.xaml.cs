using System;
using System.Collections.Generic;
using System.Linq;
using System.Net;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Animation;
using System.Windows.Shapes;
using Framework;
using System.ComponentModel.Composition;

namespace Demo
{
    public partial class MainPage : UserControl
    {
        public MainPage()
        {
            InitializeComponent();
            CompositionInitializer.SatisfyImports( this );

            this.Loaded += ( s, a ) =>
            {
                this.DataContext = this;
            };
        }

        [Import]
        public IView PersonView
        {
            get;
            set;
        }
    }
}
