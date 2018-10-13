// ClearCard.cpp : 实现文件
//

#include "stdafx.h"
#include "360DEMO.h"
#include "ClearCard.h"


// CClearCard 对话框

IMPLEMENT_DYNAMIC(CClearCard, CDialog)

CClearCard::CClearCard(CWnd* pParent /*=NULL*/)
	: CDialog(CClearCard::IDD, pParent)
{
    m_pIDirectUI = NULL;
	m_pHeader =NULL;
	m_pProgressBar = NULL; 
	m_pBtnClearNow = NULL;
	m_pBtnRescan =NULL;
	m_pSaticIcon = NULL;
	//m_pScanIcon = NULL;
    m_pStaticRemind = NULL;
    m_pScanRemind = NULL;
	m_pBtnStart = NULL;
	m_ProgressBarpos = 0;
	m_bChangePos = false;
	m_bAddList = false;
	m_pSaftCompanyTemp = NULL;
	m_pUIFScoreTemp = NULL;
	m_pSuggestTemp = NULL;
	m_pOperateTemp = NULL;
	m_pStBtnRemind = NULL;
	m_pStaticIcon = NULL;
	

}

CClearCard::~CClearCard()
{
}

void CClearCard::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CClearCard, CDialog)
	ON_WM_CREATE()
	ON_WM_SIZE()
	ON_MESSAGE(DUISM_LBUTTONUP,OnDUILButtonUp)
	ON_WM_TIMER()
END_MESSAGE_MAP()


// CClearCard 消息处理程序

int CClearCard::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CDialog::OnCreate(lpCreateStruct) == -1)
		return -1;

	// TODO:  在此添加您专用的创建代码
	m_pIDirectUI =(IDirectUI*) theApp.m_pDUIRes->CreateDirectUI(_T("ClearCard"),(long)HandleToLong(GetSafeHwnd()));
	m_pListView = (IDUIListView*)m_pIDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("ListView2"),TRUE);
	//m_pHeader = (IDUIHeaderCtrl*)m_pIDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("HeaderCtrl3"),TRUE);
	m_pProgressBar =(IDUIProgressbar*)m_pIDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("ProgressBarClear"),TRUE);
	m_pBtnClearNow = (ICmdButton*)m_pIDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("Button3"),TRUE);
	m_pBtnRescan = (ICmdButton*)m_pIDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("Button4"),TRUE);
	m_pSaticIcon = (IDUIStatic*)m_pIDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("Text21"),TRUE);
	//m_pScanIcon = (IDUIStatic*)m_pIDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("Icon25-Copy"),TRUE);
	m_pStaticRemind =(IDUIStatic*)m_pIDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("Text22"),TRUE);
	m_pStaticScanItem = (IDUIStatic*)m_pIDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("Text78Scan"),TRUE);
	m_pBtnStop = (ICmdButton*)m_pIDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("StopBtn"),TRUE);
	m_pBtnReport = (ICmdButton*)m_pIDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("Text23"),TRUE);
	m_pBtnStart = (ICmdButton*)m_pIDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("ClearStarBtn"),TRUE);
	
	m_pUIFormTemp1 = (IUIFormObj*)m_pIDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("UIForm9"),TRUE);
	m_pUIFormTemp2 = (IUIFormObj*)m_pIDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("TempCopy"),TRUE);
    m_pSaftCompanyTemp = (IDUIStatic*)m_pIDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("StaticCompName"),TRUE);
    m_pUIFScoreTemp = (IUIFormObj*)m_pIDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("UIForm5"),TRUE);  
    m_pSuggestTemp =  (IDUIStatic*)m_pIDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("StaticSuggest"),TRUE); 
    m_pOperateTemp = (ICmdButton*)m_pIDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("Button7"),TRUE);  
	m_pStaticTemp = (IDUIStatic*)m_pIDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("Static20"),TRUE);  
	m_pStBtnRemind =(IDUIStatic*)m_pIDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("StaticRemind"),TRUE);  
	m_pStaticIcon = (IDUIStatic*)m_pIDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("Text21"),TRUE);  
   
    m_pListView->InsertColumn(0,_T("软件名称"),450);
  	m_pListView->InsertColumn(1,_T("所属公司"),100);
  	m_pListView->InsertColumn(2,_T("网友评分"),100);
  	m_pListView->InsertColumn(3,_T("清理建议"),100);
  	m_pListView->InsertColumn(4,_T("操作"),100);	
	m_pListView->SetColumnUserModule(0, m_pUIFormTemp1);
	m_pListView->SetColumnUserModule(1,m_pSaftCompanyTemp);
	m_pListView->SetColumnUserModule(2,m_pUIFScoreTemp);
	m_pListView->SetColumnUserModule(3,m_pSuggestTemp);
	m_pListView->SetColumnUserModule(4,m_pOperateTemp);
	return 0;
}
void CClearCard::AddList()
{
	for (int i = 0;i<10;i++)
	{
		CString strName;

		strName.Format(_T("Item%d"), i);
		int ItemCount = m_pListView->InsertItem(i,strName.GetBuffer(0),false);
		IDUIUnitItem* pDUIItem =(IDUIUnitItem*) m_pListView->GetUnitItem(i,0);
		IUIFormObj *pItemForm = (IUIFormObj*)pDUIItem->GetControlBase();
		pItemForm->SetName(strName.GetBuffer(0));

		IDUIStatic*  pStaticSaftName= (IDUIStatic*)pItemForm->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("StaticSoftName"),true);
		pStaticSaftName->SetText(_T("QQ电脑管家浏览器插件"));
		IDUIStatic*  pStaticsaftNote = (IDUIStatic*)pItemForm->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("StaticSoftNote"),true);
		pStaticsaftNote->SetText(_T("QQ医生的浏览器监控辅助插件；清理后QQ医生浏览器功能将会关闭"));
		pDUIItem = (IDUIUnitItem*)m_pListView->GetUnitItem(i,1);
		IDUIStatic* pStaticSaftCompany =(IDUIStatic*) pDUIItem->GetControlBase();
		pStaticSaftCompany->SetText(_T("腾讯"));
		m_pListView->RefreshView();
	}
}
void CClearCard::OnSize(UINT nType, int cx, int cy)
{
	CDialog::OnSize(nType, cx, cy);
	
  
	// TODO: 在此处添加消息处理程序代码
	if (m_pIDirectUI != NULL)
	{
 		if (this->GetParent()->IsZoomed())
 		{
 
 			m_pListView->GetColumn(0)->SetColumnWidth(800);
 		}
 
 		else 
 		{
 			m_pListView->GetColumn(0)->SetColumnWidth(450);
 
 		}
	}
	m_bChangePos = !m_bChangePos;
}
LRESULT CClearCard::OnDUILButtonUp(WPARAM wparam,LPARAM lparam)
{
	IDUIControlBase*  pCtrol = (IDUIControlBase*)wparam;
	if (pCtrol  == m_pBtnStart)
	{
        m_pStaticRemind->SetVisible(false,true,false);
		m_pStaticScanItem->SetVisible(true,true,false);
		m_pBtnStart->SetVisible(false,true,false);
		m_pStBtnRemind->SetVisible(false,true,false);
		m_pListView->SetVisible(true,true,false);
		SetTimer(TIMER_CLEAR,TIMER_CLEAR_TIME,NULL);
	}
	if (pCtrol == m_pBtnStop)
	 {
		 KillTimer(TIMER_CLEAR);
		 if (!m_bAddList)
		 {
			  AddList();
		 }
		 m_pBtnClearNow->EnableObject(true,true);
		 m_pProgressBar->SetVisible(false,true,false);
		 m_pStaticScanItem->SetText(_T("扫描被取消，共检测到  32  款插件，没有发现差评插件"));
		 m_pBtnStop->SetVisible(false,true,false);
		 m_pSaticIcon->SetVisible(true,true,false);
		 m_pBtnRescan->SetVisible(true,true,true);
		 m_pSaticIcon->SetVisible(true,true,false);
		 m_ProgressBarpos = 0;
	 }
	 else if (pCtrol == m_pBtnRescan)
	 {
		 SetTimer(TIMER_CLEAR,TIMER_CLEAR_TIME,NULL);
		 m_pListView->DeleteAllItems();
	 }
	 else if (pCtrol == m_pBtnReport)
	 {
		 CString strURL = _T("http://bbs,360.cn");
		 ShellExecute(NULL, _T("open"), strURL, NULL, NULL, SW_SHOW);
	 }
	 else if (pCtrol == m_pBtnClearNow)
	 {
		 int nClearCount = m_pListView->GetItemCount();
		 for(int i=nClearCount-1;i>=0;i--)
		 {
			 IDUIUnitItem* pDUIItem =(IDUIUnitItem*) m_pListView->GetUnitItem(i,0);
			 IUIFormObj *pItemForm = (IUIFormObj*)pDUIItem->GetControlBase();
			 IDUICheckBox* pCheckBoxDelete = (IDUICheckBox*)pItemForm->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("CheckBox5"),TRUE);
			 IDUICheckBox* pCheckBoxExpand = (IDUICheckBox*)pItemForm->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("CheckBox2"),TRUE);
			 if (pCheckBoxDelete && pCheckBoxDelete->GetValue() == DUICHECKBOX_CHECKED)
			 {
				 if (pCheckBoxExpand &&pCheckBoxExpand->GetValue() == DUICHECKBOX_CHECKED)
				 {
					 m_pListView->DeleteItem(i);
					 m_pListView->DeleteItem(i+1);
	             }
				  m_pListView->DeleteItem(i);
			 }
		 }
		 if (nClearCount ==m_pListView->GetItemCount())
		 {
			 AfxMessageBox(_T("请选择删除项目！"));
		 }
	 }
	 CString strCtrlName = pCtrol->GetName().c_str();
	if (strCtrlName == _T("CheckBox2"))
	{
		CString strName = pCtrol->GetParent()->GetName().c_str();
     	int nCount = m_pListView->GetItemCount();
	    for (int nLoop = 0; nLoop < nCount; ++nLoop)
	   {
	    	 IDUITVItem* pItem = (IDUITVItem* )m_pListView->GetAt(nLoop);
		    if (pItem)
		    {
				if (pItem->GetText().c_str() == strName)
			    {
					int i = pItem->GetIndex();
					IDUIUnitItem* pDUIItem=(IDUIUnitItem*)  pItem->GetUnitItem(0);
		
					IUIFormObj *pItemForm = (IUIFormObj*)pDUIItem->GetControlBase();
					IDUICheckBox*  pCheckItem = (IDUICheckBox*)pItemForm->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("CheckBox2"),true);
					DUICHECKBOX_VALUE evalue = pCheckItem->GetValue();
					if (evalue == DUICHECKBOX_CHECKED)
					{
						m_pListView->SetColumnUserModule(0,m_pUIFormTemp2);
						m_pListView->SetColumnUserModule(1,m_pStaticTemp);
						m_pListView->SetColumnUserModule(2,m_pStaticTemp);
						m_pListView->SetColumnUserModule(3,m_pStaticTemp);
						m_pListView->SetColumnUserModule(4,m_pStaticTemp);
						m_pListView->EnableRedraw(FALSE);
						m_pListView->InsertItem(i + 1, _T("Temp"), FALSE);
						m_pListView->InsertItem(i + 1, _T("Temp"), FALSE);
						m_pListView->SetColumnUserModule(0, m_pUIFormTemp1);
						m_pListView->SetColumnUserModule(1,m_pSaftCompanyTemp);
						m_pListView->SetColumnUserModule(2,m_pUIFScoreTemp);
						m_pListView->SetColumnUserModule(3,m_pSuggestTemp);
						m_pListView->SetColumnUserModule(4,m_pOperateTemp);
						m_pListView->EnableRedraw(TRUE);
						m_pListView->RefreshView();
					}
					 else if (evalue == DUICHECKBOX_UNCHECKED)
					 {
						 m_pListView->DeleteItem(i+1);
						 m_pListView->DeleteItem(i+1);
					 }
				}
			}
		}
	}
	return true;
}
void CClearCard::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	if (nIDEvent == TIMER_CLEAR)
	{
		m_bAddList = false;
		m_pProgressBar->SetVisible(true,true,true);
	    m_pBtnClearNow->SetVisible(true,true,false);
		m_pBtnClearNow->EnableObject(false,true);
		m_pSaticIcon->SetVisible(true,true,true);
		m_pBtnStop->SetVisible(true,true,false);
		m_pStaticIcon->SetVisible(false,true,false);
		static int ItemCount = 0;
		ItemCount++;
		if (ItemCount%10 == 1)
		{
			m_pStaticScanItem->SetText(_T("正在扫描：QQ电脑管家浏览器插件"));
		}
		else if (ItemCount%10 == 2)
		{
			m_pStaticScanItem->SetText(_T("正在扫描：被添加的系统自启动项：Desktop TipsStub Class"));
		}
		else if (ItemCount%10 ==3)
		{
			m_pStaticScanItem->SetText(_T("正在扫描：IE右键次大被添加项：有道搜索"));
		}
		else if (ItemCount%10 == 4)
		{
			m_pStaticScanItem->SetText(_T("正在扫描：被添加的Activex控件：Qzone音乐播放器控件"));
		}
		else if (ItemCount%10 == 5)
		{
			m_pStaticScanItem->SetText(_T("正在扫描：被添加的Activex控件：Adobe Flash控件"));
		}
		else if (ItemCount%10 == 6)
		{
			m_pStaticScanItem->SetText(_T("正在扫描：迅雷看看相关组件"));
		}
		else if (ItemCount%10 == 7)
		{
			m_pStaticScanItem->SetText(_T("正在扫描：360防火墙功能模块"));
		}
		else if (ItemCount%10 == 8)
		{
			m_pStaticScanItem->SetText(_T("正在扫描：微软办公软件相关控件"));
		}
		if (ItemCount%30 == 0)
		{
			AddList();
			m_bAddList = true;
		}
		static int CheckItem = 0;
		static int IssueItem = 0;
		time_t t;
		srand((unsigned)time(&t));
		CheckItem = CheckItem + rand()%30;
		CString str;
		str.Format(_T("%d"),CheckItem);
		m_ProgressBarpos += rand()%4;
		if (m_ProgressBarpos<= 100)
		{
			m_pProgressBar->SetPos(m_ProgressBarpos);	
		}
		else if (m_ProgressBarpos>=100)
		{
			m_pProgressBar->SetPos(100);
			if (m_pProgressBar->GetPos() == 100)
			{
				m_pBtnClearNow->EnableObject(true,true);
				m_pProgressBar->SetVisible(false,true,false);
				m_pBtnStop->SetVisible(false,true,false);
				m_pSaticIcon->SetVisible(true,true,false);
                m_pStaticScanItem->SetText(_T("扫描完成，共检测到  32  款插件，没有发现差评插件"));
			    m_pBtnRescan->SetVisible(true,true,true);
				m_pSaticIcon->SetVisible(true,true,false);
				m_ProgressBarpos = 0;
			}
			KillTimer(TIMER_CLEAR);
		}

	}
	CDialog::OnTimer(nIDEvent);
}
void CClearCard::OnOK()
{
	//重载系统的ONOK消息
}

void CClearCard::OnCancel()
{

}
