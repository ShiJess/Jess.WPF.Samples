using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Windows.Input;

namespace WPF_MVVMSelfDelegateCommand
{
    /// <summary>
    /// 实现DelegateCommand
    /// </summary>
    class MyDelegateCommand : ICommand
    {
        /// <summary>
        /// 命令所需执行的事件
        /// </summary>
        public Action<object> ExecuteCommand { get; set; }
        /// <summary>
        /// 命令是否可用所执行的事件
        /// </summary>
        public Func<object, bool> CanExecuteCommand { get; set; }

        public MyDelegateCommand()
        {
        }

        public MyDelegateCommand(Action<object> execute, Func<object, bool> canexecute)
        {
            ExecuteCommand = execute;
            CanExecuteCommand = canexecute;
        }

        /// <summary>
        /// 命令可用性获取
        /// </summary>
        /// <param name="parameter"></param>
        /// <returns></returns>
        public bool CanExecute(object parameter)
        {
            return CanExecuteCommand(parameter);
        }

        public event EventHandler CanExecuteChanged
        {
            add { CommandManager.RequerySuggested += value; }
            remove { CommandManager.RequerySuggested -= value; }
        }

        /// <summary>
        /// 命令具体执行
        /// </summary>
        /// <param name="parameter"></param>
        public void Execute(object parameter)
        {
            ExecuteCommand(parameter);
        }
    }
}
