// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ pragma directives
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#if defined (__WIN32_OS__) 
	#pragma warning(disable: 4786)
#endif //#if defined (__WIN32_OS__) 



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_392.hpp
// @@ 
// @@ DESCRIPTION:
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_417
#define argv_417



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#if defined (__WIN32_OS__) 
	#include <Windows.h>
	#include <windows.h>
	#include <winnt.h>
#endif // #if defined (__WIN32_OS__) 
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <string>
#include <iostream>
#include <map>
#include "../LIB/argv_349.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ namespace usage declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
using namespace std;



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ constants
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
enum argv_4230 {
	argv_1857 = 201274,
	argv_1842,
	argv_1841,
	argv_1840,
	argv_1833,
	argv_1834,
	argv_1851,
	argv_1852,
	argv_1855,
	argv_1854,
	argv_1848,
	argv_1844,
	argv_1853,
	argv_1831,
	argv_1830,
	argv_1837,
	argv_1835,
	argv_1850,
	argv_1847,
	argv_1849,
	argv_1838,
	argv_1845,
	argv_1836,
	argv_1821,
	argv_1818,
	argv_1817,
	argv_1819,
	argv_1820,
	argv_1828,
	argv_1823,
	argv_1822,
	argv_1824,
	argv_1827,
	argv_1825,
	argv_1826,
	argv_1816,
	argv_1815,
	argv_1846,
	argv_1829,
	argv_1839,
	argv_1856,
	argv_1832,
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ constants and aliases definitions
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#if defined (__LINUX_OS__)
	#define LPVOID void *
	#define MAX_PATH	256
#endif // #if defined (__LINUX_OS__)



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ argv_1424 mmap possible open mode
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
enum argv_2533 {
	argv_2534 = 0,
	argv_2535,
	argv_2536,
};

class argv_884
{
protected:
	LARGE_INTEGER argv_2350;
	LARGE_INTEGER argv_2351;

	LONGLONG argv_2353;
	LONGLONG argv_2352;

public:
	argv_884(void);

	void argv_4618(void);
	void argv_4626(void);
	double argv_1756(void) const;
	string argv_4627 (const char *);
};

inline argv_884::argv_884(void) {
	LARGE_INTEGER liFrequency;

	QueryPerformanceFrequency(&liFrequency);
	argv_2353 = liFrequency.QuadPart;

	// Calibration
	argv_4618();
	argv_4626();

	argv_2352 = argv_2351.QuadPart-argv_2350.QuadPart;
}

inline void argv_884::argv_4618(void) {
	// Ensure we will not be interrupted by any other thread for a while
//	Sleep(0);
	QueryPerformanceCounter(&argv_2350);
}

inline void argv_884::argv_4626(void) {
	QueryPerformanceCounter(&argv_2351);
}

inline double argv_884::argv_1756(void) const {
	return (double)(argv_2351.QuadPart-argv_2350.QuadPart-argv_2352)*1000000.0 / argv_2353;
}


// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ functions
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool			argv_1426				(const char *);
int32_t			argv_3718			(const char *, map<string, bool>&, map<string, string>&);
int32_t			argv_3712			(FILE *, string&, string&, string&);
void			argv_1985		(uint8_t *, uint32_t, string&);
void			argv_3705	(string&, uint32_t);
bool			argv_3678			(uint8_t, uint8_t&);
bool			argv_896				(uint8_t, uint8_t, uint8_t&);
int32_t			argv_4635		(const char *, uint32_t, uint8_t *, uint32_t, uint32_t&);
bool			argv_1477		(const char * _file_1, const char * _file_2);
unsigned long	argv_1759			(const char *);
std::string		argv_1131		(uint32_t);

extern "C"
{
	void argv_1131 (uint32_t _ercode, char * _erstring);
}


#endif // #define argv_447



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1424
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
