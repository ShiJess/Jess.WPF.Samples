using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using GalaSoft.MvvmLight;
using GalaSoft.MvvmLight.Command;

namespace mgen_mvvmDlg
{
    class MainViewModel: ViewModelBase
    {
        #region User

        public const string UserPropertyName = "User";

        private UserViewModel _User = new UserViewModel();

        public UserViewModel User
        {
            get
            {
                return _User;
            }
            set
            {
                if (_User == value)
                {
                    return;
                }
                _User = value;
                RaisePropertyChanged(UserPropertyName);
            }
        }

        #endregion

        #region Message

        public const string MessagePropertyName = "Message";

        private string _Message = null;

        public string Message
        {
            get
            {
                return _Message;
            }
            set
            {
                if (_Message == value)
                {
                    return;
                }
                _Message = value;
                RaisePropertyChanged(MessagePropertyName);
            }
        }

        #endregion

        #region SetUserCommand

        private RelayCommand _SetUserCommand;

        public RelayCommand SetUserCommand
        {
            get
            {
                return _SetUserCommand ?? (_SetUserCommand = new RelayCommand(DoSetUser, CanSetUser));
            }
        }

        
        protected virtual void DoSetUser()
        {
            //主ViewModel中设置属性的Command执行
            //Message属性可以告诉界面用户是否取消了对话框
            if (DialogService.TrySetData(User, u => User = u))
                Message = "更新成功";
            else
                Message = "更新取消";
        }

        protected virtual bool CanSetUser()
        {
            return true;
        }

        #endregion
    }
}
