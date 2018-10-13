using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace MVVM_Test1
{
    class ViewModel
    {
        public DelegateCommand CopyCmd { get; set; }
        public Model model { get; set; }

        public ViewModel()
        {
            this.model = new Model();
            this.CopyCmd = new DelegateCommand();
            this.CopyCmd.ExecuteCommand = new Action<object>(this.model.Copy);
        }
    }
}
