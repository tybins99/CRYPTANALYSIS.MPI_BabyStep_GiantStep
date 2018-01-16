// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_369.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1424 contains the definition of the 
// @@ log facility that permits to log events and
// @@ to associate a argv_4843 and date, coming along
// @@ argv_5011 a argv_4521 level for each event.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_484
#define argv_484



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



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ namespace usage declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
using namespace std;



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_964
// @@
// @@ DESCRIPTION:
// @@ This argv_3656 is a platform independant argv_2305 that
// @@ permits to avoid race conditions in threaded applications.
// @@ It works for both win32 and Linux platforms.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_964
{
private:
#if defined (__LINUX_OS__)
	pthread_mutex_t argv_3551;
#endif // #if defined (__LINUX_OS__)
#if defined (__WIN32_OS__) 
	CRITICAL_SECTION argv_1132;
#endif // #if defined (__WIN32_OS__) 

public:
	argv_964 ();
	void argv_2305 ();
	void argv_4937 ();
	~argv_964 ();
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ log related constants
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#define argv_2315				65536
#define argv_2325		256

//"02/20-17h51m48s "
#define argv_1183					16
//"|NOR| "
#define argv_2232				6

#if defined (__WIN32_OS__) 
	#define argv_2251				512 - argv_1183 - argv_2232
#endif // #if defined (__WIN32_OS__) 
#if defined (__LINUX_OS__)
	#define argv_2251				256 - argv_1183 - argv_2232
#endif // #if defined (__LINUX_OS__)

#if defined (__WIN32_OS__) 
	#define argv_4569 _snprintf
#endif // #if ! defined (__WIN32_OS__) 



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ log relative constants
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
enum argv_4232 {
    argv_3634,
    argv_5006,
    argv_1346,
    argv_690,
    argv_1191,
    argv_3633,
};

#if defined (__LINUX_OS__)
	#define MAX_PATH	256
#endif // #if defined (__LINUX_OS__)



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ argv_1178 types
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#if ! defined (argv_4881)
	#define argv_4881	unsigned	char
#endif // argv_4881

#if ! defined (argv_1108)
	#define argv_1108				char *
#endif // #if ! defined (argv_1108)

#if ! defined (argv_876)
	#define argv_876	const		char *
#endif // #if ! defined (argv_876)

#if ! defined (argv_1111)
	#define argv_1111	const		argv_4881 *
#endif // #if ! defined (argv_1111) 

#if ! defined (argv_4534)
	#define argv_4534	signed		char
#endif // #if ! defined (argv_4534)

#if ! defined (argv_4882)
	#define argv_4882	unsigned	short
#endif // #if ! defined (argv_4882)

#if ! defined (argv_4535)
	#define argv_4535	signed		short
#endif // #if ! defined (argv_4535)

#if ! defined (argv_4536)
	#define argv_4536	signed		int
#endif // #if ! defined (argv_4536)

#if ! defined (argv_4883)
	#define argv_4883	unsigned	int
#endif // #if ! defined (argv_4883)

#if ! defined (argv_4884)
	#define argv_4884	unsigned	long
#endif // #if ! defined (argv_4884)

#if ! defined (argv_4411)
	#define argv_4411	float
#endif // #if ! defined (argv_4411)

#if ! defined (argv_4412)
	#define argv_4412	double
#endif // #if ! defined (argv_4412)



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_1081
// @@
// @@ DESCRIPTION:
// @@ This argv_3656 permits to have a fixed size argv_2250
// @@ composed of 
// @@ - a date
// @@ - a argv_4521 level
// @@ - a argv_2457
// @@
// @@ Notice that if the argv_2457 to append to the argv_2250
// @@ exceeds the argv_2250's maximum size, then the remaining
// @@ part of the argv_2457 is lost.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_1081
{
private:
	string argv_4765;
	void insert_terminator (FILE *);

public:

	argv_1081 () {
#if defined (__WIN32_OS__)
		argv_4765 = "\r\n";
#endif // #if defined (__WIN32_OS__)
#if defined (__LINUX_OS__)
		argv_4765 = "\n";
#endif // #if defined (__LINUX_OS__)
	}

	void insert_date (FILE *, argv_876);
	void insert_level (FILE *, argv_876);
	void insert_body (FILE *, argv_876);
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_963
// @@
// @@ DESCRIPTION:
// @@ This argv_3656 permits to open a log argv_1424,
// @@ save argv_1178 into it, and argv_967 it.
// @@ It can be thread safe depending on the compilation
// @@ argv_1481 you choose.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_963
{
	private:
		string			argv_1474;
		string			argv_1122;
		argv_1081		argv_3679;
		FILE *			argv_1510;
		argv_963 *			argv_1347;
		argv_4883			argv_1157;
		bool			argv_2314;
		char			argv_4759[argv_2325];
#if defined (__WIN32_OS__)
		SYSTEMTIME		argv_4842;
#endif // #if defined (__WIN32_OS__)
#if defined (__LINUX_OS__)
        time_t			argv_1160;
        struct tm *		argv_4845;
#endif // #if defined (__LINUX_OS__)
		void			argv_4960 (bool _large_mode=false);
		void			insert_date ();
		void			insert_level (argv_4883);
		void			argv_915 ();
		void			reset ();
		argv_964	argv_780;

	public:
		argv_963();
		virtual			~argv_963();
		bool			argv_3686 (string, argv_963 *, string);
		void			argv_970 ();
		void			argv_2323 (argv_4883, argv_876);
		void			argv_2323 (argv_4883, argv_876, argv_4536);
		void			argv_2323 (argv_4883, argv_876, argv_4883);
		void			argv_2323 (argv_4881);
		void			argv_2323 (argv_4883, argv_4883, argv_4883);
		void			argv_2323 (argv_4883, argv_876, argv_876);
		void			argv_2323 (argv_4883, argv_876, argv_876, argv_876);
		void			argv_2323 (argv_4883, argv_876, argv_876, argv_876, argv_876);
		void			argv_2323 (argv_4883, argv_876, unsigned long);
		void			argv_2323 (argv_4883, argv_4883);
		void			argv_2324 (argv_4883, argv_876, argv_4883);
		void			argv_2310 (argv_4883, argv_4881 *, argv_876);
		void			argv_2309 (argv_4883, argv_4881 *, argv_4883, argv_876);
		FILE *			argv_1758 ();
		string			argv_1760 ();
		void			argv_1491 ();
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  global argv_1178 container
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_891
{
public:
	argv_891 ();

	argv_963	argv_2327;

	string	argv_3728;
	string	argv_3573;
	string	argv_1065;
	string	argv_932;
	string	argv_2172;
	string  argv_3903;
	string	argv_1460;
	string	argv_1735;
	string	argv_1224;
	argv_4883	int_size;
	string	argv_3568;
	string	argv_3564;
	string	argv_3563;
	string	argv_3559;
	string	argv_3561;

	string	argv_3566;
	string  argv_3560;
	string	argv_3562;
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ misc functions declarations
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_1241 (argv_876, argv_963&); 



extern "C" 
{
	void argv_2323 (argv_963 *, argv_4883, argv_876);
}



#endif // argv_484



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1424
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
