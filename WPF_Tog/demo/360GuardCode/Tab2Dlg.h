#pragma once


// CTab2Dlg 对话框

class CTab2Dlg : public CDialog
{
	DECLARE_DYNAMIC(CTab2Dlg)

public:
	CTab2Dlg(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CTab2Dlg();
	IDirectUI* m_pDirectUI;

// 对话框数据
	enum { IDD = IDD_DIALOG_TAB2 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg LRESULT OnSMLButtonUp(WPARAM wParam,LPARAM lParam);
	IDUIListView* m_pListView;
	IDUICheckBox	*m_pHideBtn;
	IUIFormObj		*m_pLeftForm;
	IUIFormObj		*m_pRightForm;
	IDUISplitter	*m_pSplitBar;

};
