#ifndef __HEAD__INDUSTRYALL__
#define __HEAD__INDUSTRYALL__
#include <comdef.h>

#include <xstring>
using namespace std;
#ifdef _UNICODE
#define tstring wstring
#else
#define tstring string
#endif

struct __declspec(uuid("b415356e-02b0-40ec-9869-f45fdf005a95")) IDUIThermometer;
struct __declspec(uuid("f6e54718-56bb-4088-b1d3-368ff7447a28")) DUIThermometer;
struct __declspec(uuid("2188fe95-d812-479c-ad6e-542959d7707c")) _IDUIThermometerEvents;
struct __declspec(uuid("c3dec320-8629-4f47-944f-1574ca0eeb39")) IDUILedCtrl;
struct __declspec(uuid("47f75c27-8252-4a9c-b449-01e55d4744c4")) DUILedCtrl;
struct __declspec(uuid("9f4f883b-85cc-429d-9657-c176801e54ff")) _IDUILedCtrlEvents;
struct __declspec(uuid("976570de-c162-4205-b294-45e5feb02cc4")) IDUIKnobCtrl;
struct __declspec(uuid("3a477441-4f7b-41b9-ad69-4cebd4a3ad86")) DUIKnobCtrl;
struct __declspec(uuid("9e4bd844-5831-409d-99ce-7e62e6ca14f8")) _IDUIKnobCtrlEvents;
struct __declspec(uuid("a01348a9-85ee-462d-8c75-e251aaff99f9")) IDUIIndicatorCtrl;
struct __declspec(uuid("648a799c-4150-451f-8e30-302db85ae32c")) DUIIndicatorCtrl;
struct __declspec(uuid("ca9005f6-44af-4509-97f6-7be112dbd8bd")) _IDUIIndicatorCtrlEvents;
enum DUIINDICATORCTRL_STATE;

struct __declspec(uuid("bb656c51-7d48-496f-8fc0-6d1e12b73df2")) IDUIDialCtrl;
struct __declspec(uuid("66d12239-5a0a-4dc9-8b54-39c5dfc228c1")) DUIDialCtrl;
struct __declspec(uuid("95021ef9-a152-4e28-8765-1d860e022c91")) _IDUIDialCtrlEvents;
enum DUI_KNOBCTRL_MSGID;

enum DUI_KNOBCTRL_MSGID
{ 
	DUI_KNOBMSG_CHANGEVALUE = 3200 
};

struct __declspec(uuid("95021ef9-a152-4e28-8765-1d860e022c91")) _IDUIDialCtrlEvents : IDispatch
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

struct __declspec(uuid("bb656c51-7d48-496f-8fc0-6d1e12b73df2")) IDUIDialCtrl : IDUIControlBase
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_GetRange(short *pnMin, short *pnMax  ) = 0;
	virtual HRESULT __stdcall raw_SetRange(short nMin, short nMax, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetPos(float nPos  ) = 0;
	virtual HRESULT __stdcall raw_GetPos(float *pResult) = 0;
	virtual HRESULT __stdcall raw_SetCriticalVal(short nValue  ) = 0;
	virtual HRESULT __stdcall raw_GetCriticalVal(short *pResult) = 0;
	virtual HRESULT __stdcall raw_SetBigFrequency(long nFre  ) = 0;
	virtual HRESULT __stdcall raw_GetBigFrequency(long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetSmallFrequency(long nFre  ) = 0;
	virtual HRESULT __stdcall raw_GetSmallFrequency(long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetPointPath(BSTR strPath  ) = 0;
	virtual HRESULT __stdcall raw_GetPointPath(BSTR *pResult) = 0;
	virtual HRESULT __stdcall raw_AddKeyString(short nValue, BSTR strKeyString, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_RemoveKeyString(short nValue  ) = 0;
	virtual HRESULT __stdcall raw_DrawKeyString(VARIANT_BOOL bDraw  ) = 0;
	virtual HRESULT __stdcall raw_IsDrawKeyString(VARIANT_BOOL *pResult) = 0;

	//
	//Method Wrapper
	//
	void GetRange(short * pnMin, short * pnMax  );
	BOOL  SetRange(short  nMin, short  nMax, BOOL  bRedraw  );
	void SetPos(float  nPos  );
	float  GetPos();
	void SetCriticalVal(short  nValue  );
	short  GetCriticalVal();
	void SetBigFrequency(long  nFre  );
	long  GetBigFrequency();
	void SetSmallFrequency(long  nFre  );
	long  GetSmallFrequency();
	void SetPointPath(tstring  strPath  );
	tstring  GetPointPath();
	BOOL  AddKeyString(short  nValue, tstring  strKeyString  );
	void RemoveKeyString(short  nValue  );
	void DrawKeyString(BOOL  bDraw  );
	BOOL  IsDrawKeyString();
};

enum DUIINDICATORCTRL_STATE
{ 
	DUIINDICATORCTRL_STATE_GREEN = 2,
	DUIINDICATORCTRL_STATE_LAST = 4,
	DUIINDICATORCTRL_STATE_NORMAL = 0,
	DUIINDICATORCTRL_STATE_RED = 1,
	DUIINDICATORCTRL_STATE_YELLOW = 3 
};

struct __declspec(uuid("ca9005f6-44af-4509-97f6-7be112dbd8bd")) _IDUIIndicatorCtrlEvents : IDispatch
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

struct __declspec(uuid("a01348a9-85ee-462d-8c75-e251aaff99f9")) IDUIIndicatorCtrl : IDUIControlBase
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_SetState(enum DUIINDICATORCTRL_STATE eState  ) = 0;
	virtual HRESULT __stdcall raw_GetState(enum DUIINDICATORCTRL_STATE *pResult) = 0;
	virtual HRESULT __stdcall raw_SetBlink(VARIANT_BOOL bBlink  ) = 0;
	virtual HRESULT __stdcall raw_IsBlink(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetBlinkState(enum DUIINDICATORCTRL_STATE eState1, enum DUIINDICATORCTRL_STATE eState2  ) = 0;
	virtual HRESULT __stdcall raw_SetBlinkSpace(long lSpace  ) = 0;
	virtual HRESULT __stdcall raw_GetBlinkSpace(long *pResult) = 0;
	virtual HRESULT __stdcall raw_ShowText(VARIANT_BOOL bShow  ) = 0;
	virtual HRESULT __stdcall raw_IsShowText(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetText(BSTR strText  ) = 0;
	virtual HRESULT __stdcall raw_GetText(BSTR *pResult) = 0;
	virtual HRESULT __stdcall raw_SetBackImage(BSTR strPath, enum DUIINDICATORCTRL_STATE eState1  ) = 0;
	virtual HRESULT __stdcall raw_GetTextColor(OLE_COLOR *pResult) = 0;
	virtual HRESULT __stdcall raw_SetTextColor(OLE_COLOR color  ) = 0;

	//
	//Method Wrapper
	//
	void SetState(enum DUIINDICATORCTRL_STATE  eState  );
	enum DUIINDICATORCTRL_STATE  GetState();
	void SetBlink(BOOL  bBlink  );
	BOOL  IsBlink();
	void SetBlinkState(enum DUIINDICATORCTRL_STATE  eState1, enum DUIINDICATORCTRL_STATE  eState2  );
	void SetBlinkSpace(long  lSpace  );
	long  GetBlinkSpace();
	void ShowText(BOOL  bShow  );
	BOOL  IsShowText();
	void SetText(tstring  strText  );
	tstring  GetText();
	void SetBackImage(tstring  strPath, enum DUIINDICATORCTRL_STATE  eState1  );
	OLE_COLOR  GetTextColor();
	void SetTextColor(OLE_COLOR  color  );
};

struct __declspec(uuid("9e4bd844-5831-409d-99ce-7e62e6ca14f8")) _IDUIKnobCtrlEvents : IDispatch
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

struct __declspec(uuid("976570de-c162-4205-b294-45e5feb02cc4")) IDUIKnobCtrl : IDUIControlBase
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_GetCycle(VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetCycle(VARIANT_BOOL bCycle  ) = 0;
	virtual HRESULT __stdcall raw_GetValue(long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetValue(long lValue  ) = 0;
	virtual HRESULT __stdcall raw_GetMinValue(long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetMinValue(long lMinValue  ) = 0;
	virtual HRESULT __stdcall raw_GetMaxValue(long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetMaxValue(long lMaxValue  ) = 0;
	virtual HRESULT __stdcall raw_SetForePath(BSTR strPath  ) = 0;
	virtual HRESULT __stdcall raw_GetForePath(BSTR *pResult) = 0;

	//
	//Method Wrapper
	//
	BOOL  GetCycle();
	void SetCycle(BOOL  bCycle  );
	long  GetValue();
	void SetValue(long  lValue  );
	long  GetMinValue();
	void SetMinValue(long  lMinValue  );
	long  GetMaxValue();
	void SetMaxValue(long  lMaxValue  );
	void SetForePath(tstring  strPath  );
	tstring  GetForePath();
};

struct __declspec(uuid("9f4f883b-85cc-429d-9657-c176801e54ff")) _IDUILedCtrlEvents : IDispatch
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

struct __declspec(uuid("c3dec320-8629-4f47-944f-1574ca0eeb39")) IDUILedCtrl : IDUIControlBase
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_GetValue(BSTR *pResult  ) = 0;
	virtual HRESULT __stdcall raw_SetValue(BSTR strValue  ) = 0;

	//
	//Method Wrapper
	//
	void GetValue(BSTR * pResult  );
	void SetValue(tstring  strValue  );
};

struct __declspec(uuid("2188fe95-d812-479c-ad6e-542959d7707c")) _IDUIThermometerEvents : IDispatch
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

struct __declspec(uuid("b415356e-02b0-40ec-9869-f45fdf005a95")) IDUIThermometer : IDUIControlBase
{
	//
	//Property
	//


	//
	//Method
	//
	virtual HRESULT __stdcall raw_GetRange(short *pnMin, short *pnMax  ) = 0;
	virtual HRESULT __stdcall raw_SetRange(short nMin, short nMax, VARIANT_BOOL bRedraw, VARIANT_BOOL *pResult) = 0;
	virtual HRESULT __stdcall raw_SetPos(short nPos  ) = 0;
	virtual HRESULT __stdcall raw_GetPos(short *pResult) = 0;
	virtual HRESULT __stdcall raw_SetBigFrequency(long nFre  ) = 0;
	virtual HRESULT __stdcall raw_GetBigFrequency(long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetSmallFrequency(long nFre  ) = 0;
	virtual HRESULT __stdcall raw_GetSmallFrequency(long *pResult) = 0;
	virtual HRESULT __stdcall raw_SetUnitString(BSTR strUnit  ) = 0;
	virtual HRESULT __stdcall raw_GetUnitString(BSTR *pResult) = 0;
	virtual HRESULT __stdcall raw_SetTickColor(struct IFillColor *pColor  ) = 0;
	virtual HRESULT __stdcall raw_SetBackColor(struct IFillColor *pColor  ) = 0;
	virtual HRESULT __stdcall raw_GetTickColor(struct IFillColor **pResult) = 0;
	virtual HRESULT __stdcall raw_GetBackColor(struct IFillColor **pResult) = 0;

	//
	//Method Wrapper
	//
	void GetRange(short * pnMin, short * pnMax  );
	BOOL  SetRange(short  nMin, short  nMax, BOOL  bRedraw  );
	void SetPos(short  nPos  );
	short  GetPos();
	void SetBigFrequency(long  nFre  );
	long  GetBigFrequency();
	void SetSmallFrequency(long  nFre  );
	long  GetSmallFrequency();
	void SetUnitString(tstring  strUnit  );
	tstring  GetUnitString();
	void SetTickColor(struct IFillColor * pColor  );
	void SetBackColor(struct IFillColor * pColor  );
	struct IFillColor * GetTickColor();
	struct IFillColor * GetBackColor();
};


#include "IndustryAll.tli"
#endif //__HEAD__INDUSTRYALL__