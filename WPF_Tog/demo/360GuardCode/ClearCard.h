#pragma once
#define TIMER_CLEAR 1
#define TIMER_CLEAR_TIME 200

// CClearCard 对话框

class CClearCard : public CDialog
{
	DECLARE_DYNAMIC(CClearCard)

public:
	CClearCard(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CClearCard();
	void AddList();
	virtual void     OnOK();
	


// 对话框数据
	enum { IDD = IDD_DIALOG_CleanCard };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
private:  
	IDirectUI*        m_pIDirectUI;
	IDUIHeaderCtrl*   m_pHeader;
	IDUIListView*     m_pListView;
	IDUIProgressbar*  m_pProgressBar;
	ICmdButton*       m_pBtnClearNow;
	ICmdButton*       m_pBtnRescan;
	IDUIStatic*       m_pSaticIcon;
	IDUIStatic*       m_pStaticRemind;
//	IDUIStatic*       m_pScanIcon;
	IDUIStatic*       m_pScanRemind;
	ICmdButton*       m_pBtnStop;
	ICmdButton*       m_pBtnReport;
	ICmdButton*       m_pBtnStart;
	IDUIStatic*       m_pStaticScanItem;
	IDUIStatic*       m_pStBtnRemind;

	IUIFormObj*		  m_pUIFormTemp1;
	IUIFormObj*		  m_pUIFormTemp2;
	IDUIStatic*       m_pSaftCompanyTemp;
	IUIFormObj*       m_pUIFScoreTemp;
	IDUIStatic*       m_pSuggestTemp;
	ICmdButton*       m_pOperateTemp;
	IDUIStatic*       m_pStaticTemp;
	IDUIStatic*       m_pStaticIcon;


    int               m_ProgressBarpos;
	BOOL              m_bChangePos;
	bool           m_bAddList;




	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg LRESULT OnDUILButtonUp(WPARAM wparam,LPARAM lparam);
	afx_msg void OnTimer(UINT_PTR nIDEvent);

protected:
	virtual void OnCancel();
};
