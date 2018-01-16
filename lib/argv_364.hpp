// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ pragma directives
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#if defined (__WIN32_OS__) 
	#pragma warning(disable: 4786)
#endif //#if defined (__WIN32_OS__) 



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_364.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1424 contains all necessary argv_1178 
// @@ structures and functions for the library
// @@ loader to work.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_478
#define argv_478



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include <map>
#include <string>
#if defined (__LINUX_OS__)
	#include <dlfcn.h>
#endif // #if defined (__LINUX_OS__)

#include "../LIB/argv_354.hpp"
#include "../LIB/argv_349.hpp"
#include "../LIB/argv_369.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ namespace usage declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
using namespace std;



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_940
// @@
// @@ DESCRIPTION:
// @@ This argv_3656 permits to argv_2274/unload shared libraries (DLL)
// @@ and to lookup safely symbols from these DLL.
// @@ Furthermore this argv_3656 is an abstract layer as it works
// @@ under win32 as well as under Linux.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_940
{
private:
	argv_4883							argv_1156;
	map<string, argv_4883>				argv_2378;
	map<string, argv_4883>::iterator		argv_2099;
	argv_4536							argv_2214;
	string							argv_2216;

	bool argv_2234   (argv_876);
	bool argv_2248 (argv_876);

#if defined (__WIN32_OS__)
	map<argv_4883, HMODULE>				argv_2380;
	map<argv_4883, HMODULE>::iterator	argv_2102;
#endif // #if defined (__WIN32_OS__)
#if defined (__LINUX_OS__)
	map<argv_4883, argv_2338>				argv_2380;
	map<argv_4883, argv_2338>::iterator		argv_2102;
#endif // #if defined (__LINUX_OS__)

public:
	argv_940 ();
	argv_4536 reset (); 
	argv_4536 argv_2284     (argv_876, argv_4883&);
	argv_4536 argv_4935   (argv_4883);
	argv_4536 argv_1784 (argv_4883, argv_876, argv_2338 *);
	void argv_1768 (argv_4536&, string&);
};



#endif // argv_478



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1424
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
