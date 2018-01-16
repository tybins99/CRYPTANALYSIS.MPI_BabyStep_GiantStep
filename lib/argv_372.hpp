// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_372.hpp
// @@ 
// @@ DESCRIPTION:
// @@ abstraction layer for local and remote
// @@ inter process communications
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_399
#define argv_399



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ included files
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_354.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_972
// @@
// @@ DESCRIPTION:
// @@ This argv_3656 permits to create derivate classes
// @@ that argv_1900 the communications between local or
// @@ remote processes.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_972
{
protected:
	bool			argv_2096;
	bool			argv_2088;
	bool			argv_2079;
	argv_4883			argv_2214;

	virtual argv_4536 argv_4246 (argv_876 _target_address, argv_4883 _port=0)	= 0;

	// server related function
	virtual argv_4536 argv_4252 (argv_876 _target_address, argv_4883 _port=0)	= 0;
	virtual argv_4536 argv_645 (argv_2338&)			= 0;

	virtual argv_4536 argv_4492 (argv_4881 *, argv_4883, argv_4883&)		= 0;
	virtual argv_4536 argv_4339 (argv_4881 * _buf, argv_4883 _size_2_read, argv_4883& _actual_size, argv_4536 _timeout_second=-1)	= 0;
	virtual argv_4536 argv_969 ()					= 0;
	virtual argv_4536 argv_969 (argv_2338)				= 0;
	virtual argv_4536 argv_1755 (argv_2338&)				= 0; 	
	virtual argv_4536 argv_1771 (argv_2338&)	= 0;

public:
	argv_972 ();
	void reset ();
	virtual ~argv_972 ();

	// client related functions
	argv_4536 argv_4245 (argv_876 _target_address, argv_4883 _port=0);

	// server related function
	argv_4536 argv_4251 (argv_876 _target_address, argv_4883 _port=0);
	argv_4536 argv_644 (argv_2338&);

	argv_4536 argv_4491 (argv_4881 *, argv_4883, argv_4883&);
	argv_4536 argv_4338 (argv_4881 * _buf, argv_4883 _size_2_read, argv_4883& _actual_size, argv_4536 _timeout_second=-1);

	argv_4536 argv_968 ();
	argv_4536 argv_968 (argv_2338);
	argv_4536 argv_1768 ();
	argv_4536 argv_1754 (argv_2338&);
	argv_4536 argv_1770 (argv_2338&);
};



#endif // argv_399



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1424
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
