// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_383.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1424 contains the argv_1178 structures and
// @@ functions declarations necessary for other
// @@ parts to use the argv_4749 tool argv_3656 that
// @@ permits to perform platform independant
// @@ argv_4749 calls.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_502
#define argv_502



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_354.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ necessary function pointers definition
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
typedef void *  (* argv_1578) (size_t);
typedef void    (* argv_1545) (void *);


// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ just a test
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
typedef void * (* argv_1524)	();
typedef void   (* argv_1533)		(void *);
typedef void   (* argv_1511)			(void *, argv_4883, argv_4883);
typedef bool   (* argv_1553)	(void *, argv_4883);
typedef argv_4883   (* argv_1577)		(void *, argv_4883);


// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ simple list
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
typedef argv_4536	(* argv_1571)	(argv_2338 *);
typedef void	(* argv_1572)	(argv_2338);
typedef void	(* fp_list_reset)		(argv_2338);
typedef argv_4883	(* argv_1575)	(argv_2338);
typedef argv_4536	(* argv_1570)			(argv_2338, argv_2338, bool);
typedef argv_4536	(* argv_1573)	(argv_2338, argv_2338 *);
typedef argv_4536	(* argv_1574)	(argv_2338, argv_2338 *);



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ complex list
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
typedef argv_4536 (* argv_1525)					(argv_2338 *);
typedef argv_4536 (* argv_1531)				(argv_2338);
typedef argv_4536 (* argv_1520)		(argv_2338, argv_4883, argv_876, argv_2338&);
typedef argv_4536 (* argv_1518)				(argv_2338, argv_4883, argv_4883& _nb_elem);
typedef argv_4536 (* argv_1517)		(argv_2338, argv_4883, argv_876, argv_2338&, argv_4883&);
typedef argv_4536 (* argv_1516)	(argv_2338, argv_4883, argv_876, argv_2338&, argv_2338 *);
typedef argv_4536 (* argv_1519)	(argv_2338, argv_4883, argv_876, argv_2338&, argv_2338 *);
typedef argv_4536 (* argv_1515)					(argv_2338, argv_4883, argv_876);
typedef argv_4536 (* argv_1514)			(argv_2338, argv_2338&, argv_4883, argv_876, argv_2338);



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ argv_1424 memory mapper function pointers definition
// @@ These functions pointers permit to create/argv_1232 and use
// @@ a C argv_1424 mapper.
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
typedef argv_4536 (* argv_1541)				(argv_2338 *, argv_2338, argv_2338);
typedef argv_4536 (* argv_1542)			(argv_2338);
typedef argv_4536 (* argv_1544)			(argv_2338, argv_876, argv_4883, argv_4881 *&, argv_4883&);
typedef argv_4536 (* argv_1540)	(argv_2338);
typedef argv_4536 (* argv_1543) (argv_2338, argv_4883&, argv_4883&);



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ group of argv_4749 NATIVE functions imported
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
typedef argv_4883	(* argv_1630)	(argv_1108, argv_4883);
typedef FILE *	(* argv_1622)					(const char *, const char *);
typedef int		(* argv_1619)				(FILE *);
typedef int		(* argv_1626)					(FILE *, long, int);
typedef long	(* argv_1627)					(FILE *);
typedef size_t  (* argv_1623)					(void *, size_t, size_t, FILE *);
typedef size_t  (* argv_1628)				(const void *, size_t, size_t, FILE *);
typedef size_t	(* argv_1636)				(const char *);
typedef void *  (* argv_1615)	(int);
typedef void    (* argv_1625)		(void *, argv_4883);
typedef void    (* argv_1621)			();
typedef char *  (* argv_1620)					(char *, int, FILE *);
typedef char *  (* argv_1640)				(argv_876, argv_876);
typedef void *	(* argv_1634)				(void *, const void *, size_t);
typedef void *  (* fp_NATIVE_memset)				(void *, int, size_t);
typedef int		(* argv_1633)				(const void *, const void *, size_t);
typedef void *  (* argv_1632)				(size_t);
typedef void    (* argv_1624)					(void *);
typedef char *  (* argv_1639)				(char *, argv_876, size_t);
typedef char *	(* argv_1637)				(char *, argv_876, size_t);
typedef char *	(* argv_1638)				(argv_876, argv_876, size_t);
typedef argv_4883    (* argv_1631)				(argv_4883);		
typedef char *  (* argv_1640)				(argv_876, argv_876);
typedef argv_4536	(* argv_1566)					(argv_2338 *, argv_876);
typedef argv_4536	(* argv_1567)				(argv_2338);
typedef void	(* argv_1569)					(argv_2338, argv_4883, argv_876);
typedef void	(* argv_1564)						(argv_2338, argv_4883, argv_876, argv_876);
typedef void	(* argv_1565)						(argv_2338, argv_4883, argv_876, argv_4883);
typedef void	(* argv_1568)						(argv_2338, argv_4883, argv_876, argv_4883);
typedef bool	(* argv_1616)	(argv_876);
typedef argv_4536	(* argv_1617)				(argv_876, argv_876);
typedef argv_4536	(* argv_1629)		(argv_876, argv_876, argv_876, argv_876, argv_1108);
typedef argv_4536	(* argv_1618)			(argv_876);
typedef argv_4536	(* argv_1635)		(argv_876, argv_4883);



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ plugin debug log facility
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
typedef void	(* fp_kdbg_reset)					(argv_876);
typedef void	(* argv_1555)				(argv_876, argv_876);
typedef void	(* argv_1554)					(argv_876, argv_876, argv_4883);
typedef void	(* argv_1556)				(argv_876, argv_876, argv_4883);



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ 
// @@ STRUCTURE NAME: argv_4610
// @@
// @@ DESCRIPTION:
// @@ This argv_1178 structure contains all native functions
// @@ that are argv_4749 dependant.
// @@ These argv_4749 dependant functions, after being collected, permit
// @@ to create a platform independant program.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
typedef struct argv_630 {
	argv_1630		argv_3589;
	argv_1622						argv_3581;
	argv_1619					argv_3578;
	argv_1626						argv_3585;
	argv_1627						argv_3586;
	argv_1623						argv_3582;
	argv_1628					argv_3587;
	argv_1636					argv_3595;
	argv_1615		argv_3571;
	argv_1625			argv_3584;
	argv_1621				argv_3580;
	argv_1620						argv_3579;	
	argv_1640					argv_3599;	
	argv_1634					argv_3593;
	fp_NATIVE_memset					NATIVE_memset;
	argv_1633					argv_3592;
	argv_1632					argv_3591;
	argv_1624						argv_3583;
	argv_1639					argv_3598;
//	fp_NATIVE_strcpy					NATIVE_strcpy;
//	fp_NATIVE_strcat					NATIVE_strcat;
	argv_1637					argv_3596;
	argv_1638					argv_3597;
	argv_1631					argv_3590;
	argv_1616		argv_3575;
	argv_1617					argv_3576;
	argv_1629			argv_3588;
	argv_1618				argv_3577;
	argv_1635			argv_3594;

	argv_1541					argv_2385;	
	argv_1542					argv_2386;
	argv_1544				argv_2388;	
	argv_1540		argv_2384;
	argv_1543		argv_2387;

	argv_1566						argv_2203;
	argv_1567					argv_2204;
	argv_1569						argv_2206;
	argv_1564							argv_2201;
	argv_1565							argv_2202;
	argv_1568							argv_2205;

	// plugin debug facility
	fp_kdbg_reset						kdbg_reset;
	argv_1555					argv_2108;
	argv_1554						argv_2107;
	argv_1556					argv_2109;

	// list
	argv_1571					argv_2260;
	argv_1572					argv_2262;
	fp_list_reset						list_reset;	
	argv_1575					argv_2266;
	argv_1570							argv_2259;
	argv_1573					argv_2264;
	argv_1574					argv_2265;

	// complex list
	argv_1525				argv_1117;
	argv_1531			argv_1233;
	argv_1520		argv_1062;
	argv_1518			argv_1052;
	argv_1517		argv_1051;
	argv_1516 argv_1050;
	argv_1519  argv_1053;
	argv_1515				argv_1049;
	argv_1514		argv_1048;

} argv_4610;



#endif // argv_502



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1424
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
