// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: obj_loader_2.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1424 contains all argv_1178 structure and
// @@ functions necessary for the coff loader
// @@ argv_3656 to work properly.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_493
#define argv_493



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_354.hpp"
#include "../LIB/argv_367.hpp"
#include "../LIB/argv_384.hpp"
#include "../LIB/argv_365.hpp"
#include "../LIB/argv_366.hpp"
#include "../LIB/argv_352.hpp"
#include "../LIB/argv_387.hpp"

#include <vector>
#include <string>
#include <map>




// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ namespace usage declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
using namespace std;




// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ 
// @@ CLASS: argv_865
// @@
// @@ DESCRIPTION:
// @@ This argv_3656 permits to convert COFF internal values to the 
// @@ corresponding human-readable string.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_865
{
private:

public:
	string argv_4631 (argv_4881);
	string invalid_section_2_string (argv_4535);
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ 
// @@ CLASS: argv_1140
// @@
// @@ DESCRIPTION:
// @@ This argv_3656 permits to store information concerning a given
// @@ symbol.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_1140
{
public:
	argv_4883  argv_4980;
	argv_4535  argv_4484;
	argv_4882  argv_4861;
	argv_4881  argv_4632;

	void argv_1235 (argv_891 *, argv_876, bool);
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ 
// @@ CLASS: argv_866
// @@
// @@ DESCRIPTION:
// @@ This argv_3656 permits to argv_2274 a COFF argv_1424 and argv_4389 
// @@ all necessary symbols. 
// @@
// @@ Notice that the OBJ argv_1424 is mmaped by the caller and that
// @@ the symbols resolved use only the virtual memory to perform
// @@ the argv_2274 and solve relocations so that the obj mmapped argv_1424
// @@ can be closed after argv_2274.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_866
{
private:
	map<string, argv_1140>	argv_2364;
	bool				init_done;
	bool				argv_2297;
	argv_4610    *	argv_4756;
	argv_870  *	argv_1069;
	argv_877    *	argv_1175;
	argv_891	*	argv_1799;
	argv_1166	*	argv_5023;
	argv_4881			*	argv_1445;
	argv_4881			*	argv_4480;
	argv_4881			*	argv_4482;
	argv_4881			*	argv_4636;
	argv_4881			*	argv_4656;
	argv_4883				argv_1444;
	argv_4881			*	argv_1339;
	argv_2000	argv_1999;
	argv_4881				argv_4530[9]; // used when extracting the symbol's argv_3557.

	argv_4536				argv_2381 (argv_2009 *, argv_876, argv_4881 *&);
	argv_4536				argv_3720 (argv_4883, argv_876, argv_2001 *, argv_4881 *, argv_4881 *);
	argv_4881 *				argv_1404 (argv_4883, argv_4657 *&, bool&);
	bool				argv_4651 (argv_876, argv_4883&);
	bool				argv_4652 (map<string, argv_1140>::iterator&);
	bool				argv_4653 (map<string, argv_1140>::iterator&);
	bool				argv_1741 (argv_876, string&, bool&);
	bool				argv_3565 (argv_4881 *);
	argv_4536				argv_2281 ();
	argv_4536				argv_2295 ();
	bool				argv_4654 (argv_876, map<string, argv_1140>::iterator&);
	argv_4536				argv_4390 (map<string, argv_1140>::iterator&, argv_2009 *, argv_876, argv_876, argv_876, map<string, argv_866 *>&, argv_4881 *&, argv_4881 *);
	argv_4536				argv_4392 (map<string, argv_1140>::iterator&, argv_876, argv_876, argv_876, map<string, argv_866 *>&, argv_4881 *&, argv_4881 *);
	argv_4536				argv_4393 (map<string, argv_1140>::iterator&, argv_2009 *, argv_876, argv_876, argv_876, map<string, argv_866 *>&, argv_4881 *&, argv_4881 *);
	argv_4536				argv_4391 (map<string, argv_1140>::iterator&, argv_876, argv_876, argv_876, map<string, argv_866 *>&, argv_4881 *&, argv_4881 *);
	void				argv_1249 (argv_4881 *, argv_876, argv_876);
	void				argv_1252 (argv_876, argv_876, bool, bool, bool);

public:
	argv_866 ();
	~argv_866 ();
	void				reset ();
	argv_4536				init (argv_891 *, argv_4610 *, argv_870 *, argv_877 *, argv_4881 *, argv_4883, argv_1166 *);
	argv_4536				argv_2274 ();
	argv_4536				argv_4389 (argv_876, argv_876, argv_876, map<string, argv_866 *>&, argv_4881 *&, argv_4881 * _father_addr=NULL);
	void				argv_1248 ();
	void				argv_1251 (bool);
};



#endif // argv_493