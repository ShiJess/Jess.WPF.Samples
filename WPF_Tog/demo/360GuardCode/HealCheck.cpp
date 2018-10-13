// HealCheck.cpp : 实现文件
//

#include "stdafx.h"
#include "360DEMO.h"
#include "HealCheck.h"
#include <stdlib.h>
#include <time.h>


// CHealCheck 对话框

IMPLEMENT_DYNAMIC(CHealCheck, CDialog)

CHealCheck::CHealCheck(CWnd* pParent /*=NULL*/)
	: CDialog(CHealCheck::IDD, pParent)
	, m_bIsExpand(false)
{
	m_pDirectUI = NULL;
	m_pBtnStart = NULL;
	m_pCheckForm = NULL;
	m_pPreCheckForm = NULL;
	m_pProgressBarCheck = NULL;
	m_pStaticIssueCount = NULL;
	m_pStaticItemCount = NULL;	
	m_pstaticPreScor = NULL;
	m_pstaticScore= NULL;
	m_pstaticPreRemind = NULL; 
	m_pstaticNewRemind = NULL;
	m_pListVist = NULL;
	m_pBtnGhost = NULL;
	m_pStaticCheckState = NULL;
	m_pstaticNewScore = NULL;
	m_pBtnRecheck = NULL;
	m_pScaningCount = NULL;
	m_pScaningItem = NULL;
	m_pItmeStyle = NULL;
	m_pStaticStyle = NULL;
	m_iProgressBarPos = 0;
	m_nCheckItemCount = 0;
	m_iIssueItemcount = 0;
	m_nNewScore = 100;
	m_nSafeCount = 0;
	m_bGhost = false;
	
}

CHealCheck::~CHealCheck()
{
}

void CHealCheck::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CHealCheck, CDialog)
	ON_WM_CREATE()
	ON_MESSAGE(DUISM_LBUTTONUP,OnDUILButtonUP)
	ON_WM_TIMER()
	ON_WM_SIZE()
END_MESSAGE_MAP()
// CHealCheck 消息处理程序

int CHealCheck::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CDialog::OnCreate(lpCreateStruct) == -1)
		return -1;
    // TODO:  在此添加您专用的创建代码
	m_pDirectUI = (IDirectUI*)theApp.m_pDUIRes->CreateDirectUI(_T("HealCheck"),(long)HandleToLong(GetSafeHwnd()));
	m_pPreCheckForm = (IUIFormObj*)m_pDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("UIForm5"),TRUE);
	m_pCheckForm = (IUIFormObj*)m_pDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("TestForm"),TRUE);
	m_pBtnStart = (ICmdButton*)m_pDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("MustBtn"),TRUE);
	m_pProgressBarCheck = (IDUIProgressbar*)m_pDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("ProgressBar2"),TRUE);
	m_pStaticItemCount = (IDUIStatic*)m_pDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("Static47"),TRUE);
	m_pStaticIssueCount = (IDUIStatic*)m_pDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("Static48"),TRUE);
	m_pstaticScore = (IDUIStatic*)m_pDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("Text91"),TRUE);
	m_pstaticNewRemind = (IDUIStatic*)m_pDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("Text93"),TRUE);
	m_pListVist = (IDUIListView*)m_pDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("HealListView"),TRUE);
	m_pBtnGhost = (ICmdButton*)m_pDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("Ghost"),TRUE);
	m_pStaticCheckState = (IDUIStatic*)m_pDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("Text92"),TRUE);
	m_pstaticNewScore = (IDUIStatic*)m_pDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("Static20"),TRUE);
	m_pBtnRecheck = (ICmdButton*)m_pDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("Text94"),TRUE);
	m_pBtnCancel = (ICmdButton*)m_pDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("Button63"),TRUE);
	m_pBtnServe = (ICmdButton*)m_pDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("TextBtn3"),TRUE);
	m_pScaningText = (IDUIStatic*)m_pDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("Text93-Copy"),TRUE);
	m_pScaningCount =  (IDUIStatic*)m_pDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("StaticCount"),TRUE);
	m_pScaningItem =  (IDUIStatic*)m_pDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("Static25"),TRUE);
	//m_pItmeStyle = (IDUITextStyle*)m_pDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("FillHoleBtnPress"),TRUE);
	m_pItmeStyle = (IDUITextStyle*)theApp.m_pDUIRes->GetResObject(DUIOBJTYPE_TEXTSTYLE,_T("TextTemp"),NULL,FALSE);
	m_pStaticStyle = (IDUITextStyle*)theApp.m_pDUIRes->GetResObject(DUIOBJTYPE_TEXTSTYLE,_T("Text90"),NULL,FALSE);
	return 0;
}
LRESULT CHealCheck ::OnDUILButtonUP(WPARAM wparam,LPARAM lparam)
{
	IDUIControlBase* pCtol = (IDUIControlBase*)wparam;
	//开始按钮
	if (pCtol== (IDUIControlBase*)m_pBtnStart)
	{ 
		m_bIsExpand = true;
		m_pListVist->SetVisible(true,false,false);
	   m_pstaticNewScore->SetVisible(true,true,false);
       m_pstaticNewScore->SetText(_T("100"));
	   
	   m_pBtnStart->SetVisible(false,true,false);
		SetTimer(TIMER_PROGRESS,TIMER_PROGRESS_TIME,NULL);
	}
	//体检过程中取消体检
	else if (pCtol == m_pBtnCancel)
	{
			
		KillTimer(TIMER_PROGRESS);
		CString str;
		str.Format(_T("%d"),m_iIssueItemcount);
		m_pStaticIssueCount->SetText(str.GetBuffer(0));
		m_pProgressBarCheck->SetVisible(false,true,false);
		m_pBtnCancel->SetVisible(false,true,false);
		m_pScaningItem->SetVisible(false,true,false);
		m_pScaningText->SetVisible(false,true,false);
		m_pStaticCheckState->SetVisible(true,true,false);
		m_pBtnRecheck->SetVisible(true,true,false);
		m_pstaticNewRemind->SetVisible(true,true,false);
		m_iProgressBarPos = 0;
		m_nCheckItemCount = 0;
		m_iIssueItemcount = 0;
		m_nSafeCount = 0;
		if (m_bGhost == false)
		{
			m_pBtnGhost->SetVisible(true,true,false);
		}

	
	}
	//重新体检按钮
	else if (pCtol == m_pBtnRecheck)
	{
		m_pBtnCancel->SetVisible(true,true,false);
		m_pBtnGhost->SetVisible(false,true,false);
		m_pstaticNewScore->SetText(_T("100"));
	    m_pStaticCheckState->SetVisible(false,true,false);
		m_pProgressBarCheck->SetPos(0);
		m_pProgressBarCheck->SetVisible(true,true,false);
		m_pBtnRecheck->SetVisible(false,true,false);
		if (m_bGhost == false)
		{
			m_pGroupDenger->RemoveAllItems();
		}
		m_pGroupSafe->RemoveAllItems();
		SetTimer(TIMER_PROGRESS,TIMER_PROGRESS_TIME,NULL);
	}
	else if (pCtol == m_pBtnGhost)
	{
        m_bGhost = true;
		
		m_pBtnGhost->SetVisible(false,true,false);
		m_pBtnCancel->SetVisible(true,true,false);
		m_pstaticNewScore->SetText(_T("100"));
		m_pStaticCheckState->SetVisible(false,true,false);
		m_pStaticCheckState->SetText(_T("您的电脑很健康，请继续保持。"));
		m_pStaticCheckState->SetTextStyle(DUI_STATIC_ACTIVE,m_pStaticStyle);
		m_pStaticCheckState->SetTextStyle(DUI_STATIC_INACTIVE,m_pStaticStyle);
		m_pProgressBarCheck->SetPos(0);
		m_pProgressBarCheck->SetVisible(true,true,false);
		m_pBtnRecheck->SetVisible(false,true,false);
		m_pBtnGhost->SetVisible(false,true,false);
		m_pListVist->RemoveAllGroup();
		SetTimer(TIMER_PROGRESS,TIMER_PROGRESS_TIME,NULL);
	}
	//超链接
	else if (pCtol == m_pBtnServe)
	{
		CString strURL = _T("http://bbs,360.cn");
		ShellExecute(NULL, _T("open"), strURL, NULL, NULL, SW_SHOW);
	}
	return TRUE;
}

void  CHealCheck::AddListView(IDUITVItemGroup* pItemGroup, int ID)
{
	if (pItemGroup == m_pGroupDenger)
	{
		
		if (ID == 1)
		{
			CString str;
			str.Format(_T("优化项目（%d）"),1);
			m_pGroupDenger->SetText((wstring)str,false);
		
			IDUITVItem* pItem = (IDUITVItem*)pItemGroup->AppendItem(ID++,_T("Item1"));
			SetItem(  pItem,_T("您有27天未进行快速木马扫描了"),_T("已开启"),FALSE,TRUE,_T("扫描"));
			m_nNewScore = 95;
			m_iIssueItemcount = 1;
		}
		else if (ID == 23)
		{
			CString str;
			str.Format(_T("优化项目（%d）"),2);
			m_pGroupDenger->SetText((wstring)str,false);
			IDUITVItem* pItem = (IDUITVItem*)pItemGroup->AppendItem(ID++,_T("Item1"));
			SetItem(  pItem,_T("发现您的软件存在系统垃圾"),_T("已开启"),FALSE,TRUE,_T("查看"));
			m_nNewScore = 92;
			m_iIssueItemcount = 2;

			pItem = (IDUITVItem*)pItemGroup->AppendItem(ID++,_T("Item1"));
			IUIFormObj* pFormTemp =(IUIFormObj*) pItem->GetCustomObj();
			IDUIStatic* pIcon1 = (IDUIStatic*)pFormTemp->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("Static21_Icon1"),true);
			pIcon1->SetVisible(false,false,false);
			IDUIStatic* pIcon2= (IDUIStatic*)pFormTemp->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("Static21_Icon2"),true);
			pIcon2->SetVisible(false,false,false);
			IDUIStatic* pStItemName= (IDUIStatic*)pFormTemp->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("Static_Text"),true);
			pStItemName->SetText(_T("系统临时文件（210个文件，共320MB)"));
			pStItemName->SetTextStyle(DUI_STATIC_ACTIVE,m_pItmeStyle);
			pStItemName->SetTextStyle(DUI_STATIC_INACTIVE,m_pItmeStyle);
			IDUIStatic* pStState= (IDUIStatic*)pFormTemp->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("Static21-Copy"),true);
            pStState->SetVisible(false,false,false);
			ICmdButton* pBtnOperate= (ICmdButton*)pFormTemp->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("Button29"),true);
			pBtnOperate->SetVisible(false,false,false);

			pItem = (IDUITVItem*)pItemGroup->AppendItem(ID++,_T("Item1"));
			pFormTemp =(IUIFormObj*) pItem->GetCustomObj();
		    pIcon1 = (IDUIStatic*)pFormTemp->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("Static21_Icon1"),true);
			pIcon1->SetVisible(false,false,false);
			pIcon2= (IDUIStatic*)pFormTemp->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("Static21_Icon2"),true);
			pIcon2->SetVisible(false,false,false);
			pStItemName= (IDUIStatic*)pFormTemp->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("Static_Text"),true);
			pStItemName->SetText(_T("IE缓存文件（9116个文件，共212.0MB)"));
			pStItemName->SetTextStyle(DUI_STATIC_ACTIVE,m_pItmeStyle);
			pStItemName->SetTextStyle(DUI_STATIC_INACTIVE,m_pItmeStyle);
		    pStState= (IDUIStatic*)pFormTemp->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("Static21-Copy"),true);
			pStState->SetVisible(false,false,false);
			 pBtnOperate= (ICmdButton*)pFormTemp->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("Button29"),true);
			pBtnOperate->SetVisible(false,false,false);
			m_pListVist->RefreshView();
		}
		else if (ID == 45)
		{
			CString str;
			str.Format(_T("优化项目（%d）"),3);
			m_pGroupDenger->SetText((wstring)str,false);
			IDUITVItem* pItem = (IDUITVItem*)pItemGroup->AppendItem(ID++,_T("Item1"));
			SetItem(  pItem,_T("发现您有软件需要更新"),_T("已开启"),FALSE,TRUE,_T("清理"));
		    m_nNewScore = 88;
			m_iIssueItemcount = 3;
		}
        CString str;
		str.Format(_T("%d"),m_nNewScore);
		wstring str1;
		str1 = str;
		m_pstaticNewScore->SetText(str1);
		pItemGroup->SetExpand(TRUE);
		m_pListVist->RefreshView();
	}
	else
	{
		m_pListVist->EnableRedraw(FALSE);
        IDUITVItem* pItem = (IDUITVItem*)pItemGroup->AppendItem(ID++,_T("Item2"));
		SetItem(  pItem,_T("检测是否开启安全卫士自动升级"),_T("已开启"),TRUE,FALSE,_T(""));
		pItem = (IDUITVItem*)pItemGroup->AppendItem(ID++,_T("Item3"));
		SetItem(  pItem,_T("检测是否开启网业防火墙"),_T("已开启"),TRUE,FALSE,_T(""));
		pItem = (IDUITVItem*)pItemGroup->AppendItem(ID++,_T("Item3"));
		SetItem(  pItem,_T("检测是否开启U盘防火墙"),_T("已开启"),TRUE,FALSE,_T(""));
		pItem = (IDUITVItem*)pItemGroup->AppendItem(ID++,_T("Item3"));
		SetItem(  pItem,_T("系统安全检查"),_T("无需处理"),TRUE,FALSE,_T(""));
		pItem = (IDUITVItem*)pItemGroup->AppendItem(ID++,_T("Item3"));
		SetItem(  pItem,_T("检测动态加载项"),_T("已开启"),TRUE,FALSE,_T(""));
		pItem = (IDUITVItem*)pItemGroup->AppendItem(ID++,_T("Item3"));
		SetItem(  pItem,_T("检查Windows自启动项"),_T("未发现风险"),TRUE,FALSE,_T(""));
		pItem = (IDUITVItem*)pItemGroup->AppendItem(ID++,_T("Item3"));
		SetItem(  pItem,_T("检测桌面默认图标"),_T("未发现风险"),TRUE,FALSE,_T(""));
		pItem = (IDUITVItem*)pItemGroup->AppendItem(ID++,_T("Item3"));
		SetItem(  pItem,_T("检查桌面快捷方式"),_T("未发现风险"),TRUE,FALSE,_T(""));
		pItem = (IDUITVItem*)pItemGroup->AppendItem(ID++,_T("Item3"));
		SetItem(  pItem,_T("检测快速启动栏"),_T("未发现风险"),TRUE,FALSE,_T(""));
		pItem = (IDUITVItem*)pItemGroup->AppendItem(ID++,_T("Item3"));
		SetItem(  pItem,_T("检测浏览器收藏夹"),_T("未发现风险"),TRUE,FALSE,_T(""));
		pItem = (IDUITVItem*)pItemGroup->AppendItem(ID++,_T("Item3"));
		SetItem(  pItem,_T("检测主页相关项目"),_T("未发现风险"),TRUE,FALSE,_T(""));
		pItemGroup->SetExpand(TRUE);
		m_pListVist->EnableRedraw(TRUE);
		m_pListVist->RefreshView();
	}
}

void  CHealCheck::SetItem(IDUITVItem* pItem,wstring str1,wstring str2,BOOL SafeIconView,BOOL BtnVisiable,wstring str3)//在线视频列表的添加
{ 
	//pTtem:添加列表项，str1:列表项名称 str2:列表项状态 SafeIconView：列表项图标 BtnVisiable：是否显示按钮，
	//列表项图标



	IUIFormObj *pItemForm = (IUIFormObj*) pItem->GetCustomObj();
	IDUIStatic* pSta = (IDUIStatic*)pItemForm->GetObjectByCaption(DUIOBJTYPE_PLUGIN, _T("Static21_Icon1"), FALSE);
	if (SafeIconView)
    {
		pSta->SetVisible(TRUE,FALSE,FALSE);
    }
	else
	{
		IDUIStatic* pSta = (IDUIStatic*)pItemForm->GetObjectByCaption(DUIOBJTYPE_PLUGIN, _T("Static21_Icon2"), FALSE);
		pSta->SetVisible(TRUE,FALSE,FALSE);
	}
	//列表项名称
	pSta = (IDUIStatic*)pItemForm->GetObjectByCaption(DUIOBJTYPE_PLUGIN, _T("Static_Text"), TRUE);
	pSta->SetText(str1);
    //按钮和状态切换
	ICmdButton* pSta1 = (ICmdButton*)pItemForm->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("Button29"),TRUE);
	if (BtnVisiable)
	{
         pSta1->SetVisible(TRUE,FALSE,FALSE);
		 pSta1->SetText(str3);
		 pSta = (IDUIStatic*)pItemForm->GetObjectByCaption(DUIOBJTYPE_PLUGIN, _T("Static21-Copy"), TRUE);
		 pSta->SetVisible(FALSE,FALSE,FALSE);
	}
	else
	{
		pSta1->SetVisible(FALSE,FALSE,FALSE);
		pSta = (IDUIStatic*)pItemForm->GetObjectByCaption(DUIOBJTYPE_PLUGIN, _T("Static21-Copy"), TRUE);
		pSta->SetText(str2);
		pSta->SetVisible(TRUE,FALSE,TRUE);
	}
}
void  CHealCheck::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
    
	if (m_bGhost == false)//未一键修复，有优化项目显示
	{
		m_pGroupDenger = (IDUITVItemGroup*)m_pListVist->AddGroup(100,_T("优化项目"));
	}
	m_pGroupSafe = (IDUITVItemGroup*)m_pListVist->AddGroup(200,_T("安全项目"));
	if (nIDEvent == TIMER_PROGRESS)
	{   
		
	    if (m_nSafeCount == 0)
	    {
			m_pstaticScore->SetVisible(true,true,false);
			m_pProgressBarCheck->SetVisible(true,true,false);
			m_pScaningText->SetVisible(true,true,false);
			m_pScaningItem->SetVisible(true,true,false);
			m_pstaticNewRemind->SetVisible(false,true,false);
			m_pPreCheckForm->SetVisible(false,true,false);
	    }



		//设置列表动态添加效果

		CString str;
		str.Format(_T("安全项目（%d）"),m_nSafeCount);
		m_pGroupSafe->SetText((wstring)str,false);
		if (m_nSafeCount%10 == 0)
		{
			AddListView(m_pGroupSafe,m_nSafeCount);
		
		}
		else
		{
			if (m_bGhost == false)//未修复，优化列表可以显示
			{
				AddListView(m_pGroupDenger,m_nSafeCount);
				
			}
		}
		//设置体检框展开动画效果
		m_nSafeCount++;
	
		IDUIPos* pPs;
		DUIPosition pos;
		static int formPos = 420;
		pPs = m_pCheckForm->GetPosition();
		
		pos = pPs->GetPosStruct();
		pos.horzPos.nSpaceType = PHST_RIGHTWIDTH;
		formPos -=130;
		if (m_bGhost == false)//未修复，设置体检框展开效果
		{
			if (20<formPos)
			{
				pos.horzPos.nWidth_Height = formPos;
				pPs->SetPosStruct(pos);
				m_pCheckForm->SetPosition((IDUIPos*)pPs);
				m_pDirectUI->ResizeThis();
				m_pDirectUI->DirectDraw(TRUE);
			}
			else
			{
				formPos = 20;
				pos.horzPos.nWidth_Height = formPos;
				pPs->SetPosStruct(pos);
				m_pCheckForm->SetPosition((IDUIPos*)pPs);
				m_pstaticNewScore->SetVisible(true,true,false);
				m_pBtnCancel->SetVisible(TRUE,TRUE,FALSE);
				m_pDirectUI->ResizeThis();
				m_pDirectUI->DirectDraw(TRUE);
			}
		}
 
		//设置进度条动画效果
		time_t t;
	    srand((unsigned)time(&t));
		m_nCheckItemCount = m_nCheckItemCount + rand()%30;
	
		str.Format(_T("%d"),m_nCheckItemCount);
        m_pStaticItemCount->SetText(str.GetBuffer(0));
		m_pScaningCount->SetText(str.GetBuffer(0));
	   	if (m_nCheckItemCount%10 == 1)
		{
			m_pScaningItem->SetText(_T("系统关键目录：WINDOWS\system32\adsld.dll"));
		}
		else if (m_nCheckItemCount%10 == 2)
		{
			m_pScaningItem->SetText(_T("系统关键目录：WINDOWS\system32\append.ll"));
		}
		else if (m_nCheckItemCount%10 ==3)
		{
			m_pScaningItem->SetText(_T("系统关键目录：WINDOWS\system32\spoll\drivers"));
		}
		else if (m_nCheckItemCount%10 == 4)
		{
			m_pScaningItem->SetText(_T("快捷方式：\Program Files\360\360safe\360safe.exe"));
		}
		else if (m_nCheckItemCount%10 == 5)
		{
			m_pScaningItem->SetText(_T("运行框架程序并联：C\Program Files\NT"));
		}
		else if (m_nCheckItemCount%10 == 6)
		{
			m_pScaningItem->SetText(_T("运行框架程序并联：C\Program Files\Micorsoft Office\OFFICE11"));
		}
		else if (m_nCheckItemCount%10 == 7)
		{
			m_pScaningItem->SetText(_T("系统关键目录：WINDOWS\system32\adsld"));
		}
		else if (m_nCheckItemCount%10 == 8)
		{
			m_pScaningItem->SetText(_T("系统关键目录：WINDOWS\system32\adsld"));
		}
		m_iProgressBarPos += rand()%4;
		if (m_iProgressBarPos<= 100)
		{
			m_pProgressBarCheck->SetPos(m_iProgressBarPos);
		}
		else if (m_iProgressBarPos>=100)
		{
			m_pProgressBarCheck->SetPos(100);
			if (m_pProgressBarCheck->GetPos() == 100)
			{		
				str.Format(_T("%d"),m_iIssueItemcount);
				m_pStaticIssueCount->SetText((wstring)str);
				m_pProgressBarCheck->SetVisible(false,true,false);
				m_pBtnCancel->SetVisible(false,true,false);
				m_pScaningText->SetVisible(false,true,false);
				m_pScaningItem->SetVisible(false,true,false);
				m_pStaticCheckState->SetVisible(true,true,false);
				if (m_bGhost == false)//未修复，一键修复按钮可见
				{
						m_pBtnGhost->SetVisible(true,true,false);
				}
			
				m_pBtnRecheck->SetVisible(true,true,false);
				m_pstaticNewRemind->SetVisible(true,true,false);
			
				m_iProgressBarPos =0; 
				m_nCheckItemCount = 0;
				m_iIssueItemcount = 0;
				formPos = 20;
			    m_nSafeCount = 0;
			}
			KillTimer(TIMER_PROGRESS);
		}
	}

	CDialog::OnTimer(nIDEvent);
}

void CHealCheck::OnSize(UINT nType, int cx, int cy)
{
	CDialog::OnSize(nType, cx, cy);
	// TODO: 在此处添加消息处理程序代码
}
void CHealCheck::OnOK()
{
}

void CHealCheck::OnCancel()
{
	// TODO: 在此添加专用代码和/或调用基类
}
