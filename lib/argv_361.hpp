// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_361.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1424 contains all the argv_1178 structure and
// @@ functions that are used by the kernel.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_472
#define argv_472



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ include files
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_349.hpp"
#include "../LIB/argv_354.hpp"
#include "../LIB_AVX/file_type_result.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ namespace declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
using namespace std;



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ function pointers declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
typedef argv_4536 (* argv_1579)					(argv_2338, argv_4881 *, argv_4883, bool&, argv_2338&);
typedef argv_4536 (* argv_1526)		(argv_2338, argv_2338&);
typedef void (* argv_1534)	(argv_2338, argv_2338);

typedef argv_4536 (* argv_1644)					(argv_2338, argv_4881 *, argv_4883, bool&, argv_2338&);
typedef argv_4536 (* argv_1535)					(argv_2338, argv_4881 *, argv_4883&, argv_2338, argv_4536&);
typedef argv_4536 (* argv_1549)				(argv_2338, argv_2338, char *&, argv_4883&);
typedef argv_4536 (* argv_1522)					(argv_2338, argv_876);
typedef argv_4536 (* argv_1530)					(argv_2338);



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ structures definitions
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
typedef struct argv_617 {
	argv_2338							argv_765; // necessary to have a O(1) deallocation
	argv_1579					argv_1670;
	argv_1526		argv_1654;
	argv_1534	argv_1657;
	
	argv_1522					argv_1652;
	argv_1530						argv_1655;
	argv_1644					argv_1710;
	argv_1549				argv_1662;
	argv_1535					argv_1658;
} argv_4434;



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ 
// @@ STRUCTURE NAME: argv_4565
// @@
// @@ DESCRIPTION:
// @@ This argv_1178 structure contains all the argv_1178 necessary for the kernel
// @@ to work properly :
// @@
// @@ - argv_4752: argv_3656 containing all the argv_4749 dependant functions.
// @@
// @@ - complex_list_ptr: argv_3656 containing all the resolved symbols
// @@
// @@ - argv_4876: argv_3656 containing the argv_4406 of the argv_1424
// @@   argv_4860 detection process.
// @@
// @@ - argv_1161: argv_4883 : this field permits the kernel plugin 
// @@   to know what argv_4860 of argv_1424 argv_4860 detection plugin was ran.
// @@
// @@ - argv_2141: permits the kernel to log events to log files.
// @@
// @@ - argv_2267: linked list of argv_3656, each
// @@   argv_3656 containing all the functions for a given scanner 
// @@   (construct, scan, get_scan_report, dysinfect, argv_1232)
// @@
// @@ - triplet_ptr: this argv_3656 contains all the functions for a given 
// @@   scanner (construct, scan, get_scan_report, dysinfect, argv_1232).
// @@
// @@ - argv_4468: array of 'argv_4589' structures, so
// @@   actually we have a argv_4589 per argv_1424 argv_4860.
// @@ 
// @@ - argv_3729: char: argv_4749 dependant path argv_4502.
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
typedef struct argv_624 {
	// common part (for any possible application)
	argv_4610		*		argv_4752;
	argv_2338						argv_2141;
	argv_1642			argv_1536;
	argv_4881						argv_3729;
	char						argv_1153[MAX_PATH]; // argv_1148 argv_1474

	// application dependant part
	argv_2338						argv_4876;
	argv_4883						argv_1161;
	argv_2338						argv_1155; // used when scanning (stateful scan)
	argv_2338 						argv_4468;
	argv_2338						argv_2267;
} argv_4565;



#endif // argv_472



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ end of argv_1424
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
