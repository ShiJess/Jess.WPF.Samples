using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.ComponentModel;
using System.IO;

namespace MyListView
{

    public class BaseVeiwModel : INotifyPropertyChanged
    {
        public event PropertyChangedEventHandler PropertyChanged;

        protected void OnPropertyChanged(string propertyName)
        {
            if (PropertyChanged != null)
            {
                PropertyChanged(this, new PropertyChangedEventArgs(propertyName));
            }
        }

        public BaseVeiwModel()
        {
        }
        /// <summary>
        ///图片路径
        /// </summary>
        private string mImageFileName = string.Empty;
        /// <summary>
        /// 图片路径
        /// </summary>
        public string ImageFileName
        {
            get { return mImageFileName; }
            set
            {
                if (!mImageFileName.Equals(value))
                {
                    mImageFileName = value;
                    OnPropertyChanged("ImageFileName");
                }
            }
        }

        private int _ID;
        /// <summary>
        /// 模块ID
        /// </summary>
        public int ID
        {
            set
            {
                _ID = value;
            }
            get
            {
                return _ID;
            }
        }

        private string _DisplayName;

        /// <summary>
        /// 显示的名称
        /// </summary>
        public string DisplayName
        {
            get
            {
                if (!string.IsNullOrEmpty(_DisplayName))
                {
                    return _DisplayName;
                }
                if (!string.IsNullOrEmpty(mImageFileName))
                {
                    return Path.GetFileName(mImageFileName);
                }
                return string.Empty;
            }
            set
            {

                if (_DisplayName != value)
                {
                    _DisplayName = value;
                    OnPropertyChanged("DisplayName");
                }
            }
        }

  
        private int mThrumbHeight;
        /// <summary>
        /// 图片高度
        /// </summary>
        public int ThrumbHeight
        {
            get { return mThrumbHeight; }
            set
            {
                if (mThrumbHeight != value)
                {
                    mThrumbHeight = value;
                    OnPropertyChanged("ThrumbHeight");
                }
            }
        }
    }
}
