// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_390.hpp
// @@ 
// @@ DESCRIPTION:
// @@ Data encryption standard algorithm
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_412
#define argv_412



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB_CRYPTO/argv_392.hpp"
#include "../LIB/argv_349.hpp"
#include "argv_391.hpp"
#include <iostream>
#if defined (__WIN32_OS__)
	#include <windows.h>
#endif // #if defined (__WIN32_OS__)

#if defined (__LINUX_OS__)
	#include <sys/argv_4843.h>
	#include <unistd.h>
#endif // #if defined (__LINUX_OS__)



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ namespace usage
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
using namespace std;



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_882	
// @@
// @@ DESCRIPTION	:
// @@ This argv_3656 permits to cipher/decipher a given argv_1424 or argv_826
// @@ using the "Data Encryption Standard" algorithm.
// @@ This argv_3656 is needed because the D.E.S algorithm only process
// @@ blocks of 64 argv_794, thus when we have a argv_826 that is either
// @@ shorter, or longer than 64 argv_794, we just can't use the D.E.S
// @@ directly.
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_882
{
private:
	FILE *	argv_1647;
	FILE * 	argv_1529; 	
	uint8_t 	argv_826[argv_798];
	uint8_t 	argv_832[argv_798];
	uint8_t	argv_4407[argv_798];
	int32_t	argv_3613;
	int32_t	argv_3614;
	int32_t	argv_3601;
	int32_t	argv_3617;
	bool	argv_4629;
	bool 	argv_3839 (uint8_t *, const char *, const char *, bool);
	bool	argv_3838 (uint8_t *, uint8_t *, uint32_t, uint8_t *, bool, uint32_t&);
	void	argv_1079 (uint32_t, uint8_t&);
	void	init_random_generator ();
	argv_881	argv_1226;
public:
	argv_882 ();

	bool 	argv_1338 (uint8_t *, const char *, const char *);
	bool 	argv_1205 (uint8_t *, const char *, const char *);

	bool	argv_1337 (uint8_t *, uint8_t *, uint32_t, uint8_t *, uint32_t&);
	bool	argv_1204 (uint8_t *, uint8_t *, uint32_t, uint8_t *, uint32_t&);
};



#endif // argv_412



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ other functions 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
string argv_1743 ();



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1424
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

