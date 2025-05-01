#include <windows.h>

extern "C" __declspec(dllexport) void show_message() {
    MessageBoxA(NULL, "hello!!!", "Hello DLL", MB_OK | MB_ICONINFORMATION);
}
