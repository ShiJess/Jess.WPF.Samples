using Microsoft.Practices.Prism.Commands;
using Microsoft.Practices.Prism.ViewModel;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Windows.Input;

namespace WPF_MVVM_PrismBasic
{
    class TestViewModel : NotificationObject
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
                RaisePropertyChanged(()=>TestStr);
            }
        }

        /// <summary>
        /// 测试命令
        /// </summary>
        public ICommand TestCommand { get; set; }

        /// <summary>
        /// 测试带参数的命令
        /// </summary>
        public ICommand TestParameterCommand { get; set; }


        public TestViewModel()
        {
            TestCommand = new DelegateCommand(Test,CanTest);

            TestParameterCommand = new DelegateCommand<string>(TestParameter);
        }

        int i = 0;
        /// <summary>
        /// testcommand执行的方法
        /// </summary>
        private void Test()
        {
            i++;
            TestStr = i.ToString();
        }
        /// <summary>
        /// testcommand是否可用
        /// </summary>
        /// <returns></returns>
        private bool CanTest()
        {
            return true;
        }

        private void TestParameter(string para)
        {
            TestStr = para + "para";
        }
    }
}
