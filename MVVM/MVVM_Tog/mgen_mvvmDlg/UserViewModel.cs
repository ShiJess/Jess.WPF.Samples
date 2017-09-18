using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using GalaSoft.MvvmLight;
using GalaSoft.MvvmLight.Command;

namespace mgen_mvvmDlg
{
    class UserViewModel : ViewModelBase, ICloneable
    {
        public UserViewModel()
        {
            Name = "Mgen";
        }

        #region Name

        public const string NamePropertyName = "Name";

        private string _Name = null;

        public string Name
        {
            get
            {
                return _Name;
            }
            set
            {
                if (_Name == value)
                {
                    return;
                }
                _Name = value;
                RaisePropertyChanged(NamePropertyName);
            }
        }

        #endregion

        #region OkCommand

        private RelayCommand _OkCommand;

        public RelayCommand OkCommand
        {
            get
            {
                return _OkCommand ?? (_OkCommand = new RelayCommand(DoOk, CanOk));
            }
        }

        protected virtual void DoOk()
        {
        }

        protected virtual bool CanOk()
        {
            return !String.IsNullOrWhiteSpace(Name);
        }

        #endregion

        public object Clone()
        {
            return MemberwiseClone();
        }
    }
}
