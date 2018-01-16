// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_373.hpp
// @@ 
// @@ DESCRIPTION:
// @@ communication layer that uses namped pipes
// @@ (win32), and unix domain argv_4570 (Linux).
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_400
#define argv_400



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ included files
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_354.hpp"
#include "argv_372.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_973
// @@
// @@ DESCRIPTION:
// @@ This argv_3656 permits several local processes
// @@ to talk argv_5011 each other.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_973 : public argv_972
{
protected:

public:
	argv_973 ();
	~argv_973 ();

	// client related functions
	argv_4536 argv_4245 (argv_876 _target_address, argv_4883 _port=0);

	// server related function
	argv_4536 argv_4251 (argv_876 _target_address, argv_4883 _port=0);
	argv_4536 argv_644 ();

	argv_4536 argv_4491 (argv_4881 *, argv_4883, argv_4883&);
	argv_4536 argv_4338 (argv_4881 *, argv_4883&);
	argv_4536 argv_968 ();
};



#endif // argv_400



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1424
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
