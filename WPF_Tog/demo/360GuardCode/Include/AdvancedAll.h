#ifndef __HEAD__ADVANCEDALL__
#define __HEAD__ADVANCEDALL__
#include <comdef.h>

#include <xstring>
using namespace std;
#ifdef _UNICODE
#define tstring wstring
#else
#define tstring string
#endif

struct __declspec(uuid("700a4353-9892-4de1-b816-a7d164f9d802")) DUISpaceItem;
struct __declspec(uuid("3f1abd8b-79cc-4e6b-8a28-0bb21ab765e1")) _IDUISpaceItemEvents;
struct __declspec(uuid("5b7567c2-0ba7-439e-af29-a39f4408b416")) DUIPropItem;
struct __declspec(uuid("d7259207-ce7b-4f70-baa5-573a2b4370fe")) _IDUIPropItemEvents;
enum DUIPROPGRID_PROPTYPE_ENUM;

struct __declspec(uuid("3f0016c8-d33b-4872-8539-2b8339c21fd8")) IDUIPropItem;
struct __declspec(uuid("5d9cc551-52c3-44a3-a986-7dfcd3491d1c")) IDUIPropGrid;
struct __declspec(uuid("ebfbe87e-5f3c-4c99-8c03-52c76a8f83b7")) DUIPropGrid;
struct __declspec(uuid("f6c3b6d0-2551-4377-93cc-7b7deb2f6b1f")) _IDUIPropGridEvents;
struct __declspec(uuid("1896803e-13cd-4c28-83aa-0b0069a646a8")) IDUILyricCtrl;
struct __declspec(uuid("be96345c-b746-4347-809c-94a4aee78b29")) DUILyricCtrl;
struct __declspec(uuid("e4c3529d-aea2-4373-aa0e-3be196c95b8b")) _IDUILyricCtrlEvents;
struct __declspec(uuid("7e0692fe-24c5-499c-a47a-fad3112f5fdc")) DUISubtitleItem;
struct __declspec(uuid("f6f079e4-07ae-420a-ab03-82683c40bd79")) _IDUISubtitleItemEvents;
enum DUI_FIND_POS;

struct __declspec(uuid("5e1e4f79-4929-4622-b8c4-5be4d3a4e848")) IDUISubtitleItem;
struct __declspec(uuid("b344d9d3-0cdf-4860-9f11-a29c63a06d4e")) IDUISubtitleCtrl;
struct __declspec(uuid("1a846e25-3e7e-442b-b6c2-af28d3e76b2b")) DUISubtitleCtrl;
struct __declspec(uuid("b4d01d65-e096-412e-8240-d5f64defb988")) _IDUISubtitleCtrlEvents;
enum SubtitleCtrlMsgID;

struct __declspec(uuid("00000000-0000-0000-0000-000000000000")) DUISTCNotifyInfo;
enum DUI_STCNOTIFY;

struct __declspec(uuid("2c51950c-86b5-469b-acb8-c532378c95a2")) IDUITaskBar;
struct __declspec(uuid("fff6ff53-82f5-4178-aa5f-2a46ffa4de85")) DUITaskBar;
struct __declspec(uuid("0255b99d-b765-409f-8551-48d27536e3a6")) _IDUITaskBarEvents;
struct __declspec(uuid("212f619a-fe4e-4e33-8ca6-1a82a1f861ff")) IDUIScrollChannel;
struct __declspec(uuid("decd98bb-de83-4db1-88fa-05581ce4d43e")) DUIScrollChannel;
struct __declspec(uuid("37881a45-652e-42b4-a7c1-9bc986688d63")) _IDUIScrollChannelEvents;
struct __declspec(uuid("c5911d8e-ae30-455c-924a-c51e75d54c77")) DUIItemGroup;
struct __declspec(uuid("12e375df-5bcd-4372-92af-fe9ffe5d0d20")) _IDUIItemGroupEvents;
struct __declspec(uuid("231484e9-26d2-4888-b31b-8d8b063c4dea")) DUIScrollItem;
struct __declspec(uuid("213eae81-f74e-4b1f-8f00-a85dcacbe76d")) _IDUIScrollItemEvents;
struct __declspec(uuid("83b16de0-d4fd-43be-973d-465f8cdbd665")) IDUISpaceItem;
enum DUISCROLLITEM_STATE;

struct __declspec(uuid("7cb83b49-4601-4c76-a3f8-333bca07be0b")) IDUIScrollItem;
struct __declspec(uuid("2f348557-e1c7-44bd-a23b-9b2de83bbedf")) IDUIItemGroup;
struct __declspec(uuid("dd56cd5b-b096-410d-a3e4-ff2b879f1466")) IDUIScrollFairy;
struct __declspec(uuid("d9dde5e9-0959-4f63-b2d3-da7905c63b68")) DUIScrollFairy;
struct __declspec(uuid("771ade72-7aae-45b6-9499-2073af0d3b76")) _IDUIScrollFairyEvents;
enum ScrollFairyMsgID;

struct __declspec(uuid("00000000-0000-0000-0000-000000000000")) DUIScrollfairyNotifyInfo;
enum DUISCROLLFAIRY_NOTIFY;

enum DUISCROLLFAIRY_NOTIFY
{ 
	DUISF_NOTIFY = 3217 
};

struct __declspec(uuid("00000000-0000-0000-0000-000000000000")) DUIScrollfairyNotifyInfo
{
	enum ScrollFairyMsgID 	eDUIMsgId;
	long 	lParam1;
	long 	lParam2;
	long 	lParam3;
	long 	lParam4;
	long 	lParam5;
};

enum ScrollFairyMsgID
{ 
	DUISCROLLITEM_CHANGE = 5,
	DUISCROLLITEM_CHANGING = 6,
	DUISCROLLITEM_DBLBUTTONUP = 4,
	DUISCROLLITEM_DRAGGING = 11,
	DUISCROLLITEM_ENDDRAG = 12,
	DUISCROLLITEM_LBUTTONDOWN = 3,
	DUISCROLLITEM_LBUTTONUP = 2,
	DUISCROLLITEM_MOSEMOVE = 1,
	DUISCROLLITEM_REMOVE = 7,
	DUISCROLLITEM_STARTDRAG = 10,
	DUISCROLLSPACEITEM_LBUTTONDOWN = 8,
	DUISCROLLSPACEITEM_LBUTTONUP = 9 
};

struct __declspec(uuid("771ade72-7aae-45b6-9499-2073af0d3b76")) _IDUIScrollFairyEvents : IDispatch
{
	//
	//Property
	//


	//
	//Method
	//

	//
	//Method Wrapper
	//
};

struct __declspec(uuid("dd56cd5b-b096-410d-a3e4-ff2b879f1466")) IDUIScrollFairy : IDUIControlBase
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_AddGroup(long nID, BSTR strName, struct IDUIItemGroup **pResult) = 0;
	virtual HRESULT __stdcall raw_RemoveGroupByID(long nID, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_RemoveGroupByName(BSTR strName, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_RemoveAllGroup() = 0;
	virtual HRESULT __stdcall raw_GetGroupByName(BSTR strName, struct IDUIItemGroup **pResult) = 0;
	virtual HRESULT __stdcall raw_GetGroupByID(long nID, struct IDUIItemGroup **pResult) = 0;
	virtual HRESULT __stdcall raw_GetCount(long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetFocusGroupByID(long nID, VARIANT_BOOL bRedraw  ) = 0;
	virtual HRESULT __stdcall raw_SetFocusGroupByName(BSTR strName, VARIANT_BOOL bRedraw  ) = 0;
	virtual HRESULT __stdcall raw_GetFocusGroup(struct IDUIItemGroup **pResult) = 0;

	//
	//Method Wrapper
	//
	struct IDUIItemGroup * AddGroup(long  nID, tstring  strName  );
	BOOL  RemoveGroupByID(long  nID  );
	BOOL  RemoveGroupByName(tstring  strName  );
	void RemoveAllGroup();
	struct IDUIItemGroup * GetGroupByName(tstring  strName  );
	struct IDUIItemGroup * GetGroupByID(long  nID  );
	long  GetCount();
	void SetFocusGroupByID(long  nID, BOOL  bRedraw  );
	void SetFocusGroupByName(tstring  strName, BOOL  bRedraw  );
	struct IDUIItemGroup * GetFocusGroup();
};

struct __declspec(uuid("2f348557-e1c7-44bd-a23b-9b2de83bbedf")) IDUIItemGroup : IDispatch
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_InsertItem(short nIndex, long nID, BSTR strName, struct IDUIScrollItem **pResult) = 0;
	virtual HRESULT __stdcall raw_AppendItem(long nID, BSTR strName, struct IDUIScrollItem **pResult) = 0;
	virtual HRESULT __stdcall raw_InsertItemWithImage(short nIndex, long nID, BSTR strName, BSTR strImagePath, short nFrames, VARIANT_BOOL bHorz, struct IDUIScrollItem **pResult) = 0;
	virtual HRESULT __stdcall raw_AppendItemWithImage(long nID, BSTR strName, BSTR strImagePath, short nFrames, VARIANT_BOOL bHorz, struct IDUIScrollItem **pResult) = 0;
	virtual HRESULT __stdcall raw_RemoveItemByID(long nID, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_RemoveItemByName(BSTR strName, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_RemoveItem(struct IDUIScrollItem *pItem, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_RemoveAllItems() = 0;
	virtual HRESULT __stdcall raw_GetItemByID(long nID, struct IDUIScrollItem **pResult) = 0;
	virtual HRESULT __stdcall raw_GetItemByName(BSTR strName, struct IDUIScrollItem **pResult) = 0;
	virtual HRESULT __stdcall raw_GetAt(short nIndex, struct IDUIScrollItem **pResult) = 0;
	virtual HRESULT __stdcall raw_GetCount(long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetText(BSTR strName  ) = 0;
	virtual HRESULT __stdcall raw_GetText(BSTR *pResult) = 0;
	virtual HRESULT __stdcall raw_SetID(long nID  ) = 0;
	virtual HRESULT __stdcall raw_GetID(long *pResult) = 0;
	virtual HRESULT __stdcall raw_GetSpaceItem(short nIndex, struct IDUISpaceItem **pResult) = 0;
	virtual HRESULT __stdcall raw_SetSelectedItem(struct IDUIScrollItem *ppResult  ) = 0;
	virtual HRESULT __stdcall raw_SetScrollPos(long nPos  ) = 0;
	virtual HRESULT __stdcall raw_GetScrollPos(long *pResult) = 0;
	virtual HRESULT __stdcall raw_GetTotalLength(long *pResult) = 0;

	//
	//Method Wrapper
	//
	struct IDUIScrollItem * InsertItem(short  nIndex, long  nID, tstring  strName  );
	struct IDUIScrollItem * AppendItem(long  nID, tstring  strName  );
	struct IDUIScrollItem * InsertItemWithImage(short  nIndex, long  nID, tstring  strName, tstring  strImagePath, short  nFrames, BOOL  bHorz  );
	struct IDUIScrollItem * AppendItemWithImage(long  nID, tstring  strName, tstring  strImagePath, short  nFrames, BOOL  bHorz  );
	BOOL  RemoveItemByID(long  nID  );
	BOOL  RemoveItemByName(tstring  strName  );
	BOOL  RemoveItem(struct IDUIScrollItem * pItem  );
	void RemoveAllItems();
	struct IDUIScrollItem * GetItemByID(long  nID  );
	struct IDUIScrollItem * GetItemByName(tstring  strName  );
	struct IDUIScrollItem * GetAt(short  nIndex  );
	long  GetCount();
	void SetText(tstring  strName  );
	tstring  GetText();
	void SetID(long  nID  );
	long  GetID();
	struct IDUISpaceItem * GetSpaceItem(short  nIndex  );
	void SetSelectedItem(struct IDUIScrollItem * ppResult  );
	void SetScrollPos(long  nPos  );
	long  GetScrollPos();
	long  GetTotalLength();
};

struct __declspec(uuid("7cb83b49-4601-4c76-a3f8-333bca07be0b")) IDUIScrollItem : IDispatch
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_SetText(BSTR strName, VARIANT_BOOL bRefresh  ) = 0;
	virtual HRESULT __stdcall raw_GetText(BSTR *pResult) = 0;
	virtual HRESULT __stdcall raw_SetID(long nID  ) = 0;
	virtual HRESULT __stdcall raw_GetID(long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetState(enum DUISCROLLITEM_STATE eState, VARIANT_BOOL bRefresh  ) = 0;
	virtual HRESULT __stdcall raw_GetState(enum DUISCROLLITEM_STATE *pResult) = 0;
	virtual HRESULT __stdcall raw_SetImage(BSTR strImagePath, short nFrames, VARIANT_BOOL bHorz  ) = 0;
	virtual HRESULT __stdcall raw_GetImagePath(BSTR *pResult) = 0;
	virtual HRESULT __stdcall raw_SetBitmap(OLE_HANDLE hBmp, enum DUISCROLLITEM_STATE eState  ) = 0;
	virtual HRESULT __stdcall raw_GetBitmap(enum DUISCROLLITEM_STATE eState, OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_GetInfoPanel(struct IDUIControlBase **pResult) = 0;
	virtual HRESULT __stdcall raw_GetResObject(BSTR strName, struct IDUIControlBase **pResult) = 0;

	//
	//Method Wrapper
	//
	void SetText(tstring  strName, BOOL  bRefresh  );
	tstring  GetText();
	void SetID(long  nID  );
	long  GetID();
	void SetState(enum DUISCROLLITEM_STATE  eState, BOOL  bRefresh  );
	enum DUISCROLLITEM_STATE  GetState();
	void SetImage(tstring  strImagePath, short  nFrames, BOOL  bHorz  );
	tstring  GetImagePath();
	void SetBitmap(OLE_HANDLE  hBmp, enum DUISCROLLITEM_STATE  eState  );
	OLE_HANDLE  GetBitmap(enum DUISCROLLITEM_STATE  eState  );
	struct IDUIControlBase * GetInfoPanel();
	struct IDUIControlBase * GetResObject(tstring  strName  );
};

enum DUISCROLLITEM_STATE
{ 
	DUISCROLLITEM_STATE_DISABLED = 3,
	DUISCROLLITEM_STATE_HOT = 1,
	DUISCROLLITEM_STATE_LAST = 4,
	DUISCROLLITEM_STATE_NORMAL = 0,
	DUISCROLLITEM_STATE_PRESS = 2 
};

struct __declspec(uuid("83b16de0-d4fd-43be-973d-465f8cdbd665")) IDUISpaceItem : IDispatch
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_GetIndex(long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetImage(OLE_HANDLE hBitmap  ) = 0;
	virtual HRESULT __stdcall raw_GetRect(struct SkinRect *pResult) = 0;

	//
	//Method Wrapper
	//
	long  GetIndex();
	void SetImage(OLE_HANDLE  hBitmap  );
	struct SkinRect  GetRect();
};

struct __declspec(uuid("213eae81-f74e-4b1f-8f00-a85dcacbe76d")) _IDUIScrollItemEvents : IDispatch
{
	//
	//Property
	//


	//
	//Method
	//

	//
	//Method Wrapper
	//
};

struct __declspec(uuid("12e375df-5bcd-4372-92af-fe9ffe5d0d20")) _IDUIItemGroupEvents : IDispatch
{
	//
	//Property
	//


	//
	//Method
	//

	//
	//Method Wrapper
	//
};

struct __declspec(uuid("37881a45-652e-42b4-a7c1-9bc986688d63")) _IDUIScrollChannelEvents : IDispatch
{
	//
	//Property
	//


	//
	//Method
	//

	//
	//Method Wrapper
	//
};

struct __declspec(uuid("212f619a-fe4e-4e33-8ca6-1a82a1f861ff")) IDUIScrollChannel : IDUIControlBase
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_InitChannel(short nIndex  ) = 0;
	virtual HRESULT __stdcall raw_InsertChannel(short nIndex  ) = 0;
	virtual HRESULT __stdcall raw_RemoveAllChannel() = 0;
	virtual HRESULT __stdcall raw_RemoveAt(short nIndex  ) = 0;
	virtual HRESULT __stdcall raw_GetAt(short nIndex, struct IDUIControlBase **pResult) = 0;
	virtual HRESULT __stdcall raw_GetCount(short *pnResult  ) = 0;
	virtual HRESULT __stdcall raw_GetSelChannel(short *pnpnResult  ) = 0;
	virtual HRESULT __stdcall raw_HasScrollBar(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetScrollSubItem(short nItemIndex, BSTR pName, struct IDUIControlBase **pResult) = 0;
	virtual HRESULT __stdcall raw_GetSubItemIndex(struct IDUIControlBase *pControlBase, short *pResult) = 0;

	//
	//Method Wrapper
	//
	void InitChannel(short  nIndex  );
	void InsertChannel(short  nIndex  );
	void RemoveAllChannel();
	void RemoveAt(short  nIndex  );
	struct IDUIControlBase * GetAt(short  nIndex  );
	void GetCount(short * pnResult  );
	void GetSelChannel(short * pnpnResult  );
	BOOL  HasScrollBar();
	struct IDUIControlBase * GetScrollSubItem(short  nItemIndex, tstring  pName  );
	short  GetSubItemIndex(struct IDUIControlBase * pControlBase  );
};

struct __declspec(uuid("0255b99d-b765-409f-8551-48d27536e3a6")) _IDUITaskBarEvents : IDispatch
{
	//
	//Property
	//


	//
	//Method
	//

	//
	//Method Wrapper
	//
};

struct __declspec(uuid("2c51950c-86b5-469b-acb8-c532378c95a2")) IDUITaskBar : IDUIControlBase
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_Create(OLE_HANDLE hWndParent, OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_Destroy(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_Show(VARIANT_BOOL bShow, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_AppendItem(BSTR bstrPicPath, long *pResult) = 0;
	virtual HRESULT __stdcall raw_GetCount(short *pResult) = 0;
	virtual HRESULT __stdcall raw_IsExistedItem(long nID, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_RemoveItem(long nID, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_RemoveAll() = 0;
	virtual HRESULT __stdcall raw_GetSafeHandle(OLE_HANDLE *pResult) = 0;

	//
	//Method Wrapper
	//
	OLE_HANDLE  Create(OLE_HANDLE  hWndParent  );
	BOOL  Destroy();
	BOOL  Show(BOOL  bShow  );
	long  AppendItem(tstring  bstrPicPath  );
	short  GetCount();
	BOOL  IsExistedItem(long  nID  );
	BOOL  RemoveItem(long  nID  );
	void RemoveAll();
	OLE_HANDLE  GetSafeHandle();
};

enum DUI_STCNOTIFY
{ 
	DUI_STC_NOTIFY = 3202 
};

struct __declspec(uuid("00000000-0000-0000-0000-000000000000")) DUISTCNotifyInfo
{
	enum SubtitleCtrlMsgID 	eDUIMsgId;
	long 	lParam1;
	long 	lParam2;
	long 	lParam3;
	long 	lParam4;
	long 	lParam5;
};

enum SubtitleCtrlMsgID
{ 
	DUI_STC_ITEMCHANGE = 7,
	DUI_STC_LBUTTONDBLCLK = 6,
	DUI_STC_LBUTTONDOWN = 3,
	DUI_STC_LBUTTONUP = 2,
	DUI_STC_MOSEMOVE = 1,
	DUI_STC_RBUTTONDOWN = 5,
	DUI_STC_RBUTTONUP = 4 
};

struct __declspec(uuid("b4d01d65-e096-412e-8240-d5f64defb988")) _IDUISubtitleCtrlEvents : IDispatch
{
	//
	//Property
	//


	//
	//Method
	//

	//
	//Method Wrapper
	//
};

struct __declspec(uuid("b344d9d3-0cdf-4860-9f11-a29c63a06d4e")) IDUISubtitleCtrl : IDUIControlBase
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_InsertItem(short nIndex, long nID, VARIANT_BOOL bRefresh, struct IDUISubtitleItem **pResult) = 0;
	virtual HRESULT __stdcall raw_AppendItem(long nID, VARIANT_BOOL bRefresh, struct IDUISubtitleItem **pResult) = 0;
	virtual HRESULT __stdcall raw_RemoveItemByID(long nID, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_RemoveItem(struct IDUISubtitleItem *pItem, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_RemoveAllItems() = 0;
	virtual HRESULT __stdcall raw_GetItemByID(long nID, struct IDUISubtitleItem **pResult) = 0;
	virtual HRESULT __stdcall raw_GetAt(short nIndex, struct IDUISubtitleItem **pResult) = 0;
	virtual HRESULT __stdcall raw_GetCount(short *pResult) = 0;
	virtual HRESULT __stdcall raw_SetReadItem(struct IDUISubtitleItem *pItem  ) = 0;
	virtual HRESULT __stdcall raw_SetReadItemByID(long nID  ) = 0;
	virtual HRESULT __stdcall raw_GetReadItem(struct IDUISubtitleItem **pResult) = 0;
	virtual HRESULT __stdcall raw_SetReadSelStart(struct IDUISubtitleItem *pItem, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetReadSelEnd(struct IDUISubtitleItem *pItem, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetSelectedItems(short *nStart, short *nEnd  ) = 0;
	virtual HRESULT __stdcall raw_SetEnableGetWord(VARIANT_BOOL bIsEnableGetWord  ) = 0;
	virtual HRESULT __stdcall raw_IsEnableGetWord(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_FindContent(BSTR strContent, short nPosStart, enum DUI_FIND_POS eFindPos, short *pPosFind  ) = 0;
	virtual HRESULT __stdcall raw_SetItemScrollPos(short nIndex  ) = 0;
	virtual HRESULT __stdcall raw_SetItemScrollPosByID(short nID  ) = 0;
	virtual HRESULT __stdcall raw_SetSplitWord(BSTR strSpliteWord  ) = 0;
	virtual HRESULT __stdcall raw_GetSelectItem(struct IDUISubtitleItem **pItem  ) = 0;
	virtual HRESULT __stdcall raw_SetSelectItem(struct IDUISubtitleItem *pItem  ) = 0;

	//
	//Method Wrapper
	//
	struct IDUISubtitleItem * InsertItem(short  nIndex, long  nID, BOOL  bRefresh  );
	struct IDUISubtitleItem * AppendItem(long  nID, BOOL  bRefresh  );
	BOOL  RemoveItemByID(long  nID  );
	BOOL  RemoveItem(struct IDUISubtitleItem * pItem  );
	void RemoveAllItems();
	struct IDUISubtitleItem * GetItemByID(long  nID  );
	struct IDUISubtitleItem * GetAt(short  nIndex  );
	short  GetCount();
	void SetReadItem(struct IDUISubtitleItem * pItem  );
	void SetReadItemByID(long  nID  );
	struct IDUISubtitleItem * GetReadItem();
	BOOL  SetReadSelStart(struct IDUISubtitleItem * pItem  );
	BOOL  SetReadSelEnd(struct IDUISubtitleItem * pItem  );
	void GetSelectedItems(short * nStart, short * nEnd  );
	void SetEnableGetWord(BOOL  bIsEnableGetWord  );
	BOOL  IsEnableGetWord();
	void FindContent(tstring  strContent, short  nPosStart, enum DUI_FIND_POS  eFindPos, short * pPosFind  );
	void SetItemScrollPos(short  nIndex  );
	void SetItemScrollPosByID(short  nID  );
	void SetSplitWord(tstring  strSpliteWord  );
	void GetSelectItem(struct IDUISubtitleItem ** pItem  );
	void SetSelectItem(struct IDUISubtitleItem * pItem  );
};

struct __declspec(uuid("5e1e4f79-4929-4622-b8c4-5be4d3a4e848")) IDUISubtitleItem : IDispatch
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_SetText(BSTR strFirstText, BSTR strSecondText  ) = 0;
	virtual HRESULT __stdcall raw_GetFirstText(BSTR *pResult) = 0;
	virtual HRESULT __stdcall raw_GetSecondText(BSTR *pResult) = 0;
	virtual HRESULT __stdcall raw_SetID(long nID  ) = 0;
	virtual HRESULT __stdcall raw_GetID(long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetData(unsigned long dwData  ) = 0;
	virtual HRESULT __stdcall raw_GetData(unsigned long *pResult) = 0;
	virtual HRESULT __stdcall raw_GetResObject(BSTR strName, struct IDUIControlBase **pResult) = 0;
	virtual HRESULT __stdcall raw_GetItemControl(struct IDUIControlBase **pResult) = 0;

	//
	//Method Wrapper
	//
	void SetText(tstring  strFirstText, tstring  strSecondText  );
	tstring  GetFirstText();
	tstring  GetSecondText();
	void SetID(long  nID  );
	long  GetID();
	void SetData(unsigned long  dwData  );
	unsigned long  GetData();
	struct IDUIControlBase * GetResObject(tstring  strName  );
	struct IDUIControlBase * GetItemControl();
};

enum DUI_FIND_POS
{ 
	DUI_FIND_DOWN = 0,
	DUI_FIND_UP = 1 
};

struct __declspec(uuid("f6f079e4-07ae-420a-ab03-82683c40bd79")) _IDUISubtitleItemEvents : IDispatch
{
	//
	//Property
	//


	//
	//Method
	//

	//
	//Method Wrapper
	//
};

struct __declspec(uuid("e4c3529d-aea2-4373-aa0e-3be196c95b8b")) _IDUILyricCtrlEvents : IDispatch
{
	//
	//Property
	//


	//
	//Method
	//

	//
	//Method Wrapper
	//
};

struct __declspec(uuid("1896803e-13cd-4c28-83aa-0b0069a646a8")) IDUILyricCtrl : IDUIControlBase
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_SetText(BSTR strText  ) = 0;
	virtual HRESULT __stdcall raw_GetText(BSTR *pResult) = 0;
	virtual HRESULT __stdcall raw_SetOkText(unsigned short nIndex, unsigned short nPercent, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetOkText(unsigned short *pnIndex, unsigned short *pnPercent, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetOkTextIndex(unsigned short nIndex  ) = 0;
	virtual HRESULT __stdcall raw_GetOkTextIndex(unsigned short *pResult) = 0;
	virtual HRESULT __stdcall raw_SetOkTextPercent(unsigned short nPercent  ) = 0;
	virtual HRESULT __stdcall raw_GetOkTextPercent(unsigned short *pResult) = 0;
	virtual HRESULT __stdcall raw_SetTextColor(OLE_COLOR colorText, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetTextColor(OLE_COLOR *pResult) = 0;
	virtual HRESULT __stdcall raw_SetOkTextColor(OLE_COLOR colorOkText, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetOkTextColor(OLE_COLOR *pResult) = 0;
	virtual HRESULT __stdcall raw_SetTextStyle(struct IDUITextStyle *styleText  ) = 0;
	virtual HRESULT __stdcall raw_GetTextStyle(struct IDUITextStyle **pResult) = 0;
	virtual HRESULT __stdcall raw_SetOkTextStyle(struct IDUITextStyle *styleOkText  ) = 0;
	virtual HRESULT __stdcall raw_GetOkTextStyle(struct IDUITextStyle **pResult) = 0;

	//
	//Method Wrapper
	//
	void SetText(tstring  strText  );
	tstring  GetText();
	BOOL  SetOkText(unsigned short  nIndex, unsigned short  nPercent  );
	BOOL  GetOkText(unsigned short * pnIndex, unsigned short * pnPercent  );
	void SetOkTextIndex(unsigned short  nIndex  );
	unsigned short  GetOkTextIndex();
	void SetOkTextPercent(unsigned short  nPercent  );
	unsigned short  GetOkTextPercent();
	BOOL  SetTextColor(OLE_COLOR  colorText  );
	OLE_COLOR  GetTextColor();
	BOOL  SetOkTextColor(OLE_COLOR  colorOkText  );
	OLE_COLOR  GetOkTextColor();
	void SetTextStyle(struct IDUITextStyle * styleText  );
	struct IDUITextStyle * GetTextStyle();
	void SetOkTextStyle(struct IDUITextStyle * styleOkText  );
	struct IDUITextStyle * GetOkTextStyle();
};

struct __declspec(uuid("f6c3b6d0-2551-4377-93cc-7b7deb2f6b1f")) _IDUIPropGridEvents : IDispatch
{
	//
	//Property
	//


	//
	//Method
	//

	//
	//Method Wrapper
	//
};

struct __declspec(uuid("5d9cc551-52c3-44a3-a986-7dfcd3491d1c")) IDUIPropGrid : IDUIControlBase
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_AddPropItem(struct IDUIPropItem *pParentProp, enum DUIPROPGRID_PROPTYPE_ENUM ePropType, long nID, BSTR strName, VARIANT *value, BSTR strHelpTitle, BSTR strHelpContent, struct IDUIPropItem **pResult) = 0;

	//
	//Method Wrapper
	//
	struct IDUIPropItem * AddPropItem(struct IDUIPropItem * pParentProp, enum DUIPROPGRID_PROPTYPE_ENUM  ePropType, long  nID, tstring  strName, VARIANT * value, tstring  strHelpTitle, tstring  strHelpContent  );
};

struct __declspec(uuid("3f0016c8-d33b-4872-8539-2b8339c21fd8")) IDUIPropItem : IDispatch
{
	//
	//Property
	//


	//
	//Method
	//

	//
	//Method Wrapper
	//
};

enum DUIPROPGRID_PROPTYPE_ENUM
{ 
	DUIPROPGRID_PROPTYPE_BOOL = 0,
	DUIPROPGRID_PROPTYPE_COMBO = 3,
	DUIPROPGRID_PROPTYPE_FILE = 2,
	DUIPROPGRID_PROPTYPE_GROUP = 5,
	DUIPROPGRID_PROPTYPE_NUM = 4,
	DUIPROPGRID_PROPTYPE_STRING = 1 
};

struct __declspec(uuid("d7259207-ce7b-4f70-baa5-573a2b4370fe")) _IDUIPropItemEvents : IDispatch
{
	//
	//Property
	//


	//
	//Method
	//

	//
	//Method Wrapper
	//
};

struct __declspec(uuid("3f1abd8b-79cc-4e6b-8a28-0bb21ab765e1")) _IDUISpaceItemEvents : IDispatch
{
	//
	//Property
	//


	//
	//Method
	//

	//
	//Method Wrapper
	//
};


#include "AdvancedAll.tli"
#endif //__HEAD__ADVANCEDALL__