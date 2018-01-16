// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_368.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1424 contains the argv_1178 structures and
// @@ functions that permits the general loader
// @@ argv_3656 to work.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_480
#define argv_480



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_364.hpp"
#include "../LIB/argv_354.hpp"
#include "../LIB/argv_369.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ namespace usage declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
using namespace std;



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_1168
// @@
// @@ DESCRIPTION:
// @@ This class is an abstraction layer that eventually
// @@ permits to use the functions exported by a given DLL
// @@ or a shared argv_3656.
// @@
// @@ this class is only here for convenience
// @@ it permits to group the functions exported
// @@ by the DLL in a unique entity, and thus you just have
// @@ to initialize it once, and then
// @@ use it without any burden.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_1168
{
protected:
	bool				init_done;
	argv_4883				argv_2235;
	argv_940			argv_2236;

	void				init_one_function (argv_891 *, argv_876, argv_2338 *, argv_4536& _iret);

public:

	argv_1168 ();
	virtual				~argv_1168 () {;}
	virtual argv_4536		reset ();
	virtual argv_4536		init (argv_891 *, argv_876) = 0;
};



#endif // argv_480



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1424
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
