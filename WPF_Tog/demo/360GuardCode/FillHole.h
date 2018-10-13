#pragma once
#define TIMER_FILLHOLE 1
#define TIMER_FILLHOLE_TIME 100
#define TIMER_FILL  2
#define TIMER_FILL_TIME   100

// CFillHole 对话框

class CFillHole : public CDialog
{
	DECLARE_DYNAMIC(CFillHole)

public:
	CFillHole(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CFillHole();
	virtual void SetItem(IDUITVItem* pItem,wstring str1,wstring str2,wstring str3);
	bool        m_bBeginFillHole;
	void BeginFillHole();
	virtual void     OnOK();

// 对话框数据
	enum { IDD = IDD_DIALOG_FillHole };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
private:
	IDirectUI*        m_pIDirectUI;
	IDUIHeaderCtrl*   m_pHeader;
	IUIFormObj*       m_pFormLeft;
	IUIFormObj*       m_pFormRight;
	IDUICheckBox*     m_pCheckMaxList;
	IDUIListView*     m_pListView; 
	IDUICheckBox*     m_pCheckExpend;
	ICmdButton*       m_pBtnAllChose;
	ICmdButton*       m_pBtnAllUnChose;
	//IDUIProgressbar*  m_pProgressBar;
	IDUITVItemGroup*  m_pRepairGroup;
	IDUITVItemGroup*  m_pRepairGroup1;
	ICmdButton*       m_pBtnReScan;
	ICmdButton*       m_pBtnFillHole;
	ICmdButton*       m_pBtnExport;
	IDUIStatic*       m_pStScanedText;
	ICmdButton*       m_pBtnIgnore;
	IDUIStatic*       m_pStScanCount;
   

	int               m_iProgressBarPos;
	int               m_iRepairCount ;


	afx_msg LRESULT OnDUILButtonUp(WPARAM wparam, LPARAM lparam);
	afx_msg void  OnSize(UINT nType, int cx, int cy);
	afx_msg void OnTimer(UINT_PTR nIDEvent);

protected:
	virtual void OnCancel();
};
