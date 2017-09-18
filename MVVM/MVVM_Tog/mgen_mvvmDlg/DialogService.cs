using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace mgen_mvvmDlg
{
    static class DialogService
    {
        static Dictionary<Type, Type> dic;
        static DialogService()
        {
            dic = new Dictionary<Type, Type>();
        }

        public static void Register(Type viewModel, Type view)
        {
            dic[viewModel] = view;
        }

        public static bool TrySetData<T>(T viewModel, Action<T> setAction)
        {
            if (!dic.ContainsKey(viewModel.GetType()))
                throw new ArgumentException("ViewModel类型没有被注册");

            return TrySetData(dic[viewModel.GetType()], viewModel, setAction);
        }

        static bool TrySetData<T>(Type dlgType, T viewModel, Action<T> setAction)
        {
            if (!typeof(System.Windows.UIElement).IsAssignableFrom(dlgType))
                throw new ArgumentException("dlgType必须是UIElement");
            if (!typeof(ICloneable).IsAssignableFrom(viewModel.GetType()))
                throw new ArgumentException("viewModel必须继承ICloneable接口");

            T clone = (T)((ICloneable)viewModel).Clone();
            bool updated = false;
            var ui = (System.Windows.UIElement)Activator.CreateInstance(dlgType);
            var dlgChrome = new DialogChrome(ui, clone);
            dlgChrome.DataUpdated += (ss, ee) =>
                {
                    updated = true;
                    setAction(clone);
                };

            DialogHelper.ShowDialog(dlgChrome);

            return updated;
        }
    }
}
