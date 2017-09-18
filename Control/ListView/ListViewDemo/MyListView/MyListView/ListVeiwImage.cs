using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Windows.Controls;
using System.Windows;
using System.IO;
using System.Drawing;
using System.Windows.Interop;
using System.Windows.Media.Imaging;
using System.Windows.Threading;

namespace MyListView
{
    /// <summary>
    /// Thrumb Image.
    /// </summary>
    public class ListVeiwImage : System.Windows.Controls.Image
    {
        #region ... Variables ...
        /// <summary>
        /// Set ImageSource Handler.
        /// </summary>
        private static SetImageSourceHandler setImageSourceHandler;
        #endregion ... Variables ...

        #region ... Properties ...
        /// <summary>
        /// Gets or sets ThrumbImageSource.
        /// </summary>
        public string ThrumbImageSource { get; set; }
        /// <summary>
        /// ThrumbImageSourceProperty.
        /// </summary>
        public static DependencyProperty ThrumbImageSourceProperty
            = DependencyProperty.Register("ThrumbImageSource", typeof(string), typeof(System.Windows.Controls.Image),
            new FrameworkPropertyMetadata(new PropertyChangedCallback(OnThrumbImageSourcePropertyChanged)));
        #endregion ... Properties ...

        #region ... Methods ...
        /// <summary>
        /// OnThrumbImageSourcePropertyChanged.
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="args"></param>
        private static void OnThrumbImageSourcePropertyChanged(DependencyObject sender, DependencyPropertyChangedEventArgs args)
        {
            if (sender is System.Windows.Controls.Image && args.NewValue is string)
            {
                System.Windows.Controls.Image image = sender as System.Windows.Controls.Image;
                string fileName = args.NewValue as string;
                setImageSourceHandler = new SetImageSourceHandler(SetImageSource);
                image.Dispatcher.BeginInvoke(setImageSourceHandler, DispatcherPriority.ApplicationIdle, new object[] { image, fileName });
            }
        }
        /// <summary>
        /// Set Image.Source.
        /// </summary>
        /// <param name="image"></param>
        /// <param name="fileName"></param>
        private static void SetImageSource(System.Windows.Controls.Image image, string fileName)
        {
            if (!string.IsNullOrEmpty(fileName) && File.Exists(fileName))
            {
                System.Drawing.Image sourceImage = System.Drawing.Image.FromFile(fileName);
                int imageWidth = 0, imageHeight = 0;
                InitializeImageSize(sourceImage, image, out imageWidth, out imageHeight);
                // From: http://stackoverflow.com/questions/3923697/is-it-possible-to-modify-a-wpf-bitmapsource-in-memory-unsafely-from-another-thr
                Bitmap sourceBmp = new Bitmap(sourceImage, imageWidth, imageHeight);
                IntPtr hBitmap = sourceBmp.GetHbitmap();
                BitmapSource bitmapSource = Imaging.CreateBitmapSourceFromHBitmap(hBitmap, IntPtr.Zero, Int32Rect.Empty,
                       BitmapSizeOptions.FromEmptyOptions());
                bitmapSource.Freeze();
                WriteableBitmap writeableBmp = new WriteableBitmap(bitmapSource);
                sourceImage.Dispose();
                sourceBmp.Dispose();
                image.Source = writeableBmp;
            }
        }
        /// <summary>
        /// Initialize ImageSize.
        /// </summary>
        /// <param name="sourceImage"></param>
        /// <param name="image"></param>
        /// <param name="imageWidth"></param>
        /// <param name="imageHeight"></param>
        private static void InitializeImageSize(System.Drawing.Image sourceImage, System.Windows.Controls.Image image,
            out int imageWidth, out int imageHeight)
        {
            int width = sourceImage.Width;
            int height = sourceImage.Height;
            float aspect = (float)width / (float)height;
            if (image.Height != double.NaN)
            {
                imageHeight = Convert.ToInt32(image.Height);
                imageWidth = Convert.ToInt32(aspect * imageHeight);
            }
            else if (image.Width != double.NaN)
            {
                imageWidth = Convert.ToInt32(image.Width);
                imageHeight = Convert.ToInt32(image.Width / aspect);
            }
            else
            {
                imageHeight = 100;
                imageWidth = Convert.ToInt32(aspect * imageHeight);
            }
        }
        #endregion ... Methods ...
    }
    /// <summary>
    /// Set ImageSource Handler.
    /// </summary>
    /// <param name="image"></param>
    /// <param name="fileName"></param>
    public delegate void SetImageSourceHandler(System.Windows.Controls.Image image, string fileName);
}
