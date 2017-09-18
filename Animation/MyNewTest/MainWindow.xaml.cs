using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Timers;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Animation;
using System.Windows.Media.Imaging;
using System.Windows.Shapes;

namespace MyNewTest
{
    /// <summary>
    /// Window1.xaml 的交互逻辑
    /// </summary>
    public partial class Window1 : Window
    {
        public Window1()
        {
            InitializeComponent();
            // this.GridLayout();
        }

        Canvas canvas_board = new Canvas();
        Image image1 = new Image();
        Image image2 = new Image();
        Image image3 = new Image();
        Image image4 = new Image();
        List<BitmapImage> ls_images = new List<BitmapImage>(); //存放图片组
        int n_index = 0;    //滚动索引
        double n_height;   //滚动高度

        void GridLayout()
        {
            this.WindowStartupLocation = WindowStartupLocation.CenterScreen;


            canvas_board.VerticalAlignment = VerticalAlignment.Top;
            canvas_board.HorizontalAlignment = HorizontalAlignment.Left;
            canvas_board.Margin = new Thickness(0, 0, 0, 0);
            canvas_board.Width = 800;
            canvas_board.Height = 110;
            //canvas_board.Background = new SolidColorBrush(Colors.LightBlue);
            canvas_board.ClipToBounds = true;
            this.grid_main.Children.Add(canvas_board);

            image1.Stretch = Stretch.Fill;
            image1.Width = 100;
            image1.Height = 100;
            this.canvas_board.Children.Add(image1);
            image1.SetValue(Canvas.TopProperty, 0.0);
            image1.SetValue(Canvas.LeftProperty, 0.0);

            image2.Stretch = Stretch.Fill;
            image2.Width = 100;
            image2.Height = 100;
            this.canvas_board.Children.Add(image2);
            image2.SetValue(Canvas.TopProperty, 0.0);
            image2.SetValue(Canvas.LeftProperty, 100.0);

            image3.Stretch = Stretch.Fill;
            image3.Width = 100;
            image3.Height = 100;
            this.canvas_board.Children.Add(image3);
            image3.SetValue(Canvas.TopProperty, 0.0);
            image3.SetValue(Canvas.LeftProperty, 200.0);

            image4.Stretch = Stretch.Fill;
            image4.Width = 100;
            image4.Height = 100;
            this.canvas_board.Children.Add(image4);
            image4.SetValue(Canvas.TopProperty, 0.0);
            image4.SetValue(Canvas.LeftProperty, 300.0);
        }

        private void Window_Loaded(object sender, RoutedEventArgs e)
        {
            GridLayout();
            string[] img_files = Directory.GetFiles("F:\\MyNewTest\\MyNewTest\\Images", "*.png");
            foreach (string img_path in img_files)
            {
                ls_images.Add(new BitmapImage(new Uri(img_path, UriKind.Absolute)));
            }
            n_height = this.canvas_board.Width;
            this.image1.Source = ls_images[n_index++ % ls_images.Count];
            this.image2.Source = ls_images[n_index++ % ls_images.Count];
            this.image3.Source = ls_images[n_index++ % ls_images.Count];
            this.image4.Source = ls_images[n_index % ls_images.Count];

            this.StoryLoad();
        }
        Storyboard storyboard_imgs = new Storyboard();

        void StoryLoad()
        {
            DoubleAnimationUsingKeyFrames daukf_img1 = new DoubleAnimationUsingKeyFrames();
            LinearDoubleKeyFrame k1_img1 = new LinearDoubleKeyFrame(0.0, KeyTime.FromTimeSpan(TimeSpan.FromSeconds(0)));
            LinearDoubleKeyFrame k2_img1 = new LinearDoubleKeyFrame(-100, KeyTime.FromTimeSpan(TimeSpan.FromSeconds(3)));
            daukf_img1.KeyFrames.Add(k1_img1);
            daukf_img1.KeyFrames.Add(k2_img1);
            storyboard_imgs.Children.Add(daukf_img1);
            Storyboard.SetTarget(daukf_img1, image1);
            Storyboard.SetTargetProperty(daukf_img1, new PropertyPath("(Canvas.Left)"));

            DoubleAnimationUsingKeyFrames daukf_img2 = new DoubleAnimationUsingKeyFrames();
            LinearDoubleKeyFrame k1_img2 = new LinearDoubleKeyFrame(100.0, KeyTime.FromTimeSpan(TimeSpan.FromSeconds(0)));
            LinearDoubleKeyFrame k2_img2 = new LinearDoubleKeyFrame(0.0, KeyTime.FromTimeSpan(TimeSpan.FromSeconds(3)));
            daukf_img2.KeyFrames.Add(k1_img2);
            daukf_img2.KeyFrames.Add(k2_img2);
            storyboard_imgs.Children.Add(daukf_img2);
            Storyboard.SetTarget(daukf_img2, image2);
            Storyboard.SetTargetProperty(daukf_img2, new PropertyPath("(Canvas.Left)"));

            DoubleAnimationUsingKeyFrames daukf_img3 = new DoubleAnimationUsingKeyFrames();
            LinearDoubleKeyFrame k1_img3 = new LinearDoubleKeyFrame(200.0, KeyTime.FromTimeSpan(TimeSpan.FromSeconds(0)));
            LinearDoubleKeyFrame k2_img3 = new LinearDoubleKeyFrame(100.0, KeyTime.FromTimeSpan(TimeSpan.FromSeconds(3)));
            daukf_img3.KeyFrames.Add(k1_img3);
            daukf_img3.KeyFrames.Add(k2_img3);
            storyboard_imgs.Children.Add(daukf_img3);
            Storyboard.SetTarget(daukf_img3, image3);
            Storyboard.SetTargetProperty(daukf_img3, new PropertyPath("(Canvas.Left)"));

            DoubleAnimationUsingKeyFrames daukf_img4 = new DoubleAnimationUsingKeyFrames();
            LinearDoubleKeyFrame k1_img4 = new LinearDoubleKeyFrame(300.0, KeyTime.FromTimeSpan(TimeSpan.FromSeconds(0)));
            LinearDoubleKeyFrame k2_img4 = new LinearDoubleKeyFrame(200.0, KeyTime.FromTimeSpan(TimeSpan.FromSeconds(3)));
            daukf_img4.KeyFrames.Add(k1_img4);
            daukf_img4.KeyFrames.Add(k2_img4);
            storyboard_imgs.Children.Add(daukf_img4);
            Storyboard.SetTarget(daukf_img4, image4);
            Storyboard.SetTargetProperty(daukf_img4, new PropertyPath("(Canvas.Left)"));

            storyboard_imgs.FillBehavior = FillBehavior.Stop;
            storyboard_imgs.Completed += new EventHandler(storyboard_imgs_Completed);
            storyboard_imgs.Begin();
        }
        void storyboard_imgs_Completed(object sender, EventArgs e)
        {
            image1.SetValue(Canvas.TopProperty, 0.0);
            image1.SetValue(Canvas.LeftProperty, 0.0);
            image2.SetValue(Canvas.TopProperty, 0.0);
            image2.SetValue(Canvas.LeftProperty, 100.0);
            image3.SetValue(Canvas.TopProperty, 0.0);
            image3.SetValue(Canvas.LeftProperty, 200.0);
            image4.SetValue(Canvas.TopProperty, 0.0);
            image4.SetValue(Canvas.LeftProperty, 300.0);
            image1.Source = ls_images[n_index++ % ls_images.Count];
            image2.Source = ls_images[n_index++ % ls_images.Count];
            image3.Source = ls_images[n_index++ % ls_images.Count];
            image4.Source = ls_images[n_index % ls_images.Count];
            n_index -= 2;
            storyboard_imgs.Begin();
        }
    }
    public class ScrollintTextControl : Label
    {
        /// <summary>
        /// 定时器
        /// </summary>
        Timer MarqueeTimer = new Timer();
        /// <summary>
        /// 滚动文字源
        /// </summary>
        String _TextSource = "滚动文字源";
        /// <summary>
        /// 输出文本
        /// </summary>
        String _OutText = string.Empty;
        /// <summary>
        /// 文字的滚动速度
        /// </summary>
        double _RunSpeed = 1000;

        /// <summary>
        /// 构造函数
        /// </summary>
        public ScrollintTextControl()
        {
            MarqueeTimer.Interval = _RunSpeed;//文字移动的速度
            MarqueeTimer.Enabled = true;      //开启定时触发事件
            MarqueeTimer.Elapsed += new ElapsedEventHandler(MarqueeTimer_Elapsed);//绑定定时事件
            this.Loaded += new RoutedEventHandler(ScrollingTextControl_Loaded);//绑定控件Loaded事件
        }

        void ScrollingTextControl_Loaded(object sender, RoutedEventArgs e)
        {
            _TextSource = SetContent;
            _OutText = _TextSource + "       ";
        }


        void MarqueeTimer_Elapsed(object sender, ElapsedEventArgs e)
        {
            if (string.IsNullOrEmpty(_OutText)) return;
            _OutText = _OutText.Substring(1) + _OutText[0];
            Dispatcher.BeginInvoke(new Action(() =>
            {
                SetContent = _OutText;
            }));
        }

        /// <summary>
        /// 滚动的速度
        /// </summary>
        [Description("文字滚动的速度")]　//显示在属性设计视图中的描述
        public double RunSpeed
        {
            get { return _RunSpeed; }
            set
            {
                _RunSpeed = value;
                MarqueeTimer.Interval = _RunSpeed;
            }
        }

        /// <summary>
        /// 滚动文字源
        /// </summary>
        [Description("文字滚动的速度")]
        public string TextSource
        {
            get { return _TextSource; }
            set
            {
                _TextSource = value;
                _OutText = _TextSource;
            }
        }

        private string SetContent
        {
            get { return Content.ToString(); }
            set
            {
                Content = value;
            }
        }
    }
}