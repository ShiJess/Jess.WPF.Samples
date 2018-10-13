// Repair.cpp : 实现文件
//

#include "stdafx.h"
#include "360DEMO.h"
#include "Repair.h"
#include <stdlib.h>
#include <time.h>



// CRepair 对话框

IMPLEMENT_DYNAMIC(CRepair, CDialog)

CRepair::CRepair(CWnd* pParent /*=NULL*/)
	: CDialog(CRepair::IDD, pParent)
{
	m_pIDirectUI = NULL;
    m_pBtnOtpatient = NULL;
	m_pBtnRepair = NULL;
	m_pListView = NULL;
	m_pProgressBar = NULL;
	m_pBtnCancel = NULL;
	m_pBtnReScan = NULL;
	m_pStaticText = NULL;
	m_pStaticCount = NULL;
	m_pFormDown = NULL;
	m_pBtnRepairNow = NULL;
	m_iProgressBarPos = 0;
	m_iRepairCount = 0;
}

CRepair::~CRepair()
{
}

void CRepair::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CRepair, CDialog)
	ON_WM_CREATE()
	ON_MESSAGE(DUISM_LBUTTONUP,OnDUILButtonUp)
	ON_WM_SIZE()
	ON_WM_TIMER()
END_MESSAGE_MAP()


// CRepair 消息处理程序

int CRepair::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CDialog::OnCreate(lpCreateStruct) == -1)
		return -1;

	// TODO:  在此添加您专用的创建代码
	m_pIDirectUI = (IDirectUI*)theApp.m_pDUIRes->CreateDirectUI(_T("Repair"),(long)HandleToLong(GetSafeHwnd()));
	m_pBtnOtpatient = (ICmdButton*)m_pIDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("OtpatientBtn"),TRUE);
	m_pBtnRepair = (ICmdButton*)m_pIDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("RepairBtn"),TRUE);
	m_pUIFormRepair = (IUIFormObj*)m_pIDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("UIForm8"),TRUE);
	m_pProgressBar = (IDUIProgressbar*)m_pIDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("ProgressBar1"),TRUE);
	m_pBtnCancel = (ICmdButton*)m_pIDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("StopBtn"),TRUE);
	m_pBtnReScan =(ICmdButton*)m_pIDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("AginBtn"),TRUE);
	m_pStaticText = (IDUIStatic*)m_pIDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("Text78"),TRUE);
 	m_pListView = (IDUIListView*)m_pIDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("ListView2"),TRUE);
	m_pStaticCount = (IDUIStatic*)m_pIDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("Static127"),TRUE);
	m_pStaticRemind = (IDUIStatic*)m_pIDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("Text54-Copy"),TRUE);
	m_pFormDown = (IUIFormObj*)m_pIDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("UIForm39"),TRUE);
    m_pBtnRepairNow = (ICmdButton*)m_pIDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("Button24"),TRUE);
	m_pBtnRepairNow->EnableObject(false,false);
 	m_pTextStyle = (IDUITextStyle*)theApp.m_pDUIRes->GetResObject(DUIOBJTYPE_TEXTSTYLE,_T("Test"),NULL,FALSE);
 
 	m_pListView->InsertColumn(0,_T("类别"),100);
 	m_pListView->InsertColumn(1,_T("项目"),200);
 	m_pListView->InsertColumn(2,_T("修复建议"),100);
 	m_pListView->InsertColumn(3,_T("详情"),100);
 	m_pListView->InsertColumn(4,_T("操作"),100);
 	m_pListView->InsertColumn(5,_T(""),100);

	return 0;
}

LRESULT CRepair::OnDUILButtonUp(WPARAM wparam,LPARAM lparam)
{
 	IDUITVItem* pItem = (IDUITVItem*)m_pListView->GetFirstCheckItem();
 	if (pItem)
 	{
 		m_pBtnRepairNow->EnableObject(true,true);
 	}
 	else
 	{
 		m_pBtnRepairNow->EnableObject(false,true);
 	}
	IDUIControlBase*  pCtrol = (IDUIControlBase*)wparam;
    if (pCtrol == m_pBtnOtpatient)
    {
		if (m_Otpatient.GetSafeHwnd() == NULL)
		{
			m_Otpatient.Create(CPatient::IDD,GetDesktopWindow());
			m_Otpatient.ShowWindow(SW_SHOW);
		}
		else
		{
			m_Otpatient.DestroyWindow();
			m_Otpatient.Create(CPatient::IDD,GetDesktopWindow());
			m_Otpatient.ShowWindow(SW_SHOW);
		}
    }
	else if (pCtrol == m_pBtnRepair)
	{
         m_pUIFormRepair->SetVisible(true,true,false);
		 SetTimer(TIMER_REPAIR,TIMER_REPAIR_TIME,NULL);
	}
	else if (pCtrol == m_pBtnReScan)
	{
		m_pListView->DeleteAllItems();
		m_iProgressBarPos = 0;
		m_iRepairCount = 0;
		
		SetTimer(TIMER_REPAIR,TIMER_REPAIR_TIME,NULL);
	}
	else if (pCtrol == m_pBtnCancel)
	{
		KillTimer(TIMER_REPAIR);
	
		m_iProgressBarPos = 0;
		m_iRepairCount = 0;
		m_pStaticText->SetVisible(false,true,false);
		m_pStaticRemind->SetVisible(true,true,false);
		m_pProgressBar->SetVisible(false,true,false);
		m_pBtnCancel->SetVisible(false,true,false);
		m_pFormDown->SetVisible(true,true,false);

	}
	return TRUE;
}
void CRepair::OnTimer(UINT_PTR nIDEvent)
{
    m_pProgressBar->SetVisible(true,true,false);
	m_pBtnCancel->SetVisible(true,true,false);
	m_pStaticText->SetVisible(true,true,false);
	m_pStaticRemind->SetVisible(false,true,false);
	m_pFormDown->SetVisible(false,true,false);

	//设置滚动条效果
	time_t t;
	srand((unsigned)time(&t)); 
	m_iProgressBarPos += rand()%5;
	m_pProgressBar->SetPos(m_iProgressBarPos);
	if (m_iProgressBarPos > 100)
	{
		m_iProgressBarPos = 100;
		m_pProgressBar->SetPos(m_iProgressBarPos);
		m_pProgressBar->SetVisible(false,true,false);
		m_pStaticText->SetVisible(false,true,false);
		m_pBtnCancel->SetVisible(false,true,false);
		//m_pStaticRemind->SetText(_T("共发现 9 个可选修复项目，您可以自行选择是否修复。"));
		m_pStaticRemind->SetVisible(true,true,false);
		m_pFormDown->SetVisible(true,true,false);
		KillTimer(TIMER_REPAIR);
	}
	//////////////////设置扫描字幕效果
	m_iRepairCount++;
	if (m_iRepairCount%10 == 1)
	{
		m_pStaticText->SetText(_T("正在扫描：QQ电脑管家浏览器插件"));
	}
	else if (m_iRepairCount%10 == 2)
	{
		m_pStaticText->SetText(_T("正在扫描：被添加的系统自启动项：Desktop TipsStub Class"));
	}
	else if (m_iRepairCount%10 ==3)
	{
		m_pStaticText->SetText(_T("正在扫描：IE右键次大被添加项：有道搜索"));
	}
	else if (m_iRepairCount%10 == 4)
	{
		m_pStaticText->SetText(_T("正在扫描：被添加的Activex控件：Qzone音乐播放器控件"));
	}
	else if (m_iRepairCount%10 == 5)
	{
		m_pStaticText->SetText(_T("正在扫描：被添加的Activex控件：Adobe Flash控件"));
	}
	else if (m_iRepairCount%10 == 6)
	{
		m_pStaticText->SetText(_T("正在扫描：迅雷看看相关组件"));
	}
	else if (m_iRepairCount%10 == 7)
	{
		m_pStaticText->SetText(_T("正在扫描：360防火墙功能模块"));
	}
	else if (m_iRepairCount%10 == 8)
	{
		m_pStaticText->SetText(_T("正在扫描：微软办公软件相关控件"));
	}
	IDUITVItemGroup* pGroup = (IDUITVItemGroup*)m_pListView->AddGroup(101,_T("可修复的项目"));

	 ///////////////////设置列表字幕效果
	if (m_iRepairCount%2== 0)
	{
		IDUITVItem* pItem = (IDUITVItem*) pGroup->AppendItem(m_iRepairCount,_T(""));

		pItem->GetUnitItem(2)->SetAlignMode(UNITITEM_HORZ_LEFT, UNITITEM_VERT_CENTER);


		pItem->AppendItemText(0,_T("扫描插件"),_T(""),true);
		pItem->AppendItemText(1,_T("QQ电脑管家浏览器"),_T(""),true);

		pItem->AppendImage(2 ,_T("Res\\标志.png"), true);
		pItem->AppendItemText(2,_T("可以修复"),_T(""),true);
	
		
		pItem->GetUnitItem(3)->SetTextStyle(m_pTextStyle,DUILVI_STATE_NORMAL);
		pItem->GetUnitItem(3)->SetTextStyle(m_pTextStyle,DUILVI_STATE_HOT);
		pItem->GetUnitItem(3)->SetTextStyle(m_pTextStyle,DUILVI_STATE_SELECTED);
		pItem->GetUnitItem(4)->SetTextStyle(m_pTextStyle,DUILVI_STATE_NORMAL);
		pItem->GetUnitItem(4)->SetTextStyle(m_pTextStyle,DUILVI_STATE_HOT);
		pItem->GetUnitItem(4)->SetTextStyle(m_pTextStyle,DUILVI_STATE_SELECTED);	
		pItem->GetUnitItem(5)->SetTextStyle(m_pTextStyle,DUILVI_STATE_NORMAL);
		pItem->GetUnitItem(5)->SetTextStyle(m_pTextStyle,DUILVI_STATE_HOT);
		pItem->GetUnitItem(5)->SetTextStyle(m_pTextStyle,DUILVI_STATE_SELECTED);
		pItem->AppendItemText(3,_T("查看"),_T(""),true);
		pItem->AppendItemText(4,_T("直接删除"),_T(""),true);
		pItem->AppendItemText(5,_T("信任"),_T(""),true);
		pGroup->SetExpand(TRUE);
		m_pListView->ResizeThis();
		m_pListView->RefreshView();}
	CDialog::OnTimer(nIDEvent);
}
void CRepair::OnSize(UINT nType, int cx, int cy)
{
	CDialog::OnSize(nType,cx,cy);

}

void CRepair::OnCancel()
{

}
