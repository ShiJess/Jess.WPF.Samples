// FillHole.cpp : 实现文件
//

#include "stdafx.h"
#include "360DEMO.h"
#include "FillHole.h"
#include <stdlib.h>
#include <time.h>

// CFillHole 对话框

IMPLEMENT_DYNAMIC(CFillHole, CDialog)

CFillHole::CFillHole(CWnd* pParent /*=NULL*/)
	: CDialog(CFillHole::IDD, pParent)
{
	m_pIDirectUI = NULL;
    m_pHeader = NULL;
	m_pFormLeft = NULL;
	m_pFormRight = NULL;
	m_pListView = NULL;
	m_pCheckExpend = NULL;
	//m_pProgressBar = NULL;
	m_pBtnReScan = NULL;
	m_pBtnFillHole = NULL;
	m_bBeginFillHole = true;
	m_pBtnExport = NULL;
	m_pStScanedText = NULL;
	m_pBtnIgnore = NULL;
	//m_pStScanCount = NULL;
	m_iProgressBarPos = 0;
	m_iRepairCount = 0;


}

CFillHole::~CFillHole()
{
}

void CFillHole::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CFillHole, CDialog)
	ON_WM_CREATE()
	ON_WM_SIZE()
	ON_MESSAGE(DUISM_LBUTTONUP,OnDUILButtonUp)
	ON_WM_TIMER()
END_MESSAGE_MAP()


// CFillHole 消息处理程序

int CFillHole::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CDialog::OnCreate(lpCreateStruct) == -1)
		return -1;

	// TODO:  在此添加您专用的创建代码
	m_pIDirectUI =(IDirectUI*) theApp.m_pDUIRes->CreateDirectUI(_T("FillHole"),(long)HandleToLong(GetSafeHwnd()));
	m_pFormLeft = (IUIFormObj*)m_pIDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("UIFormLeft"),TRUE);
	m_pFormRight= (IUIFormObj*)m_pIDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("RightFrom"),TRUE);
	m_pCheckMaxList = (IDUICheckBox*)m_pIDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("CheckBox2-Copy"),TRUE);
	m_pCheckExpend = (IDUICheckBox*)m_pIDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("CheckBox7"),TRUE);
	m_pBtnAllChose = (ICmdButton*)m_pIDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("BtnSel"),TRUE);
	m_pBtnAllChose->EnableObject(false,true);
	m_pBtnAllUnChose = (ICmdButton*)m_pIDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("BtnNoSel"),TRUE);
	m_pBtnAllUnChose->EnableObject(false,true);
	m_pBtnReScan = (ICmdButton*)m_pIDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("BtnFillHole2"),TRUE);
	m_pBtnFillHole = (ICmdButton*)m_pIDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("BtnFillHole"),TRUE);
	m_pBtnFillHole->EnableObject(FALSE,TRUE);
	m_pListView = (IDUIListView*)m_pIDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("ListView3"),TRUE);
	m_pBtnExport = (ICmdButton*)m_pIDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("BtnExport"),TRUE);
	m_pStScanedText = (IDUIStatic*)m_pIDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("Text31"),TRUE);
	m_pBtnIgnore = (ICmdButton*)m_pIDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("BtnFillHole1"),TRUE);
    m_pStScanCount = (IDUIStatic*)m_pIDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("Static173"),TRUE);

	m_pListView->InsertColumn(0,_T("类型"),100);
	m_pListView->InsertColumn(1,_T("补丁名称"),100);
	m_pListView->InsertColumn(2,_T("描述"),150);
	m_pListView->InsertColumn(3,_T("发布日期"),100);
	m_pListView->InsertColumn(4,_T("状态"),100);
	return 0;
}
LRESULT CFillHole::OnDUILButtonUp(WPARAM wparam, LPARAM lparam)
{

 	IDUITVItem* pCheckItem = m_pListView->GetFirstCheckItem();
 	if (pCheckItem)
 	{    
 		m_pBtnFillHole->EnableObject(TRUE,TRUE);
	}
	else
	{
		m_pBtnFillHole->EnableObject(FALSE,TRUE);
	}
	if (m_pRepairGroup->IsExpand() || m_pRepairGroup1->IsExpand())
	{
		m_pBtnAllChose->EnableObject(true,true);
		m_pBtnAllUnChose->EnableObject(true,true);
	}
	else
	{
		m_pBtnAllChose->EnableObject(false,true);
		m_pBtnAllUnChose->EnableObject(false,true);
	}

	IDUIControlBase* pCtrol = (IDUIControlBase*)wparam;
	if (pCtrol == m_pCheckMaxList)
	{
		//隐藏左边窗口
		DUICHECKBOX_VALUE evalue = m_pCheckMaxList->GetValue();
		if (evalue == DUICHECKBOX_CHECKED)
		{
 			IDUIPos* psleft = m_pFormLeft->GetPosition();
 			DUIPosition posleft = psleft->GetPosStruct();
 			posleft.horzPos.nRight_Bottom= 4;
 			psleft->SetPosStruct(posleft);
 			m_pFormLeft->SetPosition(psleft);
 			m_pIDirectUI->ResizeThis();
 			m_pIDirectUI->DirectDraw(TRUE);
		}
		//显示左边窗口
		else if (evalue == DUICHECKBOX_UNCHECKED)
		{
			IDUIPos* psleft = m_pFormLeft->GetPosition();;
			DUIPosition posleft = psleft->GetPosStruct();
			posleft.horzPos.nRight_Bottom= 281;
			psleft->SetPosStruct(posleft);
			m_pFormLeft->SetPosition(psleft);
			m_pIDirectUI->ResizeThis();
			m_pIDirectUI->DirectDraw(TRUE);
		}
	}
	//重新扫描按钮处理
	else if (pCtrol == m_pBtnReScan)
	{
		m_pListView->RemoveAllGroup();
		m_pRepairGroup = (IDUITVItemGroup*)m_pListView->AddGroup(101,_T("可选的高危漏洞补丁"));
		m_pRepairGroup1 = (IDUITVItemGroup*)m_pListView->AddGroup(102,_T("其他及功能性更新补丁"));
		m_pStScanCount->SetVisible(false,true,false);
		m_iProgressBarPos = 0;
		m_iRepairCount = 0;
		SetTimer(TIMER_FILLHOLE,TIMER_FILLHOLE_TIME,NULL);
	}
	else if (pCtrol == m_pBtnAllChose)
	{
		m_pBtnFillHole->EnableObject(true,true);
		int Count = m_pRepairGroup->GetCount();
		for (int i=1;i< Count+1;i++)
		{
            m_pRepairGroup->GetItem(i)->SetCheck(TRUE);
			m_pListView->RefreshView();
		}
		 Count = m_pRepairGroup1->GetCount();
		for (int i=1;i< Count+1;i++)
		{
			m_pRepairGroup1->GetItem(i)->SetCheck(TRUE);
			m_pListView->RefreshView();
		}
	}
	else if (pCtrol == m_pBtnAllUnChose)
	{
		m_pBtnFillHole->EnableObject(false,true);
		int Count = m_pRepairGroup->GetCount();
		for (int i=1;i< Count+1;i++)
		{
			m_pRepairGroup->GetItem(i)->SetCheck(false);
			m_pListView->RefreshView();
		}
		Count = m_pRepairGroup1->GetCount();
		for (int i=1;i< Count+1;i++)
		{
			m_pRepairGroup1->GetItem(i)->SetCheck(false);
			m_pListView->RefreshView();
		}
	}
	else if (pCtrol == m_pBtnFillHole)
	{
		IDUITVItem* pCheckItem = m_pListView->GetFirstCheckItem();
	 	while (pCheckItem)
	 	{    
			pCheckItem->GetUnitItem(4)->Reset();
			pCheckItem->AppendItemText(4,_T("正在修复……"),_T(""),true);
	 		pCheckItem = m_pListView->GetNextCheckItem(pCheckItem);
			m_pListView->RefreshView();
	 	}
	}
	else if (pCtrol == m_pBtnExport)
	{
		CFileDialog fill(true);
		fill.DoModal();
	}
	else if (pCtrol == m_pBtnIgnore)
	{
	

	}
	return TRUE;
}
void CFillHole::SetItem(IDUITVItem* pItem,wstring str1,wstring str2,wstring str3)
{
	IUIFormObj* pFormObj = (IUIFormObj*)pItem->GetCustomObj();
	IDUIStatic* pSta = (IDUIStatic*)pFormObj->GetObjectByCaption(DUIOBJTYPE_PLUGIN, _T("Static50"), FALSE);
	pSta->SetText(str1);
    pSta = (IDUIStatic*)pFormObj->GetObjectByCaption(DUIOBJTYPE_PLUGIN, _T("Static51"), FALSE);
	pSta->SetText(str2);
	pSta = (IDUIStatic*)pFormObj->GetObjectByCaption(DUIOBJTYPE_PLUGIN, _T("Static52"), FALSE);
	pSta->SetText(str3);
}

void CFillHole::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
if (nIDEvent == TIMER_FILLHOLE)
{
	m_pStScanedText->SetText(_T("正在扫描系统漏洞，请稍后……"));
	m_pBtnAllChose->SetVisible(false,true,false);
	m_pBtnAllUnChose->SetVisible(false,true,false);
	m_pBtnExport->SetVisible(false,true,false);
	m_pBtnFillHole->SetVisible(false,true,false);
	m_pBtnIgnore->SetVisible(false,true,false);
	 // 进度条效果
	time_t t;
	srand((unsigned)time(&t));
	m_iProgressBarPos += rand()%5;
	if (m_iProgressBarPos > 100)
	{
		m_iProgressBarPos = 100;
		m_pStScanedText->SetText(_T("扫描完成，在您的系统中共检测到      个漏洞，不存在任何需修复的高危漏洞。"));
		m_pBtnAllChose->SetVisible(true,true,false);
		m_pBtnAllUnChose->SetVisible(true,true,false);
		m_pBtnExport->SetVisible(true,true,false);
		m_pBtnFillHole->SetVisible(true,true,false);
		m_pBtnIgnore->SetVisible(true,true,false);
		m_pStScanCount->SetVisible(true,true,false);
		KillTimer(TIMER_FILLHOLE);
	}
	//列表添加效果
	m_iRepairCount++;
	{
		IDUITVItem* pItem1 = (IDUITVItem*) m_pRepairGroup->InsertItem(0,m_iRepairCount,_T(""));
		pItem1->AppendItemText(0,_T("重要"),_T(""),true);
		pItem1->AppendItemText(1,_T("KB333333"),_T(""),true);
		pItem1->AppendItemText(2,_T("Windows IE7浏览器安装程序"),_T(""),true);
		pItem1->AppendItemText(3,_T("2008-06-09"),_T(""),true);
		pItem1->AppendItemText(4,_T("未修复"),_T(""),true);
		
		IDUITVItem* pItem2= (IDUITVItem*) m_pRepairGroup1->InsertItem(0,m_iRepairCount,_T(""));
		pItem2->AppendItemText(0,_T("可选"),_T(""),true);
		pItem2->AppendItemText(1,_T("KB982316"),_T(""),true);
		pItem2->AppendItemText(2,_T("Window 安全更新程序"),_T(""),true);
		pItem2->AppendItemText(3,_T("2008-06-09"),_T(""),true);
		pItem2->AppendItemText(4,_T("未修复"),_T(""),true);
		
		m_pListView->ResizeThis();
		m_pListView->RefreshView();
	}
}
	CDialog::OnTimer(nIDEvent);
}

/////////////////////////////////////////////////////
//窗口尺寸发生变化，改变Column 间距
void CFillHole::OnSize(UINT nType, int cx, int cy)
{
	CDialog::OnSize(nType, cx, cy);
	if (m_pIDirectUI != NULL)
	{
	   if (this->GetParent()->IsZoomed())
	   {
		   m_pListView->GetColumn(2)->SetColumnWidth(750);
		   m_pListView->RefreshView();
	   }
	   else
	   {
		   m_pListView->GetColumn(2)->SetColumnWidth(150);
		   m_pListView ->RefreshView();
	   }
	}
}
//////////////////////////////////////
//主窗口点击修复漏洞按钮，调用该函数
void CFillHole::BeginFillHole()
{
	if (m_bBeginFillHole)
	{
		m_pRepairGroup = (IDUITVItemGroup*)m_pListView->AddGroup(101,_T("可选的高危漏洞补丁"));
		m_pRepairGroup1 = (IDUITVItemGroup*)m_pListView->AddGroup(102,_T("其他及功能性更新补丁"));
		SetTimer(TIMER_FILLHOLE,TIMER_FILLHOLE_TIME,NULL);
		m_bBeginFillHole = false;
	}
}
void CFillHole::OnOK()
{

}
void CFillHole::OnCancel()
{

}
