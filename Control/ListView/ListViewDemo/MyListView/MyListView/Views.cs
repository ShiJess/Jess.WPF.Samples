using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Windows.Controls;
using System.Windows;

namespace MyListView
{
 
    /// <summary>
    /// 样式1
    /// </summary>
    public class lvOneView : ViewBase
    {
        /// <summary>
        /// Gets the Default Style Key.
        /// </summary>
        protected override object DefaultStyleKey
        {
            get { return new ComponentResourceKey(GetType(), "lvOneView"); }
        }
        /// <summary>
        /// Gets Item Container Default Style Key.
        /// </summary>
        protected override object ItemContainerDefaultStyleKey
        {
            get { return new ComponentResourceKey(GetType(), "lvOneViewItem"); }
        }
    }

    /// <summary>
    /// 样式2
    /// </summary>
    public class lvTwoView : ViewBase
    {
        /// <summary>
        /// Gets the Default Style Key.
        /// </summary>
        protected override object DefaultStyleKey
        {
            get { return new ComponentResourceKey(GetType(), "lvTwoView"); }
        }
        /// <summary>
        /// Gets Item Container Default Style Key.
        /// </summary>
        protected override object ItemContainerDefaultStyleKey
        {
            get { return new ComponentResourceKey(GetType(), "lvTwoViewItem"); }
        }
    }
}
