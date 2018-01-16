// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_381.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1424 contains all the functions,
// @@ argv_1178 structures and constants that are 
// @@ necessary to implement the avx scanning
// @@ and admmin protocol.
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_483
#define argv_483



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ included files
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_354.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ possible packet types
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
enum argv_4233 {
	argv_3817 = 0,

	// scan client operations
	argv_3805,
	argv_3801,
	argv_3807,
	argv_3803,

	// scan server operations
	argv_3806,
	argv_3802,
	argv_3808,
	argv_3804,

	// admin operations
	argv_3815,				// used when service is shut down (via service manager)
	argv_3816,		// tell the COM manager to terminate itself.

	// update operations results
	argv_3818,			// argv_4531/argv_1232/construct/argv_818
	argv_3819,		

	// spyware operations
	argv_3812,		// forwarded to the spyware manager
	argv_3813, // inform about the number of categories
	argv_3814,			// not forwarded to the spyware manager
	argv_3811,  // argv_3557 + infection flag + spyware argv_3557 if necessary
	argv_3809,
	argv_3810,

	// archive extractor operations
	argv_3788,
	argv_3784,
	argv_3787,
	argv_3789,	// sent for each extracted files.

	// archive creator operations
	argv_3785,
	argv_3783,
	argv_3786,

	// interruptions related messages (same for all blocks)
	argv_3799,
	argv_3800,

	// inner protocol (COM MANAGER)
	argv_3797,
	argv_3793,
	argv_3792,
	argv_3796,
	argv_3790,
	argv_3798,
	argv_3794,
	argv_3795,
	argv_3791,
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  protocol related functions.
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
string argv_4967 (argv_4881);



#endif // argv_483



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1424
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
