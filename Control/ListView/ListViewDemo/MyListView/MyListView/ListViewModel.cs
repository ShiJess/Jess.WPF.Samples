using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace MyListView
{
    public class lvOneModel : BaseVeiwModel
    {

    }
    public class lvTwoModel : BaseVeiwModel
    {

        private string otherName;
        /// <summary>
        /// 别名
        /// </summary>
        public string OtherName
        {
            get { return otherName; }
            set
            {
                if (otherName != value)
                {
                    otherName = value;
                    OnPropertyChanged("OtherName");
                }
            }
        }

        
    }
}
