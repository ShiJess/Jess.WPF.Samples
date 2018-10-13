// ReplaceSkin.cpp : 实现文件
//

#include "stdafx.h"
#include "360DEMO.h"
#include "ReplaceSkin.h"



// CReplaceSkin 对话框

IMPLEMENT_DYNAMIC(CReplaceSkin, CDialog)

CReplaceSkin::CReplaceSkin(CWnd* pParent /*=NULL*/)
	: CDialog(CReplaceSkin::IDD, pParent)
{
	 
		
}

CReplaceSkin::~CReplaceSkin()
{

}

void CReplaceSkin::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CReplaceSkin, CDialog)
	ON_WM_CREATE()
	ON_WM_KILLFOCUS()
	ON_WM_ACTIVATE()
END_MESSAGE_MAP()


// CReplaceSkin 消息处理程序

int CReplaceSkin::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CDialog::OnCreate(lpCreateStruct) == -1)
		return -1;

	// TODO:  在此添加您专用的创建代码
	m_pIDirectUI = (IDirectUI*)theApp.m_pDUIRes->CreateDirectUI(_T("ReplaceSkin"),(long)HandleToLong(GetSafeHwnd()));


	return 0;
}
void CReplaceSkin::OnActivate(UINT nState, CWnd* pWndOther, BOOL bMinimized)
{
	CDialog::OnActivate(nState, pWndOther, bMinimized);

	// TODO: 在此处添加消息处理程序代码
// 	if ((nState == WA_CLICKACTIVE || nState == WA_INACTIVE) )
// 		DestroyWindow();
// 		
}
void CReplaceSkin::OnKillFocus(CWnd* pNewWnd)
{
	//if (GetSafeHwnd() != NULL)
	//{
	//	   DestroyWindow();
	//}

}