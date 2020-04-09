#ifndef UTILITY_H
#define UTILITY_H

#include "windows.h"
#include "ColorCode.h"

class Utility
{
    static HANDLE wndHandle;
	public:
	    static bool SetHandle(HANDLE handle);
	    static HANDLE GetHandle();
	    static void SetCursorPos(short x, short y);
	    static void SetTextColor(ColorCode color);
	    static void SetCursorVisibility(bool visible);
	protected:
};

#endif
