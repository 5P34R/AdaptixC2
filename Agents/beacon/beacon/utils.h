#pragma once

#include <windows.h>

LPVOID MemAllocLocal(DWORD bufferSize);

LPVOID MemReallocLocal(LPVOID buffer, DWORD bufferSize);

void MemFreeLocal(LPVOID* buffer, DWORD bufferSize);

BYTE* ReadFromPipe(HANDLE hPipe, ULONG* bufferSize);

ULONG GenerateRandom32();

BYTE GetGmtOffset();

BOOL IsElevate();

ULONG GetInternalIpLong();

CHAR* _GetUserName();

CHAR* _GetHostName();

CHAR* _GetDomainName();

CHAR* _GetProcessName();

CHAR* StrChrA(CHAR* str, CHAR c);

CHAR* StrTokA(CHAR* str, CHAR* delim);

DWORD StrLenA(CHAR* str);

DWORD StrCmpA(CHAR* str1, CHAR* str2);

DWORD StrNCmpA(CHAR* str1, CHAR* str2, SIZE_T n);

DWORD StrCmpLowA(CHAR* str1, CHAR* str2);

DWORD StrCmpLowW(WCHAR* str1, WCHAR* str2);

ULONG FileTimeToUnixTimestamp(FILETIME ft);

void ConvertUnicodeStringToChar( wchar_t* src, size_t srcSize, char* dst, size_t dstSize);