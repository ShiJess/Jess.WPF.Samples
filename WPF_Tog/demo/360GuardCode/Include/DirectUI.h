#ifndef __HEAD__DIRECTUI__
#define __HEAD__DIRECTUI__
#include <comdef.h>

#include <xstring>
using namespace std;
#ifdef _UNICODE
#define tstring wstring
#else
#define tstring string
#endif

struct __declspec(uuid("fe34cf4a-8b5d-4776-970e-374dfcb28bda")) IDUIGifFileInfo;
struct __declspec(uuid("0a2b4594-7cad-4891-a241-2484d27c5795")) DUIGifFileInfo;
struct __declspec(uuid("045bf7f8-1bbf-43a9-b7a0-526afc0c0084")) DUIRenderImage;
struct __declspec(uuid("d3accae8-9270-44c8-8e8e-1c8549560b1e")) _IDUIRenderImageEvents;
struct __declspec(uuid("3f14e61e-ebb4-4748-8139-a6780e776365")) DUIRenderDC;
struct __declspec(uuid("9970e439-c167-44ea-9339-829e2f2aa369")) _IDUIRenderDCEvents;
struct __declspec(uuid("bac1bd65-02c5-491d-a472-d72a3845e964")) CDUIXMLNode;
struct __declspec(uuid("79811451-25bd-4717-8739-c1055edbc9aa")) IScriptUtils;
struct __declspec(uuid("d0ca8d08-2001-4d11-bc31-abdc90caa7fa")) ScriptUtils;
struct __declspec(uuid("1824c06e-a571-45ac-b187-52e91a0296cd")) _IScriptUtilsEvents;
struct __declspec(uuid("f6df191b-066b-4071-86b8-db7ff22933cc")) DUISkinSubRgn;
struct __declspec(uuid("c499116a-deb3-4cd7-9e88-a8544eb1fa09")) IDUISkinRgn;
struct __declspec(uuid("2b21f041-f384-4b9b-988e-b1e04f139870")) DUISkinRgn;
struct __declspec(uuid("0b00fac9-ca23-49cc-b3d7-3201e582e7be")) _IDUISkinRgnEvents;
struct __declspec(uuid("ce4d8c04-354a-4a27-94e2-00fc827cbc02")) IDUISkinInfo;
struct __declspec(uuid("b67e090e-49bb-4703-8ece-a46e18f4759b")) DUISkinInfo;
struct __declspec(uuid("c7908c55-dc46-4690-9bdd-0c74206cc8c6")) _IDUISkinInfoEvents;
struct __declspec(uuid("211345bf-b756-47ae-9552-6c4b8c0cb705")) IDUIImageSection;
struct __declspec(uuid("9c6a7ff8-7491-4dba-95ee-bc33fe4851ae")) DUIImageSection;
struct __declspec(uuid("9a9576d0-ceea-494e-8ea8-79c177468385")) _IDUIImageSectionEvents;
struct __declspec(uuid("3be83f55-54d3-45ac-8344-11a9fadd93b1")) DUIPos;
struct __declspec(uuid("d7eeb0c6-9097-4b3a-850c-e5248deb8bbb")) _IDUIPosEvents;
struct __declspec(uuid("278939b0-f248-422f-b534-18a7f0b96256")) IDUIFont;
struct __declspec(uuid("9f5bfb0b-e7ec-497f-ab3e-54de30300b22")) DUIFont;
struct __declspec(uuid("198d0d62-17fb-41c0-84e5-2b4c34a2e12d")) _IDUIFontEvents;
struct __declspec(uuid("149ee2b8-081d-45f7-bdd7-eae215b6f579")) IDUIMsgNotify;
struct __declspec(uuid("a43757da-2b4b-4f6e-9240-1cf5d41d60e7")) DUIMsgNotify;
struct __declspec(uuid("d85f712e-d4c5-4434-ac2e-c501d3c6da2f")) _IDUIMsgNotifyEvents;
struct __declspec(uuid("7331327a-b83a-4087-b691-9ce80751e702")) IDUIPoint;
struct __declspec(uuid("fcf10482-3fdf-43e4-a14e-e69d8f325b1f")) DUIPoint;
struct __declspec(uuid("6510ddf0-9eab-4f74-8a6b-0aacb35e1a8e")) _IDUIPointEvents;
struct __declspec(uuid("6b68ed9a-e884-4f44-9600-6fa5c7ffda0a")) IDUISize;
struct __declspec(uuid("8faea6dc-8a4a-4056-866a-c2b4f8f34905")) DUISize;
struct __declspec(uuid("f0dd0bb6-3ec8-4f02-9dc1-ac625be70882")) _IDUISizeEvents;
struct __declspec(uuid("f095aa11-2e84-4aa4-a237-cff6a1fd1c34")) DUIRect;
struct __declspec(uuid("796c4f3b-dfc5-42c9-89cc-52c87075c01f")) _IDUIRectEvents;
struct __declspec(uuid("357da2a6-1e4e-412a-9145-b3a1034386c0")) LayerGraphics;
struct __declspec(uuid("c0ea9f9e-3628-4c27-8054-38e72248a203")) _ILayerGraphicsEvents;
struct __declspec(uuid("d3db000a-3af6-4e39-a204-ed850a6d4253")) DUIImageList;
struct __declspec(uuid("9c6695ff-0968-467e-a1f1-f165d34948a2")) IPluginProp;
struct __declspec(uuid("2c32b2f2-af32-4de6-beb4-aa8bbbea3b1f")) PluginProp;
struct __declspec(uuid("8d91e71c-d6e6-4169-bc5b-03f39766df3b")) IDUICustom;
struct __declspec(uuid("7bb8227f-a4a3-414f-b071-98888bd42bda")) DUICustom;
struct __declspec(uuid("609c1357-eb74-4645-bba3-e84242fe918d")) IHotkeyProp;
struct __declspec(uuid("46380997-cbb9-4ab9-941a-c41146eb70a4")) HotkeyProp;
struct __declspec(uuid("02c26281-9855-4b73-a376-c74db09a397a")) IFillColorProp;
struct __declspec(uuid("8c45548f-df39-4118-9811-de40763f5993")) FillColorProp;
struct __declspec(uuid("3c8620d4-7490-422e-b4ff-62c8a6c459f6")) IFillColor;
struct __declspec(uuid("e4c5b3a9-bf18-4584-96e6-5e20b90a47ee")) FillColor;
struct __declspec(uuid("4ca4d223-a97e-45d7-9e03-c16fdaed3f22")) IComboProp;
struct __declspec(uuid("fcac37fd-d274-4160-b4fd-d86590dadd92")) ComboProp;
struct __declspec(uuid("00000000-0000-0000-0000-000000000000")) tagRECT;
struct __declspec(uuid("fe75c13a-e145-49e1-a146-de46f7c40f38")) IColorProp;
struct __declspec(uuid("69ad7b87-f139-4a34-ac70-7ad4804ec654")) ColorProp;
struct __declspec(uuid("cf820c10-b81a-4c3f-8641-05008a3b62a9")) IFontProp;
struct __declspec(uuid("f3bbf932-9d4d-45e1-b61c-d84e7f8f8793")) FontProp;
struct __declspec(uuid("e4d39c73-4db1-465e-8f89-ed67637820cc")) ICursorProp;
struct __declspec(uuid("93098046-8acb-421b-8f1a-c8bbd684f6f8")) CursorProp;
struct __declspec(uuid("aadcc987-5067-44ea-a536-4df0ef31e2f3")) ITextStyleProp;
struct __declspec(uuid("2627526f-16c6-44e9-9804-3875c329da54")) TextStyleProp;
struct __declspec(uuid("c08c3e8e-73b5-40b1-b606-6612e35bbb52")) GifFileInfo;
struct __declspec(uuid("645cb1d2-6a73-4e6c-8b02-abed4df7c452")) IImageSecProp;
struct __declspec(uuid("21388eb3-0126-4eb6-8b8d-dea35a1bb8ca")) ImageSecProp;
struct __declspec(uuid("d79c1d51-40b9-423a-bf7e-901324a1839b")) IStrProp;
struct __declspec(uuid("f2e5e81b-c67a-4c33-8159-e17186b22168")) StrProp;
struct __declspec(uuid("acba1dac-7392-4c9a-8e04-b660cfccb7d6")) IBOOLProp;
struct __declspec(uuid("c91b5ad2-0abb-4925-880b-4240a6557131")) BOOLProp;
struct __declspec(uuid("1130a1e2-4c1f-4a0b-a5ae-4620521a0ec4")) INumberFloatProp;
struct __declspec(uuid("35dfaec7-15bc-4843-8e45-8861fdc74634")) NumberFloatProp;
struct __declspec(uuid("8c32e1b5-1a8b-4b54-b9ee-c66634a107f3")) INumberLongProp;
struct __declspec(uuid("d4df189d-04aa-49cc-bab8-847ed3575c3d")) NumberLongProp;
struct __declspec(uuid("c67a022f-5292-4fdf-9bb3-bc4407205c81")) DUIPropBase;
struct __declspec(uuid("9adaede6-e1a2-4c33-9498-1a9f745f0540")) DUIHotkey;
struct __declspec(uuid("1284c06b-b417-4228-a2e2-b0a7d33314a0")) DUIPropType;
struct __declspec(uuid("91d50563-e3f7-4a0d-897e-bea4ffee017d")) CtrlPluginProp;
struct __declspec(uuid("36f11878-6a79-4e0d-89e7-a0debbba950c")) _ICtrlPluginPropEvents;
struct __declspec(uuid("208cb093-c37e-4f00-a7b4-72dc0aae4a26")) DUIObjectDraw;
struct __declspec(uuid("2d97af66-11fb-4df7-8d15-960247ff4f60")) DUIControlBase;
struct __declspec(uuid("1e8dbf53-7b39-414d-abf7-dfa07c762ed9")) _IDUIControlBaseEvents;
struct __declspec(uuid("9371bb73-d1e4-4870-a7e6-79354d4a16a5")) SkinPoint;
struct __declspec(uuid("599a578c-3eb1-4312-aa46-96a22e5ba33f")) IDUIManager;
struct __declspec(uuid("3194d9cb-e988-47bb-9444-f57b1b3db4d0")) DUIManager;
struct __declspec(uuid("3859e483-fbaf-454b-abeb-0e6830fbf7fc")) _IDUIManagerEvents;
struct __declspec(uuid("c1fab002-6284-4aff-bdac-18eb4ce302f4")) DUIWindow;
struct __declspec(uuid("791774ff-09b8-415a-afe5-2c8415694c45")) DUIEvents;
struct __declspec(uuid("c865ecaf-cb66-491d-8112-e42dfcc532cc")) _IDUIEventsEvents;
struct __declspec(uuid("e53046e4-1d8e-4dc9-a7fd-cd7f7e6aab30")) DUITextStyle;
struct __declspec(uuid("bde5eb1f-9d5a-4d41-818d-5e373bb238fe")) IDUIUtilities;
struct __declspec(uuid("96a08c92-f80f-40ce-a242-05653375bffa")) DUIUtilities;
struct __declspec(uuid("3cb7ca11-51c0-4031-8475-0d960346ec73")) DUICursor;
struct __declspec(uuid("9e28e37c-34bf-4e7f-877d-3b6c98d9c493")) DUIImageBase;
struct __declspec(uuid("bdf1255f-cf0a-40f7-b1a2-309998afe3aa")) DUIFontEx;
struct __declspec(uuid("b030a934-c629-4945-adef-348e8495f239")) DUIPicture;
struct __declspec(uuid("b42fe1f4-ad58-4134-93bd-107473911981")) SkinWithRealResBase;
struct __declspec(uuid("c5c79e8b-7b06-4121-a66a-1c0678e0ec0d")) SkinShareBase;
struct __declspec(uuid("9c8875c9-e2f4-433a-95fe-189c427298a3")) SkinObjResBaseCom;
enum DUI_REFRESH_TYPE;

struct __declspec(uuid("111d055d-10ae-4afc-82ca-ceb6da472396")) IDUISkinSubRgn;
enum DUI_NCRGNTYPE;

struct __declspec(uuid("600b0bdd-2ece-4e36-a349-456c7be9440f")) IDirectUI;
struct __declspec(uuid("4b26bc0a-b8d7-4bfb-ae0b-adccc4220c7a")) DirectUI;
struct __declspec(uuid("4a0ba9b9-936a-4997-b304-bbad30f3477e")) DUIRes;
struct __declspec(uuid("390be38e-750b-44c8-bcc5-755bce4e5190")) IDUIXMLNode;
struct __declspec(uuid("892b86ac-044b-42c8-bdaf-9a6723398b53")) DUI_DRAGINFO;
enum SKINCTRL_CLASSTYPE;

enum ShowWindowFlags;

struct __declspec(uuid("9b840c4f-b2e8-46a7-9d04-8f0571adec3a")) IDUIWindow;
enum DUI_HOOKTYPE;

struct __declspec(uuid("798122f9-1283-403b-ad0c-9f489c6a1b20")) IDUIImageList;
enum DUI_HAVECANVASFLAGES;

struct __declspec(uuid("75347a2e-0016-4b0c-bc3a-d7a3a8b59a53")) DUINotify;
struct __declspec(uuid("ca0c0c48-5528-4f22-9c5c-6f0288ac8879")) IDUIHotkey;
struct __declspec(uuid("2ce73bd6-18d7-4aa0-8f1d-169729a42ab5")) IDUICursor;
struct __declspec(uuid("d8439554-a9c5-40c4-acee-6db948d15df2")) IPropChangedCallback;
struct __declspec(uuid("8425da30-24dd-43c2-b0c9-5ef2bf80929a")) IDUIPropBase;
enum enumPropType;

struct __declspec(uuid("7d39fcec-7410-45b5-87be-d4952e7e873c")) IDUIPropType;
struct __declspec(uuid("9b178567-37f3-4229-8286-234217f0a2fa")) ICtrlPluginProp;
struct __declspec(uuid("86d01378-75ad-42fc-8f3b-99f796d89a18")) IDUIObjectDraw;
struct __declspec(uuid("b143f497-cdec-4a2f-b903-530228d4bdb1")) IDUIControlBase;
struct __declspec(uuid("a6aa07b6-c18d-4df4-863d-1c225e98d781")) SkinSize;
struct __declspec(uuid("3fa1fe8f-94e1-493b-a0cc-d50ae1576ae1")) DUILOGFONT;
struct __declspec(uuid("47ac6577-d600-49b8-a0bb-ae14897769cd")) IDUIFontEx;
struct __declspec(uuid("118c0877-b832-4c18-bfbf-7a112483b6af")) IDUITextStyle;
struct __declspec(uuid("3a9bcf55-c161-4e1d-86d8-a4454e5ae2de")) IDUIEvents;
enum DUI_RENDERENGINE_TYPE;

struct __declspec(uuid("533b8057-9b33-4c2a-b643-35cc61df5e33")) IDUIRenderImage;
struct __declspec(uuid("b3ad51eb-77be-44d4-959e-2244ab8c5718")) IDUIRenderDC;
struct __declspec(uuid("6ab9bf12-f302-4e71-bed1-23b6537bc79c")) SkinImageSection;
enum DUI_PICTURE_TYPE;

struct __declspec(uuid("ab375056-06b6-4507-8e67-2cffebc44ffc")) ISkinWithRealResBase;
struct __declspec(uuid("1c43a9bd-c603-4592-bfbe-790561c4f6bb")) IDUIPicture;
struct __declspec(uuid("d0ab9acc-2c46-4198-a091-54e117e9677c")) ISkinShareBase;
struct __declspec(uuid("1d0ecc68-0eac-4ff3-a0c7-6d2636c6d6ac")) IDUIImageBase;
struct __declspec(uuid("be88233e-f480-47e1-846d-39652e124e9e")) ILayerGraphics;
enum DUIDockObjType;

struct __declspec(uuid("e774c2b4-40d5-46f0-9491-89bd8f3d1b6f")) SkinRect;
struct __declspec(uuid("0ab156f7-6898-431e-9c14-f39a6e3ebb11")) IDUIRect;
struct __declspec(uuid("18e047ba-5e32-4f27-b1a6-8c8d325f3c9c")) PosBase;
struct __declspec(uuid("f10647e3-4d97-44df-a732-00e135970986")) DUIPosition;
enum PosVertSpaceType;

enum PosHorzSpaceType;

enum PosVertAlignType;

enum PosHorzAlignType;

struct __declspec(uuid("18e4d545-3c21-48ea-a7c0-172acaf56f8c")) IDUIPos;
struct __declspec(uuid("936c7adf-65af-4807-8434-474243ddeb26")) ISkinObjResBase;
enum DUIObjType;

struct __declspec(uuid("f0a6b880-d1d3-4f9e-9e06-ba340130a26d")) IDUIRes;
struct __declspec(uuid("932cf3c4-9cff-42b9-8fe7-0e246e888eab")) IDUIObj;
struct __declspec(uuid("3f53aa14-cb28-4afe-b3c4-cd9f6870db87")) DUIObj;
enum DUI_LANGUAGE;

enum DUIMsgID;

enum DUIMsgID
{ 
	DUISM_ACCESSCONFIGED = 1846,
	DUISM_AUTOLOADINIT = 1907,
	DUISM_AUTORESIZE = 1892,
	DUISM_CALLPROP = 1874,
	DUISM_CHANGELANGUAGE = 1906,
	DUISM_CHANGESKIN = 1895,
	DUISM_CHANGESKINSTART = 1905,
	DUISM_CLONED = 1848,
	DUISM_COMMAND = 1029,
	DUISM_CREATEPROP = 1845,
	DUISM_DESIGNSTATUSCHANGED = 1875,
	DUISM_DESTROYBMPPERPIXEL = 1860,
	DUISM_DESTROYING = 1843,
	DUISM_DISPOSEMOUSEMOVE = 1894,
	DUISM_DRAGING = 1904,
	DUISM_DRAWPREVIEW = 1876,
	DUISM_DUI_MESSAGE = 1908,
	DUISM_ENABLEOBJECT = 1844,
	DUISM_ENDDRAG = 1897,
	DUISM_EXPORTCONFIGED = 1847,
	DUISM_FINALCREATE = 1877,
	DUISM_GETAUTHORINFO = 1857,
	DUISM_GETCATEGORYNAME = 1859,
	DUISM_GETCONTROLICON = 1856,
	DUISM_GETCONTROLTYPENAME = 1858,
	DUISM_GETDRAGCURSOR = 1849,
	DUISM_GETTABINFO = 1881,
	DUISM_HOOKPROC = 1890,
	DUISM_IMPORTCONFIG = 1878,
	DUISM_INITDIALOG = 1842,
	DUISM_INITOBJECT = 1841,
	DUISM_ISDRAGABLED = 1879,
	DUISM_KBHOOKPROC = 1889,
	DUISM_LBUTTONDBCLICK = 1862,
	DUISM_LBUTTONDOWN = 1027,
	DUISM_LBUTTONUP = 1028,
	DUISM_MOUSEENTER = 1891,
	DUISM_MOUSELEAVE = 1863,
	DUISM_MOUSEMOVE = 1861,
	DUISM_NOTIFYCHILDREN = 1864,
	DUISM_ONKILLFOCUS = 3034,
	DUISM_ONSETFOCUS = 3033,
	DUISM_PROPCHANGEDNOTIFY = 1880,
	DUISM_RBUTTONDOWN = 3030,
	DUISM_RBUTTONUP = 3031,
	DUISM_REFRESH = 1026,
	DUISM_RESKIN = 1025,
	DUISM_SETFOCUS = 1888,
	DUISM_SETRENDERDEVICED = 1909,
	DUISM_SETTOOPTIP = 3032,
	DUISM_SIZE = 1872,
	DUISM_STARTDRAG = 1896,
	DUISM_TABITEMSELECTCHANGED = 3029,
	DUISM_TIMER = 1873 
};

enum DUI_LANGUAGE
{ 
	DUI_ENGLISH = 1,
	DUI_FRENCH = 3,
	DUI_GERMAN = 4,
	DUI_JAPANESE = 2,
	DUI_LANGUAGE_LAST = 5,
	DUI_ZH_CN = 0 
};

struct __declspec(uuid("932cf3c4-9cff-42b9-8fe7-0e246e888eab")) IDUIObj : IDispatch
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_GetName(BSTR *pResult) = 0;
	virtual HRESULT __stdcall raw_SetName(BSTR strName  ) = 0;
	virtual HRESULT __stdcall raw_SetObjPtr(OLE_HANDLE pObjPtr  ) = 0;
	virtual HRESULT __stdcall raw_GetObjPtr(OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_GetObjectID(BSTR *pResult) = 0;
	virtual HRESULT __stdcall raw_AccessConfig(VARIANT_BOOL bRead, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetDUIRes(struct IDUIRes **pResult) = 0;
	virtual HRESULT __stdcall raw_SetDUIRes(struct IDUIRes *pResult  ) = 0;
	virtual HRESULT __stdcall raw_GetXMLNode(OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_GetType(enum DUIObjType *pResult) = 0;
	virtual HRESULT __stdcall raw_SetType(enum DUIObjType objType  ) = 0;
	virtual HRESULT __stdcall raw_GetTypeName(BSTR *pResult) = 0;
	virtual HRESULT __stdcall raw_SetTypeName(BSTR strTypeName  ) = 0;
	virtual HRESULT __stdcall raw_SetModified(VARIANT_BOOL bModified  ) = 0;
	virtual HRESULT __stdcall raw_IsModified(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetDUIXMLNodePtr(struct IDUIXMLNode **pResult) = 0;
	virtual HRESULT __stdcall raw_AddInterRef(long *pResult) = 0;
	virtual HRESULT __stdcall raw_ReleaseInterRef(long *pResult) = 0;

	//
	//Method Wrapper
	//
	tstring  GetName();
	void SetName(tstring  strName  );
	void SetObjPtr(OLE_HANDLE  pObjPtr  );
	OLE_HANDLE  GetObjPtr();
	tstring  GetObjectID();
	BOOL  AccessConfig(BOOL  bRead  );
	struct IDUIRes * GetDUIRes();
	void SetDUIRes(struct IDUIRes * pResult  );
	OLE_HANDLE  GetXMLNode();
	enum DUIObjType  GetType();
	void SetType(enum DUIObjType  objType  );
	tstring  GetTypeName();
	void SetTypeName(tstring  strTypeName  );
	void SetModified(BOOL  bModified  );
	BOOL  IsModified();
	struct IDUIXMLNode * GetDUIXMLNodePtr();
	long  AddInterRef();
	long  ReleaseInterRef();
};

struct __declspec(uuid("936c7adf-65af-4807-8434-474243ddeb26")) ISkinObjResBase : IDUIObj
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_IsEnable(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_EnableObject(VARIANT_BOOL bEnable, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetVisible(VARIANT_BOOL bVisible, VARIANT_BOOL bRefresh, VARIANT_BOOL bAnimate  ) = 0;
	virtual HRESULT __stdcall raw_GetParent(struct ISkinObjResBase **pResult) = 0;
	virtual HRESULT __stdcall raw_SetParent(struct ISkinObjResBase *pObjParent  ) = 0;
	virtual HRESULT __stdcall raw_GetRoot(struct ISkinObjResBase **pResult) = 0;
	virtual HRESULT __stdcall raw_IsExisted(struct ISkinObjResBase *pObj, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_AddSubObject(struct ISkinObjResBase *pSubObj, VARIANT_BOOL bInsertFirst, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_MoveAhead(struct ISkinObjResBase *pSubObj, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_MoveBack(struct ISkinObjResBase *pSubObj, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_Remove(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetSubObject(short nIndex, struct ISkinObjResBase **pResult) = 0;
	virtual HRESULT __stdcall raw_RemoveAllSubObjects() = 0;
	virtual HRESULT __stdcall raw_GetSubObjIndex(struct ISkinObjResBase *pSubObj, short *pResult) = 0;
	virtual HRESULT __stdcall raw_GetChildCount(short *pResult) = 0;
	virtual HRESULT __stdcall raw_GetSubCaptionObject(BSTR strCaption, short *pnIndex, struct ISkinObjResBase **pResult) = 0;
	virtual HRESULT __stdcall raw_GetSubResObject(struct ISkinObjResBase *pObj, short *pnIndex, struct ISkinObjResBase **pResult) = 0;
	virtual HRESULT __stdcall raw_GetObjectByCaption(long lType, BSTR strName, VARIANT_BOOL bDeep, struct ISkinObjResBase **pResult) = 0;
	virtual HRESULT __stdcall raw_DelAllSubObjects() = 0;
	virtual HRESULT __stdcall raw_SetPosition(struct IDUIPos *pObjPos  ) = 0;
	virtual HRESULT __stdcall raw_ResizeThis() = 0;
	virtual HRESULT __stdcall raw_Center() = 0;
	virtual HRESULT __stdcall raw_RemoveSubObject(struct ISkinObjResBase *pSubObj, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_InsertSubObject(struct ISkinObjResBase *pSubObj, short nIndex, short *pResult) = 0;
	virtual HRESULT __stdcall raw_RedrawWindow(VARIANT_BOOL bUpdateNow, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_DirectDraw(VARIANT_BOOL bDestroyBmp  ) = 0;
	virtual HRESULT __stdcall raw_GetDirectUI(IDispatch **pResult) = 0;
	virtual HRESULT __stdcall raw_GetWindow(OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_SetOwnerHwnd(OLE_HANDLE lhWnd  ) = 0;
	virtual HRESULT __stdcall raw_SetDirectUIHwnd(OLE_HANDLE lhWnd  ) = 0;
	virtual HRESULT __stdcall raw_GetRect(struct IDUIRect **pResult) = 0;
	virtual HRESULT __stdcall raw_GetDockType(enum DUIDockObjType *pResult) = 0;
	virtual HRESULT __stdcall raw_Dock(enum DUIDockObjType ntype, VARIANT_BOOL bFull  ) = 0;
	virtual HRESULT __stdcall raw_SetRect(struct IDUIRect *pRect  ) = 0;
	virtual HRESULT __stdcall raw_Resize(struct SkinRect *pRect, long *pResult) = 0;
	virtual HRESULT __stdcall raw_GetPosition(struct IDUIPos **pResult) = 0;
	virtual HRESULT __stdcall raw_IsLButtonDowned(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetLButtonDowned(VARIANT_BOOL bValue  ) = 0;
	virtual HRESULT __stdcall raw_IsMouseMove(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetMouseMove(VARIANT_BOOL bValue  ) = 0;
	virtual HRESULT __stdcall raw_IsVisible(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetOpacity(short nOpacity  ) = 0;
	virtual HRESULT __stdcall raw_GetOpacity(short *pResult) = 0;
	virtual HRESULT __stdcall raw_SetBlendWithParent(VARIANT_BOOL bBlend  ) = 0;
	virtual HRESULT __stdcall raw_IsBlendWithParent(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetLayerBack(struct SkinRect rect, struct ILayerGraphics **pResult) = 0;
	virtual HRESULT __stdcall raw_GetLayerFore(struct SkinRect rect, struct ILayerGraphics **pResult) = 0;
	virtual HRESULT __stdcall raw_GetLayerMe(struct ILayerGraphics **pResult) = 0;
	virtual HRESULT __stdcall raw_IsSizing(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetDirectUILayerCache(struct ILayerGraphics **pResult) = 0;
	virtual HRESULT __stdcall raw_UpdateDirectUILayerCache(struct SkinRect rcDest, OLE_HANDLE hDC, struct SkinRect rcSource, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_DrawCurrentLayer(OLE_HANDLE hDC, VARIANT_BOOL bDrawChildren, struct SkinRect rcUpdate, VARIANT_BOOL bMemDC, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_MoveTop(struct ISkinObjResBase *pSubObj, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_DrawSprite(OLE_HANDLE hDCDest, struct SkinRect rcDest, struct SkinRect rcUpdateObject, OLE_HANDLE hFuncDrawBack, OLE_HANDLE pCallClassPtr, VARIANT_BOOL bUpdateCache, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_DrawBlindObject(OLE_HANDLE hDCDest, struct SkinRect rcDest, struct SkinRect rcUpdateObject, short nIndexStart, short nIndexEnd, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_DestroyRgnInfo(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_EnableRedraw(VARIANT_BOOL bSetRedraw  ) = 0;
	virtual HRESULT __stdcall raw_IsEnableRedraw(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetAvailRect(struct IDUIRect *pRect  ) = 0;
	virtual HRESULT __stdcall raw_GetAvailRect(struct IDUIRect **pResult) = 0;
	virtual HRESULT __stdcall raw_CallEvent(long nMsgID, OLE_HANDLE wParam, OLE_HANDLE lParam  ) = 0;
	virtual HRESULT __stdcall raw_SetUserData(OLE_HANDLE hData  ) = 0;
	virtual HRESULT __stdcall raw_GetUserData(OLE_HANDLE *pResult) = 0;

	//
	//Method Wrapper
	//
	BOOL  IsEnable();
	BOOL  EnableObject(BOOL  bEnable, BOOL  bRedraw  );
	void SetVisible(BOOL  bVisible, BOOL  bRefresh, BOOL  bAnimate  );
	struct ISkinObjResBase * GetParent();
	void SetParent(struct ISkinObjResBase * pObjParent  );
	struct ISkinObjResBase * GetRoot();
	BOOL  IsExisted(struct ISkinObjResBase * pObj  );
	BOOL  AddSubObject(struct ISkinObjResBase * pSubObj, BOOL  bInsertFirst  );
	BOOL  MoveAhead(struct ISkinObjResBase * pSubObj  );
	BOOL  MoveBack(struct ISkinObjResBase * pSubObj  );
	BOOL  Remove();
	struct ISkinObjResBase * GetSubObject(short  nIndex  );
	void RemoveAllSubObjects();
	short  GetSubObjIndex(struct ISkinObjResBase * pSubObj  );
	short  GetChildCount();
	struct ISkinObjResBase * GetSubCaptionObject(tstring  strCaption, short * pnIndex  );
	struct ISkinObjResBase * GetSubResObject(struct ISkinObjResBase * pObj, short * pnIndex  );
	struct ISkinObjResBase * GetObjectByCaption(long  lType, tstring  strName, BOOL  bDeep  );
	void DelAllSubObjects();
	void SetPosition(struct IDUIPos * pObjPos  );
	void ResizeThis();
	void Center();
	BOOL  RemoveSubObject(struct ISkinObjResBase * pSubObj  );
	short  InsertSubObject(struct ISkinObjResBase * pSubObj, short  nIndex  );
	BOOL  RedrawWindow(BOOL  bUpdateNow  );
	void DirectDraw(BOOL  bDestroyBmp  );
	IDispatch * GetDirectUI();
	OLE_HANDLE  GetWindow();
	void SetOwnerHwnd(OLE_HANDLE  lhWnd  );
	void SetDirectUIHwnd(OLE_HANDLE  lhWnd  );
	struct IDUIRect * GetRect();
	enum DUIDockObjType  GetDockType();
	void Dock(enum DUIDockObjType  ntype, BOOL  bFull  );
	void SetRect(struct IDUIRect * pRect  );
	long  Resize(struct SkinRect * pRect  );
	struct IDUIPos * GetPosition();
	BOOL  IsLButtonDowned();
	void SetLButtonDowned(BOOL  bValue  );
	BOOL  IsMouseMove();
	void SetMouseMove(BOOL  bValue  );
	BOOL  IsVisible();
	void SetOpacity(short  nOpacity  );
	short  GetOpacity();
	void SetBlendWithParent(BOOL  bBlend  );
	BOOL  IsBlendWithParent();
	struct ILayerGraphics * GetLayerBack(struct SkinRect  rect  );
	struct ILayerGraphics * GetLayerFore(struct SkinRect  rect  );
	struct ILayerGraphics * GetLayerMe();
	BOOL  IsSizing();
	struct ILayerGraphics * GetDirectUILayerCache();
	BOOL  UpdateDirectUILayerCache(struct SkinRect  rcDest, OLE_HANDLE  hDC, struct SkinRect  rcSource  );
	BOOL  DrawCurrentLayer(OLE_HANDLE  hDC, BOOL  bDrawChildren, struct SkinRect  rcUpdate, BOOL  bMemDC  );
	BOOL  MoveTop(struct ISkinObjResBase * pSubObj  );
	BOOL  DrawSprite(OLE_HANDLE  hDCDest, struct SkinRect  rcDest, struct SkinRect  rcUpdateObject, OLE_HANDLE  hFuncDrawBack, OLE_HANDLE  pCallClassPtr, BOOL  bUpdateCache  );
	BOOL  DrawBlindObject(OLE_HANDLE  hDCDest, struct SkinRect  rcDest, struct SkinRect  rcUpdateObject, short  nIndexStart, short  nIndexEnd  );
	BOOL  DestroyRgnInfo();
	void EnableRedraw(BOOL  bSetRedraw  );
	BOOL  IsEnableRedraw();
	void SetAvailRect(struct IDUIRect * pRect  );
	struct IDUIRect * GetAvailRect();
	void CallEvent(long  nMsgID, OLE_HANDLE  wParam, OLE_HANDLE  lParam  );
	void SetUserData(OLE_HANDLE  hData  );
	OLE_HANDLE  GetUserData();
};



struct __declspec(uuid("d0ab9acc-2c46-4198-a091-54e117e9677c")) ISkinShareBase : IDUIObj
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_GetContainerCount(short *pResult) = 0;
	virtual HRESULT __stdcall raw_AccessConfig2(OLE_HANDLE pXmlEle, BSTR strKeyName, VARIANT_BOOL bRead, VARIANT_BOOL bCompleteUseKey, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_ExportConfig(OLE_HANDLE pXmlEle, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetSharePtr(OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_DrawPreview(OLE_HANDLE hDC, struct SkinRect sknrc, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_IsValidateData(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_ReleaseRefrence(VARIANT_BOOL *pResult) = 0;

	//
	//Method Wrapper
	//
	short  GetContainerCount();
	BOOL  AccessConfig2(OLE_HANDLE  pXmlEle, tstring  strKeyName, BOOL  bRead, BOOL  bCompleteUseKey = FALSE  );
	BOOL  ExportConfig(OLE_HANDLE  pXmlEle  );
	OLE_HANDLE  GetSharePtr();
	BOOL  DrawPreview(OLE_HANDLE  hDC, struct SkinRect  sknrc  );
	BOOL  IsValidateData();
	BOOL  ReleaseRefrence();
};



struct __declspec(uuid("ab375056-06b6-4507-8e67-2cffebc44ffc")) ISkinWithRealResBase : ISkinShareBase
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_ImportFile(BSTR strFile, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_ExportFile(BSTR strFile, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetpByte(unsigned char **pResult) = 0;
	virtual HRESULT __stdcall raw_GetlSize(long *pResult) = 0;

	//
	//Method Wrapper
	//
	BOOL  ImportFile(tstring  strFile  );
	BOOL  ExportFile(tstring  strFile  );
	unsigned char * GetpByte();
	long  GetlSize();
};



struct __declspec(uuid("f0a6b880-d1d3-4f9e-9e06-ba340130a26d")) IDUIRes : IDispatch
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_OpenSkin(BSTR strSkinPath, BSTR strSknPath, VARIANT_BOOL bSkinCtrls, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_CloseSkin(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_CreateDirectUI(BSTR strName, OLE_HANDLE hWndParent, IDispatch **pResult) = 0;
	virtual HRESULT __stdcall raw_GetDirectUIForm(BSTR strName, IDispatch **pResult) = 0;
	virtual HRESULT __stdcall raw_GetResObject(enum DUIObjType eType, BSTR strName, struct ISkinObjResBase *pObjParent, VARIANT_BOOL bDeep, struct IDUIObj **pResult) = 0;
	virtual HRESULT __stdcall raw_GetImageBaseFromFile(BSTR strFilePath, struct IDUIImageBase **pResult) = 0;
	virtual HRESULT __stdcall raw_GetEventHandle(struct IDUIEvents **pResult) = 0;
	virtual HRESULT __stdcall raw_GetComDispatch(OLE_HANDLE pDUIObj, struct IDUIObj **pResult) = 0;
	virtual HRESULT __stdcall raw_GetResObjectByGuid(enum DUIObjType eType, BSTR strGuid, struct IDUIObj **pResult) = 0;
	virtual HRESULT __stdcall raw_RemoveObject(OLE_HANDLE pDUIObj, VARIANT_BOOL bRelease, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_AddScriptObjects(OLE_HANDLE pScriptObject, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_IsDesignStatus(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_DrawImageSection(struct SkinRect rect, struct IDUIImageBase *pImageSection, OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_DrawTextStyle(struct SkinRect rect, BSTR strText, struct IDUITextStyle *pTextStyle, OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_AccessAttribRect(OLE_HANDLE pXmlEle, BSTR strAttribName, struct SkinRect *prcValue, VARIANT_BOOL bRead, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_AccessAttribSize(OLE_HANDLE pXmlEle, BSTR strAttribName, struct SkinSize *psizeValue, VARIANT_BOOL bRead, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_AccessAttribLong(OLE_HANDLE pXmlEle, BSTR strAttribName, long *plValue, VARIANT_BOOL bRead, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_AccessAttribFloat(OLE_HANDLE pXmlEle, BSTR strAttribName, float *pfValue, VARIANT_BOOL bRead, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_AccessAttribDouble(OLE_HANDLE pXmlEle, BSTR strAttribName, double *pdValue, VARIANT_BOOL bRead, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_AccessAttribBOOL(OLE_HANDLE pXmlEle, BSTR strAttribName, VARIANT_BOOL *pbValue, VARIANT_BOOL bRead, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_AccessAttribString(OLE_HANDLE pXmlEle, BSTR strAttribName, BSTR *pstrValue, VARIANT_BOOL bRead, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_AccessAttribColor(OLE_HANDLE pXmlEle, BSTR strAttribName, OLE_COLOR *pclrValue, VARIANT_BOOL bRead, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GradientFill(OLE_HANDLE hDC, struct SkinRect rect, OLE_COLOR clrFrom, OLE_COLOR clrTo, long nIrotation, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetDUIResObjPtr(OLE_HANDLE lResObjPtr  ) = 0;
	virtual HRESULT __stdcall raw_GetDUIResObjPtr(OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_CreateDUIResObj(long *pResult) = 0;
	virtual HRESULT __stdcall raw_CloseDUIResObj(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_ImportSkin(OLE_HANDLE hInstance, long uResID, BSTR strResSec, OLE_HANDLE hObjParent, struct IDUIControlBase **pResult) = 0;
	virtual HRESULT __stdcall raw_GetHwndPrintBmp(OLE_HANDLE hDC, OLE_HANDLE hWnd, OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_DrawSkinImage(OLE_HANDLE hDC, struct SkinRect rect, struct IDUIImageBase *pImageBase, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_EnumObjectsToHwnd(enum DUIObjType objType, long nMsg, OLE_HANDLE hWndMsg  ) = 0;
	virtual HRESULT __stdcall raw_EnumObjectsToCallback(enum DUIObjType objType, OLE_HANDLE pFunCallback, OLE_HANDLE nParam  ) = 0;
	virtual HRESULT __stdcall raw_AddResObject(enum DUIObjType objType, struct IDUIObj *pOwnerObj, BSTR strName, VARIANT_BOOL bInsertFirst, struct IDUIObj **pResult) = 0;
	virtual HRESULT __stdcall raw_DeleteResObj(struct IDUIObj *pObj, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_RemoveResObject(struct IDUIObj *pObj, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetRgnFromHBitmap(OLE_HANDLE hBitmap, OLE_COLOR clrTrans, OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_AddPluginResObject(struct IDUIObj *pOwnerObj, BSTR strName, BSTR strGuid, struct IDUIControlBase **pResult) = 0;
	virtual HRESULT __stdcall raw_DrawIcon(OLE_HANDLE hDC, short xLeft, short yTop, short cxWidth, short cyHeight, OLE_HANDLE hIcon, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_ConvertINameToType(BSTR bstrInterfaceName, enum DUIObjType *pResult) = 0;
	virtual HRESULT __stdcall raw_ConvertTypeToIName(enum DUIObjType eType, BSTR *pResult) = 0;
	virtual HRESULT __stdcall raw_Save(BSTR bstrPath, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetDesignStatus(VARIANT_BOOL bDesign, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetSkinFilePath(BSTR *pResult) = 0;
	virtual HRESULT __stdcall raw_SetDynClearZipInfo(VARIANT_BOOL bClear  ) = 0;
	virtual HRESULT __stdcall raw_IsDynClearZipInfo(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_IsPerpixelDraw(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetImageListFromHIMAGELIST(OLE_HANDLE hImageList, struct IDUIImageList **pResult) = 0;
	virtual HRESULT __stdcall raw_GetImageListFromImageBase(struct IDUIImageBase *pImageBase, short cx, OLE_COLOR crMask, struct IDUIImageList **pResult) = 0;
	virtual HRESULT __stdcall raw_GetImageListFromFile(BSTR strFilePath, short cx, OLE_COLOR crMask, struct IDUIImageList **pResult) = 0;
	virtual HRESULT __stdcall raw_ReleasePluginResObject(struct IDUIControlBase *pPlugin  ) = 0;
	virtual HRESULT __stdcall raw_CreatePluginResObject(BSTR strGuid, struct IDUIControlBase **pResult) = 0;
	virtual HRESULT __stdcall raw_IsRegKbHookObj(struct IDUIControlBase *pObject, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_RegisterKbHookObj(struct IDUIControlBase *pObject, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_UnRegisterKbHookObj(struct IDUIControlBase *pObject, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_CallNextKBHook(long nCode, OLE_HANDLE wParam, OLE_HANDLE lParam, long *pResult) = 0;
	virtual HRESULT __stdcall raw_IsRegisterHookObject(enum DUI_HOOKTYPE dwHookType, struct IDUIControlBase *pObject, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_RegisterHookObject(enum DUI_HOOKTYPE dwHookType, struct IDUIControlBase *pObject, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_UnRegisterHookObject(enum DUI_HOOKTYPE dwHookType, struct IDUIControlBase *pObject, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_StartHook(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_EndHook(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetObjectFromLong(OLE_HANDLE nObject, struct IDUIObj **pResult) = 0;
	virtual HRESULT __stdcall raw_GetDUIWindow(struct IDUIWindow **pResult) = 0;
	virtual HRESULT __stdcall raw_ChangeSkn(BSTR strSkinPath, VARIANT_BOOL *pbResult  ) = 0;
	virtual HRESULT __stdcall raw_OpenTheme(BSTR strSkinPath, VARIANT_BOOL *pbResult  ) = 0;
	virtual HRESULT __stdcall raw_ExportSknDuiFile(BSTR strSkinPath, VARIANT_BOOL *pbResult  ) = 0;
	virtual HRESULT __stdcall raw_AddPluginResObject2(struct IDUIObj *pOwnerObj, BSTR strName, BSTR strGuid, VARIANT_BOOL bIsComposeCtrl, struct IDUIControlBase **pResult) = 0;
	virtual HRESULT __stdcall raw_AccessAttribString2(BSTR strAttribName, BSTR *pstrValue, VARIANT_BOOL bRead, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_AddStrProp(BSTR strKey, BSTR strValue, OLE_HANDLE pStrProp  ) = 0;
	virtual HRESULT __stdcall raw_RemoveStrProp(BSTR strKey, OLE_HANDLE pStrProp  ) = 0;
	virtual HRESULT __stdcall raw_ChangeLanguage(enum DUI_LANGUAGE eLang  ) = 0;
	virtual HRESULT __stdcall raw_GetCurAllLang(enum DUI_LANGUAGE *peLang, long eLangSize, long *pResult) = 0;
	virtual HRESULT __stdcall raw_GenerateLanguageXML(BSTR strXMLPath  ) = 0;
	virtual HRESULT __stdcall raw_GetCurLanguage(enum DUI_LANGUAGE *peLang  ) = 0;
	virtual HRESULT __stdcall raw_SetUseSkin(enum SKINCTRL_CLASSTYPE eClassType, VARIANT_BOOL bUseSkin  ) = 0;
	virtual HRESULT __stdcall raw_IsUseSkin(enum SKINCTRL_CLASSTYPE eClassType, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetSkinHwnd(OLE_HANDLE hWnd, VARIANT_BOOL bChildSkin  ) = 0;
	virtual HRESULT __stdcall raw_SetNoSkinHwnd(OLE_HANDLE hWnd, VARIANT_BOOL bChildNoSkin  ) = 0;
	virtual HRESULT __stdcall raw_IsNoSkinHwnd(OLE_HANDLE hWnd, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_AddColorFilterColorize(short nHue, short nSaturation, short nBlend, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_AddColorFilterShiftRGB(short nRed, short nGreen, short nBlue, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_RemoveColorFilters(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_RedrawAllControls(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetVersion(long *mainVersion, long *subVerson  ) = 0;
	virtual HRESULT __stdcall raw_GetSkinVersion(long *mainVersion, long *subVerson  ) = 0;
	virtual HRESULT __stdcall raw_SetDragInfo(struct DUI_DRAGINFO info  ) = 0;
	virtual HRESULT __stdcall raw_GetDragInfo(struct DUI_DRAGINFO *pResult) = 0;
	virtual HRESULT __stdcall raw_SetDrag(VARIANT_BOOL bDrag  ) = 0;
	virtual HRESULT __stdcall raw_GetDrag(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetAutoUseSkin(VARIANT_BOOL bAutoSkin  ) = 0;
	virtual HRESULT __stdcall raw_CallScripEvent(BSTR strGuid, long nMsgID, OLE_HANDLE wParam, OLE_HANDLE lParam, long nDUIMsgId, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetString(enum DUI_LANGUAGE eLang, BSTR strKey, BSTR *pResult) = 0;
	virtual HRESULT __stdcall raw_ShowDirectUIWnd(BSTR strText, long Style, long WindowStyle, enum ShowWindowFlags nFlag, OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_CreateDUIWindow(BSTR strText, OLE_HANDLE hWndParent, long dwSdyle, OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_CreateEdit(BSTR strText, OLE_HANDLE hWndParent, long dwSdyle, long x, long y, long cx, long cy, OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_GetGlobalResObj(enum DUIObjType eType, BSTR strName, struct IDUIObj **pResult) = 0;
	virtual HRESULT __stdcall raw_CreateImageByHandle(OLE_HANDLE pDevice, BSTR strName, OLE_HANDLE hHandle, enum DUI_PICTURE_TYPE eType, struct IDUIRenderImage **pResult) = 0;
	virtual HRESULT __stdcall raw_CreateImageByPath(OLE_HANDLE pDevice, BSTR strPath, struct IDUIRenderImage **pResult) = 0;
	virtual HRESULT __stdcall raw_GetImageByName(OLE_HANDLE pDevice, BSTR strName, struct IDUIRenderImage **pResult) = 0;
	virtual HRESULT __stdcall raw_ReleaseImageByName(OLE_HANDLE pDevice, BSTR strName, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_DestroyImage(struct IDUIRenderImage *pImage, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetFontByLogFont(OLE_HANDLE pDevice, BSTR strName, struct DUILOGFONT *pLogFont, OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_GetFontByName(OLE_HANDLE pDevice, BSTR strName, OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_ReleaseFontByName(OLE_HANDLE pDevice, BSTR strName, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_ReleaseFontByHandle(OLE_HANDLE pDevice, OLE_HANDLE pFont, VARIANT_BOOL *pResult) = 0;

	//
	//Method Wrapper
	//
	BOOL  OpenSkin(tstring  strSkinPath, tstring  strSknPath, BOOL  bSkinCtrls  );
	BOOL  CloseSkin();
	IDispatch * CreateDirectUI(tstring  strName, OLE_HANDLE  hWndParent  );
	IDispatch * GetDirectUIForm(tstring  strName  );
	struct IDUIObj * GetResObject(enum DUIObjType  eType, tstring  strName, struct ISkinObjResBase * pObjParent, BOOL  bDeep  );
	struct IDUIImageBase * GetImageBaseFromFile(tstring  strFilePath  );
	struct IDUIEvents * GetEventHandle();
	struct IDUIObj * GetComDispatch(OLE_HANDLE  pDUIObj  );
	struct IDUIObj * GetResObjectByGuid(enum DUIObjType  eType, tstring  strGuid  );
	BOOL  RemoveObject(OLE_HANDLE  pDUIObj, BOOL  bRelease  );
	BOOL  AddScriptObjects(OLE_HANDLE  pScriptObject  );
	BOOL  IsDesignStatus();
	OLE_HANDLE  DrawImageSection(struct SkinRect  rect, struct IDUIImageBase * pImageSection  );
	OLE_HANDLE  DrawTextStyle(struct SkinRect  rect, tstring  strText, struct IDUITextStyle * pTextStyle  );
	BOOL  AccessAttribRect(OLE_HANDLE  pXmlEle, tstring  strAttribName, struct SkinRect * prcValue, BOOL  bRead  );
	BOOL  AccessAttribSize(OLE_HANDLE  pXmlEle, tstring  strAttribName, struct SkinSize * psizeValue, BOOL  bRead  );
	BOOL  AccessAttribLong(OLE_HANDLE  pXmlEle, tstring  strAttribName, long * plValue, BOOL  bRead  );
	BOOL  AccessAttribFloat(OLE_HANDLE  pXmlEle, tstring  strAttribName, float * pfValue, BOOL  bRead  );
	BOOL  AccessAttribDouble(OLE_HANDLE  pXmlEle, tstring  strAttribName, double * pdValue, BOOL  bRead  );
	BOOL  AccessAttribBOOL(OLE_HANDLE  pXmlEle, tstring  strAttribName, VARIANT_BOOL * pbValue, BOOL  bRead  );
	BOOL  AccessAttribString(OLE_HANDLE  pXmlEle, tstring  strAttribName, BSTR * pstrValue, BOOL  bRead  );
	BOOL  AccessAttribColor(OLE_HANDLE  pXmlEle, tstring  strAttribName, OLE_COLOR * pclrValue, BOOL  bRead  );
	BOOL  GradientFill(OLE_HANDLE  hDC, struct SkinRect  rect, OLE_COLOR  clrFrom, OLE_COLOR  clrTo, long  nIrotation  );
	void SetDUIResObjPtr(OLE_HANDLE  lResObjPtr  );
	OLE_HANDLE  GetDUIResObjPtr();
	long  CreateDUIResObj();
	BOOL  CloseDUIResObj();
	struct IDUIControlBase * ImportSkin(OLE_HANDLE  hInstance, long  uResID, tstring  strResSec, OLE_HANDLE  hObjParent  );
	OLE_HANDLE  GetHwndPrintBmp(OLE_HANDLE  hDC, OLE_HANDLE  hWnd  );
	BOOL  DrawSkinImage(OLE_HANDLE  hDC, struct SkinRect  rect, struct IDUIImageBase * pImageBase  );
	void EnumObjectsToHwnd(enum DUIObjType  objType, long  nMsg, OLE_HANDLE  hWndMsg  );
	void EnumObjectsToCallback(enum DUIObjType  objType, OLE_HANDLE  pFunCallback, OLE_HANDLE  nParam  );
	struct IDUIObj * AddResObject(enum DUIObjType  objType, struct IDUIObj * pOwnerObj, tstring  strName, BOOL  bInsertFirst  );
	BOOL  DeleteResObj(struct IDUIObj * pObj  );
	BOOL  RemoveResObject(struct IDUIObj * pObj  );
	OLE_HANDLE  GetRgnFromHBitmap(OLE_HANDLE  hBitmap, OLE_COLOR  clrTrans  );
	struct IDUIControlBase * AddPluginResObject(struct IDUIObj * pOwnerObj, tstring  strName, tstring  strGuid  );
	BOOL  DrawIcon(OLE_HANDLE  hDC, short  xLeft, short  yTop, short  cxWidth, short  cyHeight, OLE_HANDLE  hIcon  );
	enum DUIObjType  ConvertINameToType(tstring  bstrInterfaceName  );
	tstring  ConvertTypeToIName(enum DUIObjType  eType  );
	BOOL  Save(tstring  bstrPath  );
	BOOL  SetDesignStatus(BOOL  bDesign  );
	tstring  GetSkinFilePath();
	void SetDynClearZipInfo(BOOL  bClear  );
	BOOL  IsDynClearZipInfo();
	BOOL  IsPerpixelDraw();
	struct IDUIImageList * GetImageListFromHIMAGELIST(OLE_HANDLE  hImageList  );
	struct IDUIImageList * GetImageListFromImageBase(struct IDUIImageBase * pImageBase, short  cx, OLE_COLOR  crMask  );
	struct IDUIImageList * GetImageListFromFile(tstring  strFilePath, short  cx, OLE_COLOR  crMask  );
	void ReleasePluginResObject(struct IDUIControlBase * pPlugin  );
	struct IDUIControlBase * CreatePluginResObject(tstring  strGuid  );
	BOOL  IsRegKbHookObj(struct IDUIControlBase * pObject  );
	BOOL  RegisterKbHookObj(struct IDUIControlBase * pObject  );
	BOOL  UnRegisterKbHookObj(struct IDUIControlBase * pObject  );
	long  CallNextKBHook(long  nCode, OLE_HANDLE  wParam, OLE_HANDLE  lParam  );
	BOOL  IsRegisterHookObject(enum DUI_HOOKTYPE  dwHookType, struct IDUIControlBase * pObject  );
	BOOL  RegisterHookObject(enum DUI_HOOKTYPE  dwHookType, struct IDUIControlBase * pObject  );
	BOOL  UnRegisterHookObject(enum DUI_HOOKTYPE  dwHookType, struct IDUIControlBase * pObject  );
	BOOL  StartHook();
	BOOL  EndHook();
	struct IDUIObj * GetObjectFromLong(OLE_HANDLE  nObject  );
	struct IDUIWindow * GetDUIWindow();
	void ChangeSkn(tstring  strSkinPath, VARIANT_BOOL * pbResult  );
	void OpenTheme(tstring  strSkinPath, VARIANT_BOOL * pbResult  );
	void ExportSknDuiFile(tstring  strSkinPath, VARIANT_BOOL * pbResult  );
	struct IDUIControlBase * AddPluginResObject2(struct IDUIObj * pOwnerObj, tstring  strName, tstring  strGuid, BOOL  bIsComposeCtrl  );
	BOOL  AccessAttribString2(tstring  strAttribName, BSTR * pstrValue, BOOL  bRead  );
	void AddStrProp(tstring  strKey, tstring  strValue, OLE_HANDLE  pStrProp  );
	void RemoveStrProp(tstring  strKey, OLE_HANDLE  pStrProp  );
	void ChangeLanguage(enum DUI_LANGUAGE  eLang  );
	long  GetCurAllLang(enum DUI_LANGUAGE * peLang, long  eLangSize  );
	void GenerateLanguageXML(tstring  strXMLPath  );
	void GetCurLanguage(enum DUI_LANGUAGE * peLang  );
	void SetUseSkin(enum SKINCTRL_CLASSTYPE  eClassType, BOOL  bUseSkin  );
	BOOL  IsUseSkin(enum SKINCTRL_CLASSTYPE  eClassType  );
	void SetSkinHwnd(OLE_HANDLE  hWnd, BOOL  bChildSkin  );
	void SetNoSkinHwnd(OLE_HANDLE  hWnd, BOOL  bChildNoSkin  );
	BOOL  IsNoSkinHwnd(OLE_HANDLE  hWnd  );
	BOOL  AddColorFilterColorize(short  nHue, short  nSaturation, short  nBlend  );
	BOOL  AddColorFilterShiftRGB(short  nRed, short  nGreen, short  nBlue  );
	BOOL  RemoveColorFilters();
	BOOL  RedrawAllControls();
	void GetVersion(long * mainVersion, long * subVerson  );
	void GetSkinVersion(long * mainVersion, long * subVerson  );
	void SetDragInfo(struct DUI_DRAGINFO  info  );
	struct DUI_DRAGINFO  GetDragInfo();
	void SetDrag(BOOL  bDrag  );
	BOOL  GetDrag();
	void SetAutoUseSkin(BOOL  bAutoSkin  );
	BOOL  CallScripEvent(tstring  strGuid, long  nMsgID, OLE_HANDLE  wParam, OLE_HANDLE  lParam, long  nDUIMsgId  );
	tstring  GetString(enum DUI_LANGUAGE  eLang, tstring  strKey  );
	OLE_HANDLE  ShowDirectUIWnd(tstring  strText, long  Style, long  WindowStyle, enum ShowWindowFlags  nFlag  );
	OLE_HANDLE  CreateDUIWindow(tstring  strText, OLE_HANDLE  hWndParent, long  dwSdyle  );
	OLE_HANDLE  CreateEdit(tstring  strText, OLE_HANDLE  hWndParent, long  dwSdyle, long  x, long  y, long  cx, long  cy  );
	struct IDUIObj * GetGlobalResObj(enum DUIObjType  eType, tstring  strName  );
	struct IDUIRenderImage * CreateImageByHandle(OLE_HANDLE  pDevice, tstring  strName, OLE_HANDLE  hHandle, enum DUI_PICTURE_TYPE  eType  );
	struct IDUIRenderImage * CreateImageByPath(OLE_HANDLE  pDevice, tstring  strPath  );
	struct IDUIRenderImage * GetImageByName(OLE_HANDLE  pDevice, tstring  strName  );
	BOOL  ReleaseImageByName(OLE_HANDLE  pDevice, tstring  strName  );
	BOOL  DestroyImage(struct IDUIRenderImage * pImage  );
	OLE_HANDLE  GetFontByLogFont(OLE_HANDLE  pDevice, tstring  strName, struct DUILOGFONT * pLogFont  );
	OLE_HANDLE  GetFontByName(OLE_HANDLE  pDevice, tstring  strName  );
	BOOL  ReleaseFontByName(OLE_HANDLE  pDevice, tstring  strName  );
	BOOL  ReleaseFontByHandle(OLE_HANDLE  pDevice, OLE_HANDLE  pFont  );
};

enum DUIObjType
{ 
	DUIOBJTYPE_CURSOR = 104,
	DUIOBJTYPE_DIRECTUI = 105,
	DUIOBJTYPE_FONTEX = 103,
	DUIOBJTYPE_GRADIENTCLR = 131,
	DUIOBJTYPE_IMAGE = 100,
	DUIOBJTYPE_IMAGEBASE = 101,
	DUIOBJTYPE_IMAGELIST = 136,
	DUIOBJTYPE_LAST = 138,
	DUIOBJTYPE_PLUGIN = 90000,
	DUIOBJTYPE_SKINRGN = 137,
	DUIOBJTYPE_TEXTSTYLE = 102 
};

struct __declspec(uuid("18e4d545-3c21-48ea-a7c0-172acaf56f8c")) IDUIPos : IDispatch
{
	//
	//Property
	//
	__declspec(property(get=get_nHorzAlignType,put=put_nHorzAlignType))
		enum PosHorzAlignType  nHorzAlignType;
	__declspec(property(get=get_nVertAlignType,put=put_nVertAlignType))
		enum PosVertAlignType  nVertAlignType;
	__declspec(property(get=get_nHorzSpaceType,put=put_nHorzSpaceType))
		enum PosHorzSpaceType  nHorzSpaceType;
	__declspec(property(get=get_nVertSpaceType,put=put_nVertSpaceType))
		enum PosVertSpaceType  nVertSpaceType;
	__declspec(property(get=get_left,put=put_left))
		long  left;
	__declspec(property(get=get_top,put=put_top))
		long  top;
	__declspec(property(get=get_right,put=put_right))
		long  right;
	__declspec(property(get=get_bottom,put=put_bottom))
		long  bottom;
	__declspec(property(get=get_width,put=put_width))
		long  width;
	__declspec(property(get=get_height,put=put_height))
		long  height;

	virtual HRESULT __stdcall raw_get_nHorzAlignType(enum PosHorzAlignType *pVal) = 0;
	virtual HRESULT __stdcall raw_put_nHorzAlignType(enum PosHorzAlignType pVal) = 0;
	virtual HRESULT __stdcall raw_get_nVertAlignType(enum PosVertAlignType *pVal) = 0;
	virtual HRESULT __stdcall raw_put_nVertAlignType(enum PosVertAlignType pVal) = 0;
	virtual HRESULT __stdcall raw_get_nHorzSpaceType(enum PosHorzSpaceType *pVal) = 0;
	virtual HRESULT __stdcall raw_put_nHorzSpaceType(enum PosHorzSpaceType pVal) = 0;
	virtual HRESULT __stdcall raw_get_nVertSpaceType(enum PosVertSpaceType *pVal) = 0;
	virtual HRESULT __stdcall raw_put_nVertSpaceType(enum PosVertSpaceType pVal) = 0;
	virtual HRESULT __stdcall raw_get_left(long *pVal) = 0;
	virtual HRESULT __stdcall raw_put_left(long pVal) = 0;
	virtual HRESULT __stdcall raw_get_top(long *pVal) = 0;
	virtual HRESULT __stdcall raw_put_top(long pVal) = 0;
	virtual HRESULT __stdcall raw_get_right(long *pVal) = 0;
	virtual HRESULT __stdcall raw_put_right(long pVal) = 0;
	virtual HRESULT __stdcall raw_get_bottom(long *pVal) = 0;
	virtual HRESULT __stdcall raw_put_bottom(long pVal) = 0;
	virtual HRESULT __stdcall raw_get_width(long *pVal) = 0;
	virtual HRESULT __stdcall raw_put_width(long pVal) = 0;
	virtual HRESULT __stdcall raw_get_height(long *pVal) = 0;
	virtual HRESULT __stdcall raw_put_height(long pVal) = 0;

	//
	//Method
	//
	virtual HRESULT __stdcall raw_GetPosStruct(struct DUIPosition *pResult) = 0;
	virtual HRESULT __stdcall raw_SetPosStruct(struct DUIPosition pos  ) = 0;

	//
	//Method Wrapper
	//
	enum PosHorzAlignType  get_nHorzAlignType();
	void put_nHorzAlignType(enum PosHorzAlignType  pVal);
	enum PosVertAlignType  get_nVertAlignType();
	void put_nVertAlignType(enum PosVertAlignType  pVal);
	enum PosHorzSpaceType  get_nHorzSpaceType();
	void put_nHorzSpaceType(enum PosHorzSpaceType  pVal);
	enum PosVertSpaceType  get_nVertSpaceType();
	void put_nVertSpaceType(enum PosVertSpaceType  pVal);
	long  get_left();
	void put_left(long  pVal);
	long  get_top();
	void put_top(long  pVal);
	long  get_right();
	void put_right(long  pVal);
	long  get_bottom();
	void put_bottom(long  pVal);
	long  get_width();
	void put_width(long  pVal);
	long  get_height();
	void put_height(long  pVal);
	struct DUIPosition  GetPosStruct();
	void SetPosStruct(struct DUIPosition  pos  );
};

enum PosHorzAlignType
{ 
	PHAT_CENTER = 1,
	PHAT_LEFT = 0,
	PHAT_RIGHT = 2 
};

enum PosVertAlignType
{ 
	PVAT_BOTTOM = 2,
	PVAT_TOP = 0,
	PVAT_VCENTER = 1 
};

enum PosHorzSpaceType
{ 
	PHST_FASTNESS = 3,
	PHST_LEFTWIDTH = 0,
	PHST_PERCENT = 2,
	PHST_RIGHTWIDTH = 1 
};

enum PosVertSpaceType
{ 
	PVST_BOTTOMHEIGHT = 1,
	PVST_FASTNESS = 3,
	PVST_PERCENT = 2,
	PVST_TOPHEIGHT = 0 
};

struct __declspec(uuid("18e047ba-5e32-4f27-b1a6-8c8d325f3c9c")) PosBase
{
	enum PosHorzAlignType 	nAlignType;
	enum PosHorzSpaceType 	nSpaceType;
	long 	nLeft_Top;
	long 	nRight_Bottom;
	long 	nWidth_Height;
};



struct __declspec(uuid("f10647e3-4d97-44df-a732-00e135970986")) DUIPosition
{
	struct PosBase 	horzPos;
	struct PosBase 	vertPos;
};

struct __declspec(uuid("0ab156f7-6898-431e-9c14-f39a6e3ebb11")) IDUIRect : IDispatch
{
	//
	//Property
	//
	__declspec(property(get=get_left,put=put_left))
		long  left;
	__declspec(property(get=get_right,put=put_right))
		long  right;
	__declspec(property(get=get_top,put=put_top))
		long  top;
	__declspec(property(get=get_bottom,put=put_bottom))
		long  bottom;

	virtual HRESULT __stdcall raw_get_left(long *pVal) = 0;
	virtual HRESULT __stdcall raw_put_left(long pVal) = 0;
	virtual HRESULT __stdcall raw_get_right(long *pVal) = 0;
	virtual HRESULT __stdcall raw_put_right(long pVal) = 0;
	virtual HRESULT __stdcall raw_get_top(long *pVal) = 0;
	virtual HRESULT __stdcall raw_put_top(long pVal) = 0;
	virtual HRESULT __stdcall raw_get_bottom(long *pVal) = 0;
	virtual HRESULT __stdcall raw_put_bottom(long pVal) = 0;

	//
	//Method
	//
	virtual HRESULT __stdcall raw_GetWidth(long *pResult) = 0;
	virtual HRESULT __stdcall raw_GetHeight(long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetRectStruct(struct SkinRect sknrc  ) = 0;
	virtual HRESULT __stdcall raw_GetRectStruct(struct SkinRect *pResult) = 0;

	//
	//Method Wrapper
	//
	long  get_left();
	void put_left(long  pVal);
	long  get_right();
	void put_right(long  pVal);
	long  get_top();
	void put_top(long  pVal);
	long  get_bottom();
	void put_bottom(long  pVal);
	long  GetWidth();
	long  GetHeight();
	void SetRectStruct(struct SkinRect  sknrc  );
	struct SkinRect  GetRectStruct();
};

struct __declspec(uuid("e774c2b4-40d5-46f0-9491-89bd8f3d1b6f")) SkinRect
{
	long 	left;
	long 	top;
	long 	right;
	long 	bottom;
};

enum DUIDockObjType
{ 
	DUIDock_Bottom = 4,
	DUIDock_Client = 8,
	DUIDock_HCenter_Bottom = 10,
	DUIDock_HCenter_Top = 9,
	DUIDock_HCenter_VCenter = 13,
	DUIDock_Left = 1,
	DUIDock_LeftBottom = 5,
	DUIDock_LeftTop = 0,
	DUIDock_Right = 2,
	DUIDock_RightBottom = 6,
	DUIDock_RightTop = 7,
	DUIDock_Top = 3,
	DUIDock_VCenter_Left = 11,
	DUIDock_VCenter_Right = 12 
};

struct __declspec(uuid("be88233e-f480-47e1-846d-39652e124e9e")) ILayerGraphics : IDispatch
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_GetDC(OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_Destroy() = 0;
	virtual HRESULT __stdcall raw_Clear(struct SkinRect sknrc  ) = 0;
	virtual HRESULT __stdcall raw_GetRect(struct SkinRect *pResult) = 0;
	virtual HRESULT __stdcall raw_GetBits(OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_GetBitmap(OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_GetOldBitmap(OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_GetBmpInfo(OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_SetLayerBmp(OLE_HANDLE pLayerBmp  ) = 0;
	virtual HRESULT __stdcall raw_GetLayerBmp(OLE_HANDLE *pResult) = 0;

	//
	//Method Wrapper
	//
	OLE_HANDLE  GetDC();
	void Destroy();
	void Clear(struct SkinRect  sknrc  );
	struct SkinRect  GetRect();
	OLE_HANDLE  GetBits();
	OLE_HANDLE  GetBitmap();
	OLE_HANDLE  GetOldBitmap();
	OLE_HANDLE  GetBmpInfo();
	void SetLayerBmp(OLE_HANDLE  pLayerBmp  );
	OLE_HANDLE  GetLayerBmp();
};

struct __declspec(uuid("1d0ecc68-0eac-4ff3-a0c7-6d2636c6d6ac")) IDUIImageBase : ISkinShareBase
{
	//
	//Property
	//
	__declspec(property(get=get_ImageObj,put=put_ImageObj))
		struct IDUIPicture * ImageObj;
	__declspec(property(get=get_rect,put=put_rect))
		struct SkinRect  rect;
	__declspec(property(get=get_rcBorder,put=put_rcBorder))
		struct SkinRect  rcBorder;
	__declspec(property(get=get_bLeftEdgeStretch,put=put_bLeftEdgeStretch))
		VARIANT_BOOL  bLeftEdgeStretch;
	__declspec(property(get=get_bRightEdgeStretch,put=put_bRightEdgeStretch))
		VARIANT_BOOL  bRightEdgeStretch;
	__declspec(property(get=get_bTopEdgeStretch,put=put_bTopEdgeStretch))
		VARIANT_BOOL  bTopEdgeStretch;
	__declspec(property(get=get_bBottomEdgeStretch,put=put_bBottomEdgeStretch))
		VARIANT_BOOL  bBottomEdgeStretch;
	__declspec(property(get=get_bClientAreaStretch,put=put_bClientAreaStretch))
		VARIANT_BOOL  bClientAreaStretch;
	__declspec(property(get=get_bTransparent,put=put_bTransparent))
		VARIANT_BOOL  bTransparent;
	__declspec(property(get=get_bSupportPerPixel,put=put_bSupportPerPixel))
		VARIANT_BOOL  bSupportPerPixel;
	__declspec(property(get=get_clrTrans,put=put_clrTrans))
		OLE_COLOR  clrTrans;
	__declspec(property(get=get_clrColorize,put=put_clrColorize))
		OLE_COLOR  clrColorize;
	__declspec(property(get=get_nOpacity,put=put_nOpacity))
		short  nOpacity;

	virtual HRESULT __stdcall raw_get_ImageObj(struct IDUIPicture **pVal) = 0;
	virtual HRESULT __stdcall raw_put_ImageObj(struct IDUIPicture *pVal) = 0;
	virtual HRESULT __stdcall raw_get_rect(struct SkinRect *pVal) = 0;
	virtual HRESULT __stdcall raw_put_rect(struct SkinRect *pVal) = 0;
	virtual HRESULT __stdcall raw_get_rcBorder(struct SkinRect *pVal) = 0;
	virtual HRESULT __stdcall raw_put_rcBorder(struct SkinRect pVal) = 0;
	virtual HRESULT __stdcall raw_get_bLeftEdgeStretch(VARIANT_BOOL *pVal) = 0;
	virtual HRESULT __stdcall raw_put_bLeftEdgeStretch(VARIANT_BOOL pVal) = 0;
	virtual HRESULT __stdcall raw_get_bRightEdgeStretch(VARIANT_BOOL *pVal) = 0;
	virtual HRESULT __stdcall raw_put_bRightEdgeStretch(VARIANT_BOOL pVal) = 0;
	virtual HRESULT __stdcall raw_get_bTopEdgeStretch(VARIANT_BOOL *pVal) = 0;
	virtual HRESULT __stdcall raw_put_bTopEdgeStretch(VARIANT_BOOL pVal) = 0;
	virtual HRESULT __stdcall raw_get_bBottomEdgeStretch(VARIANT_BOOL *pVal) = 0;
	virtual HRESULT __stdcall raw_put_bBottomEdgeStretch(VARIANT_BOOL pVal) = 0;
	virtual HRESULT __stdcall raw_get_bClientAreaStretch(VARIANT_BOOL *pVal) = 0;
	virtual HRESULT __stdcall raw_put_bClientAreaStretch(VARIANT_BOOL pVal) = 0;
	virtual HRESULT __stdcall raw_get_bTransparent(VARIANT_BOOL *pVal) = 0;
	virtual HRESULT __stdcall raw_put_bTransparent(VARIANT_BOOL pVal) = 0;
	virtual HRESULT __stdcall raw_get_bSupportPerPixel(VARIANT_BOOL *pVal) = 0;
	virtual HRESULT __stdcall raw_put_bSupportPerPixel(VARIANT_BOOL pVal) = 0;
	virtual HRESULT __stdcall raw_get_clrTrans(OLE_COLOR *pVal) = 0;
	virtual HRESULT __stdcall raw_put_clrTrans(OLE_COLOR pVal) = 0;
	virtual HRESULT __stdcall raw_get_clrColorize(OLE_COLOR *pVal) = 0;
	virtual HRESULT __stdcall raw_put_clrColorize(OLE_COLOR pVal) = 0;
	virtual HRESULT __stdcall raw_get_nOpacity(short *pVal) = 0;
	virtual HRESULT __stdcall raw_put_nOpacity(short pVal) = 0;

	//
	//Method
	//
	virtual HRESULT __stdcall raw_StretchAll(VARIANT_BOOL bStretch  ) = 0;
	virtual HRESULT __stdcall raw_Draw(OLE_HANDLE hDC, struct SkinRect rect, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_BuildPerPixImage() = 0;
	virtual HRESULT __stdcall raw_GetWidth(long *pResult) = 0;
	virtual HRESULT __stdcall raw_GetHeight(long *pResult) = 0;
	virtual HRESULT __stdcall raw_CreateImageSection(BSTR strSectionName, OLE_HANDLE pDUIRes, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetImageSection(struct SkinImageSection *pResult) = 0;
	virtual HRESULT __stdcall raw_SetImageSection(struct SkinImageSection *pImgSection  ) = 0;
	virtual HRESULT __stdcall raw_GetHBitmap(struct SkinRect rect, OLE_COLOR clrTrans, OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_GetDUIPicture(struct IDUIPicture **pResult) = 0;
	virtual HRESULT __stdcall raw_RenderDraw(struct IDUIRenderDC *pDC, struct SkinRect rect, short nIndex, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetRenderImage(OLE_HANDLE pDevice, short nIndex, OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_ReleaseRenderImage(enum DUI_RENDERENGINE_TYPE type, short nIndex, long *pResult) = 0;
	virtual HRESULT __stdcall raw_GetAllRenderImages(OLE_HANDLE pDevice  ) = 0;
	virtual HRESULT __stdcall raw_ReleaseAllRenderImages(OLE_HANDLE pDevice  ) = 0;
	virtual HRESULT __stdcall raw_GetDUIRenderImage(OLE_HANDLE pDevice, short nIndex, struct IDUIRenderImage **pResult) = 0;

	//
	//Method Wrapper
	//
	struct IDUIPicture * get_ImageObj();
	void put_ImageObj(struct IDUIPicture * pVal);
	struct SkinRect  get_rect();
	void put_rect(struct SkinRect * pVal);
	struct SkinRect  get_rcBorder();
	void put_rcBorder(struct SkinRect  pVal);
	VARIANT_BOOL  get_bLeftEdgeStretch();
	void put_bLeftEdgeStretch(VARIANT_BOOL  pVal);
	VARIANT_BOOL  get_bRightEdgeStretch();
	void put_bRightEdgeStretch(VARIANT_BOOL  pVal);
	VARIANT_BOOL  get_bTopEdgeStretch();
	void put_bTopEdgeStretch(VARIANT_BOOL  pVal);
	VARIANT_BOOL  get_bBottomEdgeStretch();
	void put_bBottomEdgeStretch(VARIANT_BOOL  pVal);
	VARIANT_BOOL  get_bClientAreaStretch();
	void put_bClientAreaStretch(VARIANT_BOOL  pVal);
	VARIANT_BOOL  get_bTransparent();
	void put_bTransparent(VARIANT_BOOL  pVal);
	VARIANT_BOOL  get_bSupportPerPixel();
	void put_bSupportPerPixel(VARIANT_BOOL  pVal);
	OLE_COLOR  get_clrTrans();
	void put_clrTrans(OLE_COLOR  pVal);
	OLE_COLOR  get_clrColorize();
	void put_clrColorize(OLE_COLOR  pVal);
	short  get_nOpacity();
	void put_nOpacity(short  pVal);
	void StretchAll(BOOL  bStretch  );
	BOOL  Draw(OLE_HANDLE  hDC, struct SkinRect  rect  );
	void BuildPerPixImage();
	long  GetWidth();
	long  GetHeight();
	BOOL  CreateImageSection(tstring  strSectionName, OLE_HANDLE  pDUIRes  );
	struct SkinImageSection  GetImageSection();
	void SetImageSection(struct SkinImageSection * pImgSection  );
	OLE_HANDLE  GetHBitmap(struct SkinRect  rect, OLE_COLOR  clrTrans  );
	struct IDUIPicture * GetDUIPicture();
	BOOL  RenderDraw(struct IDUIRenderDC * pDC, struct SkinRect  rect, short  nIndex  );
	OLE_HANDLE  GetRenderImage(OLE_HANDLE  pDevice, short  nIndex  );
	long  ReleaseRenderImage(enum DUI_RENDERENGINE_TYPE  type, short  nIndex  );
	void GetAllRenderImages(OLE_HANDLE  pDevice  );
	void ReleaseAllRenderImages(OLE_HANDLE  pDevice  );
	struct IDUIRenderImage * GetDUIRenderImage(OLE_HANDLE  pDevice, short  nIndex  );
};

struct __declspec(uuid("1c43a9bd-c603-4592-bfbe-790561c4f6bb")) IDUIPicture : ISkinWithRealResBase
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_Save(BSTR strFile, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetWidth(short *pResult) = 0;
	virtual HRESULT __stdcall raw_GetHeight(short *pResult) = 0;
	virtual HRESULT __stdcall raw_GetBitmap(OLE_COLOR clrColorize, OLE_COLOR clrTrans, OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_GetImageType(enum DUI_PICTURE_TYPE *pResult) = 0;
	virtual HRESULT __stdcall raw_GetRenderImage(OLE_HANDLE pRenderDevice, long nIndex, OLE_HANDLE *pResult) = 0;

	//
	//Method Wrapper
	//
	BOOL  Save(tstring  strFile  );
	short  GetWidth();
	short  GetHeight();
	OLE_HANDLE  GetBitmap(OLE_COLOR  clrColorize, OLE_COLOR  clrTrans  );
	enum DUI_PICTURE_TYPE  GetImageType();
	OLE_HANDLE  GetRenderImage(OLE_HANDLE  pRenderDevice, long  nIndex  );
};

enum DUI_PICTURE_TYPE
{ 
	DUI_PT_BMP = 2,
	DUI_PT_GIF = 4,
	DUI_PT_ICO = 5,
	DUI_PT_JPG = 3,
	DUI_PT_PNG = 1,
	DUI_PT_TGA = 6,
	DUI_PT_UNKNOWN = 0 
};

struct __declspec(uuid("6ab9bf12-f302-4e71-bed1-23b6537bc79c")) SkinImageSection
{
	BSTR 	szImageName;
	struct SkinRect 	rect;
	int 	nTopHeight;
	int 	nBottomHeight;
	int 	nLeftWidth;
	int 	nRightWidth;
	short 	bLeftEdgeStretch;
	short 	bRightEdgeStretch;
	short 	bTopEdgeStretch;
	short 	bBottomEdgeStretch;
	short 	bClientAreaStretch;
	unsigned long 	clrTrans;
	short 	bTrans;
	short 	nOpacity;
	unsigned long 	clrColorize;
	short 	bSupportPerPixel;
	short 	bDestroyImage;
};

struct __declspec(uuid("b3ad51eb-77be-44d4-959e-2244ab8c5718")) IDUIRenderDC : IDispatch
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_SetRenderDCPtr(OLE_HANDLE pRenderDC  ) = 0;
	virtual HRESULT __stdcall raw_GetRenderDCPtr(OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_FillColor(struct SkinRect *pRect, OLE_COLOR clrStart, OLE_COLOR clrEnd, short nAngle, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_FillSolidColor(struct SkinRect *pRect, OLE_COLOR clrSolid, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_DrawImage(struct IDUIRenderImage *pImage, struct SkinRect *pRcDest, struct SkinRect *pRcSrc, VARIANT_BOOL bStretch, OLE_COLOR clrTrans, VARIANT_BOOL bClient, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_DrawImageSection(struct SkinImageSection *pSection, struct SkinRect *pRcDest, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_DrawText(BSTR strText, struct SkinRect *pRcText, OLE_HANDLE pRenderFont, OLE_COLOR clrText, long ntype, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_DrawFrameControl(struct SkinRect *pRect, long ntype, long nState, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_DrawLine(short x1, short y1, short x2, short y2, short nPenSize, OLE_COLOR clrSolid, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_IsValidateRect(struct SkinRect *pDrawRect, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_RenderPartImagePart(struct SkinRect *pDestRect, struct SkinRect *pSrcRect, OLE_HANDLE hBmp, VARIANT_BOOL bStretch, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetHDC(long nWidht, long nHeight, OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_FlushHDC(OLE_HANDLE hDC, long nX, long nY, struct SkinRect *pSrcRect, VARIANT_BOOL bAutoDelete  ) = 0;
	virtual HRESULT __stdcall raw_SetUpdateRect(struct SkinRect srcRect  ) = 0;
	virtual HRESULT __stdcall raw_GetUpdateRect(struct SkinRect *pResult) = 0;
	virtual HRESULT __stdcall raw_DrawHDC(OLE_HANDLE hDC, long nX, long nY, struct SkinRect *pSrcRect  ) = 0;

	//
	//Method Wrapper
	//
	void SetRenderDCPtr(OLE_HANDLE  pRenderDC  );
	OLE_HANDLE  GetRenderDCPtr();
	BOOL  FillColor(struct SkinRect * pRect, OLE_COLOR  clrStart, OLE_COLOR  clrEnd, short  nAngle  );
	BOOL  FillSolidColor(struct SkinRect * pRect, OLE_COLOR  clrSolid  );
	BOOL  DrawImage(struct IDUIRenderImage * pImage, struct SkinRect * pRcDest, struct SkinRect * pRcSrc, BOOL  bStretch, OLE_COLOR  clrTrans, BOOL  bClient  );
	BOOL  DrawImageSection(struct SkinImageSection * pSection, struct SkinRect * pRcDest  );
	BOOL  DrawText(tstring  strText, struct SkinRect * pRcText, OLE_HANDLE  pRenderFont, OLE_COLOR  clrText, long  ntype  );
	BOOL  DrawFrameControl(struct SkinRect * pRect, long  ntype, long  nState  );
	BOOL  DrawLine(short  x1, short  y1, short  x2, short  y2, short  nPenSize, OLE_COLOR  clrSolid  );
	BOOL  IsValidateRect(struct SkinRect * pDrawRect  );
	BOOL  RenderPartImagePart(struct SkinRect * pDestRect, struct SkinRect * pSrcRect, OLE_HANDLE  hBmp, BOOL  bStretch  );
	OLE_HANDLE  GetHDC(long  nWidht, long  nHeight  );
	void FlushHDC(OLE_HANDLE  hDC, long  nX, long  nY, struct SkinRect * pSrcRect, BOOL  bAutoDelete  );
	void SetUpdateRect(struct SkinRect  srcRect  );
	struct SkinRect  GetUpdateRect();
	void DrawHDC(OLE_HANDLE  hDC, long  nX, long  nY, struct SkinRect * pSrcRect  );
};

struct __declspec(uuid("533b8057-9b33-4c2a-b643-35cc61df5e33")) IDUIRenderImage : IDispatch
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_GetWidth(long *pResult) = 0;
	virtual HRESULT __stdcall raw_GetHeight(long *pResult) = 0;
	virtual HRESULT __stdcall raw_GetFormatType(enum DUI_PICTURE_TYPE *pResult) = 0;
	virtual HRESULT __stdcall raw_GetBits(OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_GetColorDepth(short *pResult) = 0;
	virtual HRESULT __stdcall raw_HasAlphaChannel(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetHandle(OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_GetRenderType(enum DUI_RENDERENGINE_TYPE *pResult) = 0;
	virtual HRESULT __stdcall raw_Draw(struct IDUIRenderDC *pDC, struct SkinRect rcDest, struct SkinRect rcSrc, VARIANT_BOOL bStretch, OLE_COLOR clrTrans, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetRenderImagePtr(OLE_HANDLE pImagePtr  ) = 0;
	virtual HRESULT __stdcall raw_GetRenderImagePtr(OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_DrawAll(struct IDUIRenderDC *pDC, struct SkinRect rcDest, VARIANT_BOOL bStretch, OLE_COLOR clrTrans, VARIANT_BOOL *pResult) = 0;

	//
	//Method Wrapper
	//
	long  GetWidth();
	long  GetHeight();
	enum DUI_PICTURE_TYPE  GetFormatType();
	OLE_HANDLE  GetBits();
	short  GetColorDepth();
	BOOL  HasAlphaChannel();
	OLE_HANDLE  GetHandle();
	enum DUI_RENDERENGINE_TYPE  GetRenderType();
	BOOL  Draw(struct IDUIRenderDC * pDC, struct SkinRect  rcDest, struct SkinRect  rcSrc, BOOL  bStretch, OLE_COLOR  clrTrans  );
	void SetRenderImagePtr(OLE_HANDLE  pImagePtr  );
	OLE_HANDLE  GetRenderImagePtr();
	BOOL  DrawAll(struct IDUIRenderDC * pDC, struct SkinRect  rcDest, BOOL  bStretch, OLE_COLOR  clrTrans  );
};

enum DUI_RENDERENGINE_TYPE
{ 
	DUI_RENDERENGINE_DIRECTX = 3,
	DUI_RENDERENGINE_ERROR = 0,
	DUI_RENDERENGINE_GDI = 1,
	DUI_RENDERENGINE_KENGINE = 4,
	DUI_RENDERENGINE_OPENGL = 2 
};

struct __declspec(uuid("3a9bcf55-c161-4e1d-86d8-a4454e5ae2de")) IDUIEvents : IDispatch
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_OnLoaded(VARIANT_BOOL bSuccessed  ) = 0;
	virtual HRESULT __stdcall raw_OnWinMsg(unsigned long uMsgID, struct IDUIObj *pDUIObj, VARIANT_BOOL *pResult) = 0;

	//
	//Method Wrapper
	//
	void OnLoaded(BOOL  bSuccessed  );
	BOOL  OnWinMsg(unsigned long  uMsgID, struct IDUIObj * pDUIObj  );
};

struct __declspec(uuid("118c0877-b832-4c18-bfbf-7a112483b6af")) IDUITextStyle : ISkinShareBase
{
	//
	//Property
	//
	__declspec(property(get=get_clrText,put=put_clrText))
		OLE_COLOR  clrText;
	__declspec(property(get=get_clrShadow,put=put_clrShadow))
		OLE_COLOR  clrShadow;
	__declspec(property(get=get_bHotkeyPrefixShow,put=put_bHotkeyPrefixShow))
		VARIANT_BOOL  bHotkeyPrefixShow;
	__declspec(property(get=get_bSingleLine,put=put_bSingleLine))
		VARIANT_BOOL  bSingleLine;
	__declspec(property(get=get_bVertDraw,put=put_bVertDraw))
		VARIANT_BOOL  bVertDraw;
	__declspec(property(get=get_bRightToLeft,put=put_bRightToLeft))
		VARIANT_BOOL  bRightToLeft;
	__declspec(property(get=get_fontExPtr,put=put_fontExPtr))
		struct IDUIFontEx * fontExPtr;
	__declspec(property(get=get_nHAlign,put=put_nHAlign))
		short  nHAlign;
	__declspec(property(get=get_nVAlign,put=put_nVAlign))
		short  nVAlign;
	__declspec(property(get=get_nStringTrimming,put=put_nStringTrimming))
		short  nStringTrimming;
	__declspec(property(get=get_nEffect,put=put_nEffect))
		short  nEffect;
	__declspec(property(get=get_nShadowHSpace,put=put_nShadowHSpace))
		short  nShadowHSpace;
	__declspec(property(get=get_nShadowVSpace,put=put_nShadowVSpace))
		short  nShadowVSpace;
	__declspec(property(get=get_nShadowOnPerPixel,put=put_nShadowOnPerPixel))
		short  nShadowOnPerPixel;
	__declspec(property(get=get_nLeftOffset,put=put_nLeftOffset))
		short  nLeftOffset;
	__declspec(property(get=get_nRightOffset,put=put_nRightOffset))
		short  nRightOffset;
	__declspec(property(get=get_nTopOffset,put=put_nTopOffset))
		short  nTopOffset;
	__declspec(property(get=get_nBottomOffset,put=put_nBottomOffset))
		short  nBottomOffset;

	virtual HRESULT __stdcall raw_get_clrText(OLE_COLOR *pVal) = 0;
	virtual HRESULT __stdcall raw_put_clrText(OLE_COLOR pVal) = 0;
	virtual HRESULT __stdcall raw_get_clrShadow(OLE_COLOR *pVal) = 0;
	virtual HRESULT __stdcall raw_put_clrShadow(OLE_COLOR pVal) = 0;
	virtual HRESULT __stdcall raw_get_bHotkeyPrefixShow(VARIANT_BOOL *pVal) = 0;
	virtual HRESULT __stdcall raw_put_bHotkeyPrefixShow(VARIANT_BOOL pVal) = 0;
	virtual HRESULT __stdcall raw_get_bSingleLine(VARIANT_BOOL *pVal) = 0;
	virtual HRESULT __stdcall raw_put_bSingleLine(VARIANT_BOOL pVal) = 0;
	virtual HRESULT __stdcall raw_get_bVertDraw(VARIANT_BOOL *pVal) = 0;
	virtual HRESULT __stdcall raw_put_bVertDraw(VARIANT_BOOL pVal) = 0;
	virtual HRESULT __stdcall raw_get_bRightToLeft(VARIANT_BOOL *pVal) = 0;
	virtual HRESULT __stdcall raw_put_bRightToLeft(VARIANT_BOOL pVal) = 0;
	virtual HRESULT __stdcall raw_get_fontExPtr(struct IDUIFontEx **pVal) = 0;
	virtual HRESULT __stdcall raw_put_fontExPtr(struct IDUIFontEx *pVal) = 0;
	virtual HRESULT __stdcall raw_get_nHAlign(short *pVal) = 0;
	virtual HRESULT __stdcall raw_put_nHAlign(short pVal) = 0;
	virtual HRESULT __stdcall raw_get_nVAlign(short *pVal) = 0;
	virtual HRESULT __stdcall raw_put_nVAlign(short pVal) = 0;
	virtual HRESULT __stdcall raw_get_nStringTrimming(short *pVal) = 0;
	virtual HRESULT __stdcall raw_put_nStringTrimming(short pVal) = 0;
	virtual HRESULT __stdcall raw_get_nEffect(short *pVal) = 0;
	virtual HRESULT __stdcall raw_put_nEffect(short pVal) = 0;
	virtual HRESULT __stdcall raw_get_nShadowHSpace(short *pVal) = 0;
	virtual HRESULT __stdcall raw_put_nShadowHSpace(short pVal) = 0;
	virtual HRESULT __stdcall raw_get_nShadowVSpace(short *pVal) = 0;
	virtual HRESULT __stdcall raw_put_nShadowVSpace(short pVal) = 0;
	virtual HRESULT __stdcall raw_get_nShadowOnPerPixel(short *pVal) = 0;
	virtual HRESULT __stdcall raw_put_nShadowOnPerPixel(short pVal) = 0;
	virtual HRESULT __stdcall raw_get_nLeftOffset(short *pVal) = 0;
	virtual HRESULT __stdcall raw_put_nLeftOffset(short pVal) = 0;
	virtual HRESULT __stdcall raw_get_nRightOffset(short *pVal) = 0;
	virtual HRESULT __stdcall raw_put_nRightOffset(short pVal) = 0;
	virtual HRESULT __stdcall raw_get_nTopOffset(short *pVal) = 0;
	virtual HRESULT __stdcall raw_put_nTopOffset(short pVal) = 0;
	virtual HRESULT __stdcall raw_get_nBottomOffset(short *pVal) = 0;
	virtual HRESULT __stdcall raw_put_nBottomOffset(short pVal) = 0;

	//
	//Method
	//
	virtual HRESULT __stdcall raw_DrawText(OLE_HANDLE hDC, BSTR strText, struct SkinRect rect, VARIANT_BOOL bCalcDraw, long nUserFormat, struct SkinRect *pRectCalc, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetDrawFlags(long *pResult) = 0;
	virtual HRESULT __stdcall raw_CreateTextStyle(BSTR strTextStyleName, OLE_HANDLE pDUIRes, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_RenderDrawText(struct IDUIRenderDC *pDC, BSTR strText, struct SkinRect rect, VARIANT_BOOL bCalcDraw, long nUserFormat, struct SkinRect *pRectCalc, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetRenderFont(OLE_HANDLE pDevice, OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_ReleaseRenderFont(enum DUI_RENDERENGINE_TYPE type, long *pResult) = 0;

	//
	//Method Wrapper
	//
	OLE_COLOR  get_clrText();
	void put_clrText(OLE_COLOR  pVal);
	OLE_COLOR  get_clrShadow();
	void put_clrShadow(OLE_COLOR  pVal);
	VARIANT_BOOL  get_bHotkeyPrefixShow();
	void put_bHotkeyPrefixShow(VARIANT_BOOL  pVal);
	VARIANT_BOOL  get_bSingleLine();
	void put_bSingleLine(VARIANT_BOOL  pVal);
	VARIANT_BOOL  get_bVertDraw();
	void put_bVertDraw(VARIANT_BOOL  pVal);
	VARIANT_BOOL  get_bRightToLeft();
	void put_bRightToLeft(VARIANT_BOOL  pVal);
	struct IDUIFontEx * get_fontExPtr();
	void put_fontExPtr(struct IDUIFontEx * pVal);
	short  get_nHAlign();
	void put_nHAlign(short  pVal);
	short  get_nVAlign();
	void put_nVAlign(short  pVal);
	short  get_nStringTrimming();
	void put_nStringTrimming(short  pVal);
	short  get_nEffect();
	void put_nEffect(short  pVal);
	short  get_nShadowHSpace();
	void put_nShadowHSpace(short  pVal);
	short  get_nShadowVSpace();
	void put_nShadowVSpace(short  pVal);
	short  get_nShadowOnPerPixel();
	void put_nShadowOnPerPixel(short  pVal);
	short  get_nLeftOffset();
	void put_nLeftOffset(short  pVal);
	short  get_nRightOffset();
	void put_nRightOffset(short  pVal);
	short  get_nTopOffset();
	void put_nTopOffset(short  pVal);
	short  get_nBottomOffset();
	void put_nBottomOffset(short  pVal);
	BOOL  DrawText(OLE_HANDLE  hDC, tstring  strText, struct SkinRect  rect, BOOL  bCalcDraw, long  nUserFormat, struct SkinRect * pRectCalc = 0  );
	long  GetDrawFlags();
	BOOL  CreateTextStyle(tstring  strTextStyleName, OLE_HANDLE  pDUIRes  );
	BOOL  RenderDrawText(struct IDUIRenderDC * pDC, tstring  strText, struct SkinRect  rect, BOOL  bCalcDraw, long  nUserFormat, struct SkinRect * pRectCalc = 0  );
	OLE_HANDLE  GetRenderFont(OLE_HANDLE  pDevice  );
	long  ReleaseRenderFont(enum DUI_RENDERENGINE_TYPE  type  );
};

struct __declspec(uuid("47ac6577-d600-49b8-a0bb-ae14897769cd")) IDUIFontEx : ISkinShareBase
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_GetLogFont(struct DUILOGFONT *pResult) = 0;
	virtual HRESULT __stdcall raw_GetHFont(OLE_HANDLE *pResult) = 0;

	//
	//Method Wrapper
	//
	struct DUILOGFONT  GetLogFont();
	OLE_HANDLE  GetHFont();
};

struct __declspec(uuid("3fa1fe8f-94e1-493b-a0cc-d50ae1576ae1")) DUILOGFONT
{
	long 	lfHeight;
	long 	lfWidth;
	long 	lfEscapement;
	long 	lfOrientation;
	long 	lfWeight;
	short 	lfItalic;
	short 	lfUnderline;
	short 	lfStrikeOut;
	short 	lfCharSet;
	short 	lfOutPrecision;
	short 	lfClipPrecision;
	short 	lfQuality;
	short 	lfPitchAndFamily;
	BSTR 	lfFaceName;
};

struct __declspec(uuid("a6aa07b6-c18d-4df4-863d-1c225e98d781")) SkinSize
{
	long 	cx;
	long 	cy;
};

struct __declspec(uuid("b143f497-cdec-4a2f-b903-530228d4bdb1")) IDUIControlBase : ISkinObjResBase
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_GetControlTypeName(BSTR *pResult) = 0;
	virtual HRESULT __stdcall raw_GetAuthorInfo(BSTR *pbstrAuthorName, BSTR *pbstrCompany, BSTR *pbstrUrl, BSTR *pbstrVersion  ) = 0;
	virtual HRESULT __stdcall raw_GetControlIcon(int nWidth, int nHeight, OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_GetDragCursor(OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_SetClassId(BSTR clsId  ) = 0;
	virtual HRESULT __stdcall raw_GetClassId(BSTR *pResult) = 0;
	virtual HRESULT __stdcall raw_GetCategoryName(BSTR *pResult) = 0;
	virtual HRESULT __stdcall raw_DrawObject(struct IDUIObjectDraw *pObjDraw, struct SkinRect sknrc, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_DestroyBmpPerPixel() = 0;
	virtual HRESULT __stdcall raw_Clone(struct IDUIObj *pObjParent, struct IDUIObj **pResult) = 0;
	virtual HRESULT __stdcall raw_OnMouseEnter(short nHitTest, short x, short y, long *pResult) = 0;
	virtual HRESULT __stdcall raw_OnMouseMove(short nHitTest, short x, short y, long *pResult) = 0;
	virtual HRESULT __stdcall raw_OnLButtonDown(short nHitTest, short x, short y, long *pResult) = 0;
	virtual HRESULT __stdcall raw_OnLButtonDbClick(short nHitTest, short x, short y, long *pResult) = 0;
	virtual HRESULT __stdcall raw_OnLButtonUp(short nHitTest, short x, short y, long *pResult) = 0;
	virtual HRESULT __stdcall raw_OnMouseLeave(long *pResult) = 0;
	virtual HRESULT __stdcall raw_OnSetFocus(short x, short y, long *pResult) = 0;
	virtual HRESULT __stdcall raw_OnKillFocus() = 0;
	virtual HRESULT __stdcall raw_OnSize() = 0;
	virtual HRESULT __stdcall raw_OnTimer(unsigned int nIDEvent  ) = 0;
	virtual HRESULT __stdcall raw_DirectRedraw(struct SkinRect *pRect  ) = 0;
	virtual HRESULT __stdcall raw_CallProp(long lPropId, BSTR *pResult) = 0;
	virtual HRESULT __stdcall raw_AddProp(struct ICtrlPluginProp *pProp  ) = 0;
	virtual HRESULT __stdcall raw_GetPropList(OLE_HANDLE *pPropList  ) = 0;
	virtual HRESULT __stdcall raw_Load() = 0;
	virtual HRESULT __stdcall raw_AddPlugInObj(struct IDUIControlBase *pPluginObj  ) = 0;
	virtual HRESULT __stdcall raw_RemovePlugInObj(struct IDUIControlBase *pPluginObj  ) = 0;
	virtual HRESULT __stdcall raw_DesignStatusChanged(VARIANT_BOOL bDesign  ) = 0;
	virtual HRESULT __stdcall raw_CreateObj(OLE_HANDLE pSkinResource, OLE_HANDLE pObjParent, long ntype, VARIANT_BOOL bInsertFirst, OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_DrawPreview(OLE_HANDLE hDC, struct SkinRect *sknrc  ) = 0;
	virtual HRESULT __stdcall raw_FinalCreate(VARIANT_BOOL bNewObject  ) = 0;
	virtual HRESULT __stdcall raw_GetInerface(OLE_HANDLE pIID, IDispatch **pResult) = 0;
	virtual HRESULT __stdcall raw_SetRealCtrlPtr(struct IDUIControlBase *pCtrlBase  ) = 0;
	virtual HRESULT __stdcall raw_GetRealCtrlPtr(struct IDUIControlBase **pResult) = 0;
	virtual HRESULT __stdcall raw_SetCursorPtr(struct IDUICursor *pCursor  ) = 0;
	virtual HRESULT __stdcall raw_GetCursorPtr(struct IDUICursor **pResult) = 0;
	virtual HRESULT __stdcall raw_SetHotkeyPtr(struct IDUIHotkey *pHotkey1, struct IDUIHotkey *pHotkey2  ) = 0;
	virtual HRESULT __stdcall raw_GetHotkeyPtr(struct IDUIHotkey **ppHotkey1, struct IDUIHotkey **ppHotkey2  ) = 0;
	virtual HRESULT __stdcall raw_SetBackEnterHotkey(VARIANT_BOOL bIsBackSpace, VARIANT_BOOL bIsEnter  ) = 0;
	virtual HRESULT __stdcall raw_GetBackEnterHotkey(VARIANT_BOOL *pbIsBackSpace, VARIANT_BOOL *pbIsEnter  ) = 0;
	virtual HRESULT __stdcall raw_CreateGroupProp(struct ICtrlPluginProp *pParentProp, BSTR strPropName, VARIANT_BOOL bExpand, struct ICtrlPluginProp **pResult) = 0;
	virtual HRESULT __stdcall raw_CreateProp(struct ICtrlPluginProp *pPropParent, enum enumPropType eType, BSTR strPropName, BSTR strPropHelp, VARIANT_BOOL bIsStyle, struct IPropChangedCallback *pCallback, struct IDUIPropBase **pResult) = 0;
	virtual HRESULT __stdcall raw_ExportConfig(OLE_HANDLE pXmlEle, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_ImportConfig(struct IDUIRes *pDUIRes, OLE_HANDLE hObjParent, struct IDUIControlBase **pResult) = 0;
	virtual HRESULT __stdcall raw_GetFilePath(BSTR *pResult) = 0;
	virtual HRESULT __stdcall raw_DrawChildren(OLE_HANDLE hDC, struct SkinRect sknrc  ) = 0;
	virtual HRESULT __stdcall raw_IsDragabled(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_EventNotify(struct DUINotify *peVentNotify, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_PropChangedNotify(struct IDUIPropBase *pProp  ) = 0;
	virtual HRESULT __stdcall raw_SetRootObject(VARIANT_BOOL bRootObj  ) = 0;
	virtual HRESULT __stdcall raw_IsRootObject(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_CreateProps() = 0;
	virtual HRESULT __stdcall raw_SetFocus(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetTabStop(VARIANT_BOOL bTabStop  ) = 0;
	virtual HRESULT __stdcall raw_IsTabStop(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetDrawFocus(VARIANT_BOOL bDrawFocus  ) = 0;
	virtual HRESULT __stdcall raw_IsDrawFocus(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_AddMsgCallback(long nMsgID, OLE_HANDLE hFuncCallback, OLE_HANDLE pThis, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_RemoveMsgCallback(long nMsgID, OLE_HANDLE hFuncCallback, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetMsgCallbackCount(long nMsgID, short *pResult) = 0;
	virtual HRESULT __stdcall raw_GetCallbackAddress(long nMsgID, OLE_HANDLE pThis, OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_CallMsg(long nMsgID, OLE_HANDLE wParam, OLE_HANDLE lParam, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_RebuildPropBaseXMLNode() = 0;
	virtual HRESULT __stdcall raw_SetIsComposeCtrl(VARIANT_BOOL bIsComposeCtrl  ) = 0;
	virtual HRESULT __stdcall raw_IsComposeCtrl(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_ClearPropBaseXMLNode() = 0;
	virtual HRESULT __stdcall raw_DUISetToolTip(BSTR strTool  ) = 0;
	virtual HRESULT __stdcall raw_DUIGetToolTip(BSTR *pResult) = 0;
	virtual HRESULT __stdcall raw_SetDragabledProp(VARIANT_BOOL bDragabled  ) = 0;
	virtual HRESULT __stdcall raw_IsDragabledProp(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetRenderDevice(OLE_HANDLE pDevice  ) = 0;
	virtual HRESULT __stdcall raw_GetRenderDevice(OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_RenderDrawObject(struct IDUIRenderDC *pDC, struct SkinRect sknrc, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_IsRedraw(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetRedraw(VARIANT_BOOL bRedraw  ) = 0;
	virtual HRESULT __stdcall raw_RenderDrawChildren(struct IDUIRenderDC *pDC, struct SkinRect sknrc  ) = 0;
	virtual HRESULT __stdcall raw_SetHaveCanvas(VARIANT_BOOL bHaveCanvas, enum DUI_HAVECANVASFLAGES flages, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_IsHaveCanvas(enum DUI_HAVECANVASFLAGES *pFlages, VARIANT_BOOL *pResult) = 0;

	//
	//Method Wrapper
	//
	tstring  GetControlTypeName();
	void GetAuthorInfo(BSTR * pbstrAuthorName, BSTR * pbstrCompany, BSTR * pbstrUrl, BSTR * pbstrVersion  );
	OLE_HANDLE  GetControlIcon(int  nWidth, int  nHeight  );
	OLE_HANDLE  GetDragCursor();
	void SetClassId(tstring  clsId  );
	tstring  GetClassId();
	tstring  GetCategoryName();
	BOOL  DrawObject(struct IDUIObjectDraw * pObjDraw, struct SkinRect  sknrc  );
	void DestroyBmpPerPixel();
	struct IDUIObj * Clone(struct IDUIObj * pObjParent  );
	long  OnMouseEnter(short  nHitTest, short  x, short  y  );
	long  OnMouseMove(short  nHitTest, short  x, short  y  );
	long  OnLButtonDown(short  nHitTest, short  x, short  y  );
	long  OnLButtonDbClick(short  nHitTest, short  x, short  y  );
	long  OnLButtonUp(short  nHitTest, short  x, short  y  );
	long  OnMouseLeave();
	long  OnSetFocus(short  x, short  y  );
	void OnKillFocus();
	void OnSize();
	void OnTimer(unsigned int  nIDEvent  );
	void DirectRedraw(struct SkinRect * pRect = 0  );
	tstring  CallProp(long  lPropId  );
	void AddProp(struct ICtrlPluginProp * pProp  );
	void GetPropList(OLE_HANDLE * pPropList  );
	void Load();
	void AddPlugInObj(struct IDUIControlBase * pPluginObj  );
	void RemovePlugInObj(struct IDUIControlBase * pPluginObj  );
	void DesignStatusChanged(BOOL  bDesign  );
	OLE_HANDLE  CreateObj(OLE_HANDLE  pSkinResource, OLE_HANDLE  pObjParent, long  ntype, BOOL  bInsertFirst = FALSE  );
	void DrawPreview(OLE_HANDLE  hDC, struct SkinRect * sknrc  );
	void FinalCreate(BOOL  bNewObject  );
	IDispatch * GetInerface(OLE_HANDLE  pIID  );
	void SetRealCtrlPtr(struct IDUIControlBase * pCtrlBase  );
	struct IDUIControlBase * GetRealCtrlPtr();
	void SetCursorPtr(struct IDUICursor * pCursor  );
	struct IDUICursor * GetCursorPtr();
	void SetHotkeyPtr(struct IDUIHotkey * pHotkey1, struct IDUIHotkey * pHotkey2  );
	void GetHotkeyPtr(struct IDUIHotkey ** ppHotkey1, struct IDUIHotkey ** ppHotkey2  );
	void SetBackEnterHotkey(BOOL  bIsBackSpace, BOOL  bIsEnter  );
	void GetBackEnterHotkey(VARIANT_BOOL * pbIsBackSpace, VARIANT_BOOL * pbIsEnter  );
	struct ICtrlPluginProp * CreateGroupProp(struct ICtrlPluginProp * pParentProp, tstring  strPropName, BOOL  bExpand  );
	struct IDUIPropBase * CreateProp(struct ICtrlPluginProp * pPropParent, enum enumPropType  eType, tstring  strPropName, tstring  strPropHelp, BOOL  bIsStyle, struct IPropChangedCallback * pCallback = 0  );
	BOOL  ExportConfig(OLE_HANDLE  pXmlEle  );
	struct IDUIControlBase * ImportConfig(struct IDUIRes * pDUIRes, OLE_HANDLE  hObjParent  );
	tstring  GetFilePath();
	void DrawChildren(OLE_HANDLE  hDC, struct SkinRect  sknrc  );
	BOOL  IsDragabled();
	BOOL  EventNotify(struct DUINotify * peVentNotify  );
	void PropChangedNotify(struct IDUIPropBase * pProp  );
	void SetRootObject(BOOL  bRootObj  );
	BOOL  IsRootObject();
	void CreateProps();
	BOOL  SetFocus();
	void SetTabStop(BOOL  bTabStop  );
	BOOL  IsTabStop();
	void SetDrawFocus(BOOL  bDrawFocus  );
	BOOL  IsDrawFocus();
	BOOL  AddMsgCallback(long  nMsgID, OLE_HANDLE  hFuncCallback, OLE_HANDLE  pThis  );
	BOOL  RemoveMsgCallback(long  nMsgID, OLE_HANDLE  hFuncCallback  );
	short  GetMsgCallbackCount(long  nMsgID  );
	OLE_HANDLE  GetCallbackAddress(long  nMsgID, OLE_HANDLE  pThis  );
	BOOL  CallMsg(long  nMsgID, OLE_HANDLE  wParam, OLE_HANDLE  lParam  );
	void RebuildPropBaseXMLNode();
	void SetIsComposeCtrl(BOOL  bIsComposeCtrl  );
	BOOL  IsComposeCtrl();
	void ClearPropBaseXMLNode();
	void DUISetToolTip(tstring  strTool  );
	tstring  DUIGetToolTip();
	void SetDragabledProp(BOOL  bDragabled  );
	BOOL  IsDragabledProp();
	void SetRenderDevice(OLE_HANDLE  pDevice  );
	OLE_HANDLE  GetRenderDevice();
	BOOL  RenderDrawObject(struct IDUIRenderDC * pDC, struct SkinRect  sknrc  );
	BOOL  IsRedraw();
	void SetRedraw(BOOL  bRedraw  );
	void RenderDrawChildren(struct IDUIRenderDC * pDC, struct SkinRect  sknrc  );
	BOOL  SetHaveCanvas(BOOL  bHaveCanvas, enum DUI_HAVECANVASFLAGES  flages  );
	BOOL  IsHaveCanvas(enum DUI_HAVECANVASFLAGES * pFlages  );
};

struct __declspec(uuid("86d01378-75ad-42fc-8f3b-99f796d89a18")) IDUIObjectDraw : IDispatch
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_EndDraw() = 0;
	virtual HRESULT __stdcall raw_GetDC(VARIANT_BOOL bBlend, OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_GetDrawRect(struct SkinRect *pResult) = 0;
	virtual HRESULT __stdcall raw_PaintIcon(struct SkinRect rcDest, OLE_HANDLE hIcon, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_PaintImageAll(OLE_HANDLE hBmpSrc, VARIANT_BOOL bNullCopy, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_PaintImagePart(struct SkinRect rcDest, OLE_HANDLE hBmpSrc, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_PaintPartImagePart(struct SkinRect rcDest, struct SkinRect rcSrc, OLE_HANDLE hBmpSrc, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_DrawText(struct IDUITextStyle *pTextStyle, BSTR strText, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_Blend(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetBmpBits(OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_SaveBitmap(BSTR strImagePath, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetRenderDC(struct IDUIRenderDC **pResult) = 0;
	virtual HRESULT __stdcall raw_SetRenderDC(struct IDUIRenderDC *pRenderDC  ) = 0;

	//
	//Method Wrapper
	//
	void EndDraw();
	OLE_HANDLE  GetDC(BOOL  bBlend  );
	struct SkinRect  GetDrawRect();
	BOOL  PaintIcon(struct SkinRect  rcDest, OLE_HANDLE  hIcon  );
	BOOL  PaintImageAll(OLE_HANDLE  hBmpSrc, BOOL  bNullCopy  );
	BOOL  PaintImagePart(struct SkinRect  rcDest, OLE_HANDLE  hBmpSrc  );
	BOOL  PaintPartImagePart(struct SkinRect  rcDest, struct SkinRect  rcSrc, OLE_HANDLE  hBmpSrc  );
	BOOL  DrawText(struct IDUITextStyle * pTextStyle, tstring  strText  );
	BOOL  Blend();
	OLE_HANDLE  GetBmpBits();
	BOOL  SaveBitmap(tstring  strImagePath  );
	struct IDUIRenderDC * GetRenderDC();
	void SetRenderDC(struct IDUIRenderDC * pRenderDC  );
};

struct __declspec(uuid("9b178567-37f3-4229-8286-234217f0a2fa")) ICtrlPluginProp : IDispatch
{
	//
	//Property
	//
	__declspec(property(get=get_bGroup,put=put_bGroup))
		VARIANT_BOOL  bGroup;
	__declspec(property(get=get_strName,put=put_strName))
		BSTR  strName;

	virtual HRESULT __stdcall raw_get_bGroup(VARIANT_BOOL *pVal) = 0;
	virtual HRESULT __stdcall raw_put_bGroup(VARIANT_BOOL pVal) = 0;
	virtual HRESULT __stdcall raw_get_strName(BSTR *pVal) = 0;
	virtual HRESULT __stdcall raw_put_strName(BSTR pVal) = 0;

	//
	//Method
	//
	virtual HRESULT __stdcall raw_AddSkinProp(struct IDUIPropType *pSkinProp  ) = 0;
	virtual HRESULT __stdcall raw_RemoveSkinProp(struct IDUIPropType *pSkinProp  ) = 0;
	virtual HRESULT __stdcall raw_AddProp(struct ICtrlPluginProp *pSubProp  ) = 0;
	virtual HRESULT __stdcall raw_RemoveProp(struct ICtrlPluginProp *pSubProp  ) = 0;
	virtual HRESULT __stdcall raw_AccessConfig(OLE_HANDLE pXmlEle, VARIANT_BOOL bRead, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_ExportConfig(BSTR strParentName, OLE_HANDLE pXmlEle, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_Expand(VARIANT_BOOL bExpand  ) = 0;
	virtual HRESULT __stdcall raw_IsExpand(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetParent(struct ICtrlPluginProp *pParent  ) = 0;
	virtual HRESULT __stdcall raw_GetParent(struct ICtrlPluginProp **pResult) = 0;
	virtual HRESULT __stdcall raw_GetSkinPropTypeCount(long *pResult) = 0;
	virtual HRESULT __stdcall raw_GetSkinPropTypeFromIndex(long nIndex, struct IDUIPropType **pResult) = 0;
	virtual HRESULT __stdcall raw_GetAddinPropCount(long *pResult) = 0;
	virtual HRESULT __stdcall raw_GetAddinPropByIndex(long nIndex, struct ICtrlPluginProp **pResult) = 0;
	virtual HRESULT __stdcall raw_GetDUIRes(struct IDUIRes **pResult) = 0;
	virtual HRESULT __stdcall raw_SetDUIRes(struct IDUIRes *pDUIRes  ) = 0;
	virtual HRESULT __stdcall raw_GetControlBasePtr(struct IDUIControlBase **pResult) = 0;
	virtual HRESULT __stdcall raw_SetControlBasePtr(struct IDUIControlBase *pCtrlBase  ) = 0;
	virtual HRESULT __stdcall raw_AccessConfig2(BSTR strParentName, OLE_HANDLE pXmlEle, VARIANT_BOOL bRead, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_AddPropBase(struct IDUIPropBase *pProp  ) = 0;
	virtual HRESULT __stdcall raw_RemovePropBase(struct IDUIPropBase *pProp  ) = 0;
	virtual HRESULT __stdcall raw_RemoveAllPropBase() = 0;
	virtual HRESULT __stdcall raw_GetPropBaseCount(long *pResult) = 0;
	virtual HRESULT __stdcall raw_GetAtPropBase(long nIndex, struct IDUIPropBase **pResult) = 0;
	virtual HRESULT __stdcall raw_Clone(struct ICtrlPluginProp *pPropSrc  ) = 0;
	virtual HRESULT __stdcall raw_SetGetExpandCallback(OLE_HANDLE pCallback, OLE_HANDLE pProp  ) = 0;
	virtual HRESULT __stdcall raw_RebuildPropBaseStyleNode(OLE_HANDLE pStyleNode  ) = 0;
	virtual HRESULT __stdcall raw_AccessConfig3(BSTR strParentName, OLE_HANDLE pXmlEle, VARIANT_BOOL bRead, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetRenderDevice(OLE_HANDLE pDevice  ) = 0;

	//
	//Method Wrapper
	//
	VARIANT_BOOL  get_bGroup();
	void put_bGroup(VARIANT_BOOL  pVal);
	BSTR  get_strName();
	void put_strName(BSTR  pVal);
	void AddSkinProp(struct IDUIPropType * pSkinProp  );
	void RemoveSkinProp(struct IDUIPropType * pSkinProp  );
	void AddProp(struct ICtrlPluginProp * pSubProp  );
	void RemoveProp(struct ICtrlPluginProp * pSubProp  );
	BOOL  AccessConfig(OLE_HANDLE  pXmlEle, BOOL  bRead  );
	BOOL  ExportConfig(tstring  strParentName, OLE_HANDLE  pXmlEle  );
	void Expand(BOOL  bExpand  );
	BOOL  IsExpand();
	void SetParent(struct ICtrlPluginProp * pParent  );
	struct ICtrlPluginProp * GetParent();
	long  GetSkinPropTypeCount();
	struct IDUIPropType * GetSkinPropTypeFromIndex(long  nIndex  );
	long  GetAddinPropCount();
	struct ICtrlPluginProp * GetAddinPropByIndex(long  nIndex  );
	struct IDUIRes * GetDUIRes();
	void SetDUIRes(struct IDUIRes * pDUIRes  );
	struct IDUIControlBase * GetControlBasePtr();
	void SetControlBasePtr(struct IDUIControlBase * pCtrlBase  );
	BOOL  AccessConfig2(tstring  strParentName, OLE_HANDLE  pXmlEle, BOOL  bRead  );
	void AddPropBase(struct IDUIPropBase * pProp  );
	void RemovePropBase(struct IDUIPropBase * pProp  );
	void RemoveAllPropBase();
	long  GetPropBaseCount();
	struct IDUIPropBase * GetAtPropBase(long  nIndex  );
	void Clone(struct ICtrlPluginProp * pPropSrc  );
	void SetGetExpandCallback(OLE_HANDLE  pCallback, OLE_HANDLE  pProp  );
	void RebuildPropBaseStyleNode(OLE_HANDLE  pStyleNode  );
	BOOL  AccessConfig3(tstring  strParentName, OLE_HANDLE  pXmlEle, BOOL  bRead  );
	void SetRenderDevice(OLE_HANDLE  pDevice  );
};

struct __declspec(uuid("7d39fcec-7410-45b5-87be-d4952e7e873c")) IDUIPropType : IDispatch
{
	//
	//Property
	//
	__declspec(property(get=get_strName,put=put_strName))
		BSTR  strName;
	__declspec(property(get=get_eType,put=put_eType))
		enum enumPropType  eType;
	__declspec(property(get=get_vtValue,put=put_vtValue))
		VARIANT * vtValue;
	__declspec(property(get=get_strHelp,put=put_strHelp))
		BSTR  strHelp;
	__declspec(property(get=get_nStatus,put=put_nStatus))
		short  nStatus;
	__declspec(property(get=get_strValue,put=put_strValue))
		BSTR  strValue;
	__declspec(property(get=get_lPropId,put=put_lPropId))
		long  lPropId;
	__declspec(property(get=get_nComboSelItem,put=put_nComboSelItem))
		long  nComboSelItem;
	__declspec(property(get=get_bAccess,put=put_bAccess))
		VARIANT_BOOL  bAccess;
	__declspec(property(get=get_pIDispatch,put=put_pIDispatch))
		IDispatch * pIDispatch;
	__declspec(property(get=get_pVoid,put=put_pVoid))
		OLE_HANDLE  pVoid;

	virtual HRESULT __stdcall raw_get_strName(BSTR *pVal) = 0;
	virtual HRESULT __stdcall raw_put_strName(BSTR pVal) = 0;
	virtual HRESULT __stdcall raw_get_eType(enum enumPropType *pVal) = 0;
	virtual HRESULT __stdcall raw_put_eType(enum enumPropType pVal) = 0;
	virtual HRESULT __stdcall raw_get_vtValue(VARIANT **pVal) = 0;
	virtual HRESULT __stdcall raw_put_vtValue(VARIANT *pVal) = 0;
	virtual HRESULT __stdcall raw_get_strHelp(BSTR *pVal) = 0;
	virtual HRESULT __stdcall raw_put_strHelp(BSTR pVal) = 0;
	virtual HRESULT __stdcall raw_get_nStatus(short *pVal) = 0;
	virtual HRESULT __stdcall raw_put_nStatus(short pVal) = 0;
	virtual HRESULT __stdcall raw_get_strValue(BSTR *pVal) = 0;
	virtual HRESULT __stdcall raw_put_strValue(BSTR pVal) = 0;
	virtual HRESULT __stdcall raw_get_lPropId(long *pVal) = 0;
	virtual HRESULT __stdcall raw_put_lPropId(long pVal) = 0;
	virtual HRESULT __stdcall raw_get_nComboSelItem(long *pVal) = 0;
	virtual HRESULT __stdcall raw_put_nComboSelItem(long pVal) = 0;
	virtual HRESULT __stdcall raw_get_bAccess(VARIANT_BOOL *pVal) = 0;
	virtual HRESULT __stdcall raw_put_bAccess(VARIANT_BOOL pVal) = 0;
	virtual HRESULT __stdcall raw_get_pIDispatch(IDispatch **pVal) = 0;
	virtual HRESULT __stdcall raw_put_pIDispatch(IDispatch *pVal) = 0;
	virtual HRESULT __stdcall raw_get_pVoid(OLE_HANDLE *pVal) = 0;
	virtual HRESULT __stdcall raw_put_pVoid(OLE_HANDLE pVal) = 0;

	//
	//Method
	//
	virtual HRESULT __stdcall raw_SetIntPropMinMax(int nMin, int nMax  ) = 0;
	virtual HRESULT __stdcall raw_GetIntPropMinMax(int *nMin, int *nMax  ) = 0;
	virtual HRESULT __stdcall raw_SetLongPropMinMax(long nMin, long nMax  ) = 0;
	virtual HRESULT __stdcall raw_GetLongPropMinMax(long *nMin, long *nMax  ) = 0;
	virtual HRESULT __stdcall raw_SetFloatPropMinMax(float fMin, float fMax  ) = 0;
	virtual HRESULT __stdcall raw_GetFloatPropMinMax(float *fMin, float *fMax  ) = 0;
	virtual HRESULT __stdcall raw_GetComboSelItemIndexPtr(long **pResult) = 0;
	virtual HRESULT __stdcall raw_GetPropBase(struct IDUIPropBase **pResult) = 0;
	virtual HRESULT __stdcall raw_SetPropBase(struct IDUIPropBase *pPropBase  ) = 0;
	virtual HRESULT __stdcall raw_GetParentProp(struct ICtrlPluginProp **pResult) = 0;
	virtual HRESULT __stdcall raw_SetParentProp(struct ICtrlPluginProp *pPropParent  ) = 0;

	//
	//Method Wrapper
	//
	BSTR  get_strName();
	void put_strName(BSTR  pVal);
	enum enumPropType  get_eType();
	void put_eType(enum enumPropType  pVal);
	VARIANT * get_vtValue();
	void put_vtValue(VARIANT * pVal);
	BSTR  get_strHelp();
	void put_strHelp(BSTR  pVal);
	short  get_nStatus();
	void put_nStatus(short  pVal);
	BSTR  get_strValue();
	void put_strValue(BSTR  pVal);
	long  get_lPropId();
	void put_lPropId(long  pVal);
	long  get_nComboSelItem();
	void put_nComboSelItem(long  pVal);
	VARIANT_BOOL  get_bAccess();
	void put_bAccess(VARIANT_BOOL  pVal);
	IDispatch * get_pIDispatch();
	void put_pIDispatch(IDispatch * pVal);
	OLE_HANDLE  get_pVoid();
	void put_pVoid(OLE_HANDLE  pVal);
	void SetIntPropMinMax(int  nMin, int  nMax  );
	void GetIntPropMinMax(int * nMin, int * nMax  );
	void SetLongPropMinMax(long  nMin, long  nMax  );
	void GetLongPropMinMax(long * nMin, long * nMax  );
	void SetFloatPropMinMax(float  fMin, float  fMax  );
	void GetFloatPropMinMax(float * fMin, float * fMax  );
	long * GetComboSelItemIndexPtr();
	struct IDUIPropBase * GetPropBase();
	void SetPropBase(struct IDUIPropBase * pPropBase  );
	struct ICtrlPluginProp * GetParentProp();
	void SetParentProp(struct ICtrlPluginProp * pPropParent  );
};

enum enumPropType
{ 
	_PROPTYPE_BOOL = 4,
	_PROPTYPE_COLOR = 8,
	_PROPTYPE_COMBO = 5,
	_PROPTYPE_CURSOR = 10,
	_PROPTYPE_FILLCOLOR = 13,
	_PROPTYPE_FLOAT = 11,
	_PROPTYPE_FONT = 7,
	_PROPTYPE_HOTKEY = 12,
	_PROPTYPE_IMAGESECTION = 0,
	_PROPTYPE_INT = 2,
	_PROPTYPE_LONG = 3,
	_PROPTYPE_PLUGIN = 9,
	_PROPTYPE_STRING = 6,
	_PROPTYPE_TEXTSTYLE = 1 
};

struct __declspec(uuid("8425da30-24dd-43c2-b0c9-5ef2bf80929a")) IDUIPropBase : IDispatch
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_GetPropTypePtr(struct IDUIPropType **pResult) = 0;
	virtual HRESULT __stdcall raw_SetName(BSTR strName  ) = 0;
	virtual HRESULT __stdcall raw_GetName(BSTR *pResult) = 0;
	virtual HRESULT __stdcall raw_SetHelp(BSTR strHelp  ) = 0;
	virtual HRESULT __stdcall raw_GetHelp(BSTR *pResult) = 0;
	virtual HRESULT __stdcall raw_SetType(enum enumPropType eType  ) = 0;
	virtual HRESULT __stdcall raw_GetType(enum enumPropType *pResult) = 0;
	virtual HRESULT __stdcall raw_SetVariant(VARIANT *variant  ) = 0;
	virtual HRESULT __stdcall raw_GetVariant(VARIANT **pResult) = 0;
	virtual HRESULT __stdcall raw_SetDispatch(IDispatch *pDisp  ) = 0;
	virtual HRESULT __stdcall raw_GetDispatch(IDispatch **pResult) = 0;
	virtual HRESULT __stdcall raw_AccessConfig(OLE_HANDLE pXmlEle, BSTR strKeyName, VARIANT_BOOL bRead, VARIANT_BOOL bCompleteUseKey, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetDUIRes(struct IDUIRes *pDUIRes  ) = 0;
	virtual HRESULT __stdcall raw_GetDUIRes(struct IDUIRes **pResult) = 0;
	virtual HRESULT __stdcall raw_SetPrivateValue(VARIANT *variant  ) = 0;
	virtual HRESULT __stdcall raw_Clone(struct IDUIPropBase *pSrcProp  ) = 0;
	virtual HRESULT __stdcall raw_ExportConfig(OLE_HANDLE pXmlEle, BSTR strKeyName, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_DoCallbackFunc() = 0;
	virtual HRESULT __stdcall raw_SetChangedCallback(struct IPropChangedCallback *pCallback  ) = 0;
	virtual HRESULT __stdcall raw_GetChangedCallback(struct IPropChangedCallback **pResult) = 0;
	virtual HRESULT __stdcall raw_IsStyle(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetStyle(VARIANT_BOOL bIsStyle  ) = 0;
	virtual HRESULT __stdcall raw_SetPropertyNode(OLE_HANDLE pPropertyNode  ) = 0;
	virtual HRESULT __stdcall raw_GetPropertyNode(OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_SetStyleNode(OLE_HANDLE pStyleNode  ) = 0;
	virtual HRESULT __stdcall raw_GetStyleNode(OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_ReleaseResource(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetRenderDevice(OLE_HANDLE pDevice  ) = 0;
	virtual HRESULT __stdcall raw_GetRenderDevice(OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_SetRenderType(enum DUI_RENDERENGINE_TYPE type  ) = 0;
	virtual HRESULT __stdcall raw_GetRenderType(enum DUI_RENDERENGINE_TYPE *pResult) = 0;

	//
	//Method Wrapper
	//
	struct IDUIPropType * GetPropTypePtr();
	void SetName(tstring  strName  );
	tstring  GetName();
	void SetHelp(tstring  strHelp  );
	tstring  GetHelp();
	void SetType(enum enumPropType  eType  );
	enum enumPropType  GetType();
	void SetVariant(VARIANT * variant  );
	VARIANT * GetVariant();
	void SetDispatch(IDispatch * pDisp  );
	IDispatch * GetDispatch();
	BOOL  AccessConfig(OLE_HANDLE  pXmlEle, tstring  strKeyName, BOOL  bRead, BOOL  bCompleteUseKey  );
	void SetDUIRes(struct IDUIRes * pDUIRes  );
	struct IDUIRes * GetDUIRes();
	void SetPrivateValue(VARIANT * variant  );
	void Clone(struct IDUIPropBase * pSrcProp  );
	BOOL  ExportConfig(OLE_HANDLE  pXmlEle, tstring  strKeyName  );
	void DoCallbackFunc();
	void SetChangedCallback(struct IPropChangedCallback * pCallback  );
	struct IPropChangedCallback * GetChangedCallback();
	BOOL  IsStyle();
	void SetStyle(BOOL  bIsStyle  );
	void SetPropertyNode(OLE_HANDLE  pPropertyNode  );
	OLE_HANDLE  GetPropertyNode();
	void SetStyleNode(OLE_HANDLE  pStyleNode  );
	OLE_HANDLE  GetStyleNode();
	BOOL  ReleaseResource();
	void SetRenderDevice(OLE_HANDLE  pDevice  );
	OLE_HANDLE  GetRenderDevice();
	void SetRenderType(enum DUI_RENDERENGINE_TYPE  type  );
	enum DUI_RENDERENGINE_TYPE  GetRenderType();
};

struct __declspec(uuid("d8439554-a9c5-40c4-acee-6db948d15df2")) IPropChangedCallback : IUnknown
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_Do(struct IDUIControlBase *pControlBase  ) = 0;

	//
	//Method Wrapper
	//
	void Do(struct IDUIControlBase * pControlBase  );
};

struct __declspec(uuid("2ce73bd6-18d7-4aa0-8f1d-169729a42ab5")) IDUICursor : ISkinShareBase
{
	//
	//Property
	//
	__declspec(property(get=get_ImageObj,put=put_ImageObj))
		struct IDUIPicture * ImageObj;

	virtual HRESULT __stdcall raw_get_ImageObj(struct IDUIPicture **pVal) = 0;
	virtual HRESULT __stdcall raw_put_ImageObj(struct IDUIPicture *pVal) = 0;

	//
	//Method
	//
	virtual HRESULT __stdcall raw_GetStandardCursorID(long *pResult) = 0;
	virtual HRESULT __stdcall raw_IsStandardCursor(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetCursorHandle(OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_SetCursor() = 0;

	//
	//Method Wrapper
	//
	struct IDUIPicture * get_ImageObj();
	void put_ImageObj(struct IDUIPicture * pVal);
	long  GetStandardCursorID();
	BOOL  IsStandardCursor();
	OLE_HANDLE  GetCursorHandle();
	void SetCursor();
};

struct __declspec(uuid("ca0c0c48-5528-4f22-9c5c-6f0288ac8879")) IDUIHotkey : IDispatch
{
	//
	//Property
	//
	__declspec(property(get=get_wVirtualKeyCode,put=put_wVirtualKeyCode))
		long  wVirtualKeyCode;
	__declspec(property(get=get_wModifiers,put=put_wModifiers))
		long  wModifiers;

	virtual HRESULT __stdcall raw_get_wVirtualKeyCode(long *pVal) = 0;
	virtual HRESULT __stdcall raw_put_wVirtualKeyCode(long pVal) = 0;
	virtual HRESULT __stdcall raw_get_wModifiers(long *pVal) = 0;
	virtual HRESULT __stdcall raw_put_wModifiers(long pVal) = 0;

	//
	//Method
	//
	virtual HRESULT __stdcall raw_AccessConfig2(OLE_HANDLE pXmlEle, BSTR strKeyName, VARIANT_BOOL bRead, VARIANT_BOOL bCompleteUseKey, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetDUIRes(struct IDUIRes *pDUIRes  ) = 0;
	virtual HRESULT __stdcall raw_GetDUIRes(struct IDUIRes **pResult) = 0;
	virtual HRESULT __stdcall raw_ExportConfig(OLE_HANDLE pXmlEle, BSTR strKeyName, VARIANT_BOOL *pResult) = 0;

	//
	//Method Wrapper
	//
	long  get_wVirtualKeyCode();
	void put_wVirtualKeyCode(long  pVal);
	long  get_wModifiers();
	void put_wModifiers(long  pVal);
	BOOL  AccessConfig2(OLE_HANDLE  pXmlEle, tstring  strKeyName, BOOL  bRead, BOOL  bCompleteUseKey = FALSE  );
	void SetDUIRes(struct IDUIRes * pDUIRes  );
	struct IDUIRes * GetDUIRes();
	BOOL  ExportConfig(OLE_HANDLE  pXmlEle, tstring  strKeyName  );
};

struct __declspec(uuid("75347a2e-0016-4b0c-bc3a-d7a3a8b59a53")) DUINotify
{
	enum DUIMsgID 	eDuiMsgId;
	long 	eWinMsgId;
	unsigned int 	lParam1;
	unsigned int 	lParam2;
	unsigned int 	lParam3;
	unsigned int 	lParam4;
	unsigned int 	lParam5;
	VARIANT_BOOL 	bChildren;
};

enum DUI_HAVECANVASFLAGES
{ 
	DUI_HCF_ALWAYS = 17,
	DUI_HCF_NONE = 0,
	DUI_HCF_RESIZING = 1 
};

struct __declspec(uuid("798122f9-1283-403b-ad0c-9f489c6a1b20")) IDUIImageList : ISkinShareBase
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

enum DUI_HOOKTYPE
{ 
	DUI_HM_CALLWNDPROC = 1,
	DUI_HM_CALLWNDPROCRET = 2,
	DUI_HM_CBT = 4,
	DUI_HM_FOREGROUNDIDLE = 8,
	DUI_HM_GETMESSAGE = 16,
	DUI_HM_KEYBOARD = 32,
	DUI_HM_MOUSE = 64,
	DUI_HM_MSGFILTER = 128,
	DUI_HM_SHELL = 256,
	DUI_HM_SYSMSGFILTER = 512 
};

struct __declspec(uuid("9b840c4f-b2e8-46a7-9d04-8f0571adec3a")) IDUIWindow : IDispatch
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_ShowWindow(OLE_HANDLE hWnd, enum ShowWindowFlags nFlag, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetWindowPos(OLE_HANDLE hWnd, OLE_HANDLE hWndInsertAfter, short x, short y, short cx, short cy, long lFlags, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SendMessage(OLE_HANDLE hWnd, long nMsgID, OLE_HANDLE wParam, OLE_HANDLE lParam, long *pResult) = 0;
	virtual HRESULT __stdcall raw_PostMessage(OLE_HANDLE hWnd, long nMsgID, OLE_HANDLE wParam, OLE_HANDLE lParam, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetStyle(OLE_HANDLE hWnd, long *pResult) = 0;
	virtual HRESULT __stdcall raw_ModifyStyle(OLE_HANDLE hWnd, long dwRemove, long dwAdd, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetExStyle(OLE_HANDLE hWnd, long *pResult) = 0;
	virtual HRESULT __stdcall raw_ModifyExStyle(OLE_HANDLE hWnd, long dwRemove, long dwAdd, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_Create(long dwExStyle, BSTR strClassName, BSTR strWindowName, long dwStyle, short x, short y, short nWidth, short nHeight, OLE_HANDLE hWndParent, OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_Destroy(OLE_HANDLE hWnd, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_MoveWindow(OLE_HANDLE hWnd, short x, short y, short nWidth, short nHeight, VARIANT_BOOL bRepaint, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetDlgCtrlID(OLE_HANDLE hWnd, short *pResult) = 0;
	virtual HRESULT __stdcall raw_SetDlgCtrlID(OLE_HANDLE hWnd, short nID, long *pResult) = 0;
	virtual HRESULT __stdcall raw_GetDlgItem(OLE_HANDLE hWnd, short nID, OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_SetWindowText(OLE_HANDLE hWnd, BSTR strString, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetWindowText(OLE_HANDLE hWnd, BSTR *pResult) = 0;
	virtual HRESULT __stdcall raw_BringWindowToTop(OLE_HANDLE hWnd, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_IsWindowVisible(OLE_HANDLE hWnd, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_IsWindowEnabled(OLE_HANDLE hWnd, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_EnableWindow(OLE_HANDLE hWnd, VARIANT_BOOL bEnable, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetTimer(OLE_HANDLE hWnd, short nIDEvent, short nElapse, short *pResult) = 0;
	virtual HRESULT __stdcall raw_KillTimer(OLE_HANDLE hWnd, short nIDEvent, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetWindowRect(OLE_HANDLE hWnd, struct IDUIRect **pResult) = 0;
	virtual HRESULT __stdcall raw_GetClientRect(OLE_HANDLE hWnd, struct IDUIRect **pResult) = 0;
	virtual HRESULT __stdcall raw_IsZoomed(OLE_HANDLE hWnd, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetRedraw(OLE_HANDLE hWnd, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_InvalidateRect(OLE_HANDLE hWnd, short left, short top, short right, short bottom, VARIANT_BOOL bErase, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_UpdateWindow(OLE_HANDLE hWnd, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_LockWindowUpdate(OLE_HANDLE hWnd, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_RedrawWindow(OLE_HANDLE hWnd, struct SkinRect sknrcUpdate, OLE_HANDLE hrgnUpdate, short nFlags, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_CloseWindow(OLE_HANDLE hWnd, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetCapture(OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_SetCapture(OLE_HANDLE hWnd, OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_SetFocus(OLE_HANDLE hWnd, OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_GetActiveWindow(OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_SetActiveWindow(OLE_HANDLE hWnd, OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_GetParent(OLE_HANDLE hWnd, OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_SetParent(OLE_HANDLE hWnd, OLE_HANDLE hNewParent, OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_MessageBox(OLE_HANDLE hWnd, BSTR strText, BSTR strCaption, long lFlags, short *pResult) = 0;
	virtual HRESULT __stdcall raw_DUIGetSystemMetrics(long flags, long *pResult) = 0;
	virtual HRESULT __stdcall raw_DUISleep(long Seconds, long *pResult) = 0;
	virtual HRESULT __stdcall raw_DUIGetCursorPosX(long *pResult) = 0;
	virtual HRESULT __stdcall raw_DUIGetCursorPosY(long *pResult) = 0;

	//
	//Method Wrapper
	//
	BOOL  ShowWindow(OLE_HANDLE  hWnd, enum ShowWindowFlags  nFlag  );
	BOOL  SetWindowPos(OLE_HANDLE  hWnd, OLE_HANDLE  hWndInsertAfter, short  x, short  y, short  cx, short  cy, long  lFlags  );
	long  SendMessage(OLE_HANDLE  hWnd, long  nMsgID, OLE_HANDLE  wParam, OLE_HANDLE  lParam  );
	BOOL  PostMessage(OLE_HANDLE  hWnd, long  nMsgID, OLE_HANDLE  wParam, OLE_HANDLE  lParam  );
	long  GetStyle(OLE_HANDLE  hWnd  );
	BOOL  ModifyStyle(OLE_HANDLE  hWnd, long  dwRemove, long  dwAdd  );
	long  GetExStyle(OLE_HANDLE  hWnd  );
	BOOL  ModifyExStyle(OLE_HANDLE  hWnd, long  dwRemove, long  dwAdd  );
	OLE_HANDLE  Create(long  dwExStyle, tstring  strClassName, tstring  strWindowName, long  dwStyle, short  x, short  y, short  nWidth, short  nHeight, OLE_HANDLE  hWndParent  );
	BOOL  Destroy(OLE_HANDLE  hWnd  );
	BOOL  MoveWindow(OLE_HANDLE  hWnd, short  x, short  y, short  nWidth, short  nHeight, BOOL  bRepaint  );
	short  GetDlgCtrlID(OLE_HANDLE  hWnd  );
	long  SetDlgCtrlID(OLE_HANDLE  hWnd, short  nID  );
	OLE_HANDLE  GetDlgItem(OLE_HANDLE  hWnd, short  nID  );
	BOOL  SetWindowText(OLE_HANDLE  hWnd, tstring  strString  );
	tstring  GetWindowText(OLE_HANDLE  hWnd  );
	BOOL  BringWindowToTop(OLE_HANDLE  hWnd  );
	BOOL  IsWindowVisible(OLE_HANDLE  hWnd  );
	BOOL  IsWindowEnabled(OLE_HANDLE  hWnd  );
	BOOL  EnableWindow(OLE_HANDLE  hWnd, BOOL  bEnable  );
	short  SetTimer(OLE_HANDLE  hWnd, short  nIDEvent, short  nElapse  );
	BOOL  KillTimer(OLE_HANDLE  hWnd, short  nIDEvent  );
	struct IDUIRect * GetWindowRect(OLE_HANDLE  hWnd  );
	struct IDUIRect * GetClientRect(OLE_HANDLE  hWnd  );
	BOOL  IsZoomed(OLE_HANDLE  hWnd  );
	BOOL  SetRedraw(OLE_HANDLE  hWnd, BOOL  bRedraw  );
	BOOL  InvalidateRect(OLE_HANDLE  hWnd, short  left, short  top, short  right, short  bottom, BOOL  bErase  );
	BOOL  UpdateWindow(OLE_HANDLE  hWnd  );
	BOOL  LockWindowUpdate(OLE_HANDLE  hWnd  );
	BOOL  RedrawWindow(OLE_HANDLE  hWnd, struct SkinRect  sknrcUpdate, OLE_HANDLE  hrgnUpdate, short  nFlags  );
	BOOL  CloseWindow(OLE_HANDLE  hWnd  );
	OLE_HANDLE  GetCapture();
	OLE_HANDLE  SetCapture(OLE_HANDLE  hWnd  );
	OLE_HANDLE  SetFocus(OLE_HANDLE  hWnd  );
	OLE_HANDLE  GetActiveWindow();
	OLE_HANDLE  SetActiveWindow(OLE_HANDLE  hWnd  );
	OLE_HANDLE  GetParent(OLE_HANDLE  hWnd  );
	OLE_HANDLE  SetParent(OLE_HANDLE  hWnd, OLE_HANDLE  hNewParent  );
	short  MessageBox(OLE_HANDLE  hWnd, tstring  strText, tstring  strCaption, long  lFlags  );
	long  DUIGetSystemMetrics(long  flags  );
	long  DUISleep(long  Seconds  );
	long  DUIGetCursorPosX();
	long  DUIGetCursorPosY();
};

enum ShowWindowFlags
{ 
	DUISW_FORCEMINIMIZE = 11,
	DUISW_HIDE = 0,
	DUISW_MAX = 11,
	DUISW_MAXIMIZE = 3,
	DUISW_MINIMIZE = 6,
	DUISW_NORMAL = 1,
	DUISW_RESTORE = 9,
	DUISW_SHOW = 5,
	DUISW_SHOWDEFAULT = 10,
	DUISW_SHOWMAXIMIZED = 3,
	DUISW_SHOWMINIMIZED = 2,
	DUISW_SHOWMINNOACTIVE = 7,
	DUISW_SHOWNA = 8,
	DUISW_SHOWNOACTIVATE = 4,
	DUISW_SHOWNORMAL = 1 
};

enum SKINCTRL_CLASSTYPE
{ 
	SKINCTRL_BUTTON = 16,
	SKINCTRL_COMBOBOX = 1,
	SKINCTRL_DATETIME = 3,
	SKINCTRL_EDIT = 2,
	SKINCTRL_HEADER = 8,
	SKINCTRL_LAST = 19,
	SKINCTRL_LISTBOX = 5,
	SKINCTRL_LISTVIEW = 7,
	SKINCTRL_MENU = 17,
	SKINCTRL_MONTHCAL = 4,
	SKINCTRL_NULL = 0,
	SKINCTRL_PROGRESSBAR = 11,
	SKINCTRL_SCROLLBAR = 6,
	SKINCTRL_SPIN = 14,
	SKINCTRL_STATUSBAR = 9,
	SKINCTRL_TAB = 13,
	SKINCTRL_TOOLBAR = 15,
	SKINCTRL_TRACKBAR = 12,
	SKINCTRL_TREEVIEW = 10,
	SKINCTRL_WINDOW = 18 
};

struct __declspec(uuid("892b86ac-044b-42c8-bdaf-9a6723398b53")) DUI_DRAGINFO
{
	struct ISkinObjResBase *	pFromObj;
	struct ISkinObjResBase *	pToObj;
	unsigned int 	hBitmap;
	unsigned int 	hData1;
	unsigned int 	hData2;
	unsigned int 	hData3;
};

struct __declspec(uuid("390be38e-750b-44c8-bcc5-755bce4e5190")) IDUIXMLNode : IDispatch
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_GetXMLNode(OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_SetXMLNode(OLE_HANDLE pXMLNode  ) = 0;
	virtual HRESULT __stdcall raw_AccessAttribLong(BSTR strAttribName, long *plValue, VARIANT_BOOL bRead, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_AccessAttribFloat(BSTR strAttribName, float *pfValue, VARIANT_BOOL bRead, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_AccessAttribDouble(BSTR strAttribName, double *pdValue, VARIANT_BOOL bRead, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_AccessAttribBOOL(BSTR strAttribName, VARIANT_BOOL *pbValue, VARIANT_BOOL bRead, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_AccessAttribString(BSTR strAttribName, BSTR *pstrValue, VARIANT_BOOL bRead, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_RemoveChild(struct IDUIXMLNode *pNode, VARIANT_BOOL bDelete  ) = 0;
	virtual HRESULT __stdcall raw_InsertAfterChild(struct IDUIXMLNode *afterThis, struct IDUIXMLNode *addThis  ) = 0;
	virtual HRESULT __stdcall raw_InsertBeforeChild(struct IDUIXMLNode *beforeThis, struct IDUIXMLNode *addThis  ) = 0;
	virtual HRESULT __stdcall raw_InsertEndChild(struct IDUIXMLNode *pNode  ) = 0;
	virtual HRESULT __stdcall raw_AccessAttribColor(BSTR strAttribName, OLE_COLOR *pclrValue, VARIANT_BOOL bRead, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_CreateNewDUIXMLNode(BSTR pstrKey, struct IDUIXMLNode **pResult) = 0;
	virtual HRESULT __stdcall raw_FirstChild(struct IDUIXMLNode **pResult) = 0;
	virtual HRESULT __stdcall raw_NextChild(struct IDUIXMLNode **pResult) = 0;
	virtual HRESULT __stdcall raw_QueryIntAttribute(BSTR pStrName, long *pResult) = 0;
	virtual HRESULT __stdcall raw_Attribute(BSTR pStrName, BSTR *pResult) = 0;
	virtual HRESULT __stdcall raw_SetAttribute(BSTR pStrName, BSTR pstrAttValue  ) = 0;

	//
	//Method Wrapper
	//
	OLE_HANDLE  GetXMLNode();
	void SetXMLNode(OLE_HANDLE  pXMLNode  );
	BOOL  AccessAttribLong(tstring  strAttribName, long * plValue, BOOL  bRead  );
	BOOL  AccessAttribFloat(tstring  strAttribName, float * pfValue, BOOL  bRead  );
	BOOL  AccessAttribDouble(tstring  strAttribName, double * pdValue, BOOL  bRead  );
	BOOL  AccessAttribBOOL(tstring  strAttribName, VARIANT_BOOL * pbValue, BOOL  bRead  );
	BOOL  AccessAttribString(tstring  strAttribName, BSTR * pstrValue, BOOL  bRead  );
	void RemoveChild(struct IDUIXMLNode * pNode, BOOL  bDelete  );
	void InsertAfterChild(struct IDUIXMLNode * afterThis, struct IDUIXMLNode * addThis  );
	void InsertBeforeChild(struct IDUIXMLNode * beforeThis, struct IDUIXMLNode * addThis  );
	void InsertEndChild(struct IDUIXMLNode * pNode  );
	BOOL  AccessAttribColor(tstring  strAttribName, OLE_COLOR * pclrValue, BOOL  bRead  );
	struct IDUIXMLNode * CreateNewDUIXMLNode(tstring  pstrKey  );
	struct IDUIXMLNode * FirstChild();
	struct IDUIXMLNode * NextChild();
	long  QueryIntAttribute(tstring  pStrName  );
	tstring  Attribute(tstring  pStrName  );
	void SetAttribute(tstring  pStrName, tstring  pstrAttValue  );
};

struct __declspec(uuid("600b0bdd-2ece-4e36-a349-456c7be9440f")) IDirectUI : ISkinObjResBase
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_Create(OLE_HANDLE hWndParent, struct SkinRect sknrc, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetWindowHandle(OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_IsSupportPerPixel(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetSupportPerPixel(VARIANT_BOOL bSupportPerPixel  ) = 0;
	virtual HRESULT __stdcall raw_GetResizeBorder(struct SkinRect *pResult) = 0;
	virtual HRESULT __stdcall raw_SetResizeBorder(struct SkinRect rcBorder  ) = 0;
	virtual HRESULT __stdcall raw_GetMinSize(struct SkinSize *pResult) = 0;
	virtual HRESULT __stdcall raw_SetMinSize(struct SkinSize *psizeMin  ) = 0;
	virtual HRESULT __stdcall raw_GetMaxSize(struct SkinSize *pResult) = 0;
	virtual HRESULT __stdcall raw_SetMaxSize(struct SkinSize *psizeMax  ) = 0;
	virtual HRESULT __stdcall raw_IsPopWindow(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetPopWindow(VARIANT_BOOL bPopWindow  ) = 0;
	virtual HRESULT __stdcall raw_IsResizable(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetResizable(VARIANT_BOOL bResizable  ) = 0;
	virtual HRESULT __stdcall raw_IsDragabled(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetDragabled(VARIANT_BOOL bDragabled  ) = 0;
	virtual HRESULT __stdcall raw_IsCanCopyRun(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetCanCopyRun(VARIANT_BOOL bCanCopyRun  ) = 0;
	virtual HRESULT __stdcall raw_IsParentBlend(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetParentBlend(VARIANT_BOOL bParentBlend  ) = 0;
	virtual HRESULT __stdcall raw_IsSetRgn(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetRgn(VARIANT_BOOL bSetRgn  ) = 0;
	virtual HRESULT __stdcall raw_Draw(OLE_HANDLE hDC, struct SkinRect rect, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_IsCaptured(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetCapture(VARIANT_BOOL bCaptured  ) = 0;
	virtual HRESULT __stdcall raw_RegisterMessage(unsigned long uMsg, struct ISkinObjResBase *pObject, VARIANT_BOOL bChildrenNotify, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_UnRegisterMessage(unsigned long uMsg, struct ISkinObjResBase *pObject, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_RemoveAllRegister() = 0;
	virtual HRESULT __stdcall raw_RegisterWholeMessage(struct ISkinObjResBase *pObject, VARIANT_BOOL bChildrenNotify, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_UnRegisterWholeMessage(struct ISkinObjResBase *pObject, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_RemoveAllWholeMessage() = 0;
	virtual HRESULT __stdcall raw_DoWindowProc(OLE_HANDLE hWnd, long msg, OLE_HANDLE wParam, OLE_HANDLE lParam, long *pResult) = 0;
	virtual HRESULT __stdcall raw_Default(long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetDragFullWindow(VARIANT_BOOL bDragFullWindow  ) = 0;
	virtual HRESULT __stdcall raw_SetWindowRgn() = 0;
	virtual HRESULT __stdcall raw_SetMessageEntry(long *pWnd, long *pEntry  ) = 0;
	virtual HRESULT __stdcall raw_SetUseRgnInfo(VARIANT_BOOL bUseRgnInfo  ) = 0;
	virtual HRESULT __stdcall raw_IsUseRgnInfo(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_AddNCRgn(enum DUI_NCRGNTYPE eNcRgnType, struct IDUISkinSubRgn *pSubRgn, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_RemoveNCRgn(enum DUI_NCRGNTYPE eNcRgnType, BSTR strName, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_RemoveAllNCRgns(enum DUI_NCRGNTYPE eNcRgnType, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetEventRecieve(OLE_HANDLE pEventBase  ) = 0;
	virtual HRESULT __stdcall raw_GetEventRecieve(OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_DUIMessage(OLE_HANDLE hWnd, long nMsgID, OLE_HANDLE wParam, OLE_HANDLE lParam  ) = 0;
	virtual HRESULT __stdcall raw_GetHotObject(struct ISkinObjResBase **pResult) = 0;
	virtual HRESULT __stdcall raw_SetDispatchMsg(long pMsgId  ) = 0;
	virtual HRESULT __stdcall raw_RemoveDispatchMsg(long pMsgId  ) = 0;
	virtual HRESULT __stdcall raw_GetIsAutoLoad(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetIsAutoLoad(VARIANT_BOOL bResult  ) = 0;
	virtual HRESULT __stdcall raw_GetRenderEngine(enum DUI_RENDERENGINE_TYPE *pResult) = 0;
	virtual HRESULT __stdcall raw_SetRenderEngine(enum DUI_RENDERENGINE_TYPE type  ) = 0;
	virtual HRESULT __stdcall raw_GetRenderDevice(OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_SetRefreshType(enum DUI_REFRESH_TYPE type  ) = 0;
	virtual HRESULT __stdcall raw_GetRefreshType(OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_ResizeSence(short nWidth, short nHeight  ) = 0;

	//
	//Method Wrapper
	//
	BOOL  Create(OLE_HANDLE  hWndParent, struct SkinRect  sknrc  );
	OLE_HANDLE  GetWindowHandle();
	BOOL  IsSupportPerPixel();
	void SetSupportPerPixel(BOOL  bSupportPerPixel  );
	struct SkinRect  GetResizeBorder();
	void SetResizeBorder(struct SkinRect  rcBorder  );
	struct SkinSize  GetMinSize();
	void SetMinSize(struct SkinSize * psizeMin  );
	struct SkinSize  GetMaxSize();
	void SetMaxSize(struct SkinSize * psizeMax  );
	BOOL  IsPopWindow();
	void SetPopWindow(BOOL  bPopWindow  );
	BOOL  IsResizable();
	void SetResizable(BOOL  bResizable  );
	BOOL  IsDragabled();
	void SetDragabled(BOOL  bDragabled  );
	BOOL  IsCanCopyRun();
	void SetCanCopyRun(BOOL  bCanCopyRun  );
	BOOL  IsParentBlend();
	void SetParentBlend(BOOL  bParentBlend  );
	BOOL  IsSetRgn();
	void SetRgn(BOOL  bSetRgn  );
	BOOL  Draw(OLE_HANDLE  hDC, struct SkinRect  rect  );
	BOOL  IsCaptured();
	void SetCapture(BOOL  bCaptured  );
	BOOL  RegisterMessage(unsigned long  uMsg, struct ISkinObjResBase * pObject, BOOL  bChildrenNotify  );
	BOOL  UnRegisterMessage(unsigned long  uMsg, struct ISkinObjResBase * pObject  );
	void RemoveAllRegister();
	BOOL  RegisterWholeMessage(struct ISkinObjResBase * pObject, BOOL  bChildrenNotify  );
	BOOL  UnRegisterWholeMessage(struct ISkinObjResBase * pObject  );
	void RemoveAllWholeMessage();
	long  DoWindowProc(OLE_HANDLE  hWnd, long  msg, OLE_HANDLE  wParam, OLE_HANDLE  lParam  );
	long  Default();
	void SetDragFullWindow(BOOL  bDragFullWindow  );
	void SetWindowRgn();
	void SetMessageEntry(long * pWnd, long * pEntry  );
	void SetUseRgnInfo(BOOL  bUseRgnInfo  );
	BOOL  IsUseRgnInfo();
	BOOL  AddNCRgn(enum DUI_NCRGNTYPE  eNcRgnType, struct IDUISkinSubRgn * pSubRgn  );
	BOOL  RemoveNCRgn(enum DUI_NCRGNTYPE  eNcRgnType, tstring  strName  );
	BOOL  RemoveAllNCRgns(enum DUI_NCRGNTYPE  eNcRgnType  );
	void SetEventRecieve(OLE_HANDLE  pEventBase  );
	OLE_HANDLE  GetEventRecieve();
	void DUIMessage(OLE_HANDLE  hWnd, long  nMsgID, OLE_HANDLE  wParam, OLE_HANDLE  lParam  );
	struct ISkinObjResBase * GetHotObject();
	void SetDispatchMsg(long  pMsgId  );
	void RemoveDispatchMsg(long  pMsgId  );
	BOOL  GetIsAutoLoad();
	void SetIsAutoLoad(BOOL  bResult  );
	enum DUI_RENDERENGINE_TYPE  GetRenderEngine();
	void SetRenderEngine(enum DUI_RENDERENGINE_TYPE  type  );
	OLE_HANDLE  GetRenderDevice();
	void SetRefreshType(enum DUI_REFRESH_TYPE  type  );
	OLE_HANDLE  GetRefreshType();
	void ResizeSence(short  nWidth, short  nHeight  );
};

enum DUI_NCRGNTYPE
{ 
	DUI_NCRGN_BOTTOM = 3,
	DUI_NCRGN_BOTTOMLEFT = 6,
	DUI_NCRGN_BOTTOMRIGHT = 7,
	DUI_NCRGN_LEFT = 0,
	DUI_NCRGN_RIGHT = 1,
	DUI_NCRGN_TOP = 2,
	DUI_NCRGN_TOPLEFT = 4,
	DUI_NCRGN_TOPRIGHT = 5 
};

struct __declspec(uuid("111d055d-10ae-4afc-82ca-ceb6da472396")) IDUISkinSubRgn : IDispatch
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_SetObjPtr(OLE_HANDLE pSkinSubRgn  ) = 0;
	virtual HRESULT __stdcall raw_GetObjPtr(OLE_HANDLE *pResult) = 0;

	//
	//Method Wrapper
	//
	void SetObjPtr(OLE_HANDLE  pSkinSubRgn  );
	OLE_HANDLE  GetObjPtr();
};

enum DUI_REFRESH_TYPE
{ 
	DUI_REFRESH_ALL = 1,
	DUI_REFRESH_ERROR = 0,
	DUI_REFRESH_PART = 2 
};

struct __declspec(uuid("bde5eb1f-9d5a-4d41-818d-5e373bb238fe")) IDUIUtilities : IDispatch
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

struct __declspec(uuid("c865ecaf-cb66-491d-8112-e42dfcc532cc")) _IDUIEventsEvents : IDispatch
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_OnLoaded(VARIANT_BOOL bSuccessed, LONGLONG *pResult) = 0;
	virtual HRESULT __stdcall raw_OnWinMsg(unsigned long uMsgID, struct IDUIObj *pDUIObj, LONGLONG *pResult) = 0;

	//
	//Method Wrapper
	//
	LONGLONG  OnLoaded(BOOL  bSuccessed  );
	LONGLONG  OnWinMsg(unsigned long  uMsgID, struct IDUIObj * pDUIObj  );
};

struct __declspec(uuid("3859e483-fbaf-454b-abeb-0e6830fbf7fc")) _IDUIManagerEvents : IDispatch
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

struct __declspec(uuid("599a578c-3eb1-4312-aa46-96a22e5ba33f")) IDUIManager : IDispatch
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_GetResource(IDispatch **pResult) = 0;
	virtual HRESULT __stdcall raw_SetPerpixelDraw(VARIANT_BOOL bPerpixel, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_IsPerpixelDraw(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetAddRefMode(VARIANT_BOOL bAddRef  ) = 0;
	virtual HRESULT __stdcall raw_IsAddRefMode(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetAutoReleaseMode(VARIANT_BOOL bAutoRelease  ) = 0;
	virtual HRESULT __stdcall raw_IsAutoReleaseMode(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_ExportSkinPoint(struct SkinPoint sknpoint  ) = 0;

	//
	//Method Wrapper
	//
	IDispatch * GetResource();
	BOOL  SetPerpixelDraw(BOOL  bPerpixel  );
	BOOL  IsPerpixelDraw();
	void SetAddRefMode(BOOL  bAddRef  );
	BOOL  IsAddRefMode();
	void SetAutoReleaseMode(BOOL  bAutoRelease  );
	BOOL  IsAutoReleaseMode();
	void ExportSkinPoint(struct SkinPoint  sknpoint  );
};

struct __declspec(uuid("9371bb73-d1e4-4870-a7e6-79354d4a16a5")) SkinPoint
{
	long 	x;
	long 	y;
};

struct __declspec(uuid("1e8dbf53-7b39-414d-abf7-dfa07c762ed9")) _IDUIControlBaseEvents : IDispatch
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

struct __declspec(uuid("36f11878-6a79-4e0d-89e7-a0debbba950c")) _ICtrlPluginPropEvents : IDispatch
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

struct __declspec(uuid("8c32e1b5-1a8b-4b54-b9ee-c66634a107f3")) INumberLongProp : IDUIPropBase
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_GetValue(long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetValue(long nValue  ) = 0;
	virtual HRESULT __stdcall raw_SetMinMax(long nMin, long nMax  ) = 0;
	virtual HRESULT __stdcall raw_GetMinMax(long *pnMin, long *pnMax  ) = 0;

	//
	//Method Wrapper
	//
	long  GetValue();
	void SetValue(long  nValue  );
	void SetMinMax(long  nMin, long  nMax  );
	void GetMinMax(long * pnMin, long * pnMax  );
};

struct __declspec(uuid("1130a1e2-4c1f-4a0b-a5ae-4620521a0ec4")) INumberFloatProp : IDUIPropBase
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_GetValue(float *pResult) = 0;
	virtual HRESULT __stdcall raw_SetValue(float fValue  ) = 0;

	//
	//Method Wrapper
	//
	float  GetValue();
	void SetValue(float  fValue  );
};

struct __declspec(uuid("acba1dac-7392-4c9a-8e04-b660cfccb7d6")) IBOOLProp : IDUIPropBase
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_GetValue(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetValue(VARIANT_BOOL bValue  ) = 0;

	//
	//Method Wrapper
	//
	BOOL  GetValue();
	void SetValue(BOOL  bValue  );
};

struct __declspec(uuid("d79c1d51-40b9-423a-bf7e-901324a1839b")) IStrProp : IDUIPropBase
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_GetValue(BSTR *pResult) = 0;
	virtual HRESULT __stdcall raw_SetValue(BSTR strValue  ) = 0;
	virtual HRESULT __stdcall raw_GetFullName(BSTR *pResult) = 0;

	//
	//Method Wrapper
	//
	tstring  GetValue();
	void SetValue(tstring  strValue  );
	tstring  GetFullName();
};

struct __declspec(uuid("645cb1d2-6a73-4e6c-8b02-abed4df7c452")) IImageSecProp : IDUIPropBase
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_GetSize(long *pnWidth, long *pnHeight  ) = 0;
	virtual HRESULT __stdcall raw_GetBitmap(struct SkinRect rect, OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_Draw(OLE_HANDLE hDC, struct SkinRect rect, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetValue(struct IDUIImageBase **pResult) = 0;
	virtual HRESULT __stdcall raw_SetValue(struct IDUIImageBase *pValue  ) = 0;
	virtual HRESULT __stdcall raw_IsCanDraw(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetRect(struct SkinRect *pResult) = 0;
	virtual HRESULT __stdcall raw_GetWidth(short *pResult) = 0;
	virtual HRESULT __stdcall raw_GetHeight(short *pResult) = 0;
	virtual HRESULT __stdcall raw_SetImageFunc(short nIndex, OLE_HANDLE hFunc  ) = 0;
	virtual HRESULT __stdcall raw_GetImageFunc(short *pnIndex, OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_IsValidateData(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_RenderDraw(struct IDUIRenderDC *pDC, struct SkinRect rect, short nIndex, short nAngle, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetPictureType(enum DUI_PICTURE_TYPE *pResult) = 0;
	virtual HRESULT __stdcall raw_GetImageName(BSTR *pResult) = 0;
	virtual HRESULT __stdcall raw_GetGifFileInfo(struct GifFileInfo **pResult) = 0;

	//
	//Method Wrapper
	//
	void GetSize(long * pnWidth, long * pnHeight  );
	OLE_HANDLE  GetBitmap(struct SkinRect  rect  );
	BOOL  Draw(OLE_HANDLE  hDC, struct SkinRect  rect  );
	struct IDUIImageBase * GetValue();
	void SetValue(struct IDUIImageBase * pValue  );
	BOOL  IsCanDraw();
	struct SkinRect  GetRect();
	short  GetWidth();
	short  GetHeight();
	void SetImageFunc(short  nIndex, OLE_HANDLE  hFunc  );
	OLE_HANDLE  GetImageFunc(short * pnIndex  );
	BOOL  IsValidateData();
	BOOL  RenderDraw(struct IDUIRenderDC * pDC, struct SkinRect  rect, short  nIndex, short  nAngle = 0  );
	enum DUI_PICTURE_TYPE  GetPictureType();
	tstring  GetImageName();
	struct GifFileInfo * GetGifFileInfo();
};

struct __declspec(uuid("c08c3e8e-73b5-40b1-b606-6612e35bbb52")) GifFileInfo
{
	int 	nFrameCount;
	int 	nWidth;
	int 	nHeight;
	int *	nDelayTime;
	long 	bIsAnimateGif;
};

struct __declspec(uuid("aadcc987-5067-44ea-a536-4df0ef31e2f3")) ITextStyleProp : IDUIPropBase
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_GetDrawFlags(long *pResult) = 0;
	virtual HRESULT __stdcall raw_GetLogFont(struct DUILOGFONT *pResult) = 0;
	virtual HRESULT __stdcall raw_GetTextColor(OLE_COLOR *pResult) = 0;
	virtual HRESULT __stdcall raw_GetBitmap(struct SkinRect rect, BSTR strText, OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_Draw(OLE_HANDLE hDC, struct SkinRect rect, BSTR strText, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetValue(struct IDUITextStyle **pResult) = 0;
	virtual HRESULT __stdcall raw_SetValue(struct IDUITextStyle *pValue  ) = 0;
	virtual HRESULT __stdcall raw_IsValidateData(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_RenderDraw(struct IDUIRenderDC *pDC, struct SkinRect rect, BSTR strText, VARIANT_BOOL *pResult) = 0;

	//
	//Method Wrapper
	//
	long  GetDrawFlags();
	struct DUILOGFONT  GetLogFont();
	OLE_COLOR  GetTextColor();
	OLE_HANDLE  GetBitmap(struct SkinRect  rect, tstring  strText  );
	BOOL  Draw(OLE_HANDLE  hDC, struct SkinRect  rect, tstring  strText  );
	struct IDUITextStyle * GetValue();
	void SetValue(struct IDUITextStyle * pValue  );
	BOOL  IsValidateData();
	BOOL  RenderDraw(struct IDUIRenderDC * pDC, struct SkinRect  rect, tstring  strText  );
};

struct __declspec(uuid("e4d39c73-4db1-465e-8f89-ed67637820cc")) ICursorProp : IDUIPropBase
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_GetValue(struct IDUICursor **pResult) = 0;
	virtual HRESULT __stdcall raw_SetValue(struct IDUICursor *pValue  ) = 0;
	virtual HRESULT __stdcall raw_SetCursor() = 0;
	virtual HRESULT __stdcall raw_IsValidateData(VARIANT_BOOL *pResult) = 0;

	//
	//Method Wrapper
	//
	struct IDUICursor * GetValue();
	void SetValue(struct IDUICursor * pValue  );
	void SetCursor();
	BOOL  IsValidateData();
};

struct __declspec(uuid("cf820c10-b81a-4c3f-8641-05008a3b62a9")) IFontProp : IDUIPropBase
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_GetValue(struct IDUIFontEx **pResult) = 0;
	virtual HRESULT __stdcall raw_SetValue(struct IDUIFontEx *pValue  ) = 0;
	virtual HRESULT __stdcall raw_GetLogFont(struct DUILOGFONT *pResult) = 0;
	virtual HRESULT __stdcall raw_GetHFont(OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_IsValidateData(VARIANT_BOOL *pResult) = 0;

	//
	//Method Wrapper
	//
	struct IDUIFontEx * GetValue();
	void SetValue(struct IDUIFontEx * pValue  );
	struct DUILOGFONT  GetLogFont();
	OLE_HANDLE  GetHFont();
	BOOL  IsValidateData();
};

struct __declspec(uuid("fe75c13a-e145-49e1-a146-de46f7c40f38")) IColorProp : IDUIPropBase
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_GetValue(OLE_COLOR *pResult) = 0;
	virtual HRESULT __stdcall raw_SetValue(OLE_COLOR clrValue  ) = 0;
	virtual HRESULT __stdcall raw_Draw(OLE_HANDLE hDC, struct SkinRect rect, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_RenderDraw(struct IDUIRenderDC *pDC, struct SkinRect rect, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_DrawArcTickLine(struct IDUIRenderDC *pDC, struct tagRECT rcDes, float fRadius, float fStatrAngle, float fEndAngle, float fTickAngle, float fLineLen, float fLineWidth, unsigned long clrSolid, float fRotateAngle, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_DrawArc(struct IDUIRenderDC *pDC, struct tagRECT rcDes, float fRadius, float fStartAngle, float fEndAngle, float fRotateAngle, int nPenSize, OLE_COLOR lrSolid, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_DrawArcTickString(struct IDUIRenderDC *pDC, struct tagRECT rcDes, float fRadius, float fStatrAngle, float fEndAngle, float fTickAngle, float fLineLen, float fMinVal, float fFrequency, OLE_HANDLE hFont, long bShowHalfTag, OLE_COLOR clrSolid, float fRotateAngle, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_DrawLine(struct IDUIRenderDC *pDC, int x1, int y1, int x2, int y2, int nPenSize, OLE_COLOR clrSolid, VARIANT_BOOL *pResult) = 0;

	//
	//Method Wrapper
	//
	OLE_COLOR  GetValue();
	void SetValue(OLE_COLOR  clrValue  );
	BOOL  Draw(OLE_HANDLE  hDC, struct SkinRect  rect  );
	BOOL  RenderDraw(struct IDUIRenderDC * pDC, struct SkinRect  rect  );
	BOOL  DrawArcTickLine(struct IDUIRenderDC * pDC, struct tagRECT  rcDes, float  fRadius, float  fStatrAngle, float  fEndAngle, float  fTickAngle, float  fLineLen, float  fLineWidth, unsigned long  clrSolid, float  fRotateAngle  );
	BOOL  DrawArc(struct IDUIRenderDC * pDC, struct tagRECT  rcDes, float  fRadius, float  fStartAngle, float  fEndAngle, float  fRotateAngle, int  nPenSize, OLE_COLOR  lrSolid  );
	BOOL  DrawArcTickString(struct IDUIRenderDC * pDC, struct tagRECT  rcDes, float  fRadius, float  fStatrAngle, float  fEndAngle, float  fTickAngle, float  fLineLen, float  fMinVal, float  fFrequency, OLE_HANDLE  hFont, long  bShowHalfTag, OLE_COLOR  clrSolid, float  fRotateAngle  );
	BOOL  DrawLine(struct IDUIRenderDC * pDC, int  x1, int  y1, int  x2, int  y2, int  nPenSize, OLE_COLOR  clrSolid  );
};

struct __declspec(uuid("4ca4d223-a97e-45d7-9e03-c16fdaed3f22")) IComboProp : IDUIPropBase
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_AddOption(BSTR strOption  ) = 0;
	virtual HRESULT __stdcall raw_SetCurSel(long nCurSel  ) = 0;
	virtual HRESULT __stdcall raw_GetCurSel(long *pResult) = 0;

	//
	//Method Wrapper
	//
	void AddOption(tstring  strOption  );
	void SetCurSel(long  nCurSel  );
	long  GetCurSel();
};

struct __declspec(uuid("3c8620d4-7490-422e-b4ff-62c8a6c459f6")) IFillColor : ISkinShareBase
{
	//
	//Property
	//
	__declspec(property(get=get_clrStart,put=put_clrStart))
		OLE_COLOR  clrStart;
	__declspec(property(get=get_clrEnd,put=put_clrEnd))
		OLE_COLOR  clrEnd;
	__declspec(property(get=get_nGradientIrotation,put=put_nGradientIrotation))
		long  nGradientIrotation;

	virtual HRESULT __stdcall raw_get_clrStart(OLE_COLOR *pVal) = 0;
	virtual HRESULT __stdcall raw_put_clrStart(OLE_COLOR pVal) = 0;
	virtual HRESULT __stdcall raw_get_clrEnd(OLE_COLOR *pVal) = 0;
	virtual HRESULT __stdcall raw_put_clrEnd(OLE_COLOR pVal) = 0;
	virtual HRESULT __stdcall raw_get_nGradientIrotation(long *pVal) = 0;
	virtual HRESULT __stdcall raw_put_nGradientIrotation(long pVal) = 0;

	//
	//Method
	//
	virtual HRESULT __stdcall raw_Draw(OLE_HANDLE hDC, struct SkinRect rect, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetBitmap(struct SkinRect rect, OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_RenderDraw(struct IDUIRenderDC *pDC, struct SkinRect rect, VARIANT_BOOL *pResult) = 0;

	//
	//Method Wrapper
	//
	OLE_COLOR  get_clrStart();
	void put_clrStart(OLE_COLOR  pVal);
	OLE_COLOR  get_clrEnd();
	void put_clrEnd(OLE_COLOR  pVal);
	long  get_nGradientIrotation();
	void put_nGradientIrotation(long  pVal);
	BOOL  Draw(OLE_HANDLE  hDC, struct SkinRect  rect  );
	OLE_HANDLE  GetBitmap(struct SkinRect  rect  );
	BOOL  RenderDraw(struct IDUIRenderDC * pDC, struct SkinRect  rect  );
};

struct __declspec(uuid("02c26281-9855-4b73-a376-c74db09a397a")) IFillColorProp : IDUIPropBase
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_GetValue(struct IFillColor **pResult) = 0;
	virtual HRESULT __stdcall raw_SetValue(struct IFillColor *pValue  ) = 0;
	virtual HRESULT __stdcall raw_Draw(OLE_HANDLE hDC, struct SkinRect rect  ) = 0;
	virtual HRESULT __stdcall raw_SetColorFrom(OLE_COLOR clrFrom  ) = 0;
	virtual HRESULT __stdcall raw_GetColorFrom(OLE_COLOR *pResult) = 0;
	virtual HRESULT __stdcall raw_SetColorTo(OLE_COLOR clrTo  ) = 0;
	virtual HRESULT __stdcall raw_GetColorTo(OLE_COLOR *pResult) = 0;
	virtual HRESULT __stdcall raw_SetIrotation(long nIrotation  ) = 0;
	virtual HRESULT __stdcall raw_GetIrotation(long *pResult) = 0;
	virtual HRESULT __stdcall raw_GetBitmap(struct SkinRect rect, OLE_HANDLE *pResult) = 0;
	virtual HRESULT __stdcall raw_IsValidateData(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_RenderDraw(struct IDUIRenderDC *pDC, struct SkinRect rect, VARIANT_BOOL *pResult) = 0;

	//
	//Method Wrapper
	//
	struct IFillColor * GetValue();
	void SetValue(struct IFillColor * pValue  );
	void Draw(OLE_HANDLE  hDC, struct SkinRect  rect  );
	void SetColorFrom(OLE_COLOR  clrFrom  );
	OLE_COLOR  GetColorFrom();
	void SetColorTo(OLE_COLOR  clrTo  );
	OLE_COLOR  GetColorTo();
	void SetIrotation(long  nIrotation  );
	long  GetIrotation();
	OLE_HANDLE  GetBitmap(struct SkinRect  rect  );
	BOOL  IsValidateData();
	BOOL  RenderDraw(struct IDUIRenderDC * pDC, struct SkinRect  rect  );
};

struct __declspec(uuid("609c1357-eb74-4645-bba3-e84242fe918d")) IHotkeyProp : IDUIPropBase
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_GetValue(struct IDUIHotkey **pResult) = 0;
	virtual HRESULT __stdcall raw_SetValue(struct IDUIHotkey *pValue  ) = 0;
	virtual HRESULT __stdcall raw_GetVirtualKeyCode(long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetVirtualKeyCode(long nValue  ) = 0;
	virtual HRESULT __stdcall raw_GetModifiers(long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetModifiers(long nValue  ) = 0;

	//
	//Method Wrapper
	//
	struct IDUIHotkey * GetValue();
	void SetValue(struct IDUIHotkey * pValue  );
	long  GetVirtualKeyCode();
	void SetVirtualKeyCode(long  nValue  );
	long  GetModifiers();
	void SetModifiers(long  nValue  );
};

struct __declspec(uuid("8d91e71c-d6e6-4169-bc5b-03f39766df3b")) IDUICustom : ISkinWithRealResBase
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_Save(BSTR strFile, VARIANT_BOOL *pResult) = 0;

	//
	//Method Wrapper
	//
	BOOL  Save(tstring  strFile  );
};

struct __declspec(uuid("9c6695ff-0968-467e-a1f1-f165d34948a2")) IPluginProp : IDUIPropBase
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_GetValue(BSTR *pResult) = 0;
	virtual HRESULT __stdcall raw_SetValue(BSTR strValue  ) = 0;
	virtual HRESULT __stdcall raw_GetPropID(long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetPropID(long nPropID  ) = 0;

	//
	//Method Wrapper
	//
	tstring  GetValue();
	void SetValue(tstring  strValue  );
	long  GetPropID();
	void SetPropID(long  nPropID  );
};

struct __declspec(uuid("c0ea9f9e-3628-4c27-8054-38e72248a203")) _ILayerGraphicsEvents : IDispatch
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

struct __declspec(uuid("796c4f3b-dfc5-42c9-89cc-52c87075c01f")) _IDUIRectEvents : IDispatch
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

struct __declspec(uuid("f0dd0bb6-3ec8-4f02-9dc1-ac625be70882")) _IDUISizeEvents : IDispatch
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

struct __declspec(uuid("6b68ed9a-e884-4f44-9600-6fa5c7ffda0a")) IDUISize : IDispatch
{
	//
	//Property
	//
	__declspec(property(get=get_cx,put=put_cx))
		long  cx;
	__declspec(property(get=get_cy,put=put_cy))
		long  cy;

	virtual HRESULT __stdcall raw_get_cx(long *pVal) = 0;
	virtual HRESULT __stdcall raw_put_cx(long pVal) = 0;
	virtual HRESULT __stdcall raw_get_cy(long *pVal) = 0;
	virtual HRESULT __stdcall raw_put_cy(long pVal) = 0;

	//
	//Method
	//

	//
	//Method Wrapper
	//
	long  get_cx();
	void put_cx(long  pVal);
	long  get_cy();
	void put_cy(long  pVal);
};

struct __declspec(uuid("6510ddf0-9eab-4f74-8a6b-0aacb35e1a8e")) _IDUIPointEvents : IDispatch
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

struct __declspec(uuid("7331327a-b83a-4087-b691-9ce80751e702")) IDUIPoint : IDispatch
{
	//
	//Property
	//
	__declspec(property(get=get_x,put=put_x))
		long  x;
	__declspec(property(get=get_y,put=put_y))
		long  y;

	virtual HRESULT __stdcall raw_get_x(long *pVal) = 0;
	virtual HRESULT __stdcall raw_put_x(long pVal) = 0;
	virtual HRESULT __stdcall raw_get_y(long *pVal) = 0;
	virtual HRESULT __stdcall raw_put_y(long pVal) = 0;

	//
	//Method
	//

	//
	//Method Wrapper
	//
	long  get_x();
	void put_x(long  pVal);
	long  get_y();
	void put_y(long  pVal);
};

struct __declspec(uuid("d85f712e-d4c5-4434-ac2e-c501d3c6da2f")) _IDUIMsgNotifyEvents : IDispatch
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

struct __declspec(uuid("149ee2b8-081d-45f7-bdd7-eae215b6f579")) IDUIMsgNotify : IDispatch
{
	//
	//Property
	//
	__declspec(property(get=get_eDuiMsgId,put=put_eDuiMsgId))
		enum DUIMsgID  eDuiMsgId;
	__declspec(property(get=get_eWinMsgId,put=put_eWinMsgId))
		long  eWinMsgId;
	__declspec(property(get=get_lParam1,put=put_lParam1))
		OLE_HANDLE  lParam1;
	__declspec(property(get=get_lParam2,put=put_lParam2))
		OLE_HANDLE  lParam2;
	__declspec(property(get=get_lParam3,put=put_lParam3))
		OLE_HANDLE  lParam3;
	__declspec(property(get=get_lParam4,put=put_lParam4))
		OLE_HANDLE  lParam4;
	__declspec(property(get=get_lParam5,put=put_lParam5))
		OLE_HANDLE  lParam5;
	__declspec(property(get=get_bChildren,put=put_bChildren))
		VARIANT_BOOL  bChildren;

	virtual HRESULT __stdcall raw_get_eDuiMsgId(enum DUIMsgID *pVal) = 0;
	virtual HRESULT __stdcall raw_put_eDuiMsgId(enum DUIMsgID pVal) = 0;
	virtual HRESULT __stdcall raw_get_eWinMsgId(long *pVal) = 0;
	virtual HRESULT __stdcall raw_put_eWinMsgId(long pVal) = 0;
	virtual HRESULT __stdcall raw_get_lParam1(OLE_HANDLE *pVal) = 0;
	virtual HRESULT __stdcall raw_put_lParam1(OLE_HANDLE pVal) = 0;
	virtual HRESULT __stdcall raw_get_lParam2(OLE_HANDLE *pVal) = 0;
	virtual HRESULT __stdcall raw_put_lParam2(OLE_HANDLE pVal) = 0;
	virtual HRESULT __stdcall raw_get_lParam3(OLE_HANDLE *pVal) = 0;
	virtual HRESULT __stdcall raw_put_lParam3(OLE_HANDLE pVal) = 0;
	virtual HRESULT __stdcall raw_get_lParam4(OLE_HANDLE *pVal) = 0;
	virtual HRESULT __stdcall raw_put_lParam4(OLE_HANDLE pVal) = 0;
	virtual HRESULT __stdcall raw_get_lParam5(OLE_HANDLE *pVal) = 0;
	virtual HRESULT __stdcall raw_put_lParam5(OLE_HANDLE pVal) = 0;
	virtual HRESULT __stdcall raw_get_bChildren(VARIANT_BOOL *pVal) = 0;
	virtual HRESULT __stdcall raw_put_bChildren(VARIANT_BOOL pVal) = 0;

	//
	//Method
	//

	//
	//Method Wrapper
	//
	enum DUIMsgID  get_eDuiMsgId();
	void put_eDuiMsgId(enum DUIMsgID  pVal);
	long  get_eWinMsgId();
	void put_eWinMsgId(long  pVal);
	OLE_HANDLE  get_lParam1();
	void put_lParam1(OLE_HANDLE  pVal);
	OLE_HANDLE  get_lParam2();
	void put_lParam2(OLE_HANDLE  pVal);
	OLE_HANDLE  get_lParam3();
	void put_lParam3(OLE_HANDLE  pVal);
	OLE_HANDLE  get_lParam4();
	void put_lParam4(OLE_HANDLE  pVal);
	OLE_HANDLE  get_lParam5();
	void put_lParam5(OLE_HANDLE  pVal);
	VARIANT_BOOL  get_bChildren();
	void put_bChildren(VARIANT_BOOL  pVal);
};

struct __declspec(uuid("198d0d62-17fb-41c0-84e5-2b4c34a2e12d")) _IDUIFontEvents : IDispatch
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

struct __declspec(uuid("278939b0-f248-422f-b534-18a7f0b96256")) IDUIFont : IDispatch
{
	//
	//Property
	//
	__declspec(property(get=get_lfHeight,put=put_lfHeight))
		long  lfHeight;
	__declspec(property(get=get_lfWidth,put=put_lfWidth))
		long  lfWidth;
	__declspec(property(get=get_lfEscapement,put=put_lfEscapement))
		long  lfEscapement;
	__declspec(property(get=get_lfOrientation,put=put_lfOrientation))
		long  lfOrientation;
	__declspec(property(get=get_lfWeight,put=put_lfWeight))
		long  lfWeight;
	__declspec(property(get=get_lfItalic,put=put_lfItalic))
		short  lfItalic;
	__declspec(property(get=get_lfUnderline,put=put_lfUnderline))
		short  lfUnderline;
	__declspec(property(get=get_lfStrikeOut,put=put_lfStrikeOut))
		short  lfStrikeOut;
	__declspec(property(get=get_lfCharSet,put=put_lfCharSet))
		short  lfCharSet;
	__declspec(property(get=get_lfOutPrecision,put=put_lfOutPrecision))
		short  lfOutPrecision;
	__declspec(property(get=get_lfClipPrecision,put=put_lfClipPrecision))
		short  lfClipPrecision;
	__declspec(property(get=get_lfQuality,put=put_lfQuality))
		short  lfQuality;
	__declspec(property(get=get_lfPitchAndFamily,put=put_lfPitchAndFamily))
		short  lfPitchAndFamily;
	__declspec(property(get=get_lfFaceName,put=put_lfFaceName))
		BSTR  lfFaceName;

	virtual HRESULT __stdcall raw_get_lfHeight(long *pVal) = 0;
	virtual HRESULT __stdcall raw_put_lfHeight(long pVal) = 0;
	virtual HRESULT __stdcall raw_get_lfWidth(long *pVal) = 0;
	virtual HRESULT __stdcall raw_put_lfWidth(long pVal) = 0;
	virtual HRESULT __stdcall raw_get_lfEscapement(long *pVal) = 0;
	virtual HRESULT __stdcall raw_put_lfEscapement(long pVal) = 0;
	virtual HRESULT __stdcall raw_get_lfOrientation(long *pVal) = 0;
	virtual HRESULT __stdcall raw_put_lfOrientation(long pVal) = 0;
	virtual HRESULT __stdcall raw_get_lfWeight(long *pVal) = 0;
	virtual HRESULT __stdcall raw_put_lfWeight(long pVal) = 0;
	virtual HRESULT __stdcall raw_get_lfItalic(short *pVal) = 0;
	virtual HRESULT __stdcall raw_put_lfItalic(short pVal) = 0;
	virtual HRESULT __stdcall raw_get_lfUnderline(short *pVal) = 0;
	virtual HRESULT __stdcall raw_put_lfUnderline(short pVal) = 0;
	virtual HRESULT __stdcall raw_get_lfStrikeOut(short *pVal) = 0;
	virtual HRESULT __stdcall raw_put_lfStrikeOut(short pVal) = 0;
	virtual HRESULT __stdcall raw_get_lfCharSet(short *pVal) = 0;
	virtual HRESULT __stdcall raw_put_lfCharSet(short pVal) = 0;
	virtual HRESULT __stdcall raw_get_lfOutPrecision(short *pVal) = 0;
	virtual HRESULT __stdcall raw_put_lfOutPrecision(short pVal) = 0;
	virtual HRESULT __stdcall raw_get_lfClipPrecision(short *pVal) = 0;
	virtual HRESULT __stdcall raw_put_lfClipPrecision(short pVal) = 0;
	virtual HRESULT __stdcall raw_get_lfQuality(short *pVal) = 0;
	virtual HRESULT __stdcall raw_put_lfQuality(short pVal) = 0;
	virtual HRESULT __stdcall raw_get_lfPitchAndFamily(short *pVal) = 0;
	virtual HRESULT __stdcall raw_put_lfPitchAndFamily(short pVal) = 0;
	virtual HRESULT __stdcall raw_get_lfFaceName(BSTR *pVal) = 0;
	virtual HRESULT __stdcall raw_put_lfFaceName(BSTR pVal) = 0;

	//
	//Method
	//

	//
	//Method Wrapper
	//
	long  get_lfHeight();
	void put_lfHeight(long  pVal);
	long  get_lfWidth();
	void put_lfWidth(long  pVal);
	long  get_lfEscapement();
	void put_lfEscapement(long  pVal);
	long  get_lfOrientation();
	void put_lfOrientation(long  pVal);
	long  get_lfWeight();
	void put_lfWeight(long  pVal);
	short  get_lfItalic();
	void put_lfItalic(short  pVal);
	short  get_lfUnderline();
	void put_lfUnderline(short  pVal);
	short  get_lfStrikeOut();
	void put_lfStrikeOut(short  pVal);
	short  get_lfCharSet();
	void put_lfCharSet(short  pVal);
	short  get_lfOutPrecision();
	void put_lfOutPrecision(short  pVal);
	short  get_lfClipPrecision();
	void put_lfClipPrecision(short  pVal);
	short  get_lfQuality();
	void put_lfQuality(short  pVal);
	short  get_lfPitchAndFamily();
	void put_lfPitchAndFamily(short  pVal);
	BSTR  get_lfFaceName();
	void put_lfFaceName(BSTR  pVal);
};

struct __declspec(uuid("d7eeb0c6-9097-4b3a-850c-e5248deb8bbb")) _IDUIPosEvents : IDispatch
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

struct __declspec(uuid("9a9576d0-ceea-494e-8ea8-79c177468385")) _IDUIImageSectionEvents : IDispatch
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

struct __declspec(uuid("211345bf-b756-47ae-9552-6c4b8c0cb705")) IDUIImageSection : IDispatch
{
	//
	//Property
	//
	__declspec(property(get=get_strImageName,put=put_strImageName))
		BSTR  strImageName;
	__declspec(property(get=get_rect,put=put_rect))
		struct IDUIRect * rect;
	__declspec(property(get=get_rcBorder,put=put_rcBorder))
		struct IDUIRect * rcBorder;
	__declspec(property(get=get_leftEdgeStretch,put=put_leftEdgeStretch))
		VARIANT_BOOL  leftEdgeStretch;
	__declspec(property(get=get_rightEdgeStretch,put=put_rightEdgeStretch))
		VARIANT_BOOL  rightEdgeStretch;
	__declspec(property(get=get_topEdgeStretch,put=put_topEdgeStretch))
		VARIANT_BOOL  topEdgeStretch;
	__declspec(property(get=get_bottomEdgeStretch,put=put_bottomEdgeStretch))
		VARIANT_BOOL  bottomEdgeStretch;
	__declspec(property(get=get_clientEdgeStretch,put=put_clientEdgeStretch))
		VARIANT_BOOL  clientEdgeStretch;
	__declspec(property(get=get_clrTrans,put=put_clrTrans))
		OLE_COLOR  clrTrans;
	__declspec(property(get=get_bTrans,put=put_bTrans))
		VARIANT_BOOL  bTrans;
	__declspec(property(get=get_nOpacity,put=put_nOpacity))
		short  nOpacity;
	__declspec(property(get=get_clrColorize,put=put_clrColorize))
		OLE_COLOR  clrColorize;
	__declspec(property(get=get_bSupportPerPixel,put=put_bSupportPerPixel))
		VARIANT_BOOL  bSupportPerPixel;
	__declspec(property(get=get_bDestroyImage,put=put_bDestroyImage))
		VARIANT_BOOL  bDestroyImage;

	virtual HRESULT __stdcall raw_get_strImageName(BSTR *pVal) = 0;
	virtual HRESULT __stdcall raw_put_strImageName(BSTR pVal) = 0;
	virtual HRESULT __stdcall raw_get_rect(struct IDUIRect **pVal) = 0;
	virtual HRESULT __stdcall raw_put_rect(struct IDUIRect *pVal) = 0;
	virtual HRESULT __stdcall raw_get_rcBorder(struct IDUIRect **pVal) = 0;
	virtual HRESULT __stdcall raw_put_rcBorder(struct IDUIRect *pVal) = 0;
	virtual HRESULT __stdcall raw_get_leftEdgeStretch(VARIANT_BOOL *pVal) = 0;
	virtual HRESULT __stdcall raw_put_leftEdgeStretch(VARIANT_BOOL pVal) = 0;
	virtual HRESULT __stdcall raw_get_rightEdgeStretch(VARIANT_BOOL *pVal) = 0;
	virtual HRESULT __stdcall raw_put_rightEdgeStretch(VARIANT_BOOL pVal) = 0;
	virtual HRESULT __stdcall raw_get_topEdgeStretch(VARIANT_BOOL *pVal) = 0;
	virtual HRESULT __stdcall raw_put_topEdgeStretch(VARIANT_BOOL pVal) = 0;
	virtual HRESULT __stdcall raw_get_bottomEdgeStretch(VARIANT_BOOL *pVal) = 0;
	virtual HRESULT __stdcall raw_put_bottomEdgeStretch(VARIANT_BOOL pVal) = 0;
	virtual HRESULT __stdcall raw_get_clientEdgeStretch(VARIANT_BOOL *pVal) = 0;
	virtual HRESULT __stdcall raw_put_clientEdgeStretch(VARIANT_BOOL pVal) = 0;
	virtual HRESULT __stdcall raw_get_clrTrans(OLE_COLOR *pVal) = 0;
	virtual HRESULT __stdcall raw_put_clrTrans(OLE_COLOR pVal) = 0;
	virtual HRESULT __stdcall raw_get_bTrans(VARIANT_BOOL *pVal) = 0;
	virtual HRESULT __stdcall raw_put_bTrans(VARIANT_BOOL pVal) = 0;
	virtual HRESULT __stdcall raw_get_nOpacity(short *pVal) = 0;
	virtual HRESULT __stdcall raw_put_nOpacity(short pVal) = 0;
	virtual HRESULT __stdcall raw_get_clrColorize(OLE_COLOR *pVal) = 0;
	virtual HRESULT __stdcall raw_put_clrColorize(OLE_COLOR pVal) = 0;
	virtual HRESULT __stdcall raw_get_bSupportPerPixel(VARIANT_BOOL *pVal) = 0;
	virtual HRESULT __stdcall raw_put_bSupportPerPixel(VARIANT_BOOL pVal) = 0;
	virtual HRESULT __stdcall raw_get_bDestroyImage(VARIANT_BOOL *pVal) = 0;
	virtual HRESULT __stdcall raw_put_bDestroyImage(VARIANT_BOOL pVal) = 0;

	//
	//Method
	//
	virtual HRESULT __stdcall raw_StretchAll() = 0;
	virtual HRESULT __stdcall raw_TileAll() = 0;

	//
	//Method Wrapper
	//
	BSTR  get_strImageName();
	void put_strImageName(BSTR  pVal);
	struct IDUIRect * get_rect();
	void put_rect(struct IDUIRect * pVal);
	struct IDUIRect * get_rcBorder();
	void put_rcBorder(struct IDUIRect * pVal);
	VARIANT_BOOL  get_leftEdgeStretch();
	void put_leftEdgeStretch(VARIANT_BOOL  pVal);
	VARIANT_BOOL  get_rightEdgeStretch();
	void put_rightEdgeStretch(VARIANT_BOOL  pVal);
	VARIANT_BOOL  get_topEdgeStretch();
	void put_topEdgeStretch(VARIANT_BOOL  pVal);
	VARIANT_BOOL  get_bottomEdgeStretch();
	void put_bottomEdgeStretch(VARIANT_BOOL  pVal);
	VARIANT_BOOL  get_clientEdgeStretch();
	void put_clientEdgeStretch(VARIANT_BOOL  pVal);
	void StretchAll();
	void TileAll();
	OLE_COLOR  get_clrTrans();
	void put_clrTrans(OLE_COLOR  pVal);
	VARIANT_BOOL  get_bTrans();
	void put_bTrans(VARIANT_BOOL  pVal);
	short  get_nOpacity();
	void put_nOpacity(short  pVal);
	OLE_COLOR  get_clrColorize();
	void put_clrColorize(OLE_COLOR  pVal);
	VARIANT_BOOL  get_bSupportPerPixel();
	void put_bSupportPerPixel(VARIANT_BOOL  pVal);
	VARIANT_BOOL  get_bDestroyImage();
	void put_bDestroyImage(VARIANT_BOOL  pVal);
};

struct __declspec(uuid("c7908c55-dc46-4690-9bdd-0c74206cc8c6")) _IDUISkinInfoEvents : IDispatch
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

struct __declspec(uuid("ce4d8c04-354a-4a27-94e2-00fc827cbc02")) IDUISkinInfo : IDispatch
{
	//
	//Property
	//
	__declspec(property(get=get_strAuthorName,put=put_strAuthorName))
		BSTR  strAuthorName;
	__declspec(property(get=get_strCompany,put=put_strCompany))
		BSTR  strCompany;
	__declspec(property(get=get_strUrl,put=put_strUrl))
		BSTR  strUrl;
	__declspec(property(get=get_strVersion,put=put_strVersion))
		BSTR  strVersion;

	virtual HRESULT __stdcall raw_get_strAuthorName(BSTR *pVal) = 0;
	virtual HRESULT __stdcall raw_put_strAuthorName(BSTR pVal) = 0;
	virtual HRESULT __stdcall raw_get_strCompany(BSTR *pVal) = 0;
	virtual HRESULT __stdcall raw_put_strCompany(BSTR pVal) = 0;
	virtual HRESULT __stdcall raw_get_strUrl(BSTR *pVal) = 0;
	virtual HRESULT __stdcall raw_put_strUrl(BSTR pVal) = 0;
	virtual HRESULT __stdcall raw_get_strVersion(BSTR *pVal) = 0;
	virtual HRESULT __stdcall raw_put_strVersion(BSTR pVal) = 0;

	//
	//Method
	//

	//
	//Method Wrapper
	//
	BSTR  get_strAuthorName();
	void put_strAuthorName(BSTR  pVal);
	BSTR  get_strCompany();
	void put_strCompany(BSTR  pVal);
	BSTR  get_strUrl();
	void put_strUrl(BSTR  pVal);
	BSTR  get_strVersion();
	void put_strVersion(BSTR  pVal);
};

struct __declspec(uuid("0b00fac9-ca23-49cc-b3d7-3201e582e7be")) _IDUISkinRgnEvents : IDispatch
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

struct __declspec(uuid("c499116a-deb3-4cd7-9e88-a8544eb1fa09")) IDUISkinRgn : ISkinShareBase
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_AddSubRgn(BSTR strName, struct IDUISkinSubRgn **pResult) = 0;
	virtual HRESULT __stdcall raw_GetSubRgn(BSTR strName, struct IDUISkinSubRgn **pResult) = 0;
	virtual HRESULT __stdcall raw_RemoveSubRgn(BSTR strName, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_GetSubRgnCount(short *pResult) = 0;

	//
	//Method Wrapper
	//
	struct IDUISkinSubRgn * AddSubRgn(tstring  strName  );
	struct IDUISkinSubRgn * GetSubRgn(tstring  strName  );
	BOOL  RemoveSubRgn(tstring  strName  );
	short  GetSubRgnCount();
};

struct __declspec(uuid("1824c06e-a571-45ac-b187-52e91a0296cd")) _IScriptUtilsEvents : IDispatch
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

struct __declspec(uuid("79811451-25bd-4717-8739-c1055edbc9aa")) IScriptUtils : IDispatch
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_LoWord(long nValue, long *pResult) = 0;
	virtual HRESULT __stdcall raw_HiWord(long nValue, long *pResult) = 0;
	virtual HRESULT __stdcall raw_AddEvent(BSTR strGuid, long nMsgID, BSTR strEventFuncName, VARIANT_BOOL bHasParam, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_RemoveEvent(BSTR strGuid, long nMsgID, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetTemp(VARIANT_BOOL bTemp  ) = 0;
	virtual HRESULT __stdcall raw_IsTemp(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_CallEventAll(OLE_HANDLE hScriptObject, long nMsgID, OLE_HANDLE wParam, OLE_HANDLE lParam, long nDUIMsgId, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_CallEventSingle(OLE_HANDLE hScriptObject, BSTR strGuid, long nMsgID, OLE_HANDLE wParam, OLE_HANDLE lParam, long nDUIMsgId, VARIANT_BOOL *pResult) = 0;

	//
	//Method Wrapper
	//
	long  LoWord(long  nValue  );
	long  HiWord(long  nValue  );
	BOOL  AddEvent(tstring  strGuid, long  nMsgID, tstring  strEventFuncName, BOOL  bHasParam  );
	BOOL  RemoveEvent(tstring  strGuid, long  nMsgID  );
	void SetTemp(BOOL  bTemp  );
	BOOL  IsTemp();
	BOOL  CallEventAll(OLE_HANDLE  hScriptObject, long  nMsgID, OLE_HANDLE  wParam, OLE_HANDLE  lParam, long  nDUIMsgId  );
	BOOL  CallEventSingle(OLE_HANDLE  hScriptObject, tstring  strGuid, long  nMsgID, OLE_HANDLE  wParam, OLE_HANDLE  lParam, long  nDUIMsgId  );
};

struct __declspec(uuid("9970e439-c167-44ea-9339-829e2f2aa369")) _IDUIRenderDCEvents : IDispatch
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

struct __declspec(uuid("d3accae8-9270-44c8-8e8e-1c8549560b1e")) _IDUIRenderImageEvents : IDispatch
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

struct __declspec(uuid("fe34cf4a-8b5d-4776-970e-374dfcb28bda")) IDUIGifFileInfo : IDispatch
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_GetFrameCount(long *pResult) = 0;
	virtual HRESULT __stdcall raw_GetImage(struct IDUIRes *pDUIRes, short nIndex, struct IDUIRenderImage **pResult) = 0;
	virtual HRESULT __stdcall raw_GetWidth(short *pResult) = 0;
	virtual HRESULT __stdcall raw_GetHeight(short *pResult) = 0;
	virtual HRESULT __stdcall raw_GetDelayTime(short nIndex, long *pResult) = 0;
	virtual HRESULT __stdcall raw_LoadByBuffer(OLE_HANDLE pBuffer, long nSize, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_LoadByPath(BSTR strPath, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_IsAnimatedGIF(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_DestroyImage(short nIndex, struct IDUIRenderImage *pImage, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_DestroyAllImage(VARIANT_BOOL *pResult) = 0;

	//
	//Method Wrapper
	//
	long  GetFrameCount();
	struct IDUIRenderImage * GetImage(struct IDUIRes * pDUIRes, short  nIndex  );
	short  GetWidth();
	short  GetHeight();
	long  GetDelayTime(short  nIndex  );
	BOOL  LoadByBuffer(OLE_HANDLE  pBuffer, long  nSize  );
	BOOL  LoadByPath(tstring  strPath  );
	BOOL  IsAnimatedGIF();
	BOOL  DestroyImage(short  nIndex, struct IDUIRenderImage * pImage  );
	BOOL  DestroyAllImage();
};


#include "DirectUI.tli"
#endif //__HEAD__DIRECTUI__