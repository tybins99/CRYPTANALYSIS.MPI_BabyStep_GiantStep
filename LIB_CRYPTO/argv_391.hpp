// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_391.hpp
// @@ 
// @@ DESCRIPTION:
// @@ implementation of the Data Encryption 
// @@ Standard symetric argv_2188 algorithm.
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_413
#define argv_413



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include <cstdio>
#include <cstdlib>
#include <string>
#include <iostream>



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ namespace usage declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
using namespace std;




// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ constants
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#define argv_797 					64
#define argv_798			8
#define argv_2191				64
#define argv_2192			8
#define argv_921			7
#define argv_919				56
#define argv_923				48
#define argv_924			6
#define argv_920		28
#define argv_2190   					8
#define argv_3615					16
#define argv_714	8
#define argv_1384			6
#define argv_1383				48
#define argv_4439			6
#define argv_1408				32
#define argv_3680			64			

union argv_642 {
	int8_t argv_764[4];
      	int32_t  argv_692; 	
};

union argv_641 {
	uint8_t argv_764[2];
	int argv_762;
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_881	
// @@
// @@ DESCRIPTION	:
// @@ This argv_3656 permits to cipher/decipher a given 64 bit argv_826
// @@ using the "Data Encryption Standard" algorithm.
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_881
{
private:
	uint8_t * 	argv_2188;
    uint8_t * 	argv_795;
	uint8_t * 	argv_4406;	
	int    	argv_1148;	
	argv_642		argv_2233;
	argv_642		argv_2249;
	argv_642		argv_4410;
	argv_642		argv_4413;
	int		argv_918;
	int		argv_922;
	uint32_t	argv_1407;
	uint8_t	argv_713[8]; // only 7 necessary, but 8 is more convenient for computing
	uint8_t	argv_2207[argv_3615][argv_924];
	bool 	is_set (uint8_t *, int);
	void	argv_895 (uint8_t *, int, bool);	
	void	argv_1277 ();
	void	argv_4933 ();
	void	argv_1281 (uint8_t *, uint8_t *, int, uint8_t *);
	void	argv_4575 ();
	void	argv_2456 ();
	void	argv_1279 ();
	void	argv_1278 ();
	void	reset ();
	void	argv_1074 (uint32_t);
	void	argv_4421 (signed int&);
	void	argv_3843 ();
	void	argv_691 ();
	void	argv_4242 ();	
	
public:
	argv_881();
	bool	argv_1336 (uint8_t *, uint8_t *, uint8_t *);		
	bool	argv_1203 (uint8_t *, uint8_t *, uint8_t *);
	friend void argv_1245 (string, uint8_t *, int, bool);
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ Functions
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void			argv_1245 (string, uint8_t *, int, bool _display_bitfield=false);



#endif // argv_413



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1424
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

