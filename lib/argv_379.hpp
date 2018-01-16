// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_379.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1424 contains the argv_1178 structures and
// @@ functions necessary for a packet to be filled
// @@ in using argv_4860 independant functions.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_496
#define argv_496



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_354.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ namespace usage declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
using namespace std;



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ constants declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#define argv_2395 65536



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ argv_4860 casting argv_3656
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
union argv_4869  {
  argv_4881 argv_768;
  argv_4882 argv_769;
  argv_4883 argv_770;
  char argv_764[4];
};


class argv_1106;


// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1107	 
// @@
// @@ DESCRIPTION	:
// @@ This argv_3656 permits to store/retrieve different argv_1178 types
// @@ to the argv_826 associated argv_5011 a given packet.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_1107
{
private:
	argv_1107 (const argv_1107&);	// forbid argv_3656 binary copy
	argv_1107& operator= (const argv_1107&);	

	bool		argv_4995;
    argv_4881 *		argv_831;
    argv_4881 *		argv_828;
    argv_4881 *		argv_829;
	argv_4869	argv_4868;

public:
	void	reset ();
	argv_1107 ();
	argv_4536	init (argv_4881 *, argv_4883);
	argv_4536	argv_1790 (argv_4883&);

	argv_4536	insert (argv_4881);
	argv_4536	argv_1397 (argv_4881&);

	argv_4536	insert (argv_4882);
	argv_4536	argv_1397 (argv_4882&);

	argv_4536	insert (argv_4883);
	argv_4536	argv_1397 (argv_4883&);

	argv_4536	insert (argv_876);
	argv_4536	insert (const string&);
	argv_4536	argv_1397 (string&);

	argv_4536	insert_buffer (argv_4881 *, argv_4883);
	argv_4536	insert_fake_buffer (argv_4883);
	argv_4536	argv_1398 (argv_4881 *, argv_4883);

	void	argv_1118 (argv_1107&);
	void	argv_1237 (argv_876, FILE *);
	void	argv_1237 (argv_876, FILE *, argv_4883);
	argv_4881 *	argv_1753 ();

	friend class argv_1106;
};


#endif // argv_496



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1424
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
