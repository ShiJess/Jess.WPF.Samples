#pragma once


// CCustomForm 对话框
#define  TIMER_SCAN 1
#define  TIMER_SCAN_TIME 200
//#include "KillHorse.h"

class  CMy360DEMODlg;
class CCustomForm : public CDialog
{
	DECLARE_DYNAMIC(CCustomForm)

public:
	CCustomForm(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CCustomForm();
	virtual void     OnOK();
	

// 对话框数据
	enum { IDD = IDD_DIALOG_CustomeForm };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
private:
	IDirectUI*       m_pIDirectUI;
	IDUIListView*    m_pListView;
	ICmdButton*      m_pBtnStop;
	ICmdButton*      m_pBtnSuspend;
	ICmdButton*      m_pBtnContinue;
	IDUITextStyle*   m_pTextStyle;
	IDUIProgressbar* m_pProgressBar;
	IDUIStatic*      m_pIcon;
	IDUIStatic*      m_pStaticText;
	IUIFormObj*      m_pUIFormOutKill;
	ICmdButton*      m_pBtnBack;
	ICmdButton*      m_pBtnWep;
	CMy360DEMODlg*  m_pMainDlg;

	int  m_iProgressBarPos;
	int  m_icount;
	bool m_bDestroy;
	
	
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg  LRESULT OnDUILButtonUp(WPARAM wparam,LPARAM lparam);
	afx_msg void OnSize(UINT nType, int cx, int cy);

protected:
	virtual void OnCancel();
};
