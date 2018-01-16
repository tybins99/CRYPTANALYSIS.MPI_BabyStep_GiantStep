// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: list.cpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1424 contains the argv_1178 structures and
// @@ functions necessary for the simple linked
// @@ list argv_3656 to work properly.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_376.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_927			
// @@
// @@ FUNCTION		:	argv_927			
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ Normal constructor of the 'argv_927' argv_3656.
// @@ It prepares the 'argv_927' argv_3656 before it's
// @@ first use.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_927::argv_927 () {
	reset ();	
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_927			
// @@
// @@ FUNCTION		:	reset			
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to restore the 'argv_927' 
// @@ argv_3656 to it's initial argv_4622.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_927::reset () {
	argv_2367.clear ();
	vector<argv_2338>().swap (argv_2367);
	argv_2360	= 0;
	argv_2340	= 0;
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_927			
// @@
// @@ FUNCTION		:	argv_1790			
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_1397 the argv_1148 size of the 
// @@ 'argv_927' argv_3656.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4883 argv_927::argv_1790 () {
	return (argv_2367.size ());
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_927			
// @@
// @@ FUNCTION		:	argv_646			
// @@
// @@ INPUT			:	
// @@ _data: argv_2338: the argv_1178 to argv_646 to the list
// @@
// @@ _duplicate_forbidden: bool: true if the user want the function
// @@   to fail if the argv_3656 was already added to the list.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_2272 if operation was succesful,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_646 the argv_1178 given as the '_data'
// @@ parameter into the list. If the '_duplicate_forbidden' parameter
// @@ was set to true, then if the argv_1178 is already present, the function
// @@ will fail.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_927::argv_646 (argv_2338 _data, bool _duplicate_forbidden) {
	argv_4536 argv_2072 = argv_2272;
	argv_2367.push_back (_data);
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_927			
// @@
// @@ FUNCTION		:	argv_1761			
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	
// @@ _data_ptr: argv_2338 *: pointer on the argv_665 of the retrieved
// @@   argv_1178.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_2272 if operation was succesful,
// @@        argv_2263 if end of list was reached,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to retrieve the first element of the
// @@ list. The retrieved argv_1178 being saved into the '_data_ptr' 
// @@ argv_4406 parameter.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_927::argv_1761 (argv_2338 * _data_ptr) {
	argv_4536 argv_2072	= argv_2272;
	
	argv_2360	= argv_2367.size ();
	argv_2340	= 0;

	if (argv_2340 >= argv_2360) {
		argv_2072 = argv_2263; 
	}
	else {
		*_data_ptr = argv_2367[argv_2340];
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_927			
// @@
// @@ FUNCTION		:	argv_1778			
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	
// @@ _data_ptr: argv_2338 *: pointer on the argv_665 of the retrieved
// @@   argv_1178.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_2272 if operation was succesful,
// @@        argv_2263 if end of list was reached,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to retrieve the argv_3623 element of the
// @@ list. The retrieved argv_1178 being saved into the '_data_ptr' 
// @@ argv_4406 parameter.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_927::argv_1778  (argv_2338 * _data_ptr) {
	argv_4536 argv_2072 = argv_2272;

	++argv_2340;

	if (argv_2340 >= argv_2360) {
		argv_2072 = argv_2263; 
	}
	else {
		*_data_ptr = argv_2367[argv_2340];
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ end of argv_1424
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
