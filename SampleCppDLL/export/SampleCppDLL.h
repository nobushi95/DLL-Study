#pragma once
#include <Windows.h>

#ifdef SAMPLECPPDLL_EXPORTS
#define DLLDIRECTION __declspec(dllexport)
#else
#define DLLDIRECTION __declspec(dllimport)
#endif

#ifdef __cplusplus
#define DLLATTRIBUTE extern "C" DLLDIRECTION
#else
#define DLLATTRIBUTE DLLDIRECTION
#endif

typedef BOOL(*LPFUNC_TEXTOUT_HELLOWORLD_DLL)(HDC, int, int, LPCWSTR);

DLLATTRIBUTE BOOL TextOutHelloWorldDLL(HDC hdc, int x, int y, LPCWSTR text);
