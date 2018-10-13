#pragma once


// CCputerClear 对话框
#define TIMER_SCAN 1
#define TIMER_CLEAR_SCAN_TIME 100

#include <vector>
class CCputerClear : public CDialog
{
	DECLARE_DYNAMIC(CCputerClear)

public:
	CCputerClear(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CCputerClear();
	virtual void AddList();
	virtual void setItem(IDUITVItem* pItem,wstring str1,wstring str2,BOOL bCheckIcon,BOOL BShow);
	virtual void Clone(IDUITVItem* pItem, wstring str,int count);
	virtual void     OnOK();

// 对话框数据
	enum { IDD = IDD_DIALOG_CPUclear };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	DECLARE_MESSAGE_MAP()
public:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
private:
	IDirectUI*     m_pIDirectUI;
	ICmdButton*    m_pBtnStartClear;
	IDUIListView*  m_pListView;
	IDUIStatic*    m_pStaticRemind1;
	IDUIStatic*    m_pStaticRemind2;
	IDUIStatic*    m_pSScanItem;

	ICmdButton*    m_pBtnSel;
	ICmdButton*    m_pBtnNoSel;
	ICmdButton*    m_pBtnPart;
	ICmdButton*    m_pBtnBegainScan;
	ICmdButton*    m_pBtnCancel;
	ICmdButton*    m_pBtnRescan;
	IDUIProgressbar* m_pProgreesBar;
	int            m_nProgressBarPos;
	int            m_nShowCount;
	int            m_nItemCount;
	int            m_iItemHight;
	
	vector<IDUICheckBox*>  m_vecCloneCheckBox;
	vector<int> m_vecItemHight;
	afx_msg LRESULT OnDUILButtonUp(WPARAM wparam,LPARAM lparam);
	afx_msg void OnTimer(UINT_PTR nIDEvent);

protected:
	virtual void OnCancel();
};
