#pragma once


// CReplaceSkin 对话框

class CReplaceSkin : public CDialog
{
	DECLARE_DYNAMIC(CReplaceSkin)

public:
	CReplaceSkin(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CReplaceSkin();

// 对话框数据
	enum { IDD = IDD_DIALOGReplaceSkin };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
private:
	IDirectUI*    m_pIDirectUI;
	afx_msg void OnActivate(UINT nState, CWnd* pWndOther, BOOL bMinimized);
	afx_msg void OnKillFocus(CWnd* pNewWnd);

};
