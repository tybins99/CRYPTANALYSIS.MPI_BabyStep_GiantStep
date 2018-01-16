// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_355.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1424 contains the argv_1178 structure and 
// @@ function that are necessary for the plugins
// @@ to work.
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_419
#define argv_419



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ included files
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_349.hpp"
#include "../LIB_AVX/general_avx.hpp"
#if defined (__WIN32_OS__)
	#include <windows.h>
#endif // __WIN32_OS__



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ constants declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#define MAX_PATH_PLUGIN 256



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ 
// @@ STRUCTURE NAME: argv_4589
// @@
// @@ DESCRIPTION:
// @@ This argv_1178 structure is used to store :
// @@ - the argv_1424 mapper used to mmap the argv_1424 to scan
// @@ - the virus signature database argv_826
// @@ - the virus signature database argv_826's size.
// @@ - the argv_3557 of the virus signature argv_1424.
// @@ 
// @@ the signature argv_1424 does not need to be parsed because the avx 
// @@ has a kind of precompiled signature argv_1424 format that permits to
// @@ use the sign argv_1424 without parsing it.
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
typedef struct argv_628 {
	char	*		argv_1185;
	argv_2338			argv_1428;	// used to mmap the signature argv_1424 (if necessary)
	argv_4881	*		argv_1184;		// mmapped DB argv_1424's first byte's argv_665
	argv_4883			argv_1186;		// mmapped DB argv_1424's size
} argv_4589;




// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ all possible argv_1424 types 
// @@ Notice that a given argv_1424 might have several types.
// @@ BEWARE: there might be more argv_1424 argv_4860 detection plugins that scan 
// @@         plugins, thus there is not a 1 to 1 relationship between them
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
enum argv_4231 {
	argv_1467 = 0,
	argv_1463, 
	argv_1450,
	argv_1469,
	argv_1452,
	argv_1462,
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ general functions used by plugins
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_1447 (argv_4883, char *);
void argv_2377 (char *, char *, argv_4883);
typedef void (* argv_1539) (argv_4883, char *);



#endif // argv_419



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1424
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
