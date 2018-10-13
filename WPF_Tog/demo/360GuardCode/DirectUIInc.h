#ifndef __HEAD__DIRECTUIINC__
#define __HEAD__DIRECTUIINC__
#pragma once
#pragma warning(disable : 4278)
#pragma warning(disable : 4996)

#include "DirectUI.h"
#include "KernelAll.h"
#include "AdvancedAll.h"
#include "OfficeAll.h"
#include "IndustryAll.h"

#define DIRECTUI_GETCONTROL(objname) \
	(IDUIControlBase*)theApp.m_pDUIRes->GetResObject(DUIOBJTYPE_PLUGIN,objname,m_pDirectUI,TRUE)

IDUIRes* CALLBACK OpenSkinW(wchar_t* strSkinPath,wchar_t *strSknPath, BOOL bSkinCtrls = FALSE, BOOL bAddRef = FALSE, BOOL bAbsPath = FALSE);

IDUIRes* CALLBACK OpenSkinA(char* strSkinPath,char*strSknPath, BOOL bSkinCtrls = FALSE, BOOL bAddRef = FALSE, BOOL bAbsPath = FALSE);

#ifdef _UNICODE
#define OpenSkin OpenSkinW
#else
#define OpenSkin OpenSkinA
#endif

void CALLBACK FreeSkin();

extern "C" __declspec(dllimport) unsigned int CALLBACK DUIGetLastError();
extern "C" __declspec(dllimport) void CALLBACK EnableDebugInfo(BOOL bEnable);

#pragma comment(lib,"DirectUI.lib") 
#endif //__HEAD__DIRECTUI__