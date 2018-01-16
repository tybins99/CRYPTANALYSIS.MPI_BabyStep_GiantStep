// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_350.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1424 contains the necessary objects
// @@ to argv_1900 n argv_2420 and all their events.
// @@ (argv_4570 or pipe)
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_414
#define argv_414



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ included files
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include <stack>
#include "../LIB/argv_369.hpp"
#include "../LIB/argv_372.hpp"
#include "../LIB/argv_374.hpp"
#include "../LIB/argv_378.hpp"
#include "../LIB/argv_379.hpp"
#include "../LIB/argv_381.hpp"
#include "../LIB/argv_343.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ constants declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#define argv_1374	256



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ all possible client types
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
enum argv_4229 {
	argv_959 = 0,

	// external clients
	argv_957,
	argv_958,
	argv_949,

	// internal clients
	argv_952,
	argv_951,
	argv_954,
	argv_953,
	argv_955,
	argv_950,
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ listener argv_3656 (associate a argv_4570 argv_5011 a clien argv_4860)
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_962
{
public:
	argv_4881		argv_947;
	SOCKET 		argv_4570;

	argv_962 ();
	void		reset ();
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ event loop routines
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
typedef argv_4536 (* argv_1537)		(argv_864 * _data_ptr, argv_4883 _index, bool& _trigger_write);
typedef argv_4536 (* argv_1538)	(argv_864 * _data_ptr, argv_4883 _index, vector<argv_4883>&);



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_887
// @@
// @@ DESCRIPTION:
// @@ This argv_3656 contains all the argv_1178 needed
// @@ by the event loop to be able to argv_1900
// @@ all possible events.
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_887
{
public:
	void reset ();
	argv_887 ();

	argv_1537		argv_1706;
	argv_1538		argv_1708;
	argv_1537		argv_1709;
	argv_1537		argv_1651;
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_886
// @@
// @@ DESCRIPTION:
// @@ This argv_3656 permits to build an event driven
// @@ architecture when working argv_5011 sockets.
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_886 
{
protected:
	fd_set				readfds;
	fd_set				readfds_dirty;
	fd_set				writefds;
	fd_set				writefds_dirty;

	stack<argv_4883>	argv_4612;						// to avoid lookup at runtime
	argv_886 (const argv_886&);				// forbid copy
	argv_886& operator= (const argv_886&);	// forbid copy

	argv_4536 argv_906 (argv_4883&);
	argv_4536 argv_913 (argv_4883&);
	argv_4536 argv_649 (argv_4883, bool, bool);
	argv_4536 argv_4352 (argv_4883, argv_4536);
	argv_4536 argv_4352 (argv_4883, bool, bool, argv_4536);
	argv_4536 argv_4351 (argv_4883, argv_4536);
	argv_4536 argv_648 (argv_4883&, SOCKET&, argv_4881);
	argv_4536 argv_4249 ();
	argv_4536 argv_4249 (argv_887&, argv_864 *, argv_4883, vector<argv_962>&);
	argv_4536 argv_4280 (argv_864 *, argv_4883, vector<argv_4883>&);
	argv_4536 argv_4281 (argv_864 *, argv_4883, bool&);
	void argv_1253 (SOCKET&, argv_4881);
	argv_4536 argv_4857 (vector<argv_4883>&);
	bool argv_956 (argv_4881);

	argv_887	argv_1352;
	argv_4883				argv_3610;
	vector<argv_962>	argv_4971;	
	argv_864 *		argv_945;
	argv_4883				argv_946;
	argv_4883				argv_3602; // permits to argv_4626 the loop sooner (speed up)
	argv_4536				argv_2407;
	argv_963	*			argv_2316;
	argv_4883				argv_3606;

public:
	void reset ();
	argv_886 ();

	argv_4536 argv_4424 (argv_963 *, vector<argv_962>&, argv_864 *, argv_4883 _tab_size, argv_887&);
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1424
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
string argv_948 (argv_4881);


#endif // argv_414
