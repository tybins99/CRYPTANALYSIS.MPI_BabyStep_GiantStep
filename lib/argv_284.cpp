// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_343.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1424 contains the argv_1178 structures used
// @@ by the event loop to argv_1900 clients
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@




// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ included files
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_343.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_864	
// @@
// @@ FUNCTION		:	argv_864
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
// @@ Normal constructor of the argv_864 argv_3656.
// @@ it resets all fields of the argv_3656 to their initial values.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_864::argv_864 () {
	reset ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_864	
// @@
// @@ FUNCTION		:	~argv_864
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
// @@ destructor of the 'argv_864' argv_3656.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_864::~argv_864 () {
	reset ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_864	
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
// @@ This function permits to reset the client's argv_1178 to
// @@ it's initial argv_4622.
// @@ all possible awaiting packets are discarded and destroyed
// @@ from the argv_4490 argv_4329.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_864::reset () {
	list<argv_1106 *>::iterator iter_tmp;
	// free all packets that were enqueued into the argv_4490 argv_4329
	for (iter_tmp=argv_4499.begin() ; iter_tmp != argv_4499.end() ; ++iter_tmp) {
		delete (*iter_tmp);
	}

	// clear the packet list
	argv_4499.clear ();

	argv_4333	= false;
	argv_5013	= false;
	argv_4995 = true;
	argv_2214	= argv_1368;
	argv_1747	= 0;
	argv_3766.reset ();
	argv_3762.reset ();
	argv_3762.argv_4517 ("C:");
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_864	
// @@
// @@ FUNCTION		:	argv_1787	
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	
// @@ _size: argv_4883& : size of the argv_4490 argv_4329.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_4536 : argv_943 if success,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to compute and retrieve the
// @@ size of the argv_4490 argv_4329.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_864::argv_1787 (argv_4883& _size) {
	argv_4536 argv_2072 = argv_943;
	_size = argv_4499.size ();
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_864	
// @@
// @@ FUNCTION		:	argv_1718	
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	
// @@ _pck_ptr: argv_1106 *&: argv_665 of the retrieved packet.
// @@    NULL if the retrieval failed. 
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_943 if success,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_1397 the argv_3623 packet from
// @@ the argv_4490 argv_4329. If the argv_4490 argv_4329 is empty, the function
// @@ fails and the '_pck_ptr' parameter is set to NULL.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_864::argv_1718 (argv_1106 *& _pck_ptr) {
	argv_4536 argv_2072 = argv_943;
	_pck_ptr = NULL;
	if (argv_4499.size () == 0) {
		argv_2072 = argv_941;
	}
	else { // pre-conditions are OK
		_pck_ptr = argv_4499.argv_1718 ();
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_864	
// @@
// @@ FUNCTION		:	pop_front
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_943 if success,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to discard the argv_1718 packet from
// @@ the argv_4490 argv_4329. Notice that if the argv_4490 argv_4329 is empty,
// @@ the operation fails.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_864::pop_front () {
	argv_4536 argv_2072 = argv_943;
	if (argv_4499.size () == 0) {
		argv_2072 = argv_941;
	}
	else { // pre-conditions are OK
		argv_1106 * argv_3761 = argv_4499.argv_1718 ();
		argv_4499.pop_front ();
		delete argv_3761;
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_864	
// @@
// @@ FUNCTION		:	push_back	
// @@
// @@ INPUT			:	
// @@ _pck_ptr: argv_1106 *: argv_665 of the packet to argv_646 to the
// @@   argv_4490 argv_4329.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_943 if success,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_646 a new packet to the argv_4490 argv_4329.
// @@ Notice that if the argv_4490 argv_4329 is full, the function will fail.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_864::push_back (argv_1106 * _pck_ptr) {
	argv_4536 argv_2072 = argv_943;
	if (argv_4499.size () >= argv_2400) {
		argv_2072 = argv_942;
	}
	else { // pre-conditions are OK
		argv_4499.push_back (_pck_ptr);	
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1424
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
