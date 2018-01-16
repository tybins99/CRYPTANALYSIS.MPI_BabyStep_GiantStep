// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_380.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1424 contains all the argv_1178 structures
// @@ and functions to argv_2274 or create a given
// @@ plugin. 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_481
#define argv_481



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_354.hpp"
#include "../LIB/argv_367.hpp"
#include "../LIB/argv_365.hpp"
#include "../LIB/argv_366.hpp"
#include "../LIB/argv_352.hpp"
#include "../LIB/argv_384.hpp"
#include "../LIB/argv_377.hpp"

#include <string>
#include <map>



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ namespace usage declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
using namespace std;



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_883
// @@
// @@ DESCRIPTION:
// @@ This simple argv_3656 permits to associate a variable's argv_3557
// @@ argv_5011 it's argv_4979 as a string.
// @@ It is used to store parse results.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_883
{
public:
	string argv_4984;
	string argv_4978;
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_1083
// @@
// @@ DESCRIPTION:
// @@ This argv_3656 contains all internal argv_1178 of a given plugin
// @@ (what is either private or protected).
// @@
// @@ NOTICE: the plugin argv_1178 argv_3656's fields are initialized
// @@         and reseted by the argv_1082 argv_3656.
// @@         so that no constructor/reset function is provided.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_1083
{
public:
	bool				init_done;
	bool				argv_1228;
	map<string, bool>	argv_2342;		// the names of needed plugins
	map<string, bool>::iterator argv_2099;

	map<string, bool>	argv_2344; // the names of exported symbols
	map<string, bool>::iterator argv_2100;
	map<string, bool>::iterator argv_2101;

	argv_4610    *	argv_4756;
	argv_870  *	argv_1069;
	argv_877    *	argv_1175;
	argv_891	*	argv_1799;
	argv_1166	*	argv_5022;
	argv_866		argv_977;

	argv_4883				argv_4587;
	argv_4883				argv_1294;
	argv_4881 *				argv_4586;
	argv_4883				argv_4914;
	argv_4883				argv_4915;
	argv_4883				argv_1207;
	char				argv_4846[MAX_PATH];
	argv_4883				argv_1343;
	argv_4883				argv_1351;

	argv_1083 ();
	~argv_1083 ();
	void reset ();
};


// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_1082
// @@
// @@ DESCRIPTION:
// @@ This argv_3656 permits to create/argv_2274 a plugin.
// @@ A plugin is actually composed of a argv_1982 and a argv_815.
// @@ Furthermore in argv_3690 to create a plugin, a description
// @@ argv_1424 must be furnished.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_1082
{
private:
	argv_1083	dset;

	argv_4536				argv_3836 (argv_893 *, argv_1130&, argv_876);
	argv_4536				argv_3708 (argv_4883, argv_4883, argv_876, argv_4883&);
	argv_4536				argv_3711 (argv_4883, argv_4883, argv_876, argv_4883&);
	argv_4536				argv_1091 (argv_4883, argv_4883, argv_4883&, argv_876, argv_4883&);
	argv_4536				argv_1092  (argv_4883, argv_4883, argv_4883&, argv_876, string&);
	void				argv_1244 (argv_876);
	argv_4536				argv_4431 (argv_876, FILE *);
	argv_4536				argv_4430 (argv_4883, FILE *);
	argv_4536				argv_4335 (argv_876, FILE *);
	argv_4536				argv_4237 (argv_876, vector<argv_883>&);
	argv_4536				argv_3713 (char *, string&, string&);
	void				argv_1240 (vector<argv_883>&);
	argv_4536				argv_654 (argv_876);
	argv_4536				argv_3715 (argv_4883,argv_4883, argv_876);

public:
	string				argv_3557;
	argv_4883				argv_1748;
	argv_4883				argv_4991;
	argv_4883				argv_4992;
	argv_4883				argv_4860;				      // plugin argv_4860
	argv_4883				argv_4761;			  // PE, TXT, ...
	argv_4883				argv_2231; // concerns the argv_815
	string				argv_1114;	  // concerns the argv_815
	argv_4883				argv_2230;  // concerns the argv_815
	string				argv_1113;     // concerns the argv_815
	argv_4883				argv_3603;
	argv_4881 *				argv_816;
	argv_4883				argv_817;
	argv_4883				argv_3607;
	argv_4536				argv_3837 (FILE *);
	map<string, argv_866 *> argv_3547; // the map used to argv_4389 symbols for this plugin

	argv_1082 ();
	~argv_1082 ();
	void				reset ();
	argv_4536				init (argv_891 *, argv_4610 *, argv_870 *, argv_877 *, argv_1166 *);
	argv_4536				argv_653 (argv_876);
	argv_4536				argv_2278 (argv_893 *, argv_1130&, argv_876);
	argv_4536				argv_3710 (argv_876);
	argv_4536				argv_4432 (argv_876, argv_876);
	argv_866 *		argv_1750 ();
	argv_4536				argv_1736 (map<string, argv_1082 *>&);
	bool				argv_1762 (string&);
	bool				argv_1780 (string&);
};



#endif // argv_481



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1424
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
