// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_415
#define argv_415


// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
/*
#include <Windows.h>
#include <windows.h>
#include <winnt.h>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <map>
#include <string>
#include <iostream>
#include <map>
#include "../LIB_CRYPTO/argv_279.h"
#include "../LIB_CRYPTO/argv_392.hpp"
#include "../LIB_CRYPTO/argv_393.hpp"
#include "../LIB_CRYPTO/argv_389.hpp"
#include "../LIB_CRYPTO/argv_390.hpp"
#include "../LIB_CRYPTO/argv_394.hpp"
#include "../LIB/argv_357.hpp"
*/



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ namespace usage declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//using namespace std;
/*
#define argv_4528 256

class Caaaaa
{
private:
	argv_900		argv_1909;
	FILE      *		argv_1576;
	argv_893 *		argv_1884;
	void			argv_1076 (argv_3530, argv_3530);
	void			argv_775 (argv_3530, argv_3530, argv_3530);
	void			argv_1797 (argv_3530, argv_3530, argv_3530, argv_3530, argv_3530);

public:
	Caaaaa ();
	void			init (argv_893 *, FILE *);
	bool			argv_4389 (argv_3530, argv_3530, argv_3530, argv_3530);
	bool			argv_926 ();
};
*/

#include "../LIB_CRYPTO/argv_279.h"
#include "../LIB_CRYPTO/argv_392.hpp"
#include "../LIB_CRYPTO/argv_393.hpp"
#include "../LIB/argv_357.hpp"

// 2^32 =                      4294967296
//#define argv_4528 12949672
#define argv_4528 1205360

class Crandom_data_set
{
public:
	argv_893 *		argv_1884;

	argv_3530 argv_2556;
	argv_3530 argv_1749;
	argv_3530 argv_928;
	argv_3530 argv_793;
	argv_3530 argv_2557;
	argv_3530 argv_3677;
	argv_3530 argv_3696;

	Crandom_data_set (argv_893 *);
	~Crandom_data_set ();
};

class argv_1139
{
private:
	argv_3530			argv_2396;
	argv_3530			argv_3553;
	argv_3530			argv_4620;
	argv_3530			argv_4628;
	argv_3530			argv_3690;
	argv_3530			argv_3612;
	argv_3530			argv_4637;
	argv_3530			argv_4638;

	argv_900		argv_1909;
	FILE      *		argv_1576;
	argv_893 *		argv_1884;
	void			argv_1274 (const char * _varname, argv_3530 _value, bool _display_2_log=true);
	void			argv_1080 ();
	void			argv_1076 (argv_3530, argv_3530);
	void			argv_775 (argv_3530, argv_3530, argv_3530);
	bool			argv_1797 (argv_3530, argv_3530, argv_3530, argv_3530, argv_3530);

public:
	argv_1139 ();
	void			init (argv_893 *, FILE *);
	bool			argv_4389 (uint32_t, uint32_t, uint32_t, argv_3530, argv_3530, argv_3530, string&);
	bool			argv_926 (uint32_t, uint32_t, uint32_t, string&);
	void			argv_925 (Crandom_data_set&, uint32_t);
};

#endif // #define argv_415



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1424
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

