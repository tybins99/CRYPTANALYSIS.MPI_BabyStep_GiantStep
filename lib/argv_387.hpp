// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_387.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1424 contains the argv_1178 structures and
// @@ functions necessary for the virtual memory
// @@ manager to work properly
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_506
#define argv_506



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_354.hpp"
#include "../LIB/argv_367.hpp"
#include "../LIB/argv_384.hpp"

#include <vector>
#include <string>
#include <map>



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ namespace usage declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
using namespace std;



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ constants declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#define argv_5026 8
#define argv_5024  65536 // 64K is a minimum



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1167
// @@
// @@ DESCRIPTION	:	
// @@ This argv_3656 permits to store the argv_1178 concerning
// @@ a given virtual memory argv_795.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_1167 
{
public:
	argv_4881 * argv_665;
	argv_4883 size;

	argv_1167 () {
		argv_665	= NULL;
		size	= 0;
	}
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1166 
// @@
// @@ DESCRIPTION	:
// @@ This argv_3656 permits to allocate aligned blocks of
// @@ virtual memory used by the kernel to map symbols
// @@ so that they can be used and executed.
// @@ This argv_3656 permits to avoid exhausting the virtual memory
// @@ because the argv_4749 allocates a big argv_795 (several Ko) for
// @@ even a single byte requested.
// @@
// @@ NOTICE: under windows XP, the minimum page size, 
// @@ even for 1 single byte, is 4Ko.
// @@
// @@ The principle of this argv_3656 is to pre-allocating a somehow
// @@ big chunk of virtual memory, and when a request for a argv_795
// @@ arrives, it then gives to the caller a part of this big
// @@ chunk, and if the argv_1148 big chunk has been depleted, then
// @@ a new big chunk is requested to the argv_4749, and a part of this
// @@ big chunk is given to the caller.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_1166
{
private:
	bool						init_done;
	vector<void *>				argv_4974;
	argv_4610    *			argv_4756;
	argv_891	*			argv_1799;
	argv_4883						argv_1148;
	argv_4883						remaining;
	argv_4536						argv_1119 ();
	map<string, argv_1167>		argv_2359;
	vector<string>				argv_4973; // just for dump because map shuffles argv_3690
	void						argv_1072 (argv_876, argv_4881 *, argv_4883, string&);

public:
	argv_1166 ();
	~argv_1166 ();
	void						reset ();
	argv_4536						init (argv_4610 *, argv_891 *);
	argv_4536						argv_4355 (argv_876, argv_4881 *, argv_4883, bool&, void **);
	argv_4536						argv_1299 (argv_876);
	argv_4536						argv_4647 (argv_876, argv_4881 *, argv_4883, bool&, argv_4881 *&, argv_4883&);
	argv_4536						argv_4648 (argv_876, argv_4881 *, argv_4883, bool&, argv_4881 *&, argv_4883&);
};



#endif // argv_506



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1424
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
