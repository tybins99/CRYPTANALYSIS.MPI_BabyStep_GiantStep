// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: complex_list.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1424 contains the declaration of the
// @@ functions related to the complex list argv_3656.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_490
#define argv_490



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#if defined (__WIN32_OS__) 
	#pragma warning(disable: 4786)
	#pragma warning(disable: 4503)
	#pragma warning(disable: 4291)
#endif // #if defined (__WIN32_OS__) 


#include <map>
#include "../LIB/argv_349.hpp"
#include "../LIB_CRYPTO/argv_392.hpp"
#include "../LIB/argv_354.hpp"
#include "../LIB/argv_376.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ namespace usage declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
using namespace std;



typedef map<string, argv_927 *>::iterator argv_4859;



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_1163
// @@
// @@ DESCRIPTION:
// @@ This argv_3656 permits to store a set of horizontal list.
// @@ Each horizontal list contains the list of resolved symbols.
// @@ The vertical list being a list of list of resolved symbols.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_1163
{
private:
	map<string, argv_927 *>			argv_2354;
	argv_4859						argv_2346;

public:
	argv_1163 ();
	void reset ();

	argv_4536 argv_2303 (argv_876, argv_2338&);

	argv_4536 argv_1777 (argv_4883& _nb_elem);
	argv_4536 argv_1776 (argv_876 _symbol, argv_2338&, argv_4883&);

	argv_4536 argv_1764 (argv_876, argv_2338&, argv_2338 *);
	argv_4536 argv_1782 (argv_876, argv_2338&, argv_2338 *);

	argv_4536 argv_660 (argv_876 _symbol_name);
	argv_4536 argv_659 (argv_2338&, argv_876, argv_2338);
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_869
// @@
// @@ DESCRIPTION:
// @@ This argv_3656 permits to store all the symbols and solved symbols
// @@ for a given plugin argv_4860.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_869
{
private:
	argv_1163 * argv_2349; // array initialyzed according to the number of types
	
public:
	argv_869 ();
	argv_4536 init (argv_4883);
	void reset ();

	argv_4536 argv_2303 (argv_4883 _plugin_type, argv_876, argv_2338&);

	argv_4536 argv_1777 (argv_4883 _plugin_type, argv_4883& _nb_elem);
	argv_4536 argv_1776 (argv_4883 _plugin_type, argv_876 _symbol, argv_2338&, argv_4883&);

	argv_4536 argv_1764 (argv_4883, argv_876, argv_2338&, argv_2338 *);
	argv_4536 argv_1782 (argv_4883, argv_876, argv_2338&, argv_2338 *);

	argv_4536 argv_660 (argv_4883, argv_876 _symbol_name);
	argv_4536 argv_659 (argv_2338&, argv_4883, argv_876, argv_2338);
};



#endif // argv_490



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1424
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
