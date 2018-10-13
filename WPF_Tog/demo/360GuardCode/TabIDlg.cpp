// TabIDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "360Demo.h"
#include "TabIDlg.h"


// CTabIDlg 对话框

IMPLEMENT_DYNAMIC(CTabIDlg, CDialog)

CTabIDlg::CTabIDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CTabIDlg::IDD, pParent)
{

}

CTabIDlg::~CTabIDlg()
{
}

void CTabIDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CTabIDlg, CDialog)
	ON_WM_CREATE()
END_MESSAGE_MAP()


// CTabIDlg 消息处理程序

int CTabIDlg::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CDialog::OnCreate(lpCreateStruct) == -1)
		return -1;

     // TODO:  在此添加您专用的创建代码

    m_pDirectUI = (IDirectUI*)theApp.m_pDUIRes->CreateDirectUI(L"HealCheck",HandleToLong(m_hWnd));


	return 0;
}
