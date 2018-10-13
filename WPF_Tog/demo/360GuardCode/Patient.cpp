// Patient.cpp : 实现文件
//

#include "stdafx.h"
#include "360DEMO.h"
#include "Patient.h"


// CPatient 对话框

IMPLEMENT_DYNAMIC(CPatient, CDialog)

CPatient::CPatient(CWnd* pParent /*=NULL*/)
	: CDialog(CPatient::IDD, pParent)
{
	m_pIDirectUI = NULL;
	m_pBtnClose = NULL;
	m_pBtnMax = NULL;
	m_pBtnCancel = NULL;

}

CPatient::~CPatient()
{
}

void CPatient::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CPatient, CDialog)
	ON_WM_CREATE()
	ON_MESSAGE(DUISM_LBUTTONUP,OnDUILButtonUp)
END_MESSAGE_MAP()


// CPatient 消息处理程序

int CPatient::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CDialog::OnCreate(lpCreateStruct) == -1)
		return -1;

	// TODO:  在此添加您专用的创建代码
	m_pIDirectUI =(IDirectUI*) theApp.m_pDUIRes->CreateDirectUI(_T("ComOtpatient"),(long)HandleToLong(GetSafeHwnd()));
	m_pBtnClose = (ICmdButton*)m_pIDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("CloseBtn1"),TRUE);
	m_pBtnMax = (ICmdButton*)m_pIDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("MinBtn1"),TRUE);
	m_pBtnFeedBack = (ICmdButton*)m_pIDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("VersionBtn"),TRUE);
	m_pBtnCancel = (ICmdButton*)m_pIDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("Button46"),TRUE);
    SetWindowText(_T("360电脑门诊"));

	return 0;
}
LRESULT CPatient::OnDUILButtonUp(WPARAM wparam,LPARAM lparam)
{
	IDUIControlBase* pCtrol = (IDUIControlBase*)wparam;
	if (pCtrol == m_pBtnClose)
	{
		DestroyWindow();
	}
	else if (pCtrol == m_pBtnCancel)
	{
		DestroyWindow();
	}
	else if (pCtrol == m_pBtnMax)
	{
		ShowWindow(SW_MINIMIZE);
	}
	else if (pCtrol == m_pBtnFeedBack)
	{
		CString strURL = _T("http://bbs.360.cn/5500047.html");
		ShellExecute(NULL, _T("open"), strURL, NULL, NULL, SW_SHOW);
	}
	return TRUE;
}
void CPatient::OnOK()
{

}
void CPatient::OnCancel()
{

}
