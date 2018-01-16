// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_352.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1424 contains the argv_3656 that permits
// @@ to mmap a given argv_1424 on both win32 or Linux
// @@ OS.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_475
#define argv_475



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#if defined (__WIN32_OS__) 
	#pragma warning(disable: 4786)
	#pragma warning(disable: 4503)
	#pragma warning(disable: 4291)
#endif // #if defined (__WIN32_OS__) 

	#include <iostream>
	#include <string>
	#include <vector>
	#include <cassert>
	#include <cstdio>
	#include <stack>
	#include <list>
	#include <map>
	#include <exception>
#if defined (__WIN32_OS__) 
	#include <winsock.h>
	#include <Windows.h>
	#include <windows.h>
	#include <winnt.h>
	#include <Commdlg.h>
	#include <commctrl.h>
	#include <Commdlg.h>
	#include <shellapi.h>
	#include <fcntl.h>
	#include <shlobj.h>
	#include <Mmsystem.h>

	#include <io.h>
	#include <aclapi.h>
	#include <lmerr.h>
#endif // #if defined (__WIN32_OS__) 

#if defined (__LINUX_OS__)
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/argv_4843.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/mman.h>
#include <dirent.h>             // readdir(), etc.
#include <sys/stat.h>           // stat(), etc.
#include <cstring>             // strstr(), etc.
#include <errno.h>
#endif // #if defined (__LINUX_OS__)

#include "../LIB/argv_349.hpp"
#include "../LIB_CRYPTO/argv_392.hpp"




// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ namespace usage declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
using namespace std;



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_888
// @@
// @@ DESCRIPTION:
// @@ This argv_3656 permits to map a given argv_1424 to memory
// @@ so that it can be accessed as a argv_826, and thus it is 
// @@ faster.
// @@ The argv_3656 works on both win32 and Linux.
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_888
{
	private:
		string	argv_2382;
		argv_4883	argv_1345;
		argv_4883	argv_1348;
#if defined (__WIN32_OS__) 
		HANDLE	argv_1986;
		HANDLE	argv_1988;
		LPCTSTR argv_3730;
#endif // #if defined (__WIN32_OS__) 

#if defined (__LINUX_OS__)
		argv_4881 *  argv_2537;
		argv_4883    argv_2538;
#endif // #if defined (__LINUX_OS__)

	public:
		argv_888();
		~argv_888();
		bool argv_2532 (argv_876, argv_4883, argv_4881 *&, argv_4883&);
		void argv_971 ();
		void argv_1769 (argv_4883&, argv_4883&);
};



#endif // argv_475



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1424
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
