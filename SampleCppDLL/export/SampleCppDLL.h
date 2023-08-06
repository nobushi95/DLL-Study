#pragma once
#include <Windows.h>

#ifdef __cplusplus
#define DLLEXPORT extern "C" __declspec(dllexport)
#else
#define DLLEXPORT __declspec(dllexport)
#endif

DLLEXPORT BOOL TextOutHelloWorldDLL(HDC hdc, int x, int y, LPCWSTR text);
