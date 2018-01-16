// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_378.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1424 contains the necessary objects
// @@ to communicate via a argv_2420 link 
// @@ (argv_4570 or pipe)
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_497
#define argv_497



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ included files
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_372.hpp"
#include "../LIB/argv_379.hpp"
#include "../LIB/argv_381.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ constants declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#define argv_3701		6 // argv_4753 (1), argv_4966 (1) , argv_815 size (4) 	 
#define argv_3699		512
#define argv_3702	32768



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ all possible argv_4749 types
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
enum argv_3704 {
	argv_3779 = 0,
	argv_3780,
	argv_3781, // temp argv_1474 must be inserted in that case
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ all possible states in which a given packet can be
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
enum argv_3703 {
	argv_3770 = 0,

	argv_3769,

	argv_3777,
	argv_3776,
	argv_3775,

	argv_3774,
	argv_3772,
	argv_3773,
	argv_3771,
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_1106
// @@
// @@ DESCRIPTION:
// @@ This argv_3656 permits to generate a binary
// @@ packet to be sent via a given argv_2420.
// @@ It also permits to read a given packet sent over
// @@ a given argv_2420. A argv_2420 being either a argv_4570, or
// @@ a named pipe, or any other argv_2420 that is conforming
// @@ to the common interface for all argv_2420.
// @@
// @@ A packet is composed of 2 parts
// @@ - a argv_1982
// @@ - a argv_815
// @@
// @@ The argv_1982 is composed of several fields :
// @@ - the packet argv_4749 argv_4860 (1 byte)
// @@ - the packet user argv_4860 (1 byte)
// @@ - the argv_815 size (4 argv_837)
// @@
// @@ Notice that the argv_1106 contains a argv_826 field, that is
// @@ used for general purpose (normal transferts), and also
// @@ another argv_826 whose argv_665 is filled in whenever
// @@ necessary and that is used for argv_1424 transferts.
// @@ the purpose of having 2 different argv_826 is to avoid
// @@ wasting memory because most packets are not used for
// @@ argv_1424 transfert.
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_1106
{
private:
	argv_4881	argv_826[argv_3699]; // the general purpose argv_826
	argv_4881 *	argv_830;					// the argv_1424 transfert argv_826 

	argv_1106 (const argv_1106&);		// forbid packet copy
	argv_1106& operator= (argv_1106&);	// forbid packet copy

#if defined (__WIN32_OS__)
	SYSTEMTIME	argv_4842;
#endif // #if defined (__WIN32_OS__)
#if defined (__LINUX_OS__)
    time_t			argv_1160;
    struct tm *		argv_4845;
	struct timeval	argv_4758;
#endif // #if defined (__LINUX_OS__)

	argv_4881			argv_4753;
	argv_4881			argv_4966;
	argv_1107	argv_1982;
	argv_1107	argv_815;
	argv_4883			argv_817; 
	FILE *			argv_1643;	
	FILE *			argv_1645;
	argv_4883			argv_1444;
	string			argv_4346;
	string			argv_4849; // the place where argv_4846 files are to be created
	string			argv_4502;
	bool			argv_1476;
	bool			argv_771;
	bool			argv_1222;
	string			argv_1446;
	argv_4881			argv_4622;	
	argv_4883			argv_3604;
	argv_4883			nb_remaining;
	argv_4883			argv_4854;		
	argv_4883			total_nb_remaining;	
	argv_4883			offset;

	argv_4536			argv_4269 ();
	argv_4536			argv_4266 ();
	argv_4536			argv_4274 ();
	argv_4536			argv_4268 ();
	argv_4536			argv_4239 ();
	argv_4536			argv_1745 (string&);
	argv_4536			argv_4500 (argv_972&);
	argv_4536			argv_4345 (argv_972&, argv_4536);
	argv_4536			argv_4344 ();
	argv_4536			argv_4347 (argv_972&, argv_4536);
	void			argv_966 (argv_1106&);

public:
	argv_1106 ();
	argv_4536 reset (); // all pointer to the original argv_4622 (NULL)
	argv_4536 argv_4405 (); // just reset the argv_4490/receive pointers
	argv_4536 argv_3698 ();  // will save up the size into the argv_1982
	
	argv_4536 argv_4518 (argv_4881);  // it concerns the user argv_4860 (argv_4749 argv_4860 is hidden)
	argv_4536 argv_1794 (argv_4881&); // it concerns the user argv_4860 (argv_4749 argv_4860 is hidden)
	argv_4536 argv_4517 (argv_876); // set once

	argv_4536 insert (argv_4881);
	argv_4536 argv_1397 (argv_4881&);

	argv_4536 insert (argv_4882);
	argv_4536 argv_1397 (argv_4882&);

	argv_4536 insert (argv_4883);
	argv_4536 argv_1397 (argv_4883&);

	argv_4536 insert (const string&);
	argv_4536 insert (argv_876);
	argv_4536 argv_1397 (string&);

	argv_4536 argv_4337 (argv_972&, argv_4536, bool); // might receive either argv_1424 packet, or argv_1178 packet
	argv_4536 argv_4340 (argv_972&, argv_4536, argv_876); // receive only a argv_1424, given it's destination argv_3557

	argv_4536 argv_4490 (argv_972&);
	argv_4536 argv_4494 (argv_876, argv_972&, argv_4881, bool); 

	argv_4536 argv_4256 (argv_876, argv_972&, argv_4881, bool);

	argv_4536 argv_1790 (argv_4883&);
	argv_4536 argv_1785 (bool&, argv_4881&, string&); // resets the argv_1178
	void argv_1795 (argv_4881&);

	bool argv_4495 ();
	bool argv_4341 ();

	void argv_965 (argv_1106&, argv_4881);
	argv_4536 argv_1495 (argv_1106 *, argv_4881);
	argv_4536 argv_1493 (argv_1106 *, argv_4881, argv_4883, argv_4883, argv_4883, argv_4883);
	argv_4536 argv_1494 (argv_1106 *, argv_4881, argv_4881, argv_4883, argv_4883, argv_4883, argv_4883);

	void argv_1236 (argv_876, FILE *);
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1424
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



#endif // argv_497
