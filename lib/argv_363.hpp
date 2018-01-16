// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_363.hpp
// @@ 
// @@ DESCRIPTION:
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_474
#define argv_474



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ pragma
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#if defined (__WIN32_OS__) 
#pragma warning(disable: 4786)
#pragma warning(disable: 4503)
#pragma warning(disable: 4291)
#endif // #if defined (__WIN32_OS__) 



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ include files
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include <string>
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <map>
#include <vector>
#if defined (__WIN32_OS__) 
	#include <Windows.h>
#endif // #if defined (__WIN32_OS__) 

#include "../LIB/argv_349.hpp"
#include "../LIB/argv_354.hpp"
#include "../LIB/argv_369.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ namespace declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
using namespace std;



class argv_1123
{
private:
	map<string, bool>::iterator argv_2341;
	argv_4883						argv_2361; 
	bool						argv_2343;
	map<string, bool>			argv_2365;

public:
	argv_1123 ();
	void reset ();

	void init (argv_4883, bool);
	bool argv_661 (argv_876);
	void argv_1791 (argv_4883&, bool&);
	bool argv_1765 (string&); 
	bool argv_1783 (string&);
};



class argv_1124
{
public:
	argv_4883	argv_4860;
	argv_4883	argv_4761;
	string	argv_4655;
	argv_2338	argv_4646;

	void set (argv_4883, argv_4883, argv_876, argv_2338);
};


// single: kernel & tool plugins
// multiple: plugins that can exists in multiple instances.
// a vector contains all possible multiple resolved symbols
// and the 'm_iter_by_type' and 'm_iter_by_target' map contains
// the indexes of the concerned groups.
/*
class argv_1125
{
private:
	vector<argv_1124>						m_v_resolved_entry;
	map<argv_4883, vector<argv_4883> >					m_v_by_type;
	map<argv_4883, vector<argv_4883> >::iterator			m_iter_by_type;

	map<argv_4883, vector<argv_4883> >					m_v_by_target;
	map<argv_4883, vector<argv_4883> >::iterator			m_iter_by_target;

	map<argv_4883, map<string, argv_1124> >	argv_2356; 

public:
	argv_1125 ();
	void reset ();
	argv_4536 argv_656 (argv_4883, argv_4883, argv_876, argv_2338, bool);
	argv_4536 argv_658 (argv_4883, argv_4883, argv_876, argv_2338);
	argv_4536 argv_657 (argv_4883, argv_4883, argv_876, argv_2338);

	argv_4536 get_first_group_by_type (vector<argv_4883>&);
	argv_4536 get_next_group_by_type (vector<argv_4883>&);

	argv_4536 get_first_group_by_target (vector<argv_4883>&);
	argv_4536 get_next_group_by_target (vector<argv_4883>&);

	argv_4536 lookup_one_grouped_symbol (argv_4883, argv_4883&, argv_4883&, string&, argv_2338&);
	argv_4536 argv_2332 (argv_4883, argv_876, argv_2338&);
};*/

class argv_1125
{
private:
	map<argv_4883, map<string, argv_1124> >			argv_2356; 

	map<argv_4883, map<string, argv_1124> >			argv_2355; 
	map<argv_4883, map<string, argv_1124> >::iterator	argv_2348;
	map<string, argv_1124>::iterator				argv_2347;	

	argv_4536 argv_658 (argv_891 *, argv_4883, argv_4883, argv_876, argv_2338);
	argv_4536 argv_657 (argv_891 *, argv_4883, argv_4883, argv_876, argv_2338);

public:
	argv_1125 ();
	void reset ();
	argv_4536 argv_656 (argv_891 *, argv_4883, argv_4883, argv_876, argv_2338, bool);
	argv_4536 argv_2332 (argv_4883, argv_876, argv_2338&);

	argv_4536 argv_2558 ();
	argv_4536 argv_2559 ();

	argv_4536 argv_1763 (argv_1124&);
	argv_4536 argv_1781 (argv_1124&);
};

#endif // argv_474
