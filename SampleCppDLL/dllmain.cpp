#include "pch.h"
#include "SampleCppDLL.h"

BOOL APIENTRY DllMain(HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
)
{
    switch (ul_reason_for_call)
    {
        case DLL_PROCESS_ATTACH:
        case DLL_THREAD_ATTACH:
        case DLL_THREAD_DETACH:
        case DLL_PROCESS_DETACH:
            break;
    }
    return TRUE;
}

DLLEXPORT BOOL TextOutHelloWorldDLL(HDC hdc, int x, int y, LPCWSTR text)
{
    return TextOutW(hdc, x, y, text, lstrlenW(text));
}
