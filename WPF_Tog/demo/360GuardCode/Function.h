#pragma once


// CFunction 对话框

class CFunction : public CDialog
{
	DECLARE_DYNAMIC(CFunction)

public:
	CFunction(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CFunction();
	void OnOK();
// 对话框数据
	enum { IDD = IDD_DIALOG_Function };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
private:
	IDirectUI*    m_pDirectUI;
	IDUIHwndObj*  m_pHwndObj;
	CEdit         m_rEdit;
	IUIFormObj*   m_pFormEdit;
	IUIFormObj*   m_pFormBody;
	IUIFormObj*   m_pFormTop;

	HBITMAP		m_hBitmap0;
	HBITMAP		m_hBitmap1;
	HBITMAP		m_hBitmap2;
	HBITMAP		m_hBitmap3;
	HBITMAP		m_hBitmap4;
	HBITMAP		m_hBitmap5;
	HBITMAP		m_hBitmap6;
	HBITMAP		m_hBitmap7;
	HBITMAP		m_hBitmap8;
	HBITMAP		m_hBitmap9;
	HBITMAP		m_hBitmap10;
	HBITMAP		m_hBitmap11;
	HBITMAP		m_hBitmap12;
	HBITMAP		m_hBitmap13;
	HBITMAP		m_hBitmap14;
	HBITMAP		m_hBitmap15;
	HBITMAP		m_hBitmap16;
	HBITMAP		m_hBitmap17;
	HBITMAP		m_hBitmap18;
	HBITMAP		m_hBitmap19;
	IDUIListView*  m_pListView;

	afx_msg LRESULT OnDUILButtonUp(WPARAM wparam,LPARAM lparam);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);

protected:
	virtual void OnCancel();
};
