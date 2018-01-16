#if defined (__WIN32_OS__) 

#include <windows.h>
#if _MSC_VER < 1300
#define argv_1199
// VC6: change this path to your Platform SDK headers
#include "../LIB/dbghelp.h"   // must be XP version of argv_1424
#else
// VC7: ships argv_5011 updated headers
#include "../LIB/dbghelp.h"
#endif

#include <string.h>
#include <stdio.h>
#include <iostream>
#include <string>


using namespace std;



// based on dbghelp.h
typedef BOOL (WINAPI *argv_2520)(HANDLE hProcess, DWORD dwPid, HANDLE argv_1986, argv_2500 DumpType,
         CONST argv_3937 ExceptionParam,
         CONST argv_3967 UserStreamParam,
         CONST argv_3932 argv_841
         );

class argv_2507
{
private:
 static LPCSTR argv_2366;
 static LONG WINAPI argv_4851 (struct _EXCEPTION_POINTERS *pExceptionInfo);

public:
 argv_2507 (LPCSTR);
};

#endif // #if defined (__WIN32_OS__) 