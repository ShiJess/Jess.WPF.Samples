// 360DEMODlg.cpp : 实现文件
//

#include "stdafx.h"
#include "360DEMO.h"
#include "360DEMODlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// 用于应用程序“关于”菜单项的 CAboutDlg 对话框

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// 对话框数据
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 实现
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
END_MESSAGE_MAP()


// CMy360DEMODlg 对话框




CMy360DEMODlg::CMy360DEMODlg(CWnd* pParent /*=NULL*/)
	: CDialog(CMy360DEMODlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
	m_pDirectUI = NULL;
	m_pBtnClose = NULL;
	m_pCheckMax = NULL;
	m_pBtnMin = NULL;
	m_pBtnMenu = NULL;
	m_pBtnSkin = NULL;
	m_pHwndObjBody = NULL;
	m_pBtnIcon = NULL;
	m_pMenuMainMenu = NULL;

	m_pRadioHealCheck = NULL;
	m_pRadioKillHorse = NULL;
	m_pRadioClearCard = NULL;
	m_pRadioFillHole = NULL;
	m_pRadioSysRepair = NULL;
	m_pRadioComputeClear = NULL;
	m_pRadioFunction = NULL;
	m_pButtonOptatient = NULL;


}

void CMy360DEMODlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CMy360DEMODlg, CDialog)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	//}}AFX_MSG_MAP
	ON_WM_CREATE()
	ON_MESSAGE(DUISM_LBUTTONUP, OnDUILButtonUP)
	ON_MESSAGE(DUISM_LBUTTONDBCLICK,OnDUILButtonDBClick)
	
END_MESSAGE_MAP()


// CMy360DEMODlg 消息处理程序

BOOL CMy360DEMODlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// 将“关于...”菜单项添加到系统菜单中。

	// IDM_ABOUTBOX 必须在系统命令范围内。
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// 设置此对话框的图标。当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO: 在此添加额外的初始化代码

	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

void CMy360DEMODlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CMy360DEMODlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标显示。
//
HCURSOR CMy360DEMODlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}


int CMy360DEMODlg::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CDialog::OnCreate(lpCreateStruct) == -1)
		return -1;

	// TODO:  在此添加您专用的创建代码

	//系统按钮的加载
	m_pDirectUI = (IDirectUI*)theApp.m_pDUIRes->CreateDirectUI(_T("Main"),(long)HandleToLong(GetSafeHwnd()));
	m_pBtnClose = (ICmdButton*)m_pDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("CloseBtn"),TRUE);
	m_pBtnMin = (ICmdButton*)m_pDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("MinBtn"),TRUE);
	m_pCheckMax = (IDUICheckBox*)m_pDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("MaxBx"),TRUE);
	m_pBtnIcon = (ICmdButton*)m_pDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("IconBtn"),TRUE);
	m_pBtnSkin = (ICmdButton*)m_pDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("SkillBtn"),TRUE);
	m_pBtnMenu = (ICmdButton*)m_pDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("MenuBtn"),TRUE);
    //功能按钮的加载
    m_pRadioHealCheck =(RadioBox*)m_pDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("CheckRadio"),TRUE);
    m_pRadioKillHorse=(RadioBox*)m_pDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("CockRadio"),TRUE);
    m_pRadioClearCard=(RadioBox*)m_pDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("ClearRadio"),TRUE);
    m_pRadioFillHole=(RadioBox*)m_pDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("RehabRadio"),TRUE);
    m_pRadioSysRepair=(RadioBox*)m_pDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("RepairRadio"),TRUE);
    m_pRadioComputeClear=(RadioBox*)m_pDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("ComClear"),TRUE);
    m_pRadioFunction=(RadioBox*)m_pDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("FunctionRadio"),TRUE);
    m_pButtonOptatient=(ICmdButton*)m_pDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("ButtonOptatient"),TRUE);
   //创建功能按钮对应的界面对象
	m_HealCheck.Create(CHealCheck::IDD,this);
	m_KillHorse.Create(CKillHorse::IDD,this);
	m_ClearCard.Create(CClearCard::IDD,this);
	m_FillHole.Create(CFillHole::IDD,this);
	m_SysRepair.Create(CRepair::IDD,this);
	m_CputerClear.Create(CCputerClear::IDD,this);
	m_Function.Create(CFunction::IDD,this);
	m_ReplaceSkin.Create(CReplaceSkin::IDD,this);
	
	//与HWNDOBJ连接
	m_pHwndObjBody = (IDUIHwndObj*)m_pDirectUI->GetObjectByCaption(DUIOBJTYPE_PLUGIN,_T("HwndObjBody"),TRUE);
	m_pHwndObjBody->Attach((OLE_HANDLE)HandleToLong(m_HealCheck.GetSafeHwnd()));
 	m_pHwndObjBody->Attach((OLE_HANDLE)HandleToLong(m_KillHorse.GetSafeHwnd()));
	m_pHwndObjBody->Attach((OLE_HANDLE)HandleToLong(m_ClearCard.GetSafeHwnd()));
	m_pHwndObjBody->Attach((OLE_HANDLE)HandleToLong(m_FillHole.GetSafeHwnd()));
	m_pHwndObjBody->Attach((OLE_HANDLE)HandleToLong(m_SysRepair.GetSafeHwnd()));
	m_pHwndObjBody->Attach((OLE_HANDLE)HandleToLong(m_CputerClear.GetSafeHwnd()));
	m_pHwndObjBody->Attach((OLE_HANDLE)HandleToLong(m_Function.GetSafeHwnd()));
	m_pHwndObjBody->Attach((OLE_HANDLE)HandleToLong(m_Custom.GetSafeHwnd()));
	m_pHwndObjBody->ShowWindow((OLE_HANDLE)HandleToLong(m_HealCheck.GetSafeHwnd()));

	m_pMenuMainMenu = (IDUIPopupMenu*)theApp.m_pDUIRes->GetResObject(DUIOBJTYPE_PLUGIN,_T("MainMenu"),NULL,true);
	m_pMenuMainMenu->SetUseStandardMenu(true);
	SetWindowText(_T("360安全卫士"));

	

	return 0;
}
LRESULT CMy360DEMODlg::OnDUILButtonUP(WPARAM wparam,LPARAM lparam)
{
	
	/*m_ReplaceSkin.ShowWindow(SW_HIDE);*/

	IDUIControlBase* pCtrol =  (IDUIControlBase*) wparam;
	if (pCtrol == NULL)
	{
		return 0;
	}
	else if (pCtrol == m_pBtnClose)
	{
		OnCancel();
	}
	else if (pCtrol == m_pBtnMin)
	{
		ShowWindow(SW_MINIMIZE);
	}
	else if (pCtrol == m_pCheckMax)
	{
		DUICHECKBOX_VALUE evalue=m_pCheckMax->GetValue();
		if (evalue == DUICHECKBOX_CHECKED)
		{
			ShowWindow(SW_MAXIMIZE);
		}
		else 
		{
			ShowWindow(SW_RESTORE);
		}
	}
	else if (pCtrol == (IDUIControlBase*)m_pBtnSkin)
	{
// 		IDUIRect*  IDUIrc;
// 		IDUIrc = m_pBtnSkin->GetRect();
// 		IDUIrc->bottom;
// 		CRect rc;
// 		m_ReplaceSkin.GetWindowRect(&rc);	
// 		m_ReplaceSkin.SetWindowPos(NULL,IDUIrc->right-rc.WIDth(),IDUIrc->bottom,0,0,SWP_NOSIZE);
// 		m_ReplaceSkin.ShowWindow(SW_SHOW);
	}
	else if (pCtrol == (IDUIControlBase*)m_pBtnIcon)
	{
		CString strURL = _T("www.360.cn");
		ShellExecute(NULL, _T("open"), strURL, NULL, NULL, SW_SHOW);
	}
    else if (pCtrol == (IDUIControlBase*)m_pBtnMenu)
    {
		IDUIRect *pDUIRect = pCtrol->GetRect();
		CPoint pt(pDUIRect->left,pDUIRect->bottom);
		::ClientToScreen(m_hWnd,&pt);
		m_pMenuMainMenu->TrackPopupMenu(DUI_TPM_LEFTALIGN,pt.x,pt.y,(OLE_HANDLE)HandleToLong(m_hWnd));
    }

	else if (pCtrol == (IDUIControlBase*)m_pRadioHealCheck)
	{
		m_pHwndObjBody->ShowWindow((OLE_HANDLE)HandleToLong(m_HealCheck.GetSafeHwnd()));
	   
	}
	
 	else if (pCtrol ==(IDUIControlBase*)m_pRadioKillHorse)
 	{
		if (!m_KillHorse.m_bCustomCreat )
		{
			   	m_pHwndObjBody->ShowWindow((OLE_HANDLE)HandleToLong(m_KillHorse.GetSafeHwnd()));
		}
		else if (m_KillHorse.m_bCustomCreat)
		{
			m_pHwndObjBody->ShowWindow((OLE_HANDLE)HandleToLong(m_KillHorse.m_Custom.GetSafeHwnd()));
		}
	}
	else if (pCtrol ==(IDUIControlBase*) m_pRadioClearCard)
	{
		m_pHwndObjBody->ShowWindow((OLE_HANDLE)HandleToLong(m_ClearCard.GetSafeHwnd()));
	}
	else if (pCtrol == (IDUIControlBase*)m_pRadioFillHole)
	{
		m_pHwndObjBody->ShowWindow((OLE_HANDLE)HandleToLong(m_FillHole.GetSafeHwnd()));
		m_FillHole.BeginFillHole();
	}
	else if (pCtrol == (IDUIControlBase*)m_pRadioSysRepair)
	{
		m_pHwndObjBody->ShowWindow((OLE_HANDLE)HandleToLong(m_SysRepair.GetSafeHwnd()));
	}
	else if (pCtrol == (IDUIControlBase*)m_pRadioComputeClear)
	{
		m_pHwndObjBody->ShowWindow((OLE_HANDLE)HandleToLong(m_CputerClear.GetSafeHwnd()));
	}
	else if (pCtrol == (IDUIControlBase*)m_pRadioFunction)
	{
		m_pHwndObjBody->ShowWindow((OLE_HANDLE)HandleToLong(m_Function.GetSafeHwnd()));
	
	}
	else if (pCtrol  == (IDUIControlBase*)m_pButtonOptatient)
	{
	
	}

	return true;
}
LRESULT CMy360DEMODlg::OnDUILButtonDBClick(WPARAM wparam,LPARAM lparam)
{
    IDUIControlBase* pCtrol = (IDUIControlBase*)wparam;
	if (pCtrol->IsDragabled())
	{
		if (this->IsZoomed())
		{
			ShowWindow(SW_NORMAL);
			m_pCheckMax->SetValue(DUICHECKBOX_UNCHECKED);
		}
		else
		{
			ShowWindow(SW_MAXIMIZE);
			m_pCheckMax->SetValue(DUICHECKBOX_CHECKED);
		}
		
	}

	return true;
	

}