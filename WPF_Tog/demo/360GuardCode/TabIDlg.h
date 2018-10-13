#pragma once


// CTabIDlg 对话框

class CTabIDlg : public CDialog
{
	DECLARE_DYNAMIC(CTabIDlg)

public:
	CTabIDlg(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CTabIDlg();

// 对话框数据
	enum { IDD = IDD_DIALOG_TAB1 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
private:
	IDirectUI* m_pDirectUI;
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
};
