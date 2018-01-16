// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_360.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1424 contains the definition of the 
// @@ general kernel argv_3656 that permits to create
// @@ platform independant systems. 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_471
#define argv_471



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ pragma
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#if defined (__WIN32_OS__) 
#pragma warning(disable: 4786)
#pragma warning(disable: 4503)
#pragma warning(disable: 4291)
#endif // #if defined (__WIN32_OS__) 



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ include files
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <map>
#if defined (__WIN32_OS__) 
	#include <Windows.h>
#endif // #if defined (__WIN32_OS__) 

#include "../LIB/argv_365.hpp"
#include "../LIB/argv_366.hpp"
#include "../LIB/argv_367.hpp"
//#include "../LIB/argv_375.hpp"
#include "../LIB/argv_387.hpp"
//#include "../LIB/argv_361.hpp"
#include "../LIB/argv_377.hpp"
#include "../LIB/argv_354.hpp"
#include "../LIB/argv_380.hpp"
//#include "../LIB/argv_376.hpp"
#include "../LIB/argv_369.hpp"
#include "../LIB/argv_363.hpp"
#include "../LIB_CRYPTO/argv_392.hpp"
#include "../LIB_CRYPTO/argv_393.hpp"


#if defined (argv_3676)
        #include <strstream.h>
#else
        #include <sstream>
#endif



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ namespace declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
using namespace std;



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ constants declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#if defined (__WIN32_OS__) 
	#ifdef SYSTEM_DLL_EXPORTS
	#define argv_4750 __declspec(dllexport)
	#else
	#define argv_4750 __declspec(dllimport)
	#endif
#endif // #if defined (__WIN32_OS__) 



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ necessary function pointers definition
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
typedef void (* argv_1550)		(argv_4883&, argv_4883&);
typedef argv_4536 (* argv_1557)		(argv_2338, argv_876, argv_4610 *);
typedef argv_4536 (* argv_1563)	(argv_2338&);



class argv_935
{
public:
	bool						argv_3574;
	bool						argv_4911;
	bool						argv_1169;
	bool						argv_821;
	bool						argv_4665;
	bool						argv_4327;
	bool						argv_1843;

	string						argv_3572;	// argv_3557 of the copy
	string						argv_1064; // argv_3557 of the copy 
	string						argv_931;	// argv_3557 of the copy
	string						argv_3895;

	argv_891				argv_1798;
	argv_1141				argv_4751;
	argv_4610 *				argv_4757; // group of argv_4749 independant functions
	argv_870				argv_1068;
	argv_877				argv_1174;
	argv_1166				argv_5021;
//	map<argv_4883, argv_1123>	m_resolve_query;
//	map<string, argv_1123>	m_unique_resolve_query; // for unique symbols (tool,..)

	vector<string>				argv_4976;	
	vector<string>				argv_4975;

	map<string, argv_1082 *>	argv_2379; 
	argv_1125				argv_4397;

	argv_893					argv_1883;
	argv_1126						argv_4422;
	argv_1130				argv_4326;

	argv_935 ();
	void reset ();
};



class argv_934
{
protected:
	argv_935			argv_1993;
	argv_4536						argv_2285 (argv_876);
	argv_4536						argv_4897 ();

	argv_4536						argv_2296 (argv_876);
	argv_4536						argv_4901 ();

	argv_4536						argv_2276 (argv_876);
	argv_4536						argv_4895 ();

	argv_4536						argv_820  (argv_876, argv_876, argv_876, argv_876, argv_2338&);
	argv_4536						argv_4891  ();

	argv_4536						argv_823 (argv_876, argv_876, argv_876, argv_876, argv_2338&);
	argv_4536						argv_4892 ();

	void						argv_1243 (argv_876, argv_4536, argv_4536);

	argv_4536						argv_3684 (argv_876, argv_876);
	argv_4536						argv_4902 ();

	argv_4536						argv_1746 (argv_876, argv_876);
	argv_4536						argv_4893 ();

	argv_4536						argv_4394 (map<string, argv_1082 *>::iterator&);
	argv_4536						argv_4906 ();

	argv_4536						argv_2280 (argv_876);
	argv_4536						argv_4896 ();

	argv_4536						argv_2293 (argv_876);
	argv_4536						argv_4900 ();

	argv_4536						argv_2292 (argv_876);
	argv_4536						argv_4899 ();

	argv_4536						argv_2290 (argv_876, argv_876, argv_1082 *);
	argv_4536						argv_4898 ();

	argv_4536						argv_2275 ();
	argv_4536						argv_4894 ();

	argv_4536						argv_3716 (argv_4881 *, argv_4883, argv_876);
	argv_4536						argv_4903 ();

	argv_4536						argv_4396 ();
	argv_4536						argv_4908 ();

	argv_4536						resolve_all_symbols_of_profile (map<string, argv_1082 *>::iterator&, argv_1123&);
	argv_4536						resolve_one_multiple_plugin_symbols (map<string, argv_1082 *>::iterator&);
	argv_4536						resolve_one_unique_plugin_symbols (map<string, argv_1082 *>::iterator&);

	argv_4536						argv_4395 (map<string, argv_1082 *>::iterator&, argv_876, bool);
	argv_4536						argv_4907 ();

	argv_4536						argv_4247 ();
	argv_4536						argv_4905 ();

//	virtual	argv_4536				prepare_symbols_2_resolve ();
//	virtual	argv_4536				un_prepare_symbols_2_resolve ();

	virtual argv_4536				argv_819 (argv_876, argv_876, argv_876, argv_876, argv_2338&);
	virtual argv_4536				argv_4890 ();
	
	virtual argv_4536				argv_4238 ();
	virtual argv_4536				argv_4904 ();

	void						remove_remaining_tmp_files (argv_876, argv_876, argv_876);

public:
	argv_934 ();
	void						reset ();
	virtual						~argv_934 ();
	argv_4536						argv_818 (argv_876, argv_876, argv_876, argv_876, argv_2338&);
	argv_4536						argv_4531 ();
	argv_4536						argv_1796 (argv_4883&, argv_4883&);
	argv_4536						argv_1767 (argv_4883&, argv_4883&);
	argv_4536						argv_1784 (argv_876, argv_2338&);
};



#endif // argv_471



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ end of argv_1424
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

