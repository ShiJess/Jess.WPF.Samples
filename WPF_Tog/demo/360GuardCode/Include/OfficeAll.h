#ifndef __HEAD__OFFICEALL__
#define __HEAD__OFFICEALL__
#include <comdef.h>

#include <xstring>
using namespace std;
#ifdef _UNICODE
#define tstring wstring
#else
#define tstring string
#endif

struct __declspec(uuid("53e06287-374d-4e54-92f9-22cdec54b17a")) DUITaskPanelScrollButton;
struct __declspec(uuid("0c15c9e1-3ad1-47f2-aa39-9fc18e45ff1c")) _IDUITaskPanelScrollButtonEvents;
struct __declspec(uuid("01b8e142-aad4-42eb-b125-e96f1724f456")) DUITaskPanelGroupItem;
struct __declspec(uuid("da9288c9-2584-4b72-a122-5dfc597d5af8")) _IDUITaskPanelGroupItemEvents;
struct __declspec(uuid("d3542b1f-0786-4b36-9780-d5713af20fd6")) IDUITaskPanelGroups;
struct __declspec(uuid("e2e3d9a4-3422-4d93-93da-28e89d0023d7")) DUITaskPanelGroups;
struct __declspec(uuid("1206ac55-5b39-4856-a5a2-038e5b2f98b7")) _IDUITaskPanelGroupsEvents;
struct __declspec(uuid("99995235-7245-4061-bfde-506359dff4a8")) IDUITaskPanelGroupItems;
struct __declspec(uuid("92b90bc8-47b2-48a6-927e-3260872db910")) DUITaskPanelGroupItems;
struct __declspec(uuid("5e710613-7cf1-4728-a999-1a9be9aa5677")) _IDUITaskPanelGroupItemsEvents;
struct __declspec(uuid("978c32fd-b195-4107-882b-62df1594b543")) DUITaskPanelItems;
struct __declspec(uuid("9abedc8a-6de3-4049-ab4a-47d5a4aa5642")) _IDUITaskPanelItemsEvents;
struct __declspec(uuid("cca1de0c-46a7-4cdf-85c4-315aae55be16")) DUITaskPanelGroup;
struct __declspec(uuid("407e0579-71a4-4735-a2fc-123375f57fb9")) _IDUITaskPanelGroupEvents;
struct __declspec(uuid("d598b34f-a9f0-4e07-86ec-6889823c2c72")) DUITaskPanelItem;
struct __declspec(uuid("e000621e-9dec-4146-9e4b-bbe2151796f3")) _IDUITaskPanelItemEvents;
struct __declspec(uuid("4c1eda3e-fbfd-48e1-91d6-dca2c7abdd91")) IDUITaskPanelScrollButton;
enum DUITASKPANELITEM_LAYOUT;

struct __declspec(uuid("438584e9-2daa-4327-97ae-302313878cb6")) IDUITaskPanelGroupItem;
struct __declspec(uuid("1897ff59-1e97-4be2-ba79-9bb06f566deb")) IDUITaskPanelGroup;
enum DUITASKPANELITEM_TYPE;

struct __declspec(uuid("861029da-879c-4ffa-b746-2963b3d11c2f")) IDUITaskPanelItem;
struct __declspec(uuid("11b533ef-6732-42de-9966-6d53bd818e89")) IDUITaskPanelItems;
struct __declspec(uuid("60ed1898-43d2-45e3-873d-66ad2161cc4a")) IDUITaskPanel;
struct __declspec(uuid("f6d98ce5-023c-4816-87ed-9ea7b263d290")) DUITaskPanel;
struct __declspec(uuid("334c4430-6c91-4cd9-989f-d320e8d32d02")) _IDUITaskPanelEvents;
enum DUITASKPANEL_MSG_ID;

enum DUITASKPANEL_STATE;

enum DUITASKPANEL_ITEM_STATE;

struct __declspec(uuid("cc43d690-b051-42c0-9316-ff2007cc77f0")) IDUITreeToolStatic;
struct __declspec(uuid("c135371b-1f27-45c9-9ccb-395009d05bfa")) DUITreeToolStatic;
struct __declspec(uuid("4730a708-998b-42c9-8164-ab0f192adc59")) _IDUITreeToolStaticEvents;
struct __declspec(uuid("7bbd7549-4606-4729-ba4c-74ef96f5bb9d")) IDUITreeToolRadio;
struct __declspec(uuid("41f41c81-1efb-4415-ba23-d99233a209d4")) DUITreeToolRadio;
struct __declspec(uuid("dee5198d-7275-4b6c-89e0-1195a948b9f6")) _IDUITreeToolRadioEvents;
struct __declspec(uuid("3b044072-ff13-4aaa-bddb-98cbfaf98e3a")) IDUITreeToolCheck;
struct __declspec(uuid("0c2110fc-0635-4ce8-9919-d90e44e2e4e1")) DUITreeToolCheck;
struct __declspec(uuid("137e3e83-76ca-4829-a398-eda5410a6eba")) _IDUITreeToolCheckEvents;
struct __declspec(uuid("17d327e6-4fc8-4c59-81f7-88b7b7ca45e9")) IDUITreeToolButton;
struct __declspec(uuid("ce51ec67-3131-417c-a234-9038bd7e844d")) DUITreeToolButton;
struct __declspec(uuid("58703b69-ba83-4ce0-8676-57bff7d3cbe0")) _IDUITreeToolButtonEvents;
struct __declspec(uuid("aec41f8e-7a8b-4b2d-8507-707e0a51e80e")) DUITreeToolItemBase;
struct __declspec(uuid("4dd5e499-31d7-437b-8e05-96afbc6f3ec4")) _IDUITreeToolItemBaseEvents;
struct __declspec(uuid("513a3d4f-90c3-4786-84e0-84f0f7ce8192")) DUITreeToolBar;
struct __declspec(uuid("de28ba00-7cc1-480a-934e-2035303fdd5c")) _IDUITreeToolBarEvents;
struct __declspec(uuid("c11426e8-4ca4-4260-8db2-92a4c0eeda46")) DUITreeItem;
struct __declspec(uuid("ceb77c1b-6883-4c1c-9815-804d363caebd")) _IDUITreeItemEvents;
struct __declspec(uuid("6efb8ac6-61ba-4d3f-a599-bad68068fd5b")) IDUITreeItem;
struct __declspec(uuid("aa068e64-2cde-434a-8b85-8b42682597cc")) IDUITreeToolItemBase;
enum DUI_TREETOOL_STYLE;

struct __declspec(uuid("626d297c-dc98-410c-8e56-b0408e1581c0")) IDUITreeToolBar;
enum DUISIMPLETREE_STATE;

struct __declspec(uuid("88a3196a-3223-4f58-874b-5d6fc4b7d74e")) IDUISimpleTree;
struct __declspec(uuid("90ab8e99-205a-404d-9870-357bf0bd7607")) DUISimpleTree;
struct __declspec(uuid("4def30a4-bd8f-4054-af9f-b999ff79f223")) _IDUISimpleTreeEvents;
struct __declspec(uuid("00000000-0000-0000-0000-000000000000")) DUITreeTool_MsgInfo;
enum DUITREE_NOTIFY;

enum DUIOUTLOOKBAR_STATE;

struct __declspec(uuid("55fe5340-d39b-4589-83ae-db35fb4bd1c0")) IDUIOutLookBar;
struct __declspec(uuid("7120ec0b-07f1-4f3f-a15e-4b3b1df081d9")) DUIOutLookBar;
struct __declspec(uuid("ba8bf255-5932-49e8-8e11-22bafd0d01d2")) _IDUIOutLookBarEvents;
enum DUIOUTBAR_NOTIFY;

enum DUIOUTBAR_NOTIFY
{ 
	DUIOUTBAR_FOLDERCHANGE = 2994,
	DUIOUTBAR_HITITEM = 2992,
	DUIOUTBAR_RBUTTONDOWN = 2993 
};

struct __declspec(uuid("ba8bf255-5932-49e8-8e11-22bafd0d01d2")) _IDUIOutLookBarEvents : IDispatch
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

struct __declspec(uuid("55fe5340-d39b-4589-83ae-db35fb4bd1c0")) IDUIOutLookBar : IDUIControlBase
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_SetDrawBackColor(VARIANT_BOOL bDrawColor, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetDrawBackColor(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetBackImage(struct IDUIImageBase *pImageBae, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetBackImage(struct IDUIImageBase **pResult) = 0;
	virtual HRESULT __stdcall raw_SetBackColor(struct IFillColor *pFillColor, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetBackColor(struct IFillColor **pResult) = 0;
	virtual HRESULT __stdcall raw_SetDrawFolderColor(VARIANT_BOOL bDrawColor, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetDrawFolderColor(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetFolderBorderSize(short *pResult) = 0;
	virtual HRESULT __stdcall raw_SetFolderBorderSize(short nSize, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetFolderHeight(short *pResult) = 0;
	virtual HRESULT __stdcall raw_SetFolderHeight(short nHeight, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetFolderImage(enum DUIOUTLOOKBAR_STATE eState, struct IDUIImageBase *pImageBae, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetFolderImage(enum DUIOUTLOOKBAR_STATE eState, struct IDUIImageBase **pResult) = 0;
	virtual HRESULT __stdcall raw_SetFolderBorderColor(enum DUIOUTLOOKBAR_STATE eState, struct IFillColor *pFillColor, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetFolderBorderColor(enum DUIOUTLOOKBAR_STATE eState, struct IFillColor **pResult) = 0;
	virtual HRESULT __stdcall raw_SetFolderBackColor(enum DUIOUTLOOKBAR_STATE eState, struct IFillColor *pFillColor, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetFolderBackColor(enum DUIOUTLOOKBAR_STATE eState, struct IFillColor **pResult) = 0;
	virtual HRESULT __stdcall raw_SetFolderTextStyle(enum DUIOUTLOOKBAR_STATE eState, struct IDUITextStyle *pTextStyle, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetFolderTextStyle(enum DUIOUTLOOKBAR_STATE eState, struct IDUITextStyle **pResult) = 0;
	virtual HRESULT __stdcall raw_SetAnimationTickCount(short nCount, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetAnimationTickCount(short *pResult) = 0;
	virtual HRESULT __stdcall raw_SetFolderSelected(OLE_HANDLE hFolder, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetFolderSelected(OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_AddFolderBar(BSTR strText, OLE_HANDLE hChild, long exData, VARIANT_BOOL bRedraw, OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_AddFolder(BSTR strText, long exData, VARIANT_BOOL bRedraw, OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_DelFolderBar(OLE_HANDLE hFolderBar, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetFolderGraphics(enum DUIOUTLOOKBAR_STATE eState, struct IDUIImageBase *pImageBae, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetFolderGraphics(enum DUIOUTLOOKBAR_STATE eState, VARIANT_BOOL bExpand, struct IDUIImageBase **pResult) = 0;
	virtual HRESULT __stdcall raw_SetUpDownMode(VARIANT_BOOL bUpDownMode, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_IsUpDownMode(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetGraphicOffset(short nOffsetX, short nOffsetY, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetGraphicOffset(short *pnOffsetX, short *pnOffsetY  ) = 0;
	virtual HRESULT __stdcall raw_SetGraphicsX(short nOffsetX, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetGraphicsX(short *pResult) = 0;
	virtual HRESULT __stdcall raw_SetGraphicsY(short nOffsetY, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetGraphicsY(short *pResult) = 0;
	virtual HRESULT __stdcall raw_GetFolderCount(short *pResult) = 0;
	virtual HRESULT __stdcall raw_SetFolderText(OLE_HANDLE hFolder, BSTR bstrText, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetFolderText(OLE_HANDLE hFolder, BSTR *pResult) = 0;
	virtual HRESULT __stdcall raw_GetFolderChild(OLE_HANDLE hFolder, OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_GetFolderData(OLE_HANDLE hFolder, long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetFolderChild(OLE_HANDLE hFolder, OLE_HANDLE hChild  ) = 0;
	virtual HRESULT __stdcall raw_SetFolderData(OLE_HANDLE hFolder, long dwData  ) = 0;
	virtual HRESULT __stdcall raw_AddItem(OLE_HANDLE hFolder, BSTR strText, BSTR strImagePath, short nImageCount, VARIANT_BOOL bHorz, long exData, OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_SetDrawItemColor(VARIANT_BOOL bDrawColor, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetDrawItemColor(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetItemHeight(short nHeight, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetItemHeight(short *pResult) = 0;
	virtual HRESULT __stdcall raw_SetItemSpace(short nSpace, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetItemSpace(short *pResult) = 0;
	virtual HRESULT __stdcall raw_SetItemBackImage(enum DUIOUTLOOKBAR_STATE eState, struct IDUIImageBase *pImageBase, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetItemBackImage(enum DUIOUTLOOKBAR_STATE eState, struct IDUIImageBase **pResult) = 0;
	virtual HRESULT __stdcall raw_SetItemBackColor(enum DUIOUTLOOKBAR_STATE eState, struct IFillColor *pFillColor, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetItemBackColor(enum DUIOUTLOOKBAR_STATE eState, struct IFillColor **pResult) = 0;
	virtual HRESULT __stdcall raw_SetItemTextStyle(enum DUIOUTLOOKBAR_STATE eState, struct IDUITextStyle *pTextStyle, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetItemTextStyle(enum DUIOUTLOOKBAR_STATE eState, struct IDUITextStyle **pResult) = 0;
	virtual HRESULT __stdcall raw_SetUpArrowImage(enum DUIOUTLOOKBAR_STATE eState, struct IDUIImageBase *pImageBae, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetUpArrowImage(enum DUIOUTLOOKBAR_STATE eState, struct IDUIImageBase **pResult) = 0;
	virtual HRESULT __stdcall raw_SetDownArrowImage(enum DUIOUTLOOKBAR_STATE eState, struct IDUIImageBase *pImageBae, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetDownArrowImage(enum DUIOUTLOOKBAR_STATE eState, struct IDUIImageBase **pResult) = 0;
	virtual HRESULT __stdcall raw_SetArrowSpace(short nOffsetX, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetArrowSpace(short *pResult) = 0;
	virtual HRESULT __stdcall raw_RemoveItem(OLE_HANDLE hFolder, OLE_HANDLE hItem, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetItemText(OLE_HANDLE hFolder, OLE_HANDLE hItem, BSTR *pResult) = 0;
	virtual HRESULT __stdcall raw_SetItemText(OLE_HANDLE hFolder, OLE_HANDLE hItem, BSTR text, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetItemCount(OLE_HANDLE hFolder, short *pResult) = 0;
	virtual HRESULT __stdcall raw_AddItemByText(OLE_HANDLE hFolder, BSTR strText, OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_SetItemImage(OLE_HANDLE hFolder, OLE_HANDLE hItem, BSTR imagePath, short nImageCount, VARIANT_BOOL bIsHorz, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetBackBorderSize(short *pResult) = 0;
	virtual HRESULT __stdcall raw_SetBackBorderSize(short nSize, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetItemData(OLE_HANDLE hFolder, OLE_HANDLE hItem, long dwData  ) = 0;
	virtual HRESULT __stdcall raw_GetItemData(OLE_HANDLE hFolder, OLE_HANDLE hItem, long *pResult) = 0;
	virtual HRESULT __stdcall raw_RemoveAllItems(OLE_HANDLE hFolder, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_RemoveAllFolders(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetSelectedItem(OLE_HANDLE hItem  ) = 0;
	virtual HRESULT __stdcall raw_GetSelectedItem(OLE_HANDLE *phResult  ) = 0;
	virtual HRESULT __stdcall raw_SetSmallIconView(VARIANT_BOOL bSmallIcon  ) = 0;
	virtual HRESULT __stdcall raw_IsSmallIconView(VARIANT_BOOL *pbResult  ) = 0;
	virtual HRESULT __stdcall raw_SetItemIconOffset(short nOffset, VARIANT_BOOL bRedraw  ) = 0;

	//
	//Method Wrapper
	//
	BOOL  SetDrawBackColor(BOOL  bDrawColor, BOOL  bRedraw  );
	BOOL  GetDrawBackColor();
	BOOL  SetBackImage(struct IDUIImageBase * pImageBae, BOOL  bRedraw  );
	struct IDUIImageBase * GetBackImage();
	BOOL  SetBackColor(struct IFillColor * pFillColor, BOOL  bRedraw  );
	struct IFillColor * GetBackColor();
	BOOL  SetDrawFolderColor(BOOL  bDrawColor, BOOL  bRedraw  );
	BOOL  GetDrawFolderColor();
	short  GetFolderBorderSize();
	BOOL  SetFolderBorderSize(short  nSize, BOOL  bRedraw  );
	short  GetFolderHeight();
	BOOL  SetFolderHeight(short  nHeight, BOOL  bRedraw  );
	BOOL  SetFolderImage(enum DUIOUTLOOKBAR_STATE  eState, struct IDUIImageBase * pImageBae, BOOL  bRedraw  );
	struct IDUIImageBase * GetFolderImage(enum DUIOUTLOOKBAR_STATE  eState  );
	BOOL  SetFolderBorderColor(enum DUIOUTLOOKBAR_STATE  eState, struct IFillColor * pFillColor, BOOL  bRedraw  );
	struct IFillColor * GetFolderBorderColor(enum DUIOUTLOOKBAR_STATE  eState  );
	BOOL  SetFolderBackColor(enum DUIOUTLOOKBAR_STATE  eState, struct IFillColor * pFillColor, BOOL  bRedraw  );
	struct IFillColor * GetFolderBackColor(enum DUIOUTLOOKBAR_STATE  eState  );
	BOOL  SetFolderTextStyle(enum DUIOUTLOOKBAR_STATE  eState, struct IDUITextStyle * pTextStyle, BOOL  bRedraw  );
	struct IDUITextStyle * GetFolderTextStyle(enum DUIOUTLOOKBAR_STATE  eState  );
	BOOL  SetAnimationTickCount(short  nCount, BOOL  bRedraw  );
	short  GetAnimationTickCount();
	BOOL  SetFolderSelected(OLE_HANDLE  hFolder, BOOL  bRedraw  );
	OLE_HANDLE  GetFolderSelected();
	OLE_HANDLE  AddFolderBar(tstring  strText, OLE_HANDLE  hChild, long  exData, BOOL  bRedraw  );
	OLE_HANDLE  AddFolder(tstring  strText, long  exData, BOOL  bRedraw  );
	BOOL  DelFolderBar(OLE_HANDLE  hFolderBar, BOOL  bRedraw  );
	BOOL  SetFolderGraphics(enum DUIOUTLOOKBAR_STATE  eState, struct IDUIImageBase * pImageBae, BOOL  bRedraw  );
	struct IDUIImageBase * GetFolderGraphics(enum DUIOUTLOOKBAR_STATE  eState, BOOL  bExpand  );
	BOOL  SetUpDownMode(BOOL  bUpDownMode, BOOL  bRedraw  );
	BOOL  IsUpDownMode();
	BOOL  SetGraphicOffset(short  nOffsetX, short  nOffsetY, BOOL  bRedraw  );
	void GetGraphicOffset(short * pnOffsetX, short * pnOffsetY  );
	BOOL  SetGraphicsX(short  nOffsetX, BOOL  bRedraw  );
	short  GetGraphicsX();
	BOOL  SetGraphicsY(short  nOffsetY, BOOL  bRedraw  );
	short  GetGraphicsY();
	short  GetFolderCount();
	BOOL  SetFolderText(OLE_HANDLE  hFolder, tstring  bstrText  );
	tstring  GetFolderText(OLE_HANDLE  hFolder  );
	OLE_HANDLE  GetFolderChild(OLE_HANDLE  hFolder  );
	long  GetFolderData(OLE_HANDLE  hFolder  );
	void SetFolderChild(OLE_HANDLE  hFolder, OLE_HANDLE  hChild  );
	void SetFolderData(OLE_HANDLE  hFolder, long  dwData  );
	OLE_HANDLE  AddItem(OLE_HANDLE  hFolder, tstring  strText, tstring  strImagePath, short  nImageCount, BOOL  bHorz, long  exData  );
	BOOL  SetDrawItemColor(BOOL  bDrawColor, BOOL  bRedraw  );
	BOOL  GetDrawItemColor();
	BOOL  SetItemHeight(short  nHeight, BOOL  bRedraw  );
	short  GetItemHeight();
	BOOL  SetItemSpace(short  nSpace, BOOL  bRedraw  );
	short  GetItemSpace();
	BOOL  SetItemBackImage(enum DUIOUTLOOKBAR_STATE  eState, struct IDUIImageBase * pImageBase, BOOL  bRedraw  );
	struct IDUIImageBase * GetItemBackImage(enum DUIOUTLOOKBAR_STATE  eState  );
	BOOL  SetItemBackColor(enum DUIOUTLOOKBAR_STATE  eState, struct IFillColor * pFillColor, BOOL  bRedraw  );
	struct IFillColor * GetItemBackColor(enum DUIOUTLOOKBAR_STATE  eState  );
	BOOL  SetItemTextStyle(enum DUIOUTLOOKBAR_STATE  eState, struct IDUITextStyle * pTextStyle, BOOL  bRedraw  );
	struct IDUITextStyle * GetItemTextStyle(enum DUIOUTLOOKBAR_STATE  eState  );
	BOOL  SetUpArrowImage(enum DUIOUTLOOKBAR_STATE  eState, struct IDUIImageBase * pImageBae, BOOL  bRedraw  );
	struct IDUIImageBase * GetUpArrowImage(enum DUIOUTLOOKBAR_STATE  eState  );
	BOOL  SetDownArrowImage(enum DUIOUTLOOKBAR_STATE  eState, struct IDUIImageBase * pImageBae, BOOL  bRedraw  );
	struct IDUIImageBase * GetDownArrowImage(enum DUIOUTLOOKBAR_STATE  eState  );
	BOOL  SetArrowSpace(short  nOffsetX, BOOL  bRedraw  );
	short  GetArrowSpace();
	BOOL  RemoveItem(OLE_HANDLE  hFolder, OLE_HANDLE  hItem, BOOL  bRedraw  );
	tstring  GetItemText(OLE_HANDLE  hFolder, OLE_HANDLE  hItem  );
	BOOL  SetItemText(OLE_HANDLE  hFolder, OLE_HANDLE  hItem, tstring  text  );
	short  GetItemCount(OLE_HANDLE  hFolder  );
	OLE_HANDLE  AddItemByText(OLE_HANDLE  hFolder, tstring  strText  );
	BOOL  SetItemImage(OLE_HANDLE  hFolder, OLE_HANDLE  hItem, tstring  imagePath, short  nImageCount, BOOL  bIsHorz  );
	short  GetBackBorderSize();
	BOOL  SetBackBorderSize(short  nSize, BOOL  bRedraw  );
	void SetItemData(OLE_HANDLE  hFolder, OLE_HANDLE  hItem, long  dwData  );
	long  GetItemData(OLE_HANDLE  hFolder, OLE_HANDLE  hItem  );
	BOOL  RemoveAllItems(OLE_HANDLE  hFolder  );
	BOOL  RemoveAllFolders();
	void SetSelectedItem(OLE_HANDLE  hItem  );
	void GetSelectedItem(OLE_HANDLE * phResult  );
	void SetSmallIconView(BOOL  bSmallIcon  );
	void IsSmallIconView(VARIANT_BOOL * pbResult  );
	void SetItemIconOffset(short  nOffset, BOOL  bRedraw  );
};

enum DUIOUTLOOKBAR_STATE
{ 
	DUIOUTLOOKBAR_STATE_DISABLED = 3,
	DUIOUTLOOKBAR_STATE_HOT = 1,
	DUIOUTLOOKBAR_STATE_LAST = 4,
	DUIOUTLOOKBAR_STATE_NORMAL = 0,
	DUIOUTLOOKBAR_STATE_SELECTED = 2 
};

enum DUITREE_NOTIFY
{ 
	DUITREE_CHECKITEM = 2972,
	DUITREE_EXPANDCHANGE = 2970,
	DUITREE_HEADLBUTTONUP = 2966,
	DUITREE_ITEMCHANGE = 2969,
	DUITREE_ITEMDRAG = 2967,
	DUITREE_LBUTTONDBLCLK = 2961,
	DUITREE_LBUTTONDOWN = 2963,
	DUITREE_LBUTTONUP = 2962,
	DUITREE_MOUSELEAVE = 2971,
	DUITREE_MOUSEMOVE = 2960,
	DUITREE_RBUTTONDOWN = 2965,
	DUITREE_RBUTTONUP = 2964,
	DUITREE_TOOL_COMMAND = 2968 
};

struct __declspec(uuid("00000000-0000-0000-0000-000000000000")) DUITreeTool_MsgInfo
{
	long 	lParam1;
	long 	lParam2;
};

struct __declspec(uuid("4def30a4-bd8f-4054-af9f-b999ff79f223")) _IDUISimpleTreeEvents : IDispatch
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

struct __declspec(uuid("88a3196a-3223-4f58-874b-5d6fc4b7d74e")) IDUISimpleTree : IDUIControlBase
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_SetDrawBackColor(VARIANT_BOOL bDrawColor, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetDrawBackColor(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetBackImage(struct IDUIImageBase *pImageBae, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetBackImage(struct IDUIImageBase **pResult) = 0;
	virtual HRESULT __stdcall raw_SetBackColor(struct IFillColor *pFillColor, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetBackColor(struct IFillColor **pResult) = 0;
	virtual HRESULT __stdcall raw_SetDrawItemColor(VARIANT_BOOL bDrawColor, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetDrawItemColor(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetItemImage(enum DUISIMPLETREE_STATE eState, struct IDUIImageBase *pImageBase, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetItemImage(enum DUISIMPLETREE_STATE eState, struct IDUIImageBase **pResult) = 0;
	virtual HRESULT __stdcall raw_SetItemColor(enum DUISIMPLETREE_STATE eState, struct IFillColor *pFillColor, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetItemColor(enum DUISIMPLETREE_STATE eState, struct IFillColor **pResult) = 0;
	virtual HRESULT __stdcall raw_SetTextStyle(enum DUISIMPLETREE_STATE eState, struct IDUITextStyle *pTextStyle, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetTextStyle(enum DUISIMPLETREE_STATE eState, struct IDUITextStyle **pResult) = 0;
	virtual HRESULT __stdcall raw_SetButtonImage(enum DUISIMPLETREE_STATE eState, VARIANT_BOOL bChecked, struct IDUIImageBase *pImageBase, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetButtonImage(enum DUISIMPLETREE_STATE eState, VARIANT_BOOL bChecked, struct IDUIImageBase **pResult) = 0;
	virtual HRESULT __stdcall raw_SetHasLines(VARIANT_BOOL bHasLines, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_IsHasLines(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetHasButtons(VARIANT_BOOL bHasButtons, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_IsHasButtons(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetLineOnRoot(VARIANT_BOOL bLineOnRoot, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_IsLineOnRoot(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetLineColor(OLE_COLOR clrLine, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetLineColor(OLE_COLOR *pResult) = 0;
	virtual HRESULT __stdcall raw_SetLineSize(short nSize, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetLineSize(short *pResult) = 0;
	virtual HRESULT __stdcall raw_SetIndent(short nIndent, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetIndent(short *pResult) = 0;
	virtual HRESULT __stdcall raw_SetItemHeight(short nHeight, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetItemHeight(short *pResult) = 0;
	virtual HRESULT __stdcall raw_InsertChild(OLE_HANDLE hParent, OLE_HANDLE hInsertAfter, BSTR strText, VARIANT_BOOL bRedraw, OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_InsertSibling(OLE_HANDLE hpInsertAfter, BSTR strText, VARIANT_BOOL bRedraw, OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_GetChildItem(OLE_HANDLE hParent, OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_ItemHasChildren(OLE_HANDLE hParent, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetParentItem(OLE_HANDLE hItem, OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_GetRootItem(OLE_HANDLE hItem, OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_DeleteItem(OLE_HANDLE hItem, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_Expand(OLE_HANDLE hItem, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SelectItem(OLE_HANDLE hItem, VARIANT_BOOL bChangePos, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetSelectedItem(OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_SetItemText(OLE_HANDLE hItem, BSTR strText, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetItemText(OLE_HANDLE hItem, BSTR *pResult) = 0;
	virtual HRESULT __stdcall raw_HitTest(long nX, long nY, OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_GetItemRect(OLE_HANDLE hItem, struct SkinRect *pResult) = 0;
	virtual HRESULT __stdcall raw_SetScrollSize(long nSize  ) = 0;
	virtual HRESULT __stdcall raw_GetScrollSize(long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetLeftScroll(VARIANT_BOOL bLeftScroll  ) = 0;
	virtual HRESULT __stdcall raw_IsLeftScroll(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_AppendChild(OLE_HANDLE hParent, BSTR strText, VARIANT_BOOL bRedraw, OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_SetItemIconByPath(OLE_HANDLE hItem, BSTR strPath, BSTR strSelPath, OLE_COLOR clrTrans, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetIconOffset(short nOffsetX, short nOffsetY  ) = 0;
	virtual HRESULT __stdcall raw_GetIconOffset(short *pnOffsetX, short *pnOffsetY  ) = 0;
	virtual HRESULT __stdcall raw_SetShowIcon(VARIANT_BOOL bShowIcon  ) = 0;
	virtual HRESULT __stdcall raw_IsShowIcon(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetItemIconByImgBase(OLE_HANDLE hItem, struct IDUIImageBase *pImageBase, struct IDUIImageBase *pSelImageBase, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetItemIconByIcon(OLE_HANDLE hItem, OLE_HANDLE hIcon, OLE_HANDLE hSelIcon, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetItemImageIndex(OLE_HANDLE hItem, long nImage, long nSelImage, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetImageList(OLE_HANDLE hImageList, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetItemData(OLE_HANDLE hItem, OLE_HANDLE hData, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetItemData(OLE_HANDLE hItem, OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_GetNextSiblingItem(OLE_HANDLE hItem, OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_GetPrevSiblingItem(OLE_HANDLE hItem, OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_SetItemTextStyle(OLE_HANDLE hItem, enum DUISIMPLETREE_STATE eState, struct IDUITextStyle *pTextStyle, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetItemTextStyle(OLE_HANDLE hItem, enum DUISIMPLETREE_STATE eState, struct IDUITextStyle **pResult) = 0;
	virtual HRESULT __stdcall raw_GetItemCount(short *pResult) = 0;
	virtual HRESULT __stdcall raw_GetChildItemCount(OLE_HANDLE hItem, short *pResult) = 0;
	virtual HRESULT __stdcall raw_SetStateOffset(short nOffsetX, short nOffsetY  ) = 0;
	virtual HRESULT __stdcall raw_GetStateOffset(short *pnOffsetX, short *pnOffsetY  ) = 0;
	virtual HRESULT __stdcall raw_SetShowState(VARIANT_BOOL bShowIcon  ) = 0;
	virtual HRESULT __stdcall raw_IsShowState(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetStateImage(enum DUISIMPLETREE_STATE eState, struct IDUIImageBase *pImageBase, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetStateImage(enum DUISIMPLETREE_STATE eState, struct IDUIImageBase **pResult) = 0;
	virtual HRESULT __stdcall raw_SetStateItem(OLE_HANDLE hItem, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetStateItem(OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_SetChildList(OLE_HANDLE pItem, VARIANT_BOOL bIsChildList  ) = 0;
	virtual HRESULT __stdcall raw_IsChildList(OLE_HANDLE pItem, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetNodeItemText(OLE_HANDLE pItem, long nCols, BSTR strText, VARIANT_BOOL bRedraw  ) = 0;
	virtual HRESULT __stdcall raw_GetNodeItemText(OLE_HANDLE pItem, long nCols, BSTR *pResult) = 0;
	virtual HRESULT __stdcall raw_SetColsWidth(long nWidth, long nCols  ) = 0;
	virtual HRESULT __stdcall raw_GetColsWidth(long nCols, long *nResult  ) = 0;
	virtual HRESULT __stdcall raw_SetColsTextStyle(long nCols, enum DUISIMPLETREE_STATE eState, struct IDUITextStyle *pTextStyle  ) = 0;
	virtual HRESULT __stdcall raw_GetColsTextStyle(long nCols, enum DUISIMPLETREE_STATE eState, struct IDUITextStyle **pResult) = 0;
	virtual HRESULT __stdcall raw_InsertCols(short nCols, BSTR strText, short nWidth, short *pResult) = 0;
	virtual HRESULT __stdcall raw_Sort(OLE_HANDLE pCallBackFunc, OLE_HANDLE pParentNode  ) = 0;
	virtual HRESULT __stdcall raw_GetItemIconImgBase(OLE_HANDLE hItem, struct IDUIImageBase **pResult) = 0;
	virtual HRESULT __stdcall raw_DeleteChildren(OLE_HANDLE hItem, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetChildNeedIndent(VARIANT_BOOL bNeedIndent  ) = 0;
	virtual HRESULT __stdcall raw_GetChildNeedIndent(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_RefreshItem(OLE_HANDLE hItem  ) = 0;
	virtual HRESULT __stdcall raw_GetItemToolBar(OLE_HANDLE hItem, struct IDUITreeToolBar **pResult) = 0;
	virtual HRESULT __stdcall raw_SetCheckBoxStyle(VARIANT_BOOL bHasCheckBox, VARIANT_BOOL bRedraw  ) = 0;
	virtual HRESULT __stdcall raw_GetCheckBoxStyle(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetSupportMultiSel(VARIANT_BOOL bMutilSel  ) = 0;
	virtual HRESULT __stdcall raw_IsSupportMultiSel(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetCheckItemCount(short *pResult) = 0;
	virtual HRESULT __stdcall raw_GetFirstCheckItem(struct IDUITreeItem **pResult) = 0;
	virtual HRESULT __stdcall raw_GetNextCheckItem(struct IDUITreeItem *pItem, struct IDUITreeItem **pResult) = 0;
	virtual HRESULT __stdcall raw_GetSelectedItemCount(short *pnResult  ) = 0;
	virtual HRESULT __stdcall raw_GetFirstSelectedItem(struct IDUITreeItem **pResult) = 0;
	virtual HRESULT __stdcall raw_GetNextSelectedItem(struct IDUITreeItem *pItem, struct IDUITreeItem **pResult) = 0;
	virtual HRESULT __stdcall raw_SetSupportToolBar(VARIANT_BOOL bSupport  ) = 0;
	virtual HRESULT __stdcall raw_IsSupportToolBar(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetToolBarOffset(short nOffset  ) = 0;
	virtual HRESULT __stdcall raw_GetToolBarOffset(short *pResult) = 0;
	virtual HRESULT __stdcall raw_SetToolMinSpaceWithText(short nSpace  ) = 0;
	virtual HRESULT __stdcall raw_GetToolMinSpaceWithText(short *pResult) = 0;
	virtual HRESULT __stdcall raw_IsNodeExpand(OLE_HANDLE hItem, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SortSingleNode(OLE_HANDLE pCallBackFunc, OLE_HANDLE pParentNode, OLE_HANDLE pSingleNode  ) = 0;
	virtual HRESULT __stdcall raw_SwapNode(OLE_HANDLE pNode1, OLE_HANDLE pNode2  ) = 0;
	virtual HRESULT __stdcall raw_SetItmeHBitmap(OLE_HANDLE hItem, OLE_HANDLE hBitmap, OLE_HANDLE hSelBitmap, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetItemHBitmap(OLE_HANDLE hItem, OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_GetItemByIndex(short nIndex, OLE_HANDLE hParent, OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_SetScrollTop() = 0;
	virtual HRESULT __stdcall raw_SetScrollBottom() = 0;
	virtual HRESULT __stdcall raw_CheckItem(OLE_HANDLE hItem, VARIANT_BOOL bCheck  ) = 0;
	virtual HRESULT __stdcall raw_IsCheckItem(OLE_HANDLE hItem, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetItemNodeRect(OLE_HANDLE hItem, struct SkinRect *pResult) = 0;

	//
	//Method Wrapper
	//
	BOOL  SetDrawBackColor(BOOL  bDrawColor, BOOL  bRedraw  );
	BOOL  GetDrawBackColor();
	BOOL  SetBackImage(struct IDUIImageBase * pImageBae, BOOL  bRedraw  );
	struct IDUIImageBase * GetBackImage();
	BOOL  SetBackColor(struct IFillColor * pFillColor, BOOL  bRedraw  );
	struct IFillColor * GetBackColor();
	BOOL  SetDrawItemColor(BOOL  bDrawColor, BOOL  bRedraw  );
	BOOL  GetDrawItemColor();
	BOOL  SetItemImage(enum DUISIMPLETREE_STATE  eState, struct IDUIImageBase * pImageBase, BOOL  bRedraw  );
	struct IDUIImageBase * GetItemImage(enum DUISIMPLETREE_STATE  eState  );
	BOOL  SetItemColor(enum DUISIMPLETREE_STATE  eState, struct IFillColor * pFillColor, BOOL  bRedraw  );
	struct IFillColor * GetItemColor(enum DUISIMPLETREE_STATE  eState  );
	BOOL  SetTextStyle(enum DUISIMPLETREE_STATE  eState, struct IDUITextStyle * pTextStyle, BOOL  bRedraw  );
	struct IDUITextStyle * GetTextStyle(enum DUISIMPLETREE_STATE  eState  );
	BOOL  SetButtonImage(enum DUISIMPLETREE_STATE  eState, BOOL  bChecked, struct IDUIImageBase * pImageBase, BOOL  bRedraw  );
	struct IDUIImageBase * GetButtonImage(enum DUISIMPLETREE_STATE  eState, BOOL  bChecked  );
	BOOL  SetHasLines(BOOL  bHasLines, BOOL  bRedraw  );
	BOOL  IsHasLines();
	BOOL  SetHasButtons(BOOL  bHasButtons, BOOL  bRedraw  );
	BOOL  IsHasButtons();
	BOOL  SetLineOnRoot(BOOL  bLineOnRoot, BOOL  bRedraw  );
	BOOL  IsLineOnRoot();
	BOOL  SetLineColor(OLE_COLOR  clrLine, BOOL  bRedraw  );
	OLE_COLOR  GetLineColor();
	BOOL  SetLineSize(short  nSize, BOOL  bRedraw  );
	short  GetLineSize();
	BOOL  SetIndent(short  nIndent, BOOL  bRedraw  );
	short  GetIndent();
	BOOL  SetItemHeight(short  nHeight, BOOL  bRedraw  );
	short  GetItemHeight();
	OLE_HANDLE  InsertChild(OLE_HANDLE  hParent, OLE_HANDLE  hInsertAfter, tstring  strText, BOOL  bRedraw  );
	OLE_HANDLE  InsertSibling(OLE_HANDLE  hpInsertAfter, tstring  strText, BOOL  bRedraw  );
	OLE_HANDLE  GetChildItem(OLE_HANDLE  hParent  );
	BOOL  ItemHasChildren(OLE_HANDLE  hParent  );
	OLE_HANDLE  GetParentItem(OLE_HANDLE  hItem  );
	OLE_HANDLE  GetRootItem(OLE_HANDLE  hItem  );
	BOOL  DeleteItem(OLE_HANDLE  hItem, BOOL  bRedraw  );
	BOOL  Expand(OLE_HANDLE  hItem, BOOL  bRedraw  );
	BOOL  SelectItem(OLE_HANDLE  hItem, BOOL  bChangePos  );
	OLE_HANDLE  GetSelectedItem();
	BOOL  SetItemText(OLE_HANDLE  hItem, tstring  strText, BOOL  bRedraw  );
	tstring  GetItemText(OLE_HANDLE  hItem  );
	OLE_HANDLE  HitTest(long  nX, long  nY  );
	struct SkinRect  GetItemRect(OLE_HANDLE  hItem  );
	void SetScrollSize(long  nSize  );
	long  GetScrollSize();
	void SetLeftScroll(BOOL  bLeftScroll  );
	BOOL  IsLeftScroll();
	OLE_HANDLE  AppendChild(OLE_HANDLE  hParent, tstring  strText, BOOL  bRedraw  );
	BOOL  SetItemIconByPath(OLE_HANDLE  hItem, tstring  strPath, tstring  strSelPath, OLE_COLOR  clrTrans  );
	void SetIconOffset(short  nOffsetX, short  nOffsetY  );
	void GetIconOffset(short * pnOffsetX, short * pnOffsetY  );
	void SetShowIcon(BOOL  bShowIcon  );
	BOOL  IsShowIcon();
	BOOL  SetItemIconByImgBase(OLE_HANDLE  hItem, struct IDUIImageBase * pImageBase, struct IDUIImageBase * pSelImageBase  );
	BOOL  SetItemIconByIcon(OLE_HANDLE  hItem, OLE_HANDLE  hIcon, OLE_HANDLE  hSelIcon  );
	BOOL  SetItemImageIndex(OLE_HANDLE  hItem, long  nImage, long  nSelImage  );
	BOOL  SetImageList(OLE_HANDLE  hImageList  );
	BOOL  SetItemData(OLE_HANDLE  hItem, OLE_HANDLE  hData  );
	OLE_HANDLE  GetItemData(OLE_HANDLE  hItem  );
	OLE_HANDLE  GetNextSiblingItem(OLE_HANDLE  hItem  );
	OLE_HANDLE  GetPrevSiblingItem(OLE_HANDLE  hItem  );
	BOOL  SetItemTextStyle(OLE_HANDLE  hItem, enum DUISIMPLETREE_STATE  eState, struct IDUITextStyle * pTextStyle, BOOL  bRedraw  );
	struct IDUITextStyle * GetItemTextStyle(OLE_HANDLE  hItem, enum DUISIMPLETREE_STATE  eState  );
	short  GetItemCount();
	short  GetChildItemCount(OLE_HANDLE  hItem  );
	void SetStateOffset(short  nOffsetX, short  nOffsetY  );
	void GetStateOffset(short * pnOffsetX, short * pnOffsetY  );
	void SetShowState(BOOL  bShowIcon  );
	BOOL  IsShowState();
	BOOL  SetStateImage(enum DUISIMPLETREE_STATE  eState, struct IDUIImageBase * pImageBase, BOOL  bRedraw  );
	struct IDUIImageBase * GetStateImage(enum DUISIMPLETREE_STATE  eState  );
	BOOL  SetStateItem(OLE_HANDLE  hItem  );
	OLE_HANDLE  GetStateItem();
	void SetChildList(OLE_HANDLE  pItem, BOOL  bIsChildList  );
	BOOL  IsChildList(OLE_HANDLE  pItem  );
	void SetNodeItemText(OLE_HANDLE  pItem, long  nCols, tstring  strText, BOOL  bRedraw  );
	tstring  GetNodeItemText(OLE_HANDLE  pItem, long  nCols  );
	void SetColsWidth(long  nWidth, long  nCols  );
	void GetColsWidth(long  nCols, long * nResult  );
	void SetColsTextStyle(long  nCols, enum DUISIMPLETREE_STATE  eState, struct IDUITextStyle * pTextStyle  );
	struct IDUITextStyle * GetColsTextStyle(long  nCols, enum DUISIMPLETREE_STATE  eState  );
	short  InsertCols(short  nCols, tstring  strText, short  nWidth  );
	void Sort(OLE_HANDLE  pCallBackFunc, OLE_HANDLE  pParentNode  );
	struct IDUIImageBase * GetItemIconImgBase(OLE_HANDLE  hItem  );
	BOOL  DeleteChildren(OLE_HANDLE  hItem, BOOL  bRedraw  );
	void SetChildNeedIndent(BOOL  bNeedIndent  );
	BOOL  GetChildNeedIndent();
	void RefreshItem(OLE_HANDLE  hItem  );
	struct IDUITreeToolBar * GetItemToolBar(OLE_HANDLE  hItem  );
	void SetCheckBoxStyle(BOOL  bHasCheckBox, BOOL  bRedraw  );
	BOOL  GetCheckBoxStyle();
	void SetSupportMultiSel(BOOL  bMutilSel  );
	BOOL  IsSupportMultiSel();
	short  GetCheckItemCount();
	struct IDUITreeItem * GetFirstCheckItem();
	struct IDUITreeItem * GetNextCheckItem(struct IDUITreeItem * pItem  );
	void GetSelectedItemCount(short * pnResult  );
	struct IDUITreeItem * GetFirstSelectedItem();
	struct IDUITreeItem * GetNextSelectedItem(struct IDUITreeItem * pItem  );
	void SetSupportToolBar(BOOL  bSupport  );
	BOOL  IsSupportToolBar();
	void SetToolBarOffset(short  nOffset  );
	short  GetToolBarOffset();
	void SetToolMinSpaceWithText(short  nSpace  );
	short  GetToolMinSpaceWithText();
	BOOL  IsNodeExpand(OLE_HANDLE  hItem  );
	void SortSingleNode(OLE_HANDLE  pCallBackFunc, OLE_HANDLE  pParentNode, OLE_HANDLE  pSingleNode  );
	void SwapNode(OLE_HANDLE  pNode1, OLE_HANDLE  pNode2  );
	BOOL  SetItmeHBitmap(OLE_HANDLE  hItem, OLE_HANDLE  hBitmap, OLE_HANDLE  hSelBitmap  );
	OLE_HANDLE  GetItemHBitmap(OLE_HANDLE  hItem  );
	OLE_HANDLE  GetItemByIndex(short  nIndex, OLE_HANDLE  hParent  );
	void SetScrollTop();
	void SetScrollBottom();
	void CheckItem(OLE_HANDLE  hItem, BOOL  bCheck  );
	BOOL  IsCheckItem(OLE_HANDLE  hItem  );
	struct SkinRect  GetItemNodeRect(OLE_HANDLE  hItem  );
};

enum DUISIMPLETREE_STATE
{ 
	DUISIMPLETREE_STATE_DISABLED = 3,
	DUISIMPLETREE_STATE_HOT = 1,
	DUISIMPLETREE_STATE_LAST = 4,
	DUISIMPLETREE_STATE_NORMAL = 0,
	DUISIMPLETREE_STATE_SELECTED = 2 
};

struct __declspec(uuid("626d297c-dc98-410c-8e56-b0408e1581c0")) IDUITreeToolBar : IDispatch
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_AppendItem(long nID, BSTR strName, short nWidth, enum DUI_TREETOOL_STYLE eStyle, struct IDUITreeToolItemBase **pResult) = 0;
	virtual HRESULT __stdcall raw_InsertItem(short nIndex, long nID, BSTR strName, short nWidth, enum DUI_TREETOOL_STYLE eStyle, struct IDUITreeToolItemBase **pResult) = 0;
	virtual HRESULT __stdcall raw_RemoveItem(long nItem  ) = 0;
	virtual HRESULT __stdcall raw_GetItem(long nID, struct IDUITreeToolItemBase **pResult) = 0;
	virtual HRESULT __stdcall raw_GetItemByName(BSTR strName, struct IDUITreeToolItemBase **pResult) = 0;
	virtual HRESULT __stdcall raw_GetAt(short nIndex, struct IDUITreeToolItemBase **pResult) = 0;
	virtual HRESULT __stdcall raw_GetItemCount(short *pResult) = 0;
	virtual HRESULT __stdcall raw_RemoveAllItems() = 0;

	//
	//Method Wrapper
	//
	struct IDUITreeToolItemBase * AppendItem(long  nID, tstring  strName, short  nWidth, enum DUI_TREETOOL_STYLE  eStyle  );
	struct IDUITreeToolItemBase * InsertItem(short  nIndex, long  nID, tstring  strName, short  nWidth, enum DUI_TREETOOL_STYLE  eStyle  );
	void RemoveItem(long  nItem  );
	struct IDUITreeToolItemBase * GetItem(long  nID  );
	struct IDUITreeToolItemBase * GetItemByName(tstring  strName  );
	struct IDUITreeToolItemBase * GetAt(short  nIndex  );
	short  GetItemCount();
	void RemoveAllItems();
};

enum DUI_TREETOOL_STYLE
{ 
	TREETOOLSTYLE_BUTTON = 0,
	TREETOOLSTYLE_CHECK = 1,
	TREETOOLSTYLE_LAST = 4,
	TREETOOLSTYLE_RADIO = 2,
	TREETOOLSTYLE_STATIC = 3 
};

struct __declspec(uuid("aa068e64-2cde-434a-8b85-8b42682597cc")) IDUITreeToolItemBase : IDispatch
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_SetObjPtr(OLE_HANDLE pObjPtr  ) = 0;
	virtual HRESULT __stdcall raw_SetID(long nID  ) = 0;
	virtual HRESULT __stdcall raw_GetID(long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetName(BSTR strName  ) = 0;
	virtual HRESULT __stdcall raw_GetName(BSTR *pResult) = 0;
	virtual HRESULT __stdcall raw_SetToolTip(BSTR strToolTip  ) = 0;
	virtual HRESULT __stdcall raw_GetToolTip(BSTR *pResult) = 0;
	virtual HRESULT __stdcall raw_SetWidth(short nWidth  ) = 0;
	virtual HRESULT __stdcall raw_GetWidth(short *pResult) = 0;
	virtual HRESULT __stdcall raw_GetStyle(enum DUI_TREETOOL_STYLE *pResult) = 0;
	virtual HRESULT __stdcall raw_SetImage(OLE_HANDLE hBmp  ) = 0;
	virtual HRESULT __stdcall raw_GetImage(OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_SetImageFile(BSTR strImage  ) = 0;
	virtual HRESULT __stdcall raw_GetImageFile(BSTR *pResult) = 0;

	//
	//Method Wrapper
	//
	void SetObjPtr(OLE_HANDLE  pObjPtr  );
	void SetID(long  nID  );
	long  GetID();
	void SetName(tstring  strName  );
	tstring  GetName();
	void SetToolTip(tstring  strToolTip  );
	tstring  GetToolTip();
	void SetWidth(short  nWidth  );
	short  GetWidth();
	enum DUI_TREETOOL_STYLE  GetStyle();
	void SetImage(OLE_HANDLE  hBmp  );
	OLE_HANDLE  GetImage();
	void SetImageFile(tstring  strImage  );
	tstring  GetImageFile();
};

struct __declspec(uuid("6efb8ac6-61ba-4d3f-a599-bad68068fd5b")) IDUITreeItem : IDispatch
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_GetTreeNode(OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_SetTreeNode(OLE_HANDLE pTreeNode  ) = 0;

	//
	//Method Wrapper
	//
	OLE_HANDLE  GetTreeNode();
	void SetTreeNode(OLE_HANDLE  pTreeNode  );
};

struct __declspec(uuid("ceb77c1b-6883-4c1c-9815-804d363caebd")) _IDUITreeItemEvents : IDispatch
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

struct __declspec(uuid("de28ba00-7cc1-480a-934e-2035303fdd5c")) _IDUITreeToolBarEvents : IDispatch
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

struct __declspec(uuid("4dd5e499-31d7-437b-8e05-96afbc6f3ec4")) _IDUITreeToolItemBaseEvents : IDispatch
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

struct __declspec(uuid("58703b69-ba83-4ce0-8676-57bff7d3cbe0")) _IDUITreeToolButtonEvents : IDispatch
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

struct __declspec(uuid("17d327e6-4fc8-4c59-81f7-88b7b7ca45e9")) IDUITreeToolButton : IDUITreeToolItemBase
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

struct __declspec(uuid("137e3e83-76ca-4829-a398-eda5410a6eba")) _IDUITreeToolCheckEvents : IDispatch
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

struct __declspec(uuid("3b044072-ff13-4aaa-bddb-98cbfaf98e3a")) IDUITreeToolCheck : IDUITreeToolItemBase
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_SetCheck(VARIANT_BOOL bCheck  ) = 0;
	virtual HRESULT __stdcall raw_GetCheck(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetCheckImage(OLE_HANDLE hBmp  ) = 0;
	virtual HRESULT __stdcall raw_GetCheckImage(OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_SetCheckImageFile(BSTR strImage  ) = 0;
	virtual HRESULT __stdcall raw_GetCheckImageFile(BSTR *pResult) = 0;

	//
	//Method Wrapper
	//
	void SetCheck(BOOL  bCheck  );
	BOOL  GetCheck();
	void SetCheckImage(OLE_HANDLE  hBmp  );
	OLE_HANDLE  GetCheckImage();
	void SetCheckImageFile(tstring  strImage  );
	tstring  GetCheckImageFile();
};

struct __declspec(uuid("dee5198d-7275-4b6c-89e0-1195a948b9f6")) _IDUITreeToolRadioEvents : IDispatch
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

struct __declspec(uuid("7bbd7549-4606-4729-ba4c-74ef96f5bb9d")) IDUITreeToolRadio : IDUITreeToolItemBase
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_SetRadio() = 0;
	virtual HRESULT __stdcall raw_GetValue(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetCheckImage(OLE_HANDLE hBmp  ) = 0;
	virtual HRESULT __stdcall raw_GetCheckImage(OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_SetCheckImageFile(BSTR strImage  ) = 0;
	virtual HRESULT __stdcall raw_GetCheckImageFile(BSTR *pResult) = 0;

	//
	//Method Wrapper
	//
	void SetRadio();
	BOOL  GetValue();
	void SetCheckImage(OLE_HANDLE  hBmp  );
	OLE_HANDLE  GetCheckImage();
	void SetCheckImageFile(tstring  strImage  );
	tstring  GetCheckImageFile();
};

struct __declspec(uuid("4730a708-998b-42c9-8164-ab0f192adc59")) _IDUITreeToolStaticEvents : IDispatch
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

struct __declspec(uuid("cc43d690-b051-42c0-9316-ff2007cc77f0")) IDUITreeToolStatic : IDUITreeToolItemBase
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

enum DUITASKPANEL_ITEM_STATE
{ 
	DUITASKPANEL_ITEM_STATE_DISABLE = 1,
	DUITASKPANEL_ITEM_STATE_FOCUS = 4,
	DUITASKPANEL_ITEM_STATE_HOT = 2,
	DUITASKPANEL_ITEM_STATE_LAST = 5,
	DUITASKPANEL_ITEM_STATE_NORMAL = 0,
	DUITASKPANEL_ITEM_STATE_PRESS = 3 
};

enum DUITASKPANEL_STATE
{ 
	DUITASKPANEL_STATE_DISABLE = 1,
	DUITASKPANEL_STATE_LAST = 2,
	DUITASKPANEL_STATE_NORMAL = 0 
};

enum DUITASKPANEL_MSG_ID
{ 
	DUITASKPANEL_MSG_GROUP_EXPAND = 33358,
	DUITASKPANEL_MSG_GROUP_UNEXPAND = 33359,
	DUITASKPANEL_MSG_ITEM_CLICKED = 33360 
};

struct __declspec(uuid("334c4430-6c91-4cd9-989f-d320e8d32d02")) _IDUITaskPanelEvents : IDispatch
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

struct __declspec(uuid("60ed1898-43d2-45e3-873d-66ad2161cc4a")) IDUITaskPanel : IDUIControlBase
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_Create(unsigned long dwStyle, struct SkinRect rect, OLE_HANDLE pParentWnd, long nID, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetGroups(struct IDUITaskPanelItems **pResult) = 0;
	virtual HRESULT __stdcall raw_AddGroup(long nID, short nImage, struct IDUITaskPanelGroup **pResult) = 0;
	virtual HRESULT __stdcall raw_FindGroup(long nID, struct IDUITaskPanelGroup **pResult) = 0;
	virtual HRESULT __stdcall raw_FindItem(long nID, struct IDUITaskPanelGroupItem **pResult) = 0;
	virtual HRESULT __stdcall raw_GetAt(short nIndex, struct IDUITaskPanelGroup **pResult) = 0;
	virtual HRESULT __stdcall raw_GetGroupCount(short *pResult) = 0;
	virtual HRESULT __stdcall raw_GetScrollOffset(short *pResult) = 0;
	virtual HRESULT __stdcall raw_GetClientHeight(short *pResult) = 0;
	virtual HRESULT __stdcall raw_Reposition(VARIANT_BOOL bRecalcOnly  ) = 0;
	virtual HRESULT __stdcall raw_SetHotItem(struct IDUITaskPanelItem *pItem  ) = 0;
	virtual HRESULT __stdcall raw_GetHotItem(struct IDUITaskPanelItem **pResult) = 0;
	virtual HRESULT __stdcall raw_SetFocusedItem(struct IDUITaskPanelItem *pItem, VARIANT_BOOL bDrawFocusRect  ) = 0;
	virtual HRESULT __stdcall raw_EnsureVisible(struct IDUITaskPanelItem *pItem  ) = 0;
	virtual HRESULT __stdcall raw_GetFocusedItem(struct IDUITaskPanelItem **pResult) = 0;
	virtual HRESULT __stdcall raw_IsDrawFocusRect(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_HitTestGroup(struct SkinPoint pt, VARIANT_BOOL pbCaption, struct IDUITaskPanelGroup **pResult) = 0;
	virtual HRESULT __stdcall raw_HitTestItem(struct SkinPoint pt, VARIANT_BOOL bClientAvail, struct IDUITaskPanelItem **pResult) = 0;
	virtual HRESULT __stdcall raw_SetMargins(long nLeft, long nTop, long nRight, long nBottom, long nMiddle  ) = 0;
	virtual HRESULT __stdcall raw_SetImageList(struct IDUIImageList *pImageList, struct SkinSize szItemIcon  ) = 0;
	virtual HRESULT __stdcall raw_SetGroupImageList(struct IDUIImageList *pImageList, struct SkinSize szGroupIcon  ) = 0;
	virtual HRESULT __stdcall raw_SetExpandable(VARIANT_BOOL bExpandable  ) = 0;
	virtual HRESULT __stdcall raw_IsExpandable(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetLayoutRTL(VARIANT_BOOL bRightToLeft  ) = 0;
	virtual HRESULT __stdcall raw_SetLockRedraw(VARIANT_BOOL bLockRedraw  ) = 0;
	virtual HRESULT __stdcall raw_GetNextItem(struct IDUITaskPanelItem *pItem, short nDirection, VARIANT_BOOL bTab, VARIANT_BOOL bSkipRowItems, struct IDUITaskPanelItem **pResult) = 0;
	virtual HRESULT __stdcall raw_OnClick(struct IDUITaskPanelGroupItem *pItem  ) = 0;
	virtual HRESULT __stdcall raw_IsDirty(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_OnSrollChanged(short nCurPos  ) = 0;
	virtual HRESULT __stdcall raw_AnimateGroups(VARIANT_BOOL bCheckDirty, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetItemIconSize(struct SkinSize *pResult) = 0;
	virtual HRESULT __stdcall raw_GetGroupIconSize(struct SkinSize *pResult) = 0;
	virtual HRESULT __stdcall raw_SetIconSize(struct SkinSize szIcon  ) = 0;
	virtual HRESULT __stdcall raw_SetGroupIconSize(struct SkinSize szIcon  ) = 0;
	virtual HRESULT __stdcall raw_NavigateItems(VARIANT_BOOL bTabItems  ) = 0;
	virtual HRESULT __stdcall raw_ExpandGroup(struct IDUITaskPanelGroup *pGroup, VARIANT_BOOL bExpanded  ) = 0;
	virtual HRESULT __stdcall raw_IsGroupExpanded(struct IDUITaskPanelGroup *pGroup, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetItemLayout(enum DUITASKPANELITEM_LAYOUT *pResult) = 0;
	virtual HRESULT __stdcall raw_SetItemLayout(enum DUITASKPANELITEM_LAYOUT itemLayout  ) = 0;
	virtual HRESULT __stdcall raw_GetActiveGroup(struct IDUITaskPanelGroup **pResult) = 0;
	virtual HRESULT __stdcall raw_SetSelectItemOnFocus(VARIANT_BOOL bSelect  ) = 0;
	virtual HRESULT __stdcall raw_SetSingleSelection(VARIANT_BOOL bSingleSelection  ) = 0;
	virtual HRESULT __stdcall raw_IsSingleSelection(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_DrawFocusRect(VARIANT_BOOL bAccept  ) = 0;
	virtual HRESULT __stdcall raw_GetMargins(struct SkinRect *pResult) = 0;
	virtual HRESULT __stdcall raw_AllowDrag(long nAllowDrag  ) = 0;
	virtual HRESULT __stdcall raw_AllowDrop(VARIANT_BOOL bAllowDrop  ) = 0;
	virtual HRESULT __stdcall raw_RenameItem(struct IDUITaskPanelItems *pItem  ) = 0;
	virtual HRESULT __stdcall raw_OnDraw(OLE_HANDLE pDC  ) = 0;
	virtual HRESULT __stdcall raw_SetMultiColumn(VARIANT_BOOL bMultiColumn  ) = 0;
	virtual HRESULT __stdcall raw_IsMultiColumn(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetColumnWidth(short nColumnWidth  ) = 0;
	virtual HRESULT __stdcall raw_GetColumnWidth(short *pResult) = 0;
	virtual HRESULT __stdcall raw_GetMinimumGroupClientHeight(short *pResult) = 0;
	virtual HRESULT __stdcall raw_SetMinimumGroupClientHeight(short nMinClientHeight  ) = 0;
	virtual HRESULT __stdcall raw_IsExplorerBehaviour(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_OnStartItemDrag(struct IDUITaskPanelGroupItem *pItem  ) = 0;
	virtual HRESULT __stdcall raw_OnStartGroupDrag(struct IDUITaskPanelItem *pItem  ) = 0;
	virtual HRESULT __stdcall raw_OnEndLabelEdit(struct IDUITaskPanelItem *pItem, BSTR str  ) = 0;
	virtual HRESULT __stdcall raw_RepositionScrollButtons() = 0;
	virtual HRESULT __stdcall raw_UpdateScrollButtons() = 0;
	virtual HRESULT __stdcall raw_CheckScrollButtonMouseOver(struct SkinPoint point  ) = 0;
	virtual HRESULT __stdcall raw_OnItemRemoved(struct IDUITaskPanelItem *pItem  ) = 0;
	virtual HRESULT __stdcall raw_UpdateScrollBar() = 0;
	virtual HRESULT __stdcall raw_OnClientHeightChanged() = 0;
	virtual HRESULT __stdcall raw_GetNextVisibleGroup(short nIndex, short nDirection, struct IDUITaskPanelGroup **pResult) = 0;
	virtual HRESULT __stdcall raw_NotifyOwner(long wParam, long lParam, long *pResult) = 0;
	virtual HRESULT __stdcall raw_RegisterWindowClass(OLE_HANDLE hInstance, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetScrollButton(VARIANT_BOOL bScrollUp, struct IDUITaskPanelScrollButton **pResult) = 0;
	virtual HRESULT __stdcall raw_HitTestScrollButton(struct SkinPoint point, struct IDUITaskPanelScrollButton **pResult) = 0;
	virtual HRESULT __stdcall raw_OnClickScrollButton(struct IDUITaskPanelScrollButton *pScrollButton  ) = 0;
	virtual HRESULT __stdcall raw_SetCtrlID(long nID  ) = 0;
	virtual HRESULT __stdcall raw_SetFoucsItem(struct IDUITaskPanelItem *pResult  ) = 0;
	virtual HRESULT __stdcall raw_GetFocusItem(struct IDUITaskPanelItem **pResult) = 0;

	//
	//Method Wrapper
	//
	BOOL  Create(unsigned long  dwStyle, struct SkinRect  rect, OLE_HANDLE  pParentWnd, long  nID  );
	struct IDUITaskPanelItems * GetGroups();
	struct IDUITaskPanelGroup * AddGroup(long  nID, short  nImage  );
	struct IDUITaskPanelGroup * FindGroup(long  nID  );
	struct IDUITaskPanelGroupItem * FindItem(long  nID  );
	struct IDUITaskPanelGroup * GetAt(short  nIndex  );
	short  GetGroupCount();
	short  GetScrollOffset();
	short  GetClientHeight();
	void Reposition(BOOL  bRecalcOnly  );
	void SetHotItem(struct IDUITaskPanelItem * pItem  );
	struct IDUITaskPanelItem * GetHotItem();
	void SetFocusedItem(struct IDUITaskPanelItem * pItem, BOOL  bDrawFocusRect  );
	void EnsureVisible(struct IDUITaskPanelItem * pItem  );
	struct IDUITaskPanelItem * GetFocusedItem();
	BOOL  IsDrawFocusRect();
	struct IDUITaskPanelGroup * HitTestGroup(struct SkinPoint  pt, BOOL  pbCaption  );
	struct IDUITaskPanelItem * HitTestItem(struct SkinPoint  pt, BOOL  bClientAvail  );
	void SetMargins(long  nLeft, long  nTop, long  nRight, long  nBottom, long  nMiddle  );
	void SetImageList(struct IDUIImageList * pImageList, struct SkinSize  szItemIcon  );
	void SetGroupImageList(struct IDUIImageList * pImageList, struct SkinSize  szGroupIcon  );
	void SetExpandable(BOOL  bExpandable  );
	BOOL  IsExpandable();
	void SetLayoutRTL(BOOL  bRightToLeft  );
	void SetLockRedraw(BOOL  bLockRedraw  );
	struct IDUITaskPanelItem * GetNextItem(struct IDUITaskPanelItem * pItem, short  nDirection, BOOL  bTab, BOOL  bSkipRowItems  );
	void OnClick(struct IDUITaskPanelGroupItem * pItem  );
	BOOL  IsDirty();
	void OnSrollChanged(short  nCurPos  );
	BOOL  AnimateGroups(BOOL  bCheckDirty  );
	struct SkinSize  GetItemIconSize();
	struct SkinSize  GetGroupIconSize();
	void SetIconSize(struct SkinSize  szIcon  );
	void SetGroupIconSize(struct SkinSize  szIcon  );
	void NavigateItems(BOOL  bTabItems  );
	void ExpandGroup(struct IDUITaskPanelGroup * pGroup, BOOL  bExpanded  );
	BOOL  IsGroupExpanded(struct IDUITaskPanelGroup * pGroup  );
	enum DUITASKPANELITEM_LAYOUT  GetItemLayout();
	void SetItemLayout(enum DUITASKPANELITEM_LAYOUT  itemLayout  );
	struct IDUITaskPanelGroup * GetActiveGroup();
	void SetSelectItemOnFocus(BOOL  bSelect  );
	void SetSingleSelection(BOOL  bSingleSelection  );
	BOOL  IsSingleSelection();
	void DrawFocusRect(BOOL  bAccept  );
	struct SkinRect  GetMargins();
	void AllowDrag(long  nAllowDrag  );
	void AllowDrop(BOOL  bAllowDrop  );
	void RenameItem(struct IDUITaskPanelItems * pItem  );
	void OnDraw(OLE_HANDLE  pDC  );
	void SetMultiColumn(BOOL  bMultiColumn  );
	BOOL  IsMultiColumn();
	void SetColumnWidth(short  nColumnWidth  );
	short  GetColumnWidth();
	short  GetMinimumGroupClientHeight();
	void SetMinimumGroupClientHeight(short  nMinClientHeight  );
	BOOL  IsExplorerBehaviour();
	void OnStartItemDrag(struct IDUITaskPanelGroupItem * pItem  );
	void OnStartGroupDrag(struct IDUITaskPanelItem * pItem  );
	void OnEndLabelEdit(struct IDUITaskPanelItem * pItem, tstring  str  );
	void RepositionScrollButtons();
	void UpdateScrollButtons();
	void CheckScrollButtonMouseOver(struct SkinPoint  point  );
	void OnItemRemoved(struct IDUITaskPanelItem * pItem  );
	void UpdateScrollBar();
	void OnClientHeightChanged();
	struct IDUITaskPanelGroup * GetNextVisibleGroup(short  nIndex, short  nDirection  );
	long  NotifyOwner(long  wParam, long  lParam  );
	BOOL  RegisterWindowClass(OLE_HANDLE  hInstance  );
	struct IDUITaskPanelScrollButton * GetScrollButton(BOOL  bScrollUp  );
	struct IDUITaskPanelScrollButton * HitTestScrollButton(struct SkinPoint  point  );
	void OnClickScrollButton(struct IDUITaskPanelScrollButton * pScrollButton  );
	void SetCtrlID(long  nID  );
	void SetFoucsItem(struct IDUITaskPanelItem * pResult  );
	struct IDUITaskPanelItem * GetFocusItem();
};

struct __declspec(uuid("11b533ef-6732-42de-9966-6d53bd818e89")) IDUITaskPanelItems : IDispatch
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_Add(struct IDUITaskPanelItem *pItem, long nID, struct IDUITaskPanelItem **pResult) = 0;
	virtual HRESULT __stdcall raw_InsertAt(short nIndex, struct IDUITaskPanelItem *pItem, struct IDUITaskPanelItem **pResult) = 0;
	virtual HRESULT __stdcall raw_GetAt(short nIndex, struct IDUITaskPanelItem **pResult) = 0;
	virtual HRESULT __stdcall raw_Clear(VARIANT_BOOL bReposition  ) = 0;
	virtual HRESULT __stdcall raw_Find(long nID, struct IDUITaskPanelItem **pResult) = 0;
	virtual HRESULT __stdcall raw_Remove(struct IDUITaskPanelItem *pItem  ) = 0;
	virtual HRESULT __stdcall raw_RemoveAt(short nIndex  ) = 0;
	virtual HRESULT __stdcall raw_GetIndex(struct IDUITaskPanelItem *pItem, short *pResult) = 0;
	virtual HRESULT __stdcall raw_GetCount(short *pResult) = 0;
	virtual HRESULT __stdcall raw_GetOwner(IDispatch **pResult) = 0;
	virtual HRESULT __stdcall raw_Move(struct IDUITaskPanelItem *pItem, short nIndex  ) = 0;
	virtual HRESULT __stdcall raw_GetNextVisibleIndex(short nIndex, short nDirection  ) = 0;
	virtual HRESULT __stdcall raw_GetFirstVisibleItem(struct IDUITaskPanelItem **pResult) = 0;
	virtual HRESULT __stdcall raw_GetLastVisibleItem(struct IDUITaskPanelItem **pResult) = 0;

	//
	//Method Wrapper
	//
	struct IDUITaskPanelItem * Add(struct IDUITaskPanelItem * pItem, long  nID  );
	struct IDUITaskPanelItem * InsertAt(short  nIndex, struct IDUITaskPanelItem * pItem  );
	struct IDUITaskPanelItem * GetAt(short  nIndex  );
	void Clear(BOOL  bReposition  );
	struct IDUITaskPanelItem * Find(long  nID  );
	void Remove(struct IDUITaskPanelItem * pItem  );
	void RemoveAt(short  nIndex  );
	short  GetIndex(struct IDUITaskPanelItem * pItem  );
	short  GetCount();
	IDispatch * GetOwner();
	void Move(struct IDUITaskPanelItem * pItem, short  nIndex  );
	void GetNextVisibleIndex(short  nIndex, short  nDirection  );
	struct IDUITaskPanelItem * GetFirstVisibleItem();
	struct IDUITaskPanelItem * GetLastVisibleItem();
};

struct __declspec(uuid("861029da-879c-4ffa-b746-2963b3d11c2f")) IDUITaskPanelItem : IDispatch
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_GetTaskPanel(struct IDUITaskPanel **pResult) = 0;
	virtual HRESULT __stdcall raw_SetID(long nID  ) = 0;
	virtual HRESULT __stdcall raw_GetID(long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetCaption(BSTR strCaption  ) = 0;
	virtual HRESULT __stdcall raw_GetType(enum DUITASKPANELITEM_TYPE *pResult) = 0;
	virtual HRESULT __stdcall raw_SetToolTip(BSTR strToolTip  ) = 0;
	virtual HRESULT __stdcall raw_SetType(enum DUITASKPANELITEM_TYPE eType  ) = 0;
	virtual HRESULT __stdcall raw_GetCaption(BSTR *pResult) = 0;
	virtual HRESULT __stdcall raw_GetToolTip(BSTR *pResult) = 0;
	virtual HRESULT __stdcall raw_GetEnabled(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetEnabled(VARIANT_BOOL bEnabled  ) = 0;
	virtual HRESULT __stdcall raw_IsItemHot(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_IsItemPressed(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_IsItemFocused(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_IsItemDragging(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_IsItemDragOver(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_IsGroup(VARIANT_BOOL **pResult) = 0;
	virtual HRESULT __stdcall raw_RedrawPanel() = 0;
	virtual HRESULT __stdcall raw_SetIconIndex(short nIndex  ) = 0;
	virtual HRESULT __stdcall raw_GetIconIndex(short *pResult) = 0;
	virtual HRESULT __stdcall raw_IsAcceptFocus(VARIANT_BOOL **pResult) = 0;
	virtual HRESULT __stdcall raw_CreateFromOleData(struct IDUITaskPanelItem **pResult) = 0;
	virtual HRESULT __stdcall raw_CreateFromOleFile(struct IDUITaskPanelItem **pResult) = 0;
	virtual HRESULT __stdcall raw_CacheGlobalData(OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_Remove() = 0;
	virtual HRESULT __stdcall raw_IsVisible(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetVisible(VARIANT_BOOL bVisible  ) = 0;
	virtual HRESULT __stdcall raw_RepositionPanel() = 0;
	virtual HRESULT __stdcall raw_GetParentItems(struct IDUITaskPanelItems **pResult) = 0;
	virtual HRESULT __stdcall raw_GetItemGroup(struct IDUITaskPanelGroup **pResult) = 0;
	virtual HRESULT __stdcall raw_GetIndex(short *pResult) = 0;
	virtual HRESULT __stdcall raw_IsAllowDrop(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_AllowDrop(VARIANT_BOOL bAllowDrop  ) = 0;
	virtual HRESULT __stdcall raw_AllowDrag(long nAllowDrag  ) = 0;
	virtual HRESULT __stdcall raw_IsAllowDrag(long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetTextRect(OLE_HANDLE pDC, struct SkinRect rc, long nFormat  ) = 0;
	virtual HRESULT __stdcall raw_GetTextRect(struct SkinRect *pResult) = 0;
	virtual HRESULT __stdcall raw_GetHitTestRect(struct SkinRect *pResult) = 0;
	virtual HRESULT __stdcall raw_GetItemData(unsigned long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetItemData(unsigned long dwData  ) = 0;
	virtual HRESULT __stdcall raw_GetIconPadding(struct SkinRect *pResult) = 0;
	virtual HRESULT __stdcall raw_CopyToClipboard() = 0;
	virtual HRESULT __stdcall raw_EnsureVisible() = 0;
	virtual HRESULT __stdcall raw_OnRemoved() = 0;
	virtual HRESULT __stdcall raw_GetItemFont(OLE_HANDLE **pResult) = 0;
	virtual HRESULT __stdcall raw_GetParentItemCaption(BSTR *pResult) = 0;
	virtual HRESULT __stdcall raw_SetParentItemCaption(BSTR bstrCaption  ) = 0;

	//
	//Method Wrapper
	//
	struct IDUITaskPanel * GetTaskPanel();
	void SetID(long  nID  );
	long  GetID();
	void SetCaption(tstring  strCaption  );
	enum DUITASKPANELITEM_TYPE  GetType();
	void SetToolTip(tstring  strToolTip  );
	void SetType(enum DUITASKPANELITEM_TYPE  eType  );
	tstring  GetCaption();
	tstring  GetToolTip();
	BOOL  GetEnabled();
	void SetEnabled(BOOL  bEnabled  );
	BOOL  IsItemHot();
	BOOL  IsItemPressed();
	BOOL  IsItemFocused();
	BOOL  IsItemDragging();
	BOOL  IsItemDragOver();
	VARIANT_BOOL * IsGroup();
	void RedrawPanel();
	void SetIconIndex(short  nIndex  );
	short  GetIconIndex();
	VARIANT_BOOL * IsAcceptFocus();
	struct IDUITaskPanelItem * CreateFromOleData();
	struct IDUITaskPanelItem * CreateFromOleFile();
	OLE_HANDLE  CacheGlobalData();
	void Remove();
	BOOL  IsVisible();
	void SetVisible(BOOL  bVisible  );
	void RepositionPanel();
	struct IDUITaskPanelItems * GetParentItems();
	struct IDUITaskPanelGroup * GetItemGroup();
	short  GetIndex();
	BOOL  IsAllowDrop();
	void AllowDrop(BOOL  bAllowDrop  );
	void AllowDrag(long  nAllowDrag  );
	long  IsAllowDrag();
	void SetTextRect(OLE_HANDLE  pDC, struct SkinRect  rc, long  nFormat  );
	struct SkinRect  GetTextRect();
	struct SkinRect  GetHitTestRect();
	unsigned long  GetItemData();
	void SetItemData(unsigned long  dwData  );
	struct SkinRect  GetIconPadding();
	void CopyToClipboard();
	void EnsureVisible();
	void OnRemoved();
	OLE_HANDLE * GetItemFont();
	tstring  GetParentItemCaption();
	void SetParentItemCaption(tstring  bstrCaption  );
};

enum DUITASKPANELITEM_TYPE
{ 
	DUITASKITEM_TYPE_CONTROL = 3,
	DUITASKITEM_TYPE_GROUP = 0,
	DUITASKITEM_TYPE_LAST = 4,
	DUITASKITEM_TYPE_LINK = 1,
	DUITASKITEM_TYPE_TEXT = 2 
};

struct __declspec(uuid("1897ff59-1e97-4be2-ba79-9bb06f566deb")) IDUITaskPanelGroup : IDUITaskPanelItem
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_GetItems(struct IDUITaskPanelItems **pResult) = 0;
	virtual HRESULT __stdcall raw_FindItem(short nID, struct IDUITaskPanelItem **pResult) = 0;
	virtual HRESULT __stdcall raw_GetAt(short nIndex, struct IDUITaskPanelItem **pResult) = 0;
	virtual HRESULT __stdcall raw_AddLinkItem(long nID, short nImage, struct IDUITaskPanelItem **pResult) = 0;
	virtual HRESULT __stdcall raw_AddTextItem(long nID, BSTR strText, struct IDUITaskPanelGroupItem **pResult) = 0;
	virtual HRESULT __stdcall raw_OnReposition(struct SkinRect rc, VARIANT_BOOL bRecalcOnly, struct SkinRect *pResult) = 0;
	virtual HRESULT __stdcall raw_OnAnimate(short nStep  ) = 0;
	virtual HRESULT __stdcall raw_OnPaint(OLE_HANDLE pDC  ) = 0;
	virtual HRESULT __stdcall raw_GetCaptionRect(struct SkinRect *pResult) = 0;
	virtual HRESULT __stdcall raw_GetClientRect(struct SkinRect *pResult) = 0;
	virtual HRESULT __stdcall raw_GetTargetClientRect(struct SkinRect *pResult) = 0;
	virtual HRESULT __stdcall raw_GetTargetCaptionRect(struct SkinRect *pResult) = 0;
	virtual HRESULT __stdcall raw_SetSpecialGroup(VARIANT_BOOL bSpecial  ) = 0;
	virtual HRESULT __stdcall raw_IsSpecialGroup(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetExpandable(VARIANT_BOOL bExpandable  ) = 0;
	virtual HRESULT __stdcall raw_IsExpandable(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_ShowCaption(VARIANT_BOOL bShow  ) = 0;
	virtual HRESULT __stdcall raw_IsCaptionVisible(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_IsExpanded(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_IsExpanding(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetExpandedClientHeight(short *pResult) = 0;
	virtual HRESULT __stdcall raw_SetExpanded(VARIANT_BOOL bExpanded  ) = 0;
	virtual HRESULT __stdcall raw_IsDirty(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetOuterMargins(struct SkinRect *pResult) = 0;
	virtual HRESULT __stdcall raw_GetInnerMargins(struct SkinRect *pResult) = 0;
	virtual HRESULT __stdcall raw_GetMinimumClientHeight(short *pResult) = 0;
	virtual HRESULT __stdcall raw_SetMinimumClientHeight(short nMinClientHeight  ) = 0;
	virtual HRESULT __stdcall raw_OnFillClient(OLE_HANDLE pDC, struct SkinRect rc  ) = 0;
	virtual HRESULT __stdcall raw_GetItemLayout(enum DUITASKPANELITEM_LAYOUT *pResult) = 0;
	virtual HRESULT __stdcall raw_HitTest(struct SkinPoint pt, struct SkinRect *lpRect, struct IDUITaskPanelGroupItem **pResult) = 0;
	virtual HRESULT __stdcall raw_SetItemLayout(enum DUITASKPANELITEM_LAYOUT itemLayout  ) = 0;
	virtual HRESULT __stdcall raw_SetSelectedItem(struct IDUITaskPanelGroupItem *pItem  ) = 0;
	virtual HRESULT __stdcall raw_IsChildItemDragOver(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetItemCount(short *pResult) = 0;
	virtual HRESULT __stdcall raw_IsScrollButtonEnabled(VARIANT_BOOL bScrollButtonUp, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetScrollOffsetPos(short *pResult) = 0;
	virtual HRESULT __stdcall raw_SetOffsetItem(short nScrollOffset, VARIANT_BOOL bUpdateScrollButtons  ) = 0;
	virtual HRESULT __stdcall raw_IsItemVisible(struct IDUITaskPanelGroupItem *pItem, VARIANT_BOOL bAllowPart, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetOffsetItem(short *pResult) = 0;
	virtual HRESULT __stdcall raw_Scroll(short nDelta  ) = 0;
	virtual HRESULT __stdcall raw_GetCaptionHeight(short *pResult) = 0;
	virtual HRESULT __stdcall raw_GetItemIconSize(struct SkinSize *pResult) = 0;
	virtual HRESULT __stdcall raw_SetIconSize(struct SkinSize szItemIcon  ) = 0;
	virtual HRESULT __stdcall raw_GetNextVisibleItem(short nIndex, short nDirection, struct IDUITaskPanelGroupItem **pResult) = 0;
	virtual HRESULT __stdcall raw_CalcInsideHeight(short *pResult) = 0;
	virtual HRESULT __stdcall raw_OnCalcClientHeight(OLE_HANDLE pDC, struct SkinRect rc  ) = 0;
	virtual HRESULT __stdcall raw_AddControlItem(OLE_HANDLE hWnd, struct IDUITaskPanelGroupItem **pResult) = 0;
	virtual HRESULT __stdcall raw_SetClientBitmap(long nID, OLE_COLOR clrTransparent, VARIANT_BOOL bAlpha  ) = 0;
	virtual HRESULT __stdcall raw_SetCaptionText(BSTR strText  ) = 0;
	virtual HRESULT __stdcall raw_SetIconPath(BSTR strText  ) = 0;
	virtual HRESULT __stdcall raw_RemoveItem(long nID  ) = 0;

	//
	//Method Wrapper
	//
	struct IDUITaskPanelItems * GetItems();
	struct IDUITaskPanelItem * FindItem(short  nID  );
	struct IDUITaskPanelItem * GetAt(short  nIndex  );
	struct IDUITaskPanelItem * AddLinkItem(long  nID, short  nImage  );
	struct IDUITaskPanelGroupItem * AddTextItem(long  nID, tstring  strText  );
	struct SkinRect  OnReposition(struct SkinRect  rc, BOOL  bRecalcOnly  );
	void OnAnimate(short  nStep  );
	void OnPaint(OLE_HANDLE  pDC  );
	struct SkinRect  GetCaptionRect();
	struct SkinRect  GetClientRect();
	struct SkinRect  GetTargetClientRect();
	struct SkinRect  GetTargetCaptionRect();
	void SetSpecialGroup(BOOL  bSpecial  );
	BOOL  IsSpecialGroup();
	void SetExpandable(BOOL  bExpandable  );
	BOOL  IsExpandable();
	void ShowCaption(BOOL  bShow  );
	BOOL  IsCaptionVisible();
	BOOL  IsExpanded();
	BOOL  IsExpanding();
	short  GetExpandedClientHeight();
	void SetExpanded(BOOL  bExpanded  );
	BOOL  IsDirty();
	struct SkinRect  GetOuterMargins();
	struct SkinRect  GetInnerMargins();
	short  GetMinimumClientHeight();
	void SetMinimumClientHeight(short  nMinClientHeight  );
	void OnFillClient(OLE_HANDLE  pDC, struct SkinRect  rc  );
	enum DUITASKPANELITEM_LAYOUT  GetItemLayout();
	struct IDUITaskPanelGroupItem * HitTest(struct SkinPoint  pt, struct SkinRect * lpRect  );
	void SetItemLayout(enum DUITASKPANELITEM_LAYOUT  itemLayout  );
	void SetSelectedItem(struct IDUITaskPanelGroupItem * pItem  );
	BOOL  IsChildItemDragOver();
	short  GetItemCount();
	BOOL  IsScrollButtonEnabled(BOOL  bScrollButtonUp  );
	short  GetScrollOffsetPos();
	void SetOffsetItem(short  nScrollOffset, BOOL  bUpdateScrollButtons  );
	BOOL  IsItemVisible(struct IDUITaskPanelGroupItem * pItem, BOOL  bAllowPart  );
	short  GetOffsetItem();
	void Scroll(short  nDelta  );
	short  GetCaptionHeight();
	struct SkinSize  GetItemIconSize();
	void SetIconSize(struct SkinSize  szItemIcon  );
	struct IDUITaskPanelGroupItem * GetNextVisibleItem(short  nIndex, short  nDirection  );
	short  CalcInsideHeight();
	void OnCalcClientHeight(OLE_HANDLE  pDC, struct SkinRect  rc  );
	struct IDUITaskPanelGroupItem * AddControlItem(OLE_HANDLE  hWnd  );
	void SetClientBitmap(long  nID, OLE_COLOR  clrTransparent, BOOL  bAlpha  );
	void SetCaptionText(tstring  strText  );
	void SetIconPath(tstring  strText  );
	void RemoveItem(long  nID  );
};

struct __declspec(uuid("438584e9-2daa-4327-97ae-302313878cb6")) IDUITaskPanelGroupItem : IDUITaskPanelItem
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_OnReposition(struct SkinRect rc, struct SkinRect *pResult) = 0;
	virtual HRESULT __stdcall raw_OnDrawItem(OLE_HANDLE pDC, struct SkinRect rc  ) = 0;
	virtual HRESULT __stdcall raw_GetMargins(struct SkinRect *pResult) = 0;
	virtual HRESULT __stdcall raw_GetItemRect(struct SkinRect *pResult) = 0;
	virtual HRESULT __stdcall raw_SetItemRect(struct SkinRect *lpRect  ) = 0;
	virtual HRESULT __stdcall raw_SetBold(VARIANT_BOOL bBold  ) = 0;
	virtual HRESULT __stdcall raw_IsBold(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetControlHandle(OLE_HANDLE hWnd  ) = 0;
	virtual HRESULT __stdcall raw_GetControlHandle(OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_OnAnimate(short nStep  ) = 0;
	virtual HRESULT __stdcall raw_SetSize(struct SkinSize szItem, VARIANT_BOOL bAutoHeight  ) = 0;
	virtual HRESULT __stdcall raw_GetBackColor(OLE_COLOR *pResult) = 0;
	virtual HRESULT __stdcall raw_GetTextColor(OLE_COLOR *pResult) = 0;
	virtual HRESULT __stdcall raw_SetTextColor(OLE_COLOR clrText  ) = 0;
	virtual HRESULT __stdcall raw_IsItemSelected(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetItemSelected(VARIANT_BOOL bSelected  ) = 0;
	virtual HRESULT __stdcall raw_SetDragText(BSTR lpszDragText  ) = 0;
	virtual HRESULT __stdcall raw_GetDragText(BSTR *pResult) = 0;
	virtual HRESULT __stdcall raw_GetSize(struct SkinSize *pResult) = 0;
	virtual HRESULT __stdcall raw_IsAutoHeight(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetIconFile(BSTR sIconFile  ) = 0;
	virtual HRESULT __stdcall raw_SetIcon(OLE_HANDLE hBmp  ) = 0;

	//
	//Method Wrapper
	//
	struct SkinRect  OnReposition(struct SkinRect  rc  );
	void OnDrawItem(OLE_HANDLE  pDC, struct SkinRect  rc  );
	struct SkinRect  GetMargins();
	struct SkinRect  GetItemRect();
	void SetItemRect(struct SkinRect * lpRect  );
	void SetBold(BOOL  bBold  );
	BOOL  IsBold();
	void SetControlHandle(OLE_HANDLE  hWnd  );
	OLE_HANDLE  GetControlHandle();
	void OnAnimate(short  nStep  );
	void SetSize(struct SkinSize  szItem, BOOL  bAutoHeight  );
	OLE_COLOR  GetBackColor();
	OLE_COLOR  GetTextColor();
	void SetTextColor(OLE_COLOR  clrText  );
	BOOL  IsItemSelected();
	void SetItemSelected(BOOL  bSelected  );
	void SetDragText(tstring  lpszDragText  );
	tstring  GetDragText();
	struct SkinSize  GetSize();
	BOOL  IsAutoHeight();
	void SetIconFile(tstring  sIconFile  );
	void SetIcon(OLE_HANDLE  hBmp  );
};

enum DUITASKPANELITEM_LAYOUT
{ 
	DUITASKITEM_LAYOUT_CONTROL = 3,
	DUITASKITEM_LAYOUT_GROUP = 0,
	DUITASKITEM_LAYOUT_LAST = 4,
	DUITASKITEM_LAYOUT_LINK = 1,
	DUITASKITEM_LAYOUT_TEXT = 2 
};

struct __declspec(uuid("4c1eda3e-fbfd-48e1-91d6-dca2c7abdd91")) IDUITaskPanelScrollButton : IDispatch
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_IsVisible(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_IsScrollUp(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetScrollUp(VARIANT_BOOL bScrollUp  ) = 0;
	virtual HRESULT __stdcall raw_IsEnabled(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetEnabled(VARIANT_BOOL bEnabled  ) = 0;
	virtual HRESULT __stdcall raw_IsPressed(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetPressed(VARIANT_BOOL bPressed  ) = 0;
	virtual HRESULT __stdcall raw_GetButtonRect(struct SkinRect *pResult) = 0;
	virtual HRESULT __stdcall raw_SetButtonRect(struct SkinRect rect  ) = 0;
	virtual HRESULT __stdcall raw_IsHot(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetHot(VARIANT_BOOL bHot  ) = 0;
	virtual HRESULT __stdcall raw_GetGroupScroll(struct IDUITaskPanelGroup **pResult) = 0;
	virtual HRESULT __stdcall raw_SetGroupScroll(struct IDUITaskPanelGroup *pGroup  ) = 0;
	virtual HRESULT __stdcall raw_GetGroupCaption(struct IDUITaskPanelGroup **pResult) = 0;
	virtual HRESULT __stdcall raw_SetGroupCaption(struct IDUITaskPanelGroup *pGroup  ) = 0;

	//
	//Method Wrapper
	//
	BOOL  IsVisible();
	BOOL  IsScrollUp();
	void SetScrollUp(BOOL  bScrollUp  );
	BOOL  IsEnabled();
	void SetEnabled(BOOL  bEnabled  );
	BOOL  IsPressed();
	void SetPressed(BOOL  bPressed  );
	struct SkinRect  GetButtonRect();
	void SetButtonRect(struct SkinRect  rect  );
	BOOL  IsHot();
	void SetHot(BOOL  bHot  );
	struct IDUITaskPanelGroup * GetGroupScroll();
	void SetGroupScroll(struct IDUITaskPanelGroup * pGroup  );
	struct IDUITaskPanelGroup * GetGroupCaption();
	void SetGroupCaption(struct IDUITaskPanelGroup * pGroup  );
};

struct __declspec(uuid("e000621e-9dec-4146-9e4b-bbe2151796f3")) _IDUITaskPanelItemEvents : IDispatch
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

struct __declspec(uuid("407e0579-71a4-4735-a2fc-123375f57fb9")) _IDUITaskPanelGroupEvents : IDispatch
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

struct __declspec(uuid("9abedc8a-6de3-4049-ab4a-47d5a4aa5642")) _IDUITaskPanelItemsEvents : IDispatch
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

struct __declspec(uuid("5e710613-7cf1-4728-a999-1a9be9aa5677")) _IDUITaskPanelGroupItemsEvents : IDispatch
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

struct __declspec(uuid("99995235-7245-4061-bfde-506359dff4a8")) IDUITaskPanelGroupItems : IDUITaskPanelItems
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

struct __declspec(uuid("1206ac55-5b39-4856-a5a2-038e5b2f98b7")) _IDUITaskPanelGroupsEvents : IDispatch
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

struct __declspec(uuid("d3542b1f-0786-4b36-9780-d5713af20fd6")) IDUITaskPanelGroups : IDUITaskPanelItems
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

struct __declspec(uuid("da9288c9-2584-4b72-a122-5dfc597d5af8")) _IDUITaskPanelGroupItemEvents : IDispatch
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

struct __declspec(uuid("0c15c9e1-3ad1-47f2-aa39-9fc18e45ff1c")) _IDUITaskPanelScrollButtonEvents : IDispatch
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


#include "OfficeAll.tli"
#endif //__HEAD__OFFICEALL__