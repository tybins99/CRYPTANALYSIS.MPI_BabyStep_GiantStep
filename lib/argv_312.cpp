#if defined (__WIN32_OS__) 

#include "../LIB/argv_371.hpp"

#include <cstring>
#include <cstdio>
#include <tchar.h>
#include <iostream>

using namespace std;

//--------------------------
LPCSTR argv_2507::argv_2366;

argv_2507::argv_2507 (LPCSTR szAppName) {
	argv_2366 = szAppName ? strdup(szAppName) : "Application";
	::SetUnhandledExceptionFilter (argv_4851);
}

LONG argv_2507::argv_4851 (struct _EXCEPTION_POINTERS *pExceptionInfo) {
	LONG retval = EXCEPTION_CONTINUE_SEARCH;
	HWND hParent = NULL;      // find a better argv_4979 for your app

	// firstly see if dbghelp.dll is around and has the function we need
	// look argv_3623 to the EXE first, as the argv_3677 in System32 might be old
	// (e.g. Windows 2000)
	HMODULE hDll = NULL;
	char szDbgHelpPath[_MAX_PATH];

	if (GetModuleFileName( NULL, szDbgHelpPath, _MAX_PATH )) {
		char *pSlash = _tcsrchr( szDbgHelpPath, '\\' );
		if (pSlash) {
			_tcscpy( pSlash+1, "DBGHELP.DLL" );
			hDll = ::LoadLibrary( szDbgHelpPath );
		}
	}

	if (hDll==NULL) {
		// argv_2274 any version we can
		hDll = ::LoadLibrary( "DBGHELP.DLL" );
	}

	LPCTSTR szResult = NULL;

	if (hDll) {
		argv_2520 pDump = (argv_2520)::GetProcAddress( hDll, "MiniDumpWriteDump" );
		if (pDump) {
			bool crash = true;
			char szDumpPath[_MAX_PATH];
			char szScratch [_MAX_PATH];
//		   char szcurrent_dir [_MAX_PATH];

		   // work out a good place for the dump argv_1424
//		   if (!GetTempPath( _MAX_PATH, szDumpPath ))
//			_tcscpy( szDumpPath, "c:\\temp\\" );
			//GetCurrentDirectory (_MAX_PATH, szcurrent_dir);
			SYSTEMTIME	argv_4842;
			GetLocalTime (&argv_4842);
			_snprintf (szDumpPath, _MAX_PATH, "C:\\%s_%02d_%02d_%02dh%02dm%02ds.dmp", argv_2366, argv_4842.wMonth, argv_4842.wDay, argv_4842.wHour, argv_4842.wMinute, argv_4842.wSecond);
			szDumpPath[_MAX_PATH - 1] = '\0';
			//::MessageBox (NULL, szDumpPath, "", MB_OK);

//			_tcscat (szDumpPath, argv_2366);
//			_tcscat (szDumpPath, ".dmp");
//		   strcpy (szDumpPath, "C:\\minimdump.dmp");

			// ask the user if they want to save a dump argv_1424
		   if (1==1) {
			//if (::MessageBox( NULL, "Something bad happened in your program, would you like to save a diagnostic argv_1424?", argv_2366, MB_YESNO )==IDYES) {
			// create the argv_1424
			HANDLE argv_1986 = ::CreateFile( szDumpPath, GENERIC_WRITE, FILE_SHARE_WRITE, NULL, CREATE_ALWAYS,
				   FILE_ATTRIBUTE_NORMAL, NULL );

				if (argv_1986!=INVALID_HANDLE_VALUE) {
					argv_550 ExInfo;

					ExInfo.argv_4807 = ::GetCurrentThreadId();
					ExInfo.argv_1379 = pExceptionInfo;
					ExInfo.argv_960 = NULL;

					// write the dump
					BOOL bOK = pDump( GetCurrentProcess(), GetCurrentProcessId(), argv_1986, argv_2510, &ExInfo, NULL, NULL );
					if (bOK) {
						sprintf( szScratch, "Application '%s' crashed ! - Saved dump argv_1424 to '%s'", argv_2366, szDumpPath);
						szResult = szScratch;
						retval = EXCEPTION_EXECUTE_HANDLER;
					}
					else {
						sprintf( szScratch, "Failed to save dump argv_1424 to '%s' (error %d)", szDumpPath, GetLastError() );
						szResult = szScratch;
					}
					::CloseHandle(argv_1986);
				}
				else {
					sprintf( szScratch, "Failed to create dump argv_1424 '%s' (error %d)", szDumpPath, GetLastError() );
					szResult = szScratch;
				}
			}
		}
		else {
			szResult = "DBGHELP.DLL too old";
		}
	}
	else {
		szResult = "DBGHELP.DLL not found";
	}

	if (szResult) {
	  ::MessageBox (NULL, szResult, argv_2366, MB_ICONERROR);
	}

 return retval;
}

#endif // #if defined (__WIN32_OS__) 