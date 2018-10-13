// CputerClear.cpp : 实现文件
//

#include "stdafx.h"
#include "360DEMO.h"
#include "CputerClear.h"


// CCputerClear 对话框

IMPLEMENT_DYNAMIC(CCputerClear, CDialog)

CCputerClear::CCputerClear(CWnd* pParent /*=NULL*/)
	: CDialog(CCputerClear::IDD, pParent)
{
	m_pBtnStartClear = NULL;
	m_pListView = NULL;
	m_pBtnSel = NULL;
	m_pBtnNoSel = NULL;
	m_pBtnPart = NULL;
	m_pBtnBegainScan = NULL;
	m_pBtnCancel = NULL;
	m_pStaticRemind1 = NULL;
	m_pStaticRemind2 = NULL;
	m_pBtnRescan = NULL;
	m_iItemHight = 0;
	m_nProgressBarPos = 0;
	m_nShowCount = 0;
	m_nItemCount = -1;
	m_pSScanItem = NULL;
}

CCputerClear::~CCputerClear()
{
}

void CCputerClear::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CCputerClear, CDialog)
	ON_WM_CREATE()
	ON_WM_TIMER()
	ON_MESSAGE(DUISM_LBUTTONUP,OnDUILButtonUp)
END_MESSAGE_MAP()


// CCputerClear 消息处理程序

int CCputerClear::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CDialog::OnCreate(lpCreateStruct) == -1)
		return -1;
	// TODO:  在此添加您专用的创建代码
	
	m_pIDirectUI = (IDirectUI*)theApp.m_pDUIRes->CreateDirectUI(_T("ComputerClear"),(long)HandleToLong(GetSafeHwnd()));
    m_pBtnStartClear = (ICmdButton*)m_pIDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("StartBtn"),TRUE);
	m_pListView = (IDUIListView*)m_pIDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("ListView4"),TRUE);
	m_pBtnSel = (ICmdButton*)m_pIDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("BtnSel"),TRUE);
	m_pBtnNoSel = (ICmdButton*)m_pIDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("BtnNoSel"),TRUE);
	m_pBtnPart = (ICmdButton*)m_pIDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("BtnExport"),TRUE);
	m_pBtnCancel = (ICmdButton*)m_pIDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("CancelBtn"),TRUE);
    m_pBtnBegainScan = (ICmdButton*)m_pIDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("StartBtn"),TRUE);
	m_pProgreesBar = (IDUIProgressbar*)m_pIDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("ProgressBar3"),TRUE);
	m_pStaticRemind1 = (IDUIStatic*)m_pIDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("Text41"),TRUE);
	m_pStaticRemind2 = (IDUIStatic*)m_pIDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("Text42"),TRUE);
	m_pBtnRescan = (ICmdButton*)m_pIDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("AginBtn"),TRUE);
	m_pSScanItem = (IDUIStatic*)m_pIDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("Static71"),TRUE);
    AddList();
	return 0;
}
//添加列表
void CCputerClear::AddList( )
{
	int ItemCount;
	ItemCount = m_pListView->InsertItem(0,_T("1"),false);
	IDUITVItem* pItem = (IDUITVItem*)m_pListView->GetAt(ItemCount);
	setItem(pItem,_T("windows系统垃圾文件"),_T("定期清理系统中的垃圾文件，让系统运行更流畅"),true,true);
	Clone(pItem,_T("无效的快捷方式"),1);
	Clone(pItem,_T("缩略图转存文件"),2);
	Clone(pItem,_T("内存转储文件"),3);
	Clone(pItem,_T("Windows错误报告"),4);
	Clone(pItem,_T("系统自动更新时留下的补丁"),5);
	Clone(pItem,_T("系统打补丁时留下的卸载信息"),6);
	Clone(pItem,_T("Windows预读取文件"),7);
	Clone(pItem,_T("已下载的程序文件"),8);
	Clone(pItem,_T("日志文件"),9);
	Clone(pItem,_T("清理回收站"),10);
	Clone(pItem,_T("清理本地磁盘上指定类型的垃圾文件"),11);
	pItem->SetHeight(40+m_iItemHight,false);
	m_vecItemHight.push_back(m_iItemHight);
    
	ItemCount = m_pListView->InsertItem(1,_T("2"),false);
	pItem = (IDUITVItem*)m_pListView->GetAt(ItemCount);
	setItem(pItem,_T("windows上网浏览产生的垃圾文件"),_T("清理上网浏览时产生的垃圾文件，可以加快上网速度"),true,true);
	Clone(pItem,_T("IE浏览器缓存文件"),1);
	Clone(pItem,_T("Chrome浏览器缓存文件"),2);
	Clone(pItem,_T("Firefox浏览器缓存文件"),3);
	Clone(pItem,_T("Opera浏览器缓存文件"),4);
	pItem->SetHeight(40+m_iItemHight,false);
	m_vecItemHight.push_back(m_iItemHight);

	ItemCount = m_pListView->InsertItem(2,_T("3"),false);
	pItem = (IDUITVItem*)m_pListView->GetAt(ItemCount);
	setItem(pItem,_T("windows注册表垃圾文件"),_T("清理无用的注册表键值，优化注册表结构，提高系统性能"),true,true);
	Clone(pItem,_T("冗余的动态链接库"),1);
	Clone(pItem,_T("无效的软件"),2);
	Clone(pItem,_T("无效的安装程序"),3);
	Clone(pItem,_T("无效的卸载程序"),4);
	Clone(pItem,_T("无效的帮助"),5);
	pItem->SetHeight(40+m_iItemHight,false);
	m_vecItemHight.push_back(m_iItemHight);

	ItemCount = m_pListView->InsertItem(3,_T("4"),false);
	pItem = (IDUITVItem*)m_pListView->GetAt(ItemCount);
	setItem(pItem,_T("windows应用程序垃圾文件"),_T("清理第三方软件产生的垃圾文件，节约磁盘空间"),true,true);
	Clone(pItem,_T("Office安装文件"),1);
	pItem->SetHeight(40+m_iItemHight,false);
	m_vecItemHight.push_back(m_iItemHight);
    m_pListView->RefreshView();
}
//主选项的修改
void CCputerClear::setItem(IDUITVItem* pItem,wstring str1,wstring str2,BOOL bCheckIcon,BOOL BShow)
{
	IUIFormObj* pFormObj = (IUIFormObj*) pItem->GetCustomObj();
	IDUICheckBox* pStaCheck = (IDUICheckBox*)pFormObj->GetObjectByCaption(DUIOBJTYPE_PLUGIN, _T("IconCheckBox"), TRUE);
	if (bCheckIcon)
	{
		pStaCheck->SetValue(DUICHECKBOX_CHECKED);
	}
	IDUIStatic* pStaStatic = (IDUIStatic*)pFormObj->GetObjectByCaption(DUIOBJTYPE_PLUGIN, _T("Text89"), TRUE);
	pStaStatic->SetText(str1);
	pStaStatic = (IDUIStatic*)pFormObj->GetObjectByCaption(DUIOBJTYPE_PLUGIN, _T("Text90"), TRUE);
	pStaStatic->SetText(str2);
	pStaCheck =(IDUICheckBox*) pFormObj->GetObjectByCaption(DUIOBJTYPE_PLUGIN, _T("CheckBox6"), TRUE);
}
LRESULT CCputerClear::OnDUILButtonUp(WPARAM wparam,LPARAM lparam)
{
	IDUIControlBase* pCtrol = (IDUIControlBase*)wparam;
	//开始扫描
	if (pCtrol == (IDUIControlBase*)m_pBtnBegainScan)
	{
		m_vecCloneCheckBox.clear();
		m_pListView->DeleteAllItems();
		m_pBtnBegainScan->SetVisible(false,true,false);
		m_pBtnCancel->SetVisible(true,true,false);
		SetTimer(TIMER_SCAN,TIMER_CLEAR_SCAN_TIME,NULL);
	}
	//取消扫描
	else if (pCtrol == (IDUIControlBase*)m_pBtnCancel)
	{
		m_nProgressBarPos = 0;
		m_pProgreesBar->SetVisible(false,true,false);
		m_nItemCount = -1;
		m_nShowCount = 0;
		m_pSScanItem->SetVisible(false,true,false);
		m_pStaticRemind1->SetText(_T("扫描已完成，立即清理可帮您节省33.66MB硬盘空间。"));
		m_pStaticRemind1->SetVisible(true,true,false);
		m_pStaticRemind1->SetText(_T("共扫描出468个垃圾文件"));
		m_pStaticRemind2->SetVisible(true,true,false);
		m_pBtnCancel->SetVisible(false,true,false);
		m_pBtnRescan->SetVisible(true,false,true);
		KillTimer(TIMER_SCAN);
	}
	else if (pCtrol == (IDUIControlBase*)m_pBtnRescan)
	{
		m_vecCloneCheckBox.clear();
		m_pListView->DeleteAllItems();
		m_pBtnBegainScan->SetVisible(false,true,false);
		m_pBtnCancel->SetVisible(true,true,false);
		m_pBtnRescan->SetVisible(false,true,false);
		SetTimer(TIMER_SCAN,TIMER_CLEAR_SCAN_TIME,NULL);

	}
	//全选按钮
	else if (pCtrol == (IDUIControlBase*)m_pBtnSel)
	{
		vector<IDUICheckBox*>::iterator it = m_vecCloneCheckBox.begin();
		for (; it != m_vecCloneCheckBox.end(); ++it)
		{
		   IDUICheckBox* pBox = *it;
		   pBox->SetValue(DUICHECKBOX_CHECKED);
		}
	}
	//全不选按钮
	else if (pCtrol == (IDUIControlBase*)m_pBtnNoSel)
	{
		vector<IDUICheckBox*>::iterator it = m_vecCloneCheckBox.begin();
		for (; it != m_vecCloneCheckBox.end(); ++it)
		{
			IDUICheckBox* pBox = *it;
			pBox->SetValue(DUICHECKBOX_UNCHECKED);
		}
	}
	//推荐选择按钮
	else if (pCtrol == (IDUIControlBase*)m_pBtnPart)
	{
		vector<IDUICheckBox*>::iterator it = m_vecCloneCheckBox.begin();
		for (; it<m_vecCloneCheckBox.end();)
		{
			
			IDUICheckBox* pBox = *it++;
			pBox->SetValue(DUICHECKBOX_UNCHECKED);
			if (it<m_vecCloneCheckBox.end())
			{
				IDUICheckBox* pBox1 = *(it++);
				pBox1->SetValue(DUICHECKBOX_CHECKED);
			}
		}
	}
	//主选项展开
	CString strCtrlName = pCtrol->GetName().c_str();
	if (strCtrlName == _T("CheckBox6"))
	{
		CString strName = pCtrol->GetParent()->GetName().c_str();//在创建时，已经将Item的name存储到checkbox中
		int nCount = m_pListView->GetItemCount();
		for (int nLoop = 0; nLoop < nCount; ++nLoop)
		{
			IDUITVItem* pItem = (IDUITVItem* )m_pListView->GetAt(nLoop);
			if (pItem)
			{
				if (pItem->GetText().c_str() == strName)
				{
					int i = pItem->GetIndex();
					IUIFormObj* pItemForm = (IUIFormObj*) pItem->GetCustomObj();
					IDUICheckBox*  pCheckItem = (IDUICheckBox*)pItemForm->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("CheckBox6"),true);
					DUICHECKBOX_VALUE evalue = pCheckItem->GetValue();
					if (evalue == DUICHECKBOX_CHECKED)
					{
					
						pItem->SetHeight(40, TRUE);
						m_pListView->RefreshView();

					}
					else if (evalue == DUICHECKBOX_UNCHECKED)
					{
						for (int i=0;i<4;i++)
						{
							if (pItem->GetIndex() == i)
							{
							   pItem->SetHeight(40+m_vecItemHight[i], TRUE);
							   m_pListView->RefreshView();
							}
					
						}
					}
				}
			}
		}
	}

	return true;
}
//子选项的克隆
void CCputerClear::Clone(IDUITVItem* pItem, wstring str,int count)
{
	IUIFormObj* pUIForm = (IUIFormObj*)pItem->GetCustomObj();
	IDUIStatic* pText = (IDUIStatic*)pUIForm->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("Static93"),TRUE);
	IDUICheckBox* pIcon = (IDUICheckBox*)pUIForm->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("IconCheckBox1"),TRUE);
	IDUIStatic* pNewText =(IDUIStatic*) pText->Clone(pText->GetParent()); //克隆静态文本
	IDUICheckBox* pNewIcon = (IDUICheckBox*)pIcon->Clone(pIcon->GetParent());//克隆复选框
	m_vecCloneCheckBox.push_back(pNewIcon);
	// 调整每个对象的位置
	IDUIPos*  psText = pNewText->GetPosition();
	IDUIPos*  psIcon = pNewIcon->GetPosition();
	psText->top = psText->top+(count-1)*psText->height;
	pNewText->SetPosition(psText);
	pNewText->SetText(str);
	psIcon->top = psIcon->top+(count-1)*psText->height;
	pNewIcon->SetPosition(psIcon);
	//调整每个Item的高度
	m_iItemHight =(1+count)*psText->height;

}
void CCputerClear::OnTimer(UINT_PTR nIDEvent)
{
	m_pStaticRemind1->SetVisible(false,true,false);
	m_pStaticRemind2->SetVisible(false,true,false);

    m_nProgressBarPos =m_nProgressBarPos+rand()%5;
	m_pProgreesBar->SetVisible(true,false,false);
	m_pProgreesBar->SetPos(m_nProgressBarPos);
	m_pSScanItem->SetVisible(true,true,false);

	static int ItemCount = 0;
	ItemCount++;
	if (ItemCount%10 == 1)
	{
		m_pSScanItem->SetText(_T("正在扫描：QQ电脑管家浏览器插件"));
	}
	else if (ItemCount%10 == 2)
	{
		m_pSScanItem->SetText(_T("正在扫描：被添加的系统自启动项：Desktop TipsStub Class"));
	}
	else if (ItemCount%10 ==3)
	{
		m_pSScanItem->SetText(_T("正在扫描：IE右键次大被添加项：有道搜索"));
	}
	else if (ItemCount%10 == 4)
	{
		m_pSScanItem->SetText(_T("正在扫描：被添加的Activex控件：Qzone音乐播放器控件"));
	}
	else if (ItemCount%10 == 5)
	{
		m_pSScanItem->SetText(_T("正在扫描：被添加的Activex控件：Adobe Flash控件"));
	}
	else if (ItemCount%10 == 6)
	{
		m_pSScanItem->SetText(_T("正在扫描：迅雷看看相关组件"));
	}
	else if (ItemCount%10 == 7)
	{
		m_pSScanItem->SetText(_T("正在扫描：360防火墙功能模块"));
	}
	else if (ItemCount%10 == 8)
	{
		m_pSScanItem->SetText(_T("正在扫描：微软办公软件相关控件"));
	}
	////添加ListView动态效果
	if (m_nItemCount == -1)
   {
	  m_nItemCount = m_pListView->InsertItem(0,_T("1"),false);
   }
	m_nShowCount++;
	IDUITVItem* pItem = (IDUITVItem*)m_pListView->GetAt(m_nItemCount);
    switch(m_nShowCount)
	{
		m_pListView->RefreshView();
        case 1:
			setItem(pItem,_T("windows系统垃圾文件"),_T("定期清理系统中的垃圾文件，让系统运行更流畅"),true,true);
			break;
		case 2:
			Clone(pItem,_T("无效的快捷方式"),1);
		
			break;
		case 3:
			Clone(pItem,_T("缩略图转存文件"),2);
			break;
		case 4:
			Clone(pItem,_T("内存转储文件"),3);
			break;
		case 6:
			Clone(pItem,_T("Windows错误报告"),4);
			break;
		case 8:
			Clone(pItem,_T("系统自动更新时留下的补丁"),5);
			break;
		case 10:
			Clone(pItem,_T("系统打补丁时留下的卸载信息"),6);
			break;
		case 12:
			Clone(pItem,_T("Windows预读取文件"),7);
			break;
		case 15:
			Clone(pItem,_T("已下载的程序文件"),8);
			break;
		case 17:
			Clone(pItem,_T("日志文件"),9);
			break;
		case 20:
			Clone(pItem,_T("清理回收站"),10);
			break;
		case 22:
			Clone(pItem,_T("清理本地磁盘上指定类型的垃圾文件"),11);
			break;
		case 23:
			pItem->SetHeight(40+m_iItemHight,false);
			m_vecItemHight.push_back(m_iItemHight);
			break;
		case 24:
			m_nItemCount = m_pListView->InsertItem(1,_T("2"),false);
			pItem = (IDUITVItem*)m_pListView->GetAt(m_nItemCount);
			setItem(pItem,_T("windows上网浏览产生的垃圾文件"),_T("清理上网浏览时产生的垃圾文件，可以加快上网速度"),true,true);
			break;
		case 26:
			Clone(pItem,_T("IE浏览器缓存文件"),1);
			break;
		case 28:
			Clone(pItem,_T("Chrome浏览器缓存文件"),2);
			break;
		case 33:
			Clone(pItem,_T("Firefox浏览器缓存文件"),3);
			break;
		case 37:
			Clone(pItem,_T("Opera浏览器缓存文件"),4);
			pItem->SetHeight(40+m_iItemHight,false);
			m_vecItemHight.push_back(m_iItemHight);
			break;
		case 40:
			m_nItemCount = m_pListView->InsertItem(2,_T("3"),false);
			pItem = (IDUITVItem*)m_pListView->GetAt(m_nItemCount);
			setItem(pItem,_T("windows注册表垃圾文件"),_T("清理无用的注册表键值，优化注册表结构，提高系统性能"),true,true);
			break;
		case 50:
			Clone(pItem,_T("冗余的动态链接库"),1);
			Clone(pItem,_T("无效的软件"),2);
			Clone(pItem,_T("无效的安装程序"),3);
			Clone(pItem,_T("无效的卸载程序"),4);
			Clone(pItem,_T("无效的帮助"),5);
			pItem->SetHeight(40+m_iItemHight,false);
			m_vecItemHight.push_back(m_iItemHight);
			break;
		case 58:
			m_nItemCount = m_pListView->InsertItem(3,_T("4"),false);
			pItem = (IDUITVItem*)m_pListView->GetAt(m_nItemCount);
			setItem(pItem,_T("windows应用程序垃圾文件"),_T("清理第三方软件产生的垃圾文件，节约磁盘空间"),true,true);
			Clone(pItem,_T("Office安装文件"),1);
			pItem->SetHeight(40+m_iItemHight,false);
			m_vecItemHight.push_back(m_iItemHight);
			break;
   }
   m_pListView->RefreshView();
   if (m_nProgressBarPos>100)
	{
		
		m_pProgreesBar->SetPos(100);
		m_nProgressBarPos = 0;
		m_pSScanItem->SetVisible(false,true,false);
		m_pProgreesBar->SetVisible(false,true,false);
		m_pStaticRemind1->SetText(_T("扫描已完成，立即清理可帮您节省33.66MB硬盘空间。"));
		m_pStaticRemind1->SetVisible(true,true,false);
		m_pStaticRemind1->SetText(_T("共扫描出468个垃圾文件"));
		m_pStaticRemind2->SetVisible(true,true,false);
		m_pBtnCancel->SetVisible(false,true,false);
		m_pBtnRescan->SetVisible(true,false,true);
		m_nItemCount = -1;
		m_nShowCount = 0;

		KillTimer(TIMER_SCAN);
   }
CDialog::OnTimer(nIDEvent);
}
void CCputerClear::OnOK()
{

}
void CCputerClear::OnCancel()
{

}
