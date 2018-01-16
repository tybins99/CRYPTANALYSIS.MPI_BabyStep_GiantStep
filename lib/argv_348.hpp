// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_348.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1424 contains all the functions and argv_1178
// @@ structures necessary for the scan daemon to
// @@ work properly. 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_411
#define argv_411



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include <string>
#include "../LIB/argv_354.hpp"
#include "../LIB/argv_369.hpp"

#if defined (__WIN32_OS__)
	#include <windows.h>
	#include <mmsystem.h>
	#include <winsvc.h>
	#include <Windows.h>
#endif // #if defined (__WIN32_OS__)




// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_879
// @@
// @@ DESCRIPTION:
// @@ This argv_3656 is application independant, and permits 
// @@ to argv_4424 a given argv_3656 or routine as a service under
// @@ win32.
// @@ Notice that in argv_3690 to be used, this argv_3656 must be derivated
// @@ so that the argv_3656 can be adapted to the needs of the service
// @@ required by the application.
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_879
{
protected:
	argv_859				argv_780;
	string					argv_4502;
	string					argv_2313; // using the registry
	argv_963					argv_2327;
	string					argv_2312;
	bool					argv_4510;
	virtual argv_4536			argv_1121 ();

#if defined (__WIN32_OS__)
	DWORD					argv_4507;
	SERVICE_STATUS			argv_3635;
	HANDLE					argv_2200;
	SERVICE_STATUS_HANDLE	argv_3636; 
	argv_4536					argv_4959 (DWORD,DWORD,DWORD,DWORD,DWORD);
	friend void				argv_4506 (DWORD);
	friend DWORD WINAPI		doit_worker  (argv_2338);
#endif // #if defined (__WIN32_OS__)

#if defined (__LINUX_OS__)
	friend argv_2338			doit_worker  (argv_2338);
	friend void				child_handler (int);
	friend void *			argv_1285 (void *);
#endif // #if defined (__LINUX_OS__)
	argv_4536					argv_2198 ();
	void					reset ();
	argv_4536					argv_1120 ();
	virtual argv_4536			argv_2199 () = 0;

public:
	argv_879 ();
	virtual ~argv_879 ();
	argv_4536					argv_4424 ();

};


class argv_1145
{
public:
	argv_4536	argv_1994;
#if defined (__LINUX_OS__)
	pthread_t argv_1900;
	pthread_t argv_3832;
#endif // #if defined (__LINUX_OS__)
	argv_879 * argv_1177;
};



#endif // argv_411



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1424
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
