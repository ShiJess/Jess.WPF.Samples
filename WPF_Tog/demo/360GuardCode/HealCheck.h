#pragma once


// CHealCheck 对话框
#define  TIMER_PROGRESS 1
#define  TIMER_PROGRESS_TIME 100
#define  TIMER_UNFOLD   2
#define  TIMER_UIFOLD_TIME   100

class CHealCheck : public CDialog
{
	DECLARE_DYNAMIC(CHealCheck)

public:
	CHealCheck(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CHealCheck();
	virtual void SetItem(IDUITVItem* pItem,wstring str1,wstring str2,BOOL SafeIconView,BOOL BtnVisiable,wstring str3);
	virtual void AddListView(IDUITVItemGroup* pGroup,int ID);
//    void     OnOK();

// 对话框数据
	enum { IDD = IDD_DIALOG_HeakCHECK };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	IDirectUI*     m_pDirectUI;

	DECLARE_MESSAGE_MAP()
public:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	
private:
	IDirectUI*          m_pIDirectUI;
	IUIFormObj*         m_pCheckForm;
	IUIFormObj*         m_pPreCheckForm;
	ICmdButton*         m_pBtnStart;
	IDUIProgressbar*    m_pProgressBarCheck;
	IDUIStatic*         m_pstaticPreScor;
	IDUIStatic*         m_pstaticScore;
	IDUIStatic*         m_pstaticPreRemind; 
	IDUIStatic*         m_pstaticNewRemind;
	IDUIStatic*         m_pStaticItemCount;
	IDUIStatic*         m_pStaticIssueCount;
	IDUIListView*       m_pListVist;
	IDUITVItemGroup*    m_pGroupDenger;
	IDUITVItemGroup*    m_pGroupSafe;
	ICmdButton*         m_pBtnGhost;
	IDUIStatic*         m_pStaticCheckState;
	IDUIStatic*         m_pstaticNewScore;
	ICmdButton*         m_pBtnRecheck;
    ICmdButton*         m_pBtnCancel;
	ICmdButton*         m_pBtnServe;
	
    
	IDUIStatic*         m_pScaningText;
	IDUIStatic*         m_pScaningCount;
	IDUIStatic*         m_pScaningItem;

	IDUITextStyle*      m_pItmeStyle;
	IDUITextStyle*      m_pStaticStyle;
	
	int                 m_iProgressBarPos;
	int                 m_nCheckItemCount;
	int                 m_iIssueItemcount; 
	int                 m_nNewScore;
	int                 m_nSafeCount;
	BOOL                m_bGhost;

	afx_msg LRESULT OnDUILButtonUP(WPARAM wparam,LPARAM lparam);
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnSize(UINT nType, int cx, int cy);
	bool m_bIsExpand;
protected:
	virtual void OnOK();
	virtual void OnCancel();

};
