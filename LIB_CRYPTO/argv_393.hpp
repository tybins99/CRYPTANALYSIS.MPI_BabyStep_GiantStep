// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ pragma directives
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#if defined (__WIN32_OS__) 
	#pragma warning(disable: 4786)
#endif //#if defined (__WIN32_OS__) 



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_393.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1424 contains all argv_1178 structures and
// @@ functions necessary to use the gmp library
// @@ as a dynamic library.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_447
#define argv_447



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

#if defined (__WIN32_OS__) 
	#include "../LIB_CRYPTO/argv_279.h"
#endif // #if defined (__WIN32_OS__) 

#if defined (__LINUX_OS__)
	#include <dlfcn.h>
	#include <sys/argv_4843.h>
	#include <unistd.h>
	#include "../LIB_CRYPTO/argv_280.h"
#endif // #if defined (__LINUX_OS__)

#include "../LIB/argv_349.hpp"
#include "../LIB_CRYPTO/argv_389.hpp"
#include "../LIB_CRYPTO/argv_392.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ namespace usage declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
using namespace std;



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ constants
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#define argv_2390	 4096



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ gmp function pointers
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
typedef void				(* argv_1685)			(argv_3530 integer);
typedef void				(* argv_1674)		(argv_3530 integer);
typedef void				(* argv_1698)		(argv_3530, unsigned long int);
typedef char *				(* argv_1684)		(char *, int, argv_3530);
typedef int					(* argv_1676)			(argv_3530, argv_3530);
typedef size_t				(* argv_1694)		(FILE *, int, argv_3530);
typedef int					(* argv_1678)	(argv_3530, argv_3530, argv_3530);
typedef	void				(* argv_1695)			(argv_3530, argv_3530, argv_3530, argv_3530);
typedef void				(* argv_1691)		(argv_3530, argv_3530, unsigned long int);
typedef int					(* argv_1677)		(argv_3530, unsigned long int);
typedef void				(* argv_1672)		(argv_3530 rop, argv_3530, unsigned long int op2);
typedef void				(* argv_1682)			(argv_3530 rop, argv_3530, argv_3530);
typedef void				(* argv_1701)			(argv_3530 rop, argv_3530, argv_3530);
typedef void				(* argv_1673)	(argv_3530 q, argv_3530, unsigned long int b);
typedef size_t				(* argv_1687)		(argv_3530, FILE *, int);
typedef void				(* argv_1663) (argv_1878);
typedef void				(* argv_1664)	(argv_1878, unsigned long int);
typedef void				(* argv_1705)		(argv_3530 rop, argv_1878, argv_3530);
typedef void				(* argv_1689)			(argv_3530, argv_3530, argv_3530);
typedef void				(* argv_1690)			(argv_3530, argv_3530, argv_3530);
typedef void				(* argv_1702)			(argv_3530, argv_3530, unsigned long int);
typedef void				(* fptr_mpz_set)			(argv_3530, argv_3530);
typedef unsigned long int	(* argv_1681)		(argv_3530, unsigned long int);
typedef void				(* fptr_mpz_init_set)		(argv_3530, argv_3530);
typedef void				(* argv_1679)			(argv_3530, argv_3530, argv_3530);
typedef void				(* argv_1704)		(argv_3530, argv_1878, unsigned long int);
typedef void				(* argv_1680)	(argv_3530, argv_3530, unsigned long int);
typedef int					(* argv_1696) (argv_3530, int);
typedef void				(* argv_1671)			(argv_3530, argv_3530, argv_3530);
typedef int					(* argv_1697)		(argv_3530, const char *, int);
typedef int					(* argv_1686)	(argv_3530, const char *, int);
typedef int					(* argv_1688)			(argv_3530, argv_3530, argv_3530);
typedef void				(* argv_1693)		(argv_3530, argv_3530);
typedef void				(* argv_1703)		(argv_3530, unsigned long int, unsigned long int);
typedef void				(* argv_1699)			(argv_3530, unsigned long int);
typedef void				(* argv_1675)			(argv_3530, unsigned long int);
typedef unsigned long int	(* argv_1683)			(argv_3530, argv_3530, unsigned long int);
typedef void				(* argv_1700)			(argv_3530, argv_3530);
typedef	void				(* argv_1692)			(argv_3530, argv_3530);


// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_893
// @@
// @@ DESCRIPTION:
// @@ This argv_3656 contains all the necessary function pointers
// @@ to work argv_5011 the GMP library necessary for El-Gamal and
// @@ RSA algorithms.
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_893
{
private:
#if defined (__WIN32_OS__) 
	HINSTANCE argv_1902;
#endif // #if defined (__WIN32_OS__) 

#if defined (__LINUX_OS__)
	LPVOID argv_1902;
#endif // #if defined (__LINUX_OS__)

	int32_t argv_2287  ();
	int32_t argv_2288 ();

	int32_t argv_2286 ();
	int32_t argv_2289 (const char *, void *&);
	int32_t init_random_generator ();

	argv_1878			argv_4330;

	string					argv_2215;

	bool					argv_2459			(argv_3530, argv_3530);
	bool					argv_2458			(argv_3530, uint32_t);
	void					argv_1273				(const char * , argv_3530);
	bool					argv_2097			(argv_3530, argv_3530);
	bool					argv_2095				(argv_3530);
	void					argv_1737	(uint32_t);

public:
	argv_1677					argv_1586;
	argv_1685					argv_1594;
	argv_1674					argv_1583;
	argv_1698					argv_1607;
	argv_1684				argv_1593;
	argv_1676					argv_1585;
	argv_1694				argv_1603;
	argv_1678			argv_1587;
	argv_1695					argv_1604;
	argv_1691				argv_1600;
	argv_1672					argv_1581;
	argv_1682					argv_1591;
	argv_1701					argv_1610;
	argv_1673			argv_1582;
	argv_1687				argv_1596;
	argv_1663		argv_1551;
	argv_1664			argv_1552;
	argv_1705				argv_1614;
	argv_1689					argv_1598;
	argv_1690					argv_1599;
	argv_1702					argv_1611;
	fptr_mpz_set					fp_mpz_set;
	argv_1681				argv_1590;
	fptr_mpz_init_set				fp_mpz_init_set;
	argv_1679					argv_1588;
	argv_1704				argv_1613;	
	argv_1680			argv_1589;
	argv_1696			argv_1605;
	argv_1671					argv_1580;
	argv_1697				argv_1606;
	argv_1686			argv_1595;
	argv_1688					argv_1597;
	argv_1693				argv_1602;
	argv_1703				argv_1612;
	argv_1699					argv_1608;
	argv_1675					argv_1584;
	argv_1683					argv_1592;
	argv_1700					argv_1609;
	argv_1692					argv_1601;

	argv_893 ();
	int32_t	argv_2284			(const char *);
	int32_t	argv_4935			();
	string	argv_1768			();
	void	argv_1742	(uint32_t, argv_3530, argv_3530);
	bool	argv_1480		(argv_3530, argv_3530, argv_3530);
	void	argv_1739  (argv_3530, argv_3530, argv_3530);
	void	argv_1740	(uint32_t, argv_3530);
	void	init_random_generator	(uint32_t);

	string	argv_4985 (argv_3530 _var, bool _display_in_hexa=false);
	string  argv_1344 (int32_t);
	void	reset ();
};



#endif // #define argv_447



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1424
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
