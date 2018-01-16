// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_362.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1424 contains all the argv_1178 structures
// @@ and objects that permit to use the 
// @@ platform independant kernel
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_473
#define argv_473



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_354.hpp"
#include "../LIB_AVX/general_avx.hpp"
#include "../LIB/argv_369.hpp"
#if defined (__LINUX_OS__)
	#include <dlfcn.h>
#endif // #if defined (__LINUX_OS__)


// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ namespace usage declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
using namespace std;



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ functions pointers for the functions exported by the kernel
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
enum argv_2142 {
	argv_2160 = 0,
	argv_2159,
	argv_2158,
	argv_2161,
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ functions pointers for the functions exported by the kernel
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
typedef argv_2338	(* argv_1523)				();
typedef argv_4536	(* argv_1532)				(argv_2338);
typedef argv_4536	(* argv_1513)					(argv_2338, argv_876, argv_876, argv_876, argv_876, argv_2338&);
typedef argv_4536	(* argv_1646)				(argv_2338);
typedef argv_4536	(* argv_1547)			(argv_2338, argv_4883&, argv_4883&);
typedef argv_4536	(* argv_1546)	(argv_2338, argv_4883&, argv_4883&);
typedef argv_4536	(* argv_1548)				(argv_2338, argv_876, argv_2338 *);

typedef argv_4536	(* argv_1561)			(argv_2338&, argv_2338);



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ inner functions exported by the kernel
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
typedef argv_4536 (* argv_1562)			(argv_2338&, char *, bool&, argv_2338&);	
typedef argv_4536 (* argv_1559)			(argv_2338&, argv_2338, char *, argv_4536&);		
typedef argv_4536 (* argv_1560)		(argv_2338&, argv_2338, char *&, argv_4883&);
typedef argv_4536 (* argv_1558)	(argv_2338);



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_936
// @@
// @@ DESCRIPTION	:	
// @@ This argv_3656 permits to create an abstraction of the
// @@ plugin based kernel to hide all complicated mechanisms
// @@ for use easiness purpose and low argv_976 coupling.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_936
{
private:
	//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
	FILE	*						argv_1512;
	void							argv_4429 (argv_876);
	//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
	argv_4881							argv_4622;				// to ensure that operations are allowed
	argv_2338							argv_2175;			// contains the kernel's memory
	argv_2338							argv_2117;		// no need to know about that
	argv_2338							argv_4469;	// no need to know about that
	argv_963 *							argv_2316;
	argv_4536							argv_2214;
	string							argv_4420;
	string							argv_4502;
	string							argv_1085;
	string							argv_2312;
	string							argv_1275;
	string							argv_3892;
	string							argv_4442;
	string							argv_1301;
	string							argv_2118;
	string							argv_1786;
	string							argv_4847;
	string							argv_2163;

#if defined (__WIN32_OS__) 
	HMODULE							argv_1989;
#endif // #if defined (__WIN32_OS__) 
#if defined (__LINUX_OS__)
	argv_2338							argv_1989;
#endif // #if defined (__LINUX_OS__)

	argv_1523				argv_1653;
	argv_1532				argv_1656;
	argv_1513					argv_1650;	
	argv_1646				argv_1711;
	argv_1547			argv_1660;
	argv_1546	argv_1659;
	argv_1548				argv_1661;

	argv_1562			argv_1669;
	argv_1559				argv_1666;
	argv_1560		argv_1667;
	argv_1561			argv_1668;
	argv_1558	argv_1665;

	argv_4536							argv_2284 (argv_876);
	argv_4536							argv_2330 (argv_876, argv_2338&);
	argv_4536							argv_4935 ();
	argv_4536							argv_1768 (argv_4536&);
	argv_4536							argv_1242 (argv_4536, argv_876);
	void							argv_1243 (argv_876, argv_4536);
	argv_4536							argv_4248 ();
	argv_4536							argv_2329 ();
	argv_4536							argv_2331 ();
	void							reset ();

public:
	argv_936 ();
	argv_4536							construct_kernel (argv_876, argv_876, argv_963 *);

	argv_4536							argv_822 ();
	argv_4536							argv_4532 ();

	argv_4536							argv_1234 ();

	argv_4536							argv_4458 (argv_876, bool, bool&, bool&, argv_1108&, bool&, bool&, argv_4536&);
};



#endif // argv_473



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1424
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
