// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ pragma directives
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#if defined (__WIN32_OS__) 
	#pragma warning(disable: 4786)
#endif //#if defined (__WIN32_OS__) 



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_395.hpp
// @@ 
// @@ DESCRIPTION:
// @@ public argv_2188 encipher/decipher algorithms
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_500
#define argv_500



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
#include <map>
#include <string>
#include <iostream>
#include <map>

#if defined (__LINUX_OS__)
	#include "../LIB_CRYPTO/argv_280.h"
#endif // #if defined (__LINUX_OS__)
#include "../LIB_CRYPTO/argv_393.hpp"
#include "../LIB_CRYPTO/argv_389.hpp"
#include "../LIB_CRYPTO/argv_390.hpp"
#include "../LIB_CRYPTO/argv_394.hpp"
#include "../LIB/argv_352.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ namespace usage declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
using namespace std;



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ constants
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#define argv_4423 1

#if defined (__BENCH_RSA__)
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
		string argv_4627 (argv_876);
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

	inline string argv_884::argv_4627 (argv_876 _msg) {
		argv_4626 ();
		double elapsed = argv_1756 ();
		char argv_4846[MAX_PATH];
		if (elapsed < 1000000.0) {
			argv_4569 (argv_4846, 1024, "%s : %.02lf microseconds", _msg, elapsed);
		}
		else if ((elapsed >= 1000000.0) && (elapsed < 60000000.0)) {
			elapsed = elapsed / 1000000.0;
			argv_4569 (argv_4846, 1024, "%s : %.02lf seconds", _msg, elapsed);
		}
		else {
			elapsed = elapsed / 60000000.0;
			argv_4569 (argv_4846, 1024, "%s : %.02lf minutes", _msg, elapsed);
		}
		argv_4846[1024 - 1] = '\0';
		return argv_4846;
	}
#endif // #if defined (__BENCH_RSA__)



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1130	
// @@
// @@ DESCRIPTION	:
// @@ This argv_3656 contains all the argv_1178 related
// @@ to the argv_4422 public argv_2188.
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_1130
{
public:
	argv_3530	e;
	argv_3530	n;

	argv_1130 ();
	argv_1130 (argv_893&);
	void construct  (argv_893&);
	void argv_1232   (argv_893&);

	string	argv_1386 (argv_893&);
	argv_4536	argv_2279 (argv_893&, argv_876);
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1129 
// @@
// @@ DESCRIPTION	:
// @@ This argv_3656 contains all the argv_1178 related
// @@ to the argv_4422 private argv_2188.
// @@ 
// @@ NOTICE:
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_1129
{
public:
	argv_3530	d;
	argv_3530	n;
	bool	init_done;

	argv_1129 (argv_893&);
	void	construct (argv_893&);
	void	argv_1232 (argv_893&);

	string	argv_1386 (argv_893&);
	argv_4536	argv_2279 (argv_893&, argv_876);
};


class argv_1127
{
public:
	argv_893 *	argv_1884;
	argv_3530		argv_1001;
	argv_3530		argv_3555;
	argv_3530		argv_933;
	argv_3530		argv_1198;
	argv_3530		argv_4331;
	argv_3530		argv_2460, argv_2399;

	argv_4883		argv_3556;
	argv_4883		argv_796;
	argv_4883		argv_3609;
	argv_4883		nb_remaining;
	argv_4883		argv_1479;

	argv_4883		argv_3600;
	argv_4883		argv_3613;
	argv_4883		argv_4854;
	argv_4883		total_nb_remaining;
	argv_4883		argv_1231;

	argv_4881 *		argv_4584;
	argv_4881 *		argv_1478;
	argv_4883		argv_3616;
	argv_4883		argv_1149;
	argv_4883		argv_4853;

	argv_1127 ();
	void	reset ();
	argv_4536	construct (argv_893 *, argv_3530, argv_4883, bool);
	void	argv_1232 ();
	argv_4536	argv_1073 (argv_3530, argv_4883, bool, argv_4883&);
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1126 
// @@
// @@ DESCRIPTION	:
// @@ This argv_3656 permits to encipher/decipher using the
// @@ argv_4422 public argv_2188 cryptosystem.
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_1126
{
private:
	bool			init_done;
	argv_893	*	argv_1884;
	string			argv_4325;
	string			argv_4324;
	string			argv_4264;
	string			argv_4263;
	string			argv_2252;

	argv_4536			argv_1332 (argv_876, argv_876, argv_3530, argv_3530);
	argv_4536			argv_1197 (argv_876, argv_876, argv_3530, argv_3530);

	argv_4536			argv_1195 (argv_4881 * _src_buf, argv_4883 _src_bufsize, argv_4881 * _dest_buf, argv_4883 _dest_bufsize, argv_4883& _actual_dest_bufsize, argv_3530 _n, argv_3530 _d, argv_3530 _collected_nb, argv_3530 _deciphered_block, argv_4883 _current_block, argv_4883 _total_nb_block, argv_4883 _nb_to_pad, FILE * _fp_log=NULL);
	argv_4536			argv_1330 (argv_4881 * _src_buf, argv_4883 _src_bufsize, argv_4881 * _dest_buf, argv_4883 _dest_bufsize, argv_4883& _actual_dest_bufsize, argv_3530 _n, argv_3530 _e, argv_3530 _collected_nb, argv_3530 _ciphered_block,   argv_4883 _nb_to_pad, argv_3530 _min_rand, argv_3530 _max_rand, argv_3530 _random_trailer, argv_3530 _n_minus_1, FILE * _fp_log=NULL);

public:
	argv_1126 ();
	argv_4536 init (argv_893 *);
	void reset ();
	~argv_1126 ();

	argv_4536 argv_1738 (argv_4536, argv_1130&, argv_1129&);

	argv_4536 argv_1387 (argv_1130&, argv_876,  argv_876);
	argv_4536 argv_1387 (argv_1129&, argv_876, argv_876);

	argv_4536 argv_2283 (argv_876, argv_876, argv_1130&);
	argv_4536 argv_2283 (argv_876, argv_876, argv_1129&);

	argv_4536 argv_1331 (argv_876, argv_876, argv_1130&);
	argv_4536 argv_1331 (argv_876, argv_876, argv_1129&);

	argv_4536 argv_1196 (argv_876, argv_876, argv_1130&);
	argv_4536 argv_1196 (argv_876, argv_876, argv_1129&);

	argv_4536 argv_1328 (argv_4881 *, argv_4883, argv_4881 *, argv_4883, argv_4883&, argv_1130&);
	argv_4536 argv_1328 (argv_4881 *, argv_4883, argv_4881 *, argv_4883, argv_4883&, argv_1129&);

	argv_4536 argv_1193 (argv_4881 *, argv_4883, argv_4881 *, argv_4883, argv_4883&, argv_1130&);
	argv_4536 argv_1193 (argv_4881 *, argv_4883, argv_4881 *, argv_4883, argv_4883&, argv_1129&);

	argv_4536 argv_1073 (argv_3530, argv_4883, bool, argv_4883&);
	argv_4536 argv_1329 (argv_4881 *, argv_4883, argv_4881 *, argv_4883, argv_4883&, argv_3530, argv_3530);
	argv_4536 argv_1194 (argv_4881 *, argv_4883, argv_4881 *, argv_4883, argv_4883&, argv_3530, argv_3530);
};



#endif // #define argv_500



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1424
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

