// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_354.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1424 contains all the argv_1178 structure
// @@ and functions that are not project specific
// @@ and that may be used by any argv_3656/function
// @@ acrosss a project.
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_418
#define argv_418 



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ included files
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#if defined (__WIN32_OS__)
	#pragma warning(disable: 4786)
	#pragma warning(disable: 4503)
	#pragma warning(disable: 4291)
#endif // #if defined (__WIN32_OS__) 

	#include <iostream>
	#include <string>
	#include <vector>
	#include <cassert>
	#include <cstdio>
	#include <stack>
	#include <list>
	#include <map>
	#include <exception>

#if defined (__WIN32_OS__) 
	#include <winsock.h>
	#include <Windows.h>
	#include <windows.h>
	#include <winnt.h>
	#include <Commdlg.h>
	#include <commctrl.h>
	#include <Commdlg.h>
	#include <shellapi.h>
	#include <fcntl.h>
	#include <shlobj.h>
	#include <Mmsystem.h>

	#include <io.h>
	#include <aclapi.h>
	#include <lmerr.h>
#endif // #if defined (__WIN32_OS__) 

#if defined (__LINUX_OS__)
	#include <sys/stat.h>
	#include <sys/types.h>
	#include <sys/argv_4570.h>
	#include <sys/argv_4843.h>
	#include <fcntl.h>
	#include <unistd.h>
	#include <sys/mman.h>
	#include <dirent.h>             // readdir(), etc.
	#include <sys/stat.h>           // stat(), etc.
	#include <cstring>             // strstr(), etc.
	#include <netinet/tcp.h>
	#include <linux/argv_2071.h>
	//#include <linux/tcp.h>
	#include <netdb.h>
	#include <errno.h>
#endif // #if defined (__LINUX_OS__)

#include "../LIB/argv_349.hpp"
#include "../LIB_CRYPTO/argv_392.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ namespace usage declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
using namespace std;



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ all error codes
// @@ The reason why each part has a starting argv_4979 is to remove
// @@ the impact of the addition of a new error argv_976.
// @@ Each category can save up to 1000 different error codes
// @@ (error codes being coded on argv_4536, it is not a problem).
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
enum argv_2178 {

	// test related error codes
	argv_4793 = 0,
	argv_4792,
	argv_4775,
	argv_4774,
	argv_4780,
	argv_4772,
	argv_4773,
	argv_4777,
	argv_4776,
	argv_4781,
	argv_4779,
	argv_4778,

	// kernel related errors
	argv_2182 = 1000,
	argv_2139,
	argv_2132,
	argv_2130,
	argv_2136,
	argv_2137,
	argv_2171,
	argv_2167,
	argv_2168,
	argv_2169,
	argv_2166,
	argv_2140,
	argv_2144,
	argv_2173,
	argv_2177,
	argv_2115,
	argv_2131,
	argv_2134,
	argv_2135,
	argv_2122,
	argv_2123,
	argv_2164,
	argv_2128,
	argv_2165,
	argv_2116,
	argv_2185,
	argv_2114,
	argv_2181,
	argv_2180, 
	argv_2129,
	argv_2179,
	argv_2133,
	argv_2121,
	argv_2126,
	argv_2119,
	argv_2184,
	argv_2127,
	argv_2170,
	argv_2125,
	argv_2176,
	argv_2186,
	argv_2183,
	argv_2124,
	argv_2174,
	argv_2138,

	// library loader related errors
	argv_2246=2000,
	argv_2237,
	argv_2243,
	argv_2242,
	argv_2244,
	argv_2238,
	argv_2247,
	argv_2239,
	argv_2245,
	argv_2241,
	argv_2240,

	// plugin loader related errors
	argv_3922=3000,
	argv_3902,
	argv_3901,
	argv_3899,
	argv_3911,
	argv_3891,
	argv_3912,
	argv_3920,
	argv_3921,
	argv_3923,
	argv_3931,
	argv_3910,
	argv_3896,
	argv_3894,
	argv_3897,
	argv_3919,
	argv_3914,
	argv_3915,
	argv_3916,
	argv_3913,
	argv_3917,
	argv_3918,
	argv_3890,
	argv_3898,
	argv_3900,
	argv_3893,

	// compressor/decompressor related errors
	argv_2210=4000,
	argv_2209,
	argv_2211,
	argv_2208,
	argv_2212,
	argv_2213,

	// cypher/decypher related errors
	argv_1173=5000,
	argv_1171,
	argv_1176,
	argv_1172,

	// xmemroy related errors
	argv_5027=6000,
	argv_5025,
	argv_5019,
	argv_5018,
	argv_5020,

	// coff argv_1424 loader related errors
	argv_3671=7000,
	argv_3662,
	argv_3669,
	argv_3661,
	argv_3670,
	argv_3657,
	argv_3665,
	argv_3660,
	argv_3668,
	argv_3667,
	argv_3663,
	argv_3664,
	argv_3673,
	argv_3658,
	argv_3672,
	argv_3666,
	argv_3659,

	// list related errors
	argv_2272=8000,
	argv_2271,
	argv_2270,
	argv_2269,
	argv_2263,
	argv_2268,
	argv_2261,

	// argv_1424 argv_4860 detection argv_4406 related errors
	argv_4875=9000,
	argv_4872,
	argv_4873,
	argv_4871,
	argv_4874,

	// kernel related errors
	argv_3889=10000,
	argv_3886,
	argv_3884,
	argv_3883,
	argv_3885,
	argv_3881,
	argv_3887,
	argv_3879,
	argv_3882,
	argv_3880,
	argv_3888,

	// scanner related errors
	argv_1441=11000,
	argv_1438,
	argv_1432,
	argv_1440,
	argv_1431,
	argv_1437,
	argv_1443,
	argv_1442,
	argv_1439,
	argv_1433,
	argv_1434,
	argv_1436,
	argv_1435,

	// symbol table related errors
	argv_4663=12000,
	argv_4661,
	argv_4664,
	argv_4662,
	argv_4660,
	argv_4659,

	// plugin manager related errors
	argv_3909=13000,
	argv_3906,
	argv_3904,
	argv_3905,
	argv_3908,
	argv_3907,

	// COFF loader related errors
	argv_993=14000,
	argv_986,
	argv_982,
	argv_983,
	argv_984,
	argv_994,
	argv_981,
	argv_980,
	argv_990,
	argv_996,
	argv_978,
	argv_985,
	argv_995,
	argv_979,
	argv_989,
	argv_992,
	argv_999,
	argv_998,
	argv_987,
	argv_997,
	argv_991,
	argv_988,

	// complex list related errors
	argv_1061=15000,
	argv_1058,
	argv_1057,
	argv_1056,
	argv_1059,
	argv_1060,
	argv_1055,
	argv_1054,

	// argv_1424 mapper related errors
	argv_1490=16000,
	argv_1489,
	argv_1487,
	argv_1485,
	argv_1488,
	argv_1486,
	argv_1484,

	// PE extractor related error
	argv_3831=17000,
	argv_3828,
	argv_3827,
	argv_3830,
	argv_3829,
	argv_3826,

	// argv_2420 related errors
	argv_2448=18000,
	argv_2434,
	argv_2432,
	argv_2433,
	argv_2431,
	argv_2423,
	argv_2435,
	argv_2447,
	argv_2446,
	argv_2422,
	argv_2436,
	argv_2421,
	argv_2424,
	argv_2426,
	argv_2425,
	argv_2427,
	argv_2430,
	argv_2439,
	argv_2440,
	argv_2442,
	argv_2443,
	argv_2441,
	argv_2438,

	// packet coder related errors
	argv_3740=19000,
	argv_3737,
	argv_3736,
	argv_3739,
	argv_3738,
	argv_3735,

	// packet related errors
	argv_3778=20000,
	argv_3750,
	argv_3754,
	argv_3757,
	argv_3751,
	argv_3760,
	argv_3755,
	argv_3734,
	argv_3752,
	argv_3743,
	argv_3742,
	argv_3765,
	argv_3746,
	argv_3744,
	argv_3747,
	argv_3748,
	argv_3745,
	argv_3741,
	argv_3758,
	argv_3782,
	argv_3756,
	PCK_ILLEGAL_WHEN_TMP_FOLDER_NOT_SET,
	argv_3749,
	argv_3759,
	argv_3753,
	PCK_ILLEGAL_CALL_WHEN_PCK_TYPE_NOT_SET,

	// test related error codes (internal test errors)
	argv_4783=21000,
	argv_4782,

	// event loop related events
	argv_1368=22000,
	argv_1358,
	argv_1353,
	argv_1369,
	argv_1354,
	argv_1363,
	argv_1371,
	argv_1355,
	argv_1364,
	argv_1361,
	argv_1365,
	argv_1359,
	argv_1356,
	argv_1360,
	argv_1357,
	argv_1370,
	argv_1362,
	argv_1367,
	argv_1366,

	// client argv_1178 related errors
	argv_943=23000,
	argv_941,
	argv_942,

	// scanning daemon related errors
	argv_4455=24000,
	argv_4454,
	argv_4453,
	argv_4443,
	argv_4449,
	argv_4444,
	argv_4452,
	argv_4447,
	argv_4448,
	argv_4445,
	argv_4450,
	argv_4451,
	argv_4446,
	argv_4457,
	argv_4456,

	// com client related errors
	argv_1021=25000,
	argv_1015,
	argv_1013,
	argv_1016,
	argv_1017,
	argv_1014, 
	argv_1022,
	argv_1020,

	// gateway related errors
	argv_1731=26000,
	argv_1728,
	argv_1729,
	argv_1727,

	// kernel manager related errors
	argv_2162=27000,
	argv_2152,
	argv_2157,
	argv_2154,
	argv_2150,
	argv_2151,
	argv_2155,
	argv_2149,
	argv_2147,
	argv_2153,
	argv_2146,
	argv_2148,
	argv_2145,
	argv_2156,

	// admin related errors
	argv_4954=28000,
	argv_4947,
	argv_4943,
	argv_4951,
	argv_4942,
	argv_4944,
	argv_4945,
	argv_4946,
	argv_4952,
	argv_4949,
	argv_4955,
	argv_4950,
	argv_4948,
	argv_4956,
	argv_4953,
	argv_4957,
	argv_4958,

	// resolved shelf related errors
	argv_4404=29000,
	argv_4401,
	argv_4398,
	argv_4399,
	argv_4400,
	argv_4403,
	argv_4402,

	// spyware manager related errors
	argv_4583=30000,
	argv_4581,
	argv_4582,
	argv_4580,

	// inner argv_4228 related errors
	argv_2067=31000,
	argv_2066,
	argv_2063,
	argv_2062,
	argv_2065,
	argv_2064,

	// inner client related errors
	argv_2060=32000,
	argv_2057,
	argv_2055,
	argv_2058,
	argv_2061,
	argv_2054,
	argv_2059,
	argv_2056,

	// admin client related errors
	argv_689=33000,
	argv_684,
	argv_682,
	argv_686,
	argv_683,
	argv_688,
	argv_687,
	argv_685,

	// archive extractor related errors
	argv_740=34000,
	argv_742,
	argv_734,
	argv_735,
	argv_736,
	argv_741,
	argv_737,
	argv_733,
	argv_739,
	argv_729,
	argv_730,
	argv_731,
	argv_732,

	// archive creator related errors
	argv_724=35000,
	argv_727,
	argv_720,
	argv_719,
	argv_721,
	argv_717,
	argv_725,
	argv_726,
	argv_718,
	argv_716,
	argv_722,

	// argv_1424 argv_4860 analyzer related errors
	argv_4867=36000,
	argv_4866,
	argv_4863,
	argv_4864,
	argv_4865,

	// com manager related errors
	argv_1037=37000,
	argv_1030,
	argv_1031,
	argv_1034,
	argv_1025,
	argv_1028,
	argv_1029,
	argv_1035,
	argv_1026,
	argv_1036,
	argv_1027,
	argv_1032,
	argv_1039,
	argv_1024,

	// scan gateway related errors
	argv_4465=38000,
	argv_4466,
	argv_4463,
	argv_4460,
	argv_4464,
	argv_4467,
	argv_4461,
	argv_4462,

	// archive facility related errors
	argv_757=39000,
	argv_751,
	argv_749,
	argv_750,
	argv_755,
	argv_752,
	argv_753,
	argv_754,
	argv_747,
	argv_745,
	argv_746,
	argv_756,
	argv_748,
	argv_744,
	argv_743,
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ All possible argv_1424 types
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
enum argv_4870 {
	argv_1468 = 0,
	argv_1453,
	argv_1451,
	argv_1456,
	argv_1458,
	argv_1448,
	argv_1470,
	argv_1466,
	argv_1464,
	argv_1465,
	argv_1471,
	argv_1455,
	argv_1454,
	argv_1449,
	argv_1459,
	argv_1457,
	argv_1461,
};



#if defined (__WIN32_OS__) 
	#if !defined (argv_2070)
		#define argv_2070 ((DWORD)-1)
	#endif // #if !defined (argv_2070)
#endif // #if defined (__WIN32_OS__) 



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ constants and aliases definitions
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#if defined (__LINUX_OS__)
	#define argv_2011		8
#endif // #if defined (__LINUX_OS__)


#define argv_2002		10
const argv_4883 argv_4658 =	18;
#define argv_1724			4
#define argv_2398		256
#define argv_2397		512
#define argv_1992					65536

#if defined (__WIN32_OS__) 
	#define argv_643 0x00008000
	#define argv_790 0x00004000
	#define argv_4569 _snprintf
#endif // #if ! defined (__WIN32_OS__) 


union argv_767 {
	argv_4883 argv_770;
	argv_4536 argv_763;
	argv_4881 argv_764[4];
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ These types are found in the COFF symbol table and permits
// @@ to know whether the argv_3656 is a function or not
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#define argv_1295 0x20
#define argv_1296  0x00



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ all possible plugins types 
// @@ Notice that the plugin argv_4860 is a field of the plugin
// @@ itself.
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
enum argv_4234 {
	argv_3927=0,
	argv_3929,
	argv_3926,	
	argv_3925,
	argv_3928, // just to know how many plugin types we have	
	argv_3930, 
};



#define argv_4296			4096
#define argv_1102		8192




// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ kernel log related argv_1178 structures and functions
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
typedef struct argv_625 {
		argv_4881		argv_4765[3];
		FILE *		argv_1510;
		argv_4883		argv_1157;
		bool		argv_2314;
		char		argv_4759[MAX_PATH];
#if defined (__LINUX_OS__)
        time_t      argv_1160;
        struct tm * argv_4845;
#endif // #if defined (__LINUX_OS__)
#if defined (__WIN32_OS__)
		SYSTEMTIME	argv_4842;
#endif // #if defined (__WIN32_OS__)
} argv_4566;



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ all possible relocation types
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#define argv_2008	0x0014
#define argv_2006	0x0006
#define argv_2007	0x0007



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ all relevant storage types
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#if ! defined (__WIN32_OS__)
	#define argv_2012  0x06 // a symbol within a argv_795 (a label)   
#endif // __WIN32_OS__



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ COFF argv_1982 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#if ! defined (__WIN32_OS__)
	typedef struct argv_516 {  
	argv_4882 argv_2368;  
	argv_4882 argv_3648;  
	argv_4883 argv_4844;  
	argv_4883 argv_4227;  
	argv_4883 argv_3650;  
	argv_4882 argv_4559;  
	argv_4882 argv_897;
	} argv_2000;
#endif // #if ! defined (__WIN32_OS__)



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ argv_3677 COFF argv_4479 argv_1982
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#if ! defined (__WIN32_OS__)
	typedef struct argv_520 {  
	argv_4881 argv_3558[argv_2011];  
	union {    
		argv_4883 argv_3852;    
		argv_4883 argv_4998;  
	} argv_2527;  
	argv_4883 argv_4997;  
	argv_4883 argv_4560;  
	argv_4883 argv_4225;  
	argv_4883 argv_4226;  
	argv_4883 argv_4224;  
	argv_4882 argv_3646;  
	argv_4882 argv_3642;  
	argv_4883 argv_897;
	} argv_2009; 
#endif // #if ! defined (__WIN32_OS__)



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ argv_3677 COFF relocation entry
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
typedef struct argv_517 {  
	argv_4883 argv_4997;
	argv_4883 argv_4666;
	argv_4882  argv_4861;
} argv_2001;



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ argv_3677 symbol table entry
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
typedef struct argv_633 {
	argv_4881  argv_3558[8];
	argv_4883  argv_4980;
	argv_4535  argv_4484;
	argv_4882  argv_4861;
	argv_4881  argv_4632;
	argv_4881  argv_3638;
} argv_4657;



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ general functions
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void *			allocate_code_buffer	(int);
void			free_code_buffer		(void *);
void			flush_icache			();
std::string		argv_1344			(argv_4883);
extern "C"
{
	void argv_1344 (argv_4883, char *);
}
typedef void (* argv_1642) (argv_4883, char *);

std::string		argv_3924	(argv_4883);
bool			argv_1220 (argv_876, argv_876);


// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ windows specific structures
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef __WIN32_OS__
	#define argv_2004 16
#endif // #ifndef __WIN32_OS__



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ argv_1996 structure
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef __WIN32_OS__
typedef struct argv_513 {  
	argv_4883 argv_4997;  
	argv_4883 argv_4539;
} argv_1996;
#endif // #ifdef __WIN32_OS__



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ argv_2005 structure
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef __WIN32_OS__
typedef struct argv_519 {  
	argv_4535 argv_2369;  
	argv_4881 argv_2371;  
	argv_4881 argv_2523;  
	argv_4883 argv_4543;  
	argv_4883 argv_4556;  
	argv_4883 argv_4564;  
	argv_4883 argv_672;  
	argv_4883 argv_784;  
	argv_4883 argv_785;  
	argv_4883 argv_2014;  
	argv_4883 argv_4483;  
	argv_4883 argv_1472;  
	argv_4535 argv_2372;  
	argv_4535 argv_2524;  
	argv_4535 argv_2370;  argv_4535 argv_2522;  
	argv_4535 argv_2373;  
	argv_4535 argv_2525;  
	argv_4883 argv_5009;  
	argv_4883 argv_4554;  
	argv_4883 argv_4551;  
	argv_4883 argv_916;  
	argv_4535 argv_4639;  
	argv_4535 argv_1276;  
	argv_4883 argv_4562;  
	argv_4883 argv_4561;  
	argv_4883 argv_4553;  
	argv_4883 argv_4552;  
	argv_4883 argv_2301;  
	argv_4883 argv_3647;  
	argv_1996 argv_1180[argv_2004];
} argv_2005,  *argv_3854;
#endif // #ifdef __WIN32_OS__



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ argv_1998 structure
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef __WIN32_OS__
	typedef struct argv_515 {      // DOS .EXE argv_1982
		argv_4535   argv_1317;                     // argv_2369 number
		argv_4535   argv_1308;                      // Bytes on last page of argv_1424
		argv_4535   argv_1309;                        // Pages in argv_1424
		argv_4535   argv_1311;                      // Relocations
		argv_4535   argv_1310;                   // argv_4539 of argv_1982 in paragraphs
		argv_4535   argv_1319;                  // Minimum argv_1393 paragraphs needed
		argv_4535   argv_1318;                  // Maximum argv_1393 paragraphs needed
		argv_4535   argv_1326;                        // Initial (relative) SS argv_4979
		argv_4535   argv_1325;                        // Initial SP argv_4979
		argv_4535   argv_1313;                      // Checksum
		argv_4535   argv_1314;                        // Initial IP argv_4979
		argv_4535   argv_1312;                        // Initial (relative) CS argv_4979
		argv_4535   argv_1316;                    // File argv_665 of relocation table
		argv_4535   argv_1322;                      // Overlay number
		argv_4535   argv_1323[4];                    // argv_4358 words
		argv_4535   argv_1320;                     // OEM identifier (for argv_1321)
		argv_4535   argv_1321;                   // OEM information; argv_1320 specific
		argv_4535   argv_1324[10];                  // argv_4358 words
		argv_4883   argv_1315;                    // File argv_665 of new exe argv_1982
	  } argv_1998;
#endif // #ifdef __WIN32_OS__



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ argv_2003 structure
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef __WIN32_OS__
typedef struct argv_518 {
  argv_4883 argv_4538;  
  argv_2000 argv_1473;  
  argv_2005 argv_3689;
} argv_2003;
#endif // #ifdef __WIN32_OS__



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ general functions
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#if defined (__WIN32_OS__) 
	bool argv_4254 ();
	bool argv_4764 ();
#endif // #if defined (__WIN32_OS__) 


#if defined (__WIN32_OS__) 
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
		argv_4569 (argv_4846, 1024, "%s : %lf microseconds", _msg, elapsed);
	}
	else if ((elapsed >= 1000000.0) && (elapsed < 60000000.0)) {
		elapsed = elapsed / 1000000.0;
		argv_4569 (argv_4846, 1024, "%s : %lf seconds", _msg, elapsed);
	}
	else {
		elapsed = elapsed / 60000000.0;
		argv_4569 (argv_4846, 1024, "%s : %lf minutes", _msg, elapsed);
	}
	argv_4846[1024 - 1] = '\0';
	return argv_4846;
}
#endif // #if defined (__WIN32_OS__)



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_859
// @@
// @@ DESCRIPTION:
// @@ This argv_3656 is a platform independant argv_2305 that
// @@ permits to avoid race conditions in threaded applications.
// @@ It works for both win32 and Linux platforms.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_859
{
private:
#if defined (__LINUX_OS__)
	pthread_mutex_t argv_3551;
#endif // #if defined (__LINUX_OS__)
#if defined (__WIN32_OS__) 
	CRITICAL_SECTION argv_1132;
#endif // #if defined (__WIN32_OS__) 

public:
	argv_859 ();
	void argv_2305 ();
	void argv_4937 ();
	~argv_859 ();
};


enum argv_3700 {
	argv_1094 = 0,
	argv_1095,
	argv_1093,
};

class argv_875
{
public:
	argv_4883	argv_4860;

	argv_4881	argv_4982;
	argv_4883	argv_4983;
	string	argv_4981;
};

void argv_647 (argv_4881, vector<argv_875>&);
void argv_647 (argv_4883, vector<argv_875>&);
void argv_647 (argv_876, vector<argv_875>&);
void argv_647 (const string&, vector<argv_875>&);


template <class T>
class argv_1133
{
private:
	CRITICAL_SECTION argv_1132;   // Windows' basic argv_3551 argv_3656.
	list<T>	argv_4329;

public:
	argv_1133 ();
	~argv_1133 ();
	bool argv_4293 (T);
	bool argv_1090 (T&);
};

template <class T>
argv_1133<T>::argv_1133 () {
	InitializeCriticalSection(&argv_1132);		
}

template <class T>
argv_1133<T>::~argv_1133 () {
	DeleteCriticalSection(&argv_1132);
}

template <class T>
bool argv_1133<T>::argv_4293 (T _elem) {
	bool bret = true;
	EnterCriticalSection (&argv_1132);
		argv_4329.push_back (_elem);
	LeaveCriticalSection(&argv_1132);	
	return (bret);
}

template <class T>
bool argv_1133<T>::argv_1090 (T& _elem) {
	bool bret = false;
	EnterCriticalSection (&argv_1132);
		if (! argv_4329.empty()) {
			_elem = argv_4329.argv_1718 ();
			argv_4329.pop_front();
			bret = true;
		}
	LeaveCriticalSection(&argv_1132);	
	return (bret);
}


bool argv_903 (argv_876);
bool argv_904 (argv_876);

//void dump_buffer_2_file (argv_876, argv_876, argv_4881 *, argv_4883);
argv_4883 argv_1075 (argv_876 _filename);
bool argv_1221 (argv_876);
argv_4536 argv_1103 (argv_876, argv_876);
argv_4536 argv_1744 (argv_876, argv_876, argv_876, argv_876, string&, bool _do_copy=true);

#if defined (__WIN32_OS__) 
	argv_4536 disable_nagle_algorithm (SOCKET& _socket);
	argv_4536 argv_894 (SOCKET& _socket);
#endif // #if defined (__WIN32_OS__) 
#if defined (__LINUX_OS__)
	argv_4536 disable_nagle_algorithm (argv_4536 _socket);
	argv_4536 argv_894 (argv_4536 _socket);
	void argv_774 (argv_4536 sockfd);
#endif // #if defined (__LINUX_OS__)

#if defined (__WIN32_OS__) 
	argv_4536 argv_3717 (argv_876, string&);
	argv_4536 parse_handle_file (argv_876, string&);
#endif // #if defined (__WIN32_OS__) 
bool argv_1400 (argv_876, string&, string&);
void argv_4501 (argv_4881, argv_876, vector<string>&);
bool argv_1399 (argv_876, vector<string>&);	
bool empty_directory (argv_876);
argv_4536 empty_and_remove_directory (argv_876);
bool argv_1427 (argv_876);
bool argv_4353 (argv_876);
bool argv_655 (argv_876);


#endif // argv_418



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1424
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
