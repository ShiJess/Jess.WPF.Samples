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
using System.Windows.Media.Animation;


namespace MoveAnimation
{
    /// <summary>
    /// Interaction logic for Window1.xaml
    /// </summary>

    public partial class Window1 : System.Windows.Window
    {

        public Window1()
        {
            InitializeComponent();

            this.Loaded += new RoutedEventHandler(Window1_Loaded);
        }

        void Window1_Loaded(object sender, RoutedEventArgs e)
        {
            this.button1.RenderTransform = new TranslateTransform();

            this.button1.Name = "button1";
            this.Name = "window1";
            NameScope.SetNameScope(this, new NameScope());
            this.RegisterName(this.button1.Name, this.button1);

            DoubleAnimation xAnimation = new DoubleAnimation();
            xAnimation.From = 0;
            xAnimation.To =100;
            
            xAnimation.Duration = new Duration(TimeSpan.FromSeconds(3));

            DependencyProperty[] propertyChain = new DependencyProperty[]
            {
                Button.RenderTransformProperty,
                TranslateTransform.XProperty
            };

            Storyboard story = new Storyboard();
            
            //story.AutoReverse = true;
            //story.RepeatBehavior = RepeatBehavior.Forever;
            story.Children.Add(xAnimation);

            Storyboard.SetTargetName(xAnimation, this.button1.Name);
            Storyboard.SetTargetProperty(xAnimation, new PropertyPath("(0).(1)", propertyChain));

            story.Begin(this);
        }

    }
}