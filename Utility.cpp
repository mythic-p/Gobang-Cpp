#include "Utility.h"

HANDLE Utility::wndHandle = nullptr;

void Utility::SetCursorPos(short x, short y) {
    SetConsoleCursorPosition(wndHandle, {x, y});
}

bool Utility::SetHandle(HANDLE handle) {
    if (handle == nullptr) {
        return false;
    }
    wndHandle = handle;
    return true;
}

HANDLE Utility::GetHandle() {
    return wndHandle;
}

void Utility::SetTextColor(ColorCode color) {
    SetConsoleTextAttribute(wndHandle, color);
}

void Utility::SetCursorVisibility(bool visible) {
    CONSOLE_CURSOR_INFO info;
    info.bVisible = visible;
    info.dwSize = 1;
    SetConsoleCursorInfo(wndHandle, &info);
}
