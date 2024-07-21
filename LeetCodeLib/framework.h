#pragma once

#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
// Windows Header Files
#include <windows.h>



#ifdef LEETCODE_EXPORTS
#define LEETCODE_API __declspec(dllexport)
#else
#define LEETCODE_API __declspec(dllimport)
#endif