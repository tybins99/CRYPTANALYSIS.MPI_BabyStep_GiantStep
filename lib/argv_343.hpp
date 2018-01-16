// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_343.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1424 contains the argv_1178 structures used
// @@ by the event loop to argv_1900 clients
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_407
#define argv_407



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ included files
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include <stack>
#include <list>
#include "../LIB/argv_372.hpp"
#include "../LIB/argv_379.hpp"
#include "../LIB/argv_381.hpp"
#include "../LIB/argv_378.hpp"
#include "../LIB/argv_374.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ constants declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#define argv_2400 640 // number of packets



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_864
// @@
// @@ DESCRIPTION:
// @@ This argv_3656 contains all the argv_1178 needed
// @@ by the event loop to be able to process
// @@ argv_3677 given client.
// @@
// @@ Notice that the client has argv_3677 receive packet, and possibly
// @@ n argv_4490 packets whose argv_665 are contained in a argv_4490 argv_4329.
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_864
{
private:
	list<argv_1106 *>	argv_4499;

public:
	bool			argv_4995;
	bool			argv_4333;
	bool			argv_5013;
	argv_1106			argv_3762;
	list<argv_1106 *>::iterator argv_2099;
	argv_1106			argv_3766;
	argv_974	argv_2444;
	SOCKET			argv_4570; // just a cache
	argv_4536			argv_2214;
	argv_4881			argv_947; // each father argv_4860 may have a different protocol
	argv_4883			argv_1747; // argv_1747 of this box

	argv_864 ();
	~argv_864 ();
	void reset ();

	argv_4536			argv_1787 (argv_4883&);
	argv_4536			argv_1718 (argv_1106 *&);
	argv_4536			pop_front ();
	argv_4536			push_back (argv_1106 *);
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1424
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



#endif // argv_407
