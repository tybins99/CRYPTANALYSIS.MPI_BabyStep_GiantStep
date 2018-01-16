// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_356.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1424 contains all the constants
// @@ and functions, argv_1178 structures that are
// @@ common to each possible test.
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_420
#define argv_420



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ included files
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_354.hpp"
#include "../LIB/argv_352.hpp"
#include "../LIB/argv_369.hpp"
#include "../LIB/argv_370.hpp"
#include <iostream>
#include <string>
#include <map>



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ namespace usage declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
using namespace std;



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ function pointer definition for a test function
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
typedef argv_4536 (* argv_1641) (argv_963 *, int, char **);



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ functions that argv_1235 the parameters types and number
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#if defined (__WIN32_OS__) 
	void argv_1261  (argv_963 *);
	void argv_1262  (argv_963 *);
	void argv_1265  (argv_963 *);
	void argv_1266  (argv_963 *);
	void argv_1267  (argv_963 *);
	void argv_1268  (argv_963 *);
	void argv_1269  (argv_963 *);
	void argv_1270  (argv_963 *);
	void argv_1271  (argv_963 *);
	void argv_1272  (argv_963 *);
	void argv_1263 (argv_963 *);
	void argv_1264 (argv_963 *);
#endif // #if defined (__WIN32_OS__) 


// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ function that argv_1900 the dispatching of all tests
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 main_test (int, char **, map<argv_4883, argv_1641>&);

class argv_1143
{
public:
	argv_1641		argv_1707;
	int				argv_759;
	char **			argv_760;	
	string			argv_2313;
	string			argv_4503;
	argv_4882			argv_4504;
	argv_963 			argv_2327;
	argv_963	*		argv_2317;
	argv_4536			argv_2072;
	argv_4883			argv_4934; // to give a unique ID to each thread

	argv_1143 ();
	~argv_1143 ();
};


class argv_1142
{
private:
	map<argv_4883, argv_1641> argv_2345;
	map<argv_4883, argv_1641>::iterator argv_2099;

public:
	argv_1142 ();
	void reset ();
	argv_4536 argv_662 (argv_4883, argv_1641);
	argv_4536 argv_4424 (int, char **);
};


class argv_892
{
public:
	argv_963 *		argv_2316;	
	int			argv_759;
	char **		argv_760;
	argv_4536		argv_2073;
	argv_4536		argv_2074;
	argv_4536		argv_3604; // general use
	argv_4883		argv_789; // used in advanced tests

	argv_892 ();
};

void argv_2322 (FILE * _fp, argv_876 _msg, bool _echo_on=true, bool _add_eol=true);
void argv_2321 (FILE * _fp, argv_4536 _iret, argv_4883 _errno, bool _echo_on=true, bool _add_eol=true);
void argv_2318   (FILE * _fp, argv_4536 _iret, argv_876 _msg, bool _add_eol=true);
void argv_1238 (argv_876 _msg, argv_4883 _amount);

DWORD WINAPI argv_2225 (argv_2338 lParam);
argv_4536 argv_1425 (argv_963 *, argv_876, argv_876, bool&);


string test_err_2_string (argv_4536);


#endif // argv_420



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1424
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
