#pragma once

#include "Patient.h"
// CRepair 对话框
#define  TIMER_REPAIR 1 
#define  TIMER_REPAIR_TIME 100
class CRepair : public CDialog
{
	DECLARE_DYNAMIC(CRepair)

public:
	CRepair(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CRepair();

// 对话框数据
	enum { IDD = IDD_DIALOG_Repair };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
private:
	IDirectUI*       m_pIDirectUI;
	ICmdButton*      m_pBtnOtpatient;
	ICmdButton*      m_pBtnRepair;
    IUIFormObj*      m_pUIFormRepair;
	IDUIListView*    m_pListView;
	IDUIProgressbar* m_pProgressBar;
	ICmdButton*      m_pBtnCancel;
	ICmdButton*      m_pBtnReScan;
	IDUIStatic*      m_pStaticText;
	IDUIStatic*      m_pStaticCount;
	IDUIStatic*      m_pStaticRemind;
	IUIFormObj*      m_pFormDown;
	ICmdButton*      m_pBtnRepairNow;

	IDUITextStyle*   m_pTextStyle;

	int              m_iProgressBarPos;
	int              m_iRepairCount;
	CPatient         m_Otpatient;

	afx_msg LRESULT OnDUILButtonUp(WPARAM wparam,LPARAM lparam);
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnSize(UINT nType, int cx, int cy);

protected:
	virtual void OnCancel();
};
