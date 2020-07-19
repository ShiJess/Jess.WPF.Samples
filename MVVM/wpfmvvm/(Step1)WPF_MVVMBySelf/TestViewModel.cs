using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Linq;
using System.Text;
using System.Windows.Input;

namespace WPF_MVVMBySelf
{
    class TestViewModel : INotifyPropertyChanged
    {

        private string teststr;
        /// <summary>
        /// 待通知字符串
        /// </summary>
        public string TestStr
        {
            get { return teststr; }
            set
            {
                teststr = value;
                RaiseChanged("TestStr");
            }
        }

        /// <summary>
        /// 测试命令
        /// </summary>
        public ICommand TestCommand { get; set; }


        public TestViewModel()
        {
            TestCommand = new TestCommand(this);
        }

        #region INotifyPropertyChanged接口实现
        public void RaiseChanged(string propertyname)
        {
            if (PropertyChanged != null)
            {
                PropertyChanged(this, new PropertyChangedEventArgs(propertyname));
            }
        }
        public event PropertyChangedEventHandler PropertyChanged;
        #endregion
    }
}
