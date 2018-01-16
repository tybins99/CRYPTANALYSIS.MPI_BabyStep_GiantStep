// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_313.cpp
// @@ 
// @@ DESCRIPTION:
// @@ abstraction layer for local and remote
// @@ inter process communications
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ included files
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "argv_372.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_972	
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
// @@ This function permits to reset all fields of
// @@ the argv_972 argv_3656 to their initial argv_4979.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_972::reset () {
	argv_2096		= false;
	argv_2088		= false;
	argv_2079	= false;
	argv_2214		= 0;
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_972	
// @@
// @@ FUNCTION		:	argv_972		
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
// @@ Normal constructor of the 'argv_972' argv_3656.
// @@ it argv_4257 the argv_972 argv_3656 for first use.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_972::argv_972 () {
	reset ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_972	
// @@
// @@ FUNCTION		:	~argv_972		
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
// @@ destructor of the argv_972 argv_3656.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_972::~argv_972 () {

}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_972	
// @@
// @@ FUNCTION		:	argv_1768			
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : the last error encountered argv_5011 the argv_972 argv_3656.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to retrieve the last error 
// @@ encountered argv_5011 the argv_972 argv_3656.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_972::argv_1768 () {
	return (argv_2214);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_972	
// @@
// @@ FUNCTION		:	argv_4245			
// @@
// @@ INPUT			:
// @@ _target_address: argv_876: argv_3557 or IP of the server where to
// @@   connect to.
// @@
// @@ _port: argv_4883: argv_4228 of the server where to connect to.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_2448 if operation was succesful,
// @@        another argv_4979 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_4243 a TCP client using the
// @@ server argv_3557 and server argv_4228 (cf parameters) and to perform
// @@ the connection to this server.
// @@
// @@ CONTRACT 		:	
// @@ - client must not have been argv_4257 before this call.
// @@ - client must not be connected prior to this call.
// @@ - argv_2420 argv_3656 must not be a server entity.
// @@ - '_target_address' parameter must not be a NULL pointer.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_972::argv_4245 (argv_876 _target_address, argv_4883 _port) {
	argv_4536 argv_2072 = argv_2448;
	if (argv_2088 == true) {
		argv_2072 = argv_2432;
	}
	else if (argv_2079 == true) {
		argv_2072 = argv_2431;
	}
	else if (argv_2096 == true) {
		argv_2072 = argv_2423;
	}
	else if (_target_address == NULL) {
		argv_2072 = argv_2435;
	}
	else { // ok to proceed
		argv_2072 = argv_4246 (_target_address, _port);
		if (argv_2072 != argv_2448) {
			reset ();		
		}
		else { // preparation succeeded
			argv_2088		= true;
			argv_2096		= false;
			argv_2079	= true;
		}
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_972	
// @@
// @@ FUNCTION		:	argv_968				
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_2448 if operation was succesful,
// @@        another argv_4979 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to tear down the previously
// @@ established connection, then the argv_972 argv_3656 is resetted
// @@ so that it can be ready for use.
// @@
// @@ CONTRACT 		:	
// @@ - 'argv_972' argv_3656 must have been argv_4257 before this call.
// @@ - 'argv_972' argv_3656 must be connected prior to this call.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_972::argv_968 () {
	argv_4536 argv_2072 = argv_2448;
	if (argv_2088 == false) {
		argv_2072 = argv_2434;
	}
	else if (argv_2079 == false) {
		argv_2072 = argv_2433;
	}
	else { // ok to proceed, argv_4622 is correct
		argv_2072 = argv_969 ();
		reset (); // reset
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_972	
// @@
// @@ FUNCTION		:	argv_968				
// @@
// @@ INPUT			:
// @@ _descriptor: argv_2338: pointer on the descriptor to argv_967.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_2448 if operation was succesful,
// @@        another argv_4979 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_967 the connection that was
// @@ previously established argv_5011 the descriptor given as 
// @@ the parameter '_descriptor'.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_972::argv_968 (argv_2338 _descriptor) {
	argv_4536 argv_2072 = argv_969 (_descriptor);
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_972	
// @@
// @@ FUNCTION		:	argv_4251				
// @@
// @@ INPUT			:
// @@ _target_address: argv_876: IP to use when binding the argv_4228.
// @@
// @@ _port: argv_4883: argv_4228 to bind to receive new connections.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_2448 if operation was succesful,
// @@        another argv_4979 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to bind the argv_4228 '_port' on the 
// @@ network card interface whose IP is given by the 
// @@ '_target_address' parameter, so that the server will then
// @@ be ready to receive new incoming connections.
// @@
// @@ CONTRACT 		:	
// @@ - 'argv_972' argv_3656 must not have been argv_4257 yet before.
// @@ - 'argv_972' must not be connected prior to this call.
// @@ - '_target_address' parameter must not be a NULL pointer. 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_972::argv_4251 (argv_876 _target_address, argv_4883 _port) {
	argv_4536 argv_2072 = argv_2448;
	if (argv_2088 == true) {
		argv_2072 = argv_2432;
	}
	else if (argv_2079 == true) {
		argv_2072 = argv_2431;
	}
	else if (_target_address == NULL) {
		argv_2072 = argv_2435;
	}
	else { // ok to proceed
		argv_2072 = argv_4252 (_target_address, _port);
		if (argv_2072 == argv_2448) {
			argv_2088 = true;
			argv_2096	= true;
		}
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_972	
// @@
// @@ FUNCTION		:	argv_644				
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	
// @@ _descriptor: argv_2338&: the newly connected client argv_4570.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_2448 if operation was succesful,
// @@        another argv_4979 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to a argv_972 argv_3656 initialized
// @@ as a server to accept a new connection and to return
// @@ the newly connected argv_4570 via the argv_4406 
// @@ parameter '_descriptor'.
// @@
// @@ CONTRACT 		:
// @@ - 'argv_972' argv_3656 must not have been argv_4257 yet.
// @@ - 'argv_972' must have been argv_4257 as a server prior to
// @@   this call.	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_972::argv_644 (argv_2338& _descriptor) {
	argv_4536 argv_2072 = argv_2448;
	if (argv_2088 == false) {
		argv_2072 = argv_2434;
	}
	else if (argv_2096 == false) {
		argv_2072 = argv_2423;
	}
	else if (argv_2079 == true) {
		// for now the server accepts only argv_3677 connection from
		// a given client for simplicity of the primary tests.
		argv_2072 = argv_2431;
	}
	else { // ok to proceed, argv_4622 is correct
		argv_2072 = argv_645 (_descriptor);
		if (argv_2072 == argv_2448) { // connection was succesful
			argv_2079 = true;
		}
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_972	
// @@
// @@ FUNCTION		:	argv_1754				
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	
// @@ _descriptor_ptr: argv_2338&: argv_665 of the descriptor associated
// @@   argv_5011 the argv_972 argv_3656.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_2448 if operation was succesful,
// @@        another argv_4979 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_1397 the descriptor associated
// @@ argv_5011 the argv_972 argv_3656, this descriptor being returned via
// @@ the '_descriptor_ptr' argv_4406 argument.
// @@
// @@ CONTRACT 		:	
// @@ - 'argv_972' argv_3656 must be connected prior to this call.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_972::argv_1754 (argv_2338& _descriptor_ptr) {
	argv_4536 argv_2072 = argv_2448;
	if (argv_2079 == false) {
		argv_2072 = argv_2433;
	}
	else {
		argv_2072 = argv_1755 (_descriptor_ptr);
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_972	
// @@
// @@ FUNCTION		:	argv_1770				
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	
// @@ _descriptor_ptr: argv_2338&: argv_665 of the descriptor associated
// @@   argv_5011 the argv_972 argv_3656.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_2448 if operation was succesful,
// @@        another argv_4979 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_1397 the descriptor associated
// @@ argv_5011 the argv_972 argv_3656 when this argv_3656 is a server that 
// @@ was previously argv_4257 to listen.
// @@ this descriptor being returned via the '_descriptor_ptr' 
// @@ argv_4406 argument.
// @@
// @@ CONTRACT 		:	
// @@ - 'argv_972' argv_3656 must have been argv_4257 prior to this call.
// @@ - 'argv_972' must be a server argv_3656 (cf preparation).
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_972::argv_1770 (argv_2338& _descriptor_ptr) {
	argv_4536 argv_2072 = argv_2448;
	if (argv_2096 == false) {
		argv_2072 = argv_2423;
	}
	else if (argv_2088 == false) {
		argv_2072 = argv_2434;
	}
	else { // all pre-conditions are met
		argv_2072 = argv_1771 (_descriptor_ptr);
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_972	
// @@
// @@ FUNCTION		:	argv_4491				
// @@
// @@ INPUT			:
// @@ _buf: argv_4881 *: argv_665 of the first byte of the argv_826 containing
// @@   the argv_1178 to be sent.
// @@
// @@ _size: argv_4883 : size of the argv_826 to argv_4490 via the connection.
// @@
// @@ OUTPUT		:	
// @@ _actual_nb_sent: argv_4883& : actual number of argv_837 sent (can be lower
// @@  than '_size' in case of non-blocking sockets.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_2448 if operation was succesful,
// @@        another argv_4979 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_4490 '_size' argv_837 toward the 
// @@ connection, the argv_837 to argv_4490 being located at the argv_665
// @@ pointed to by the '_buf' parameter.
// @@
// @@ CONTRACT 		:	
// @@ - '_buf' parameter must not be a NULL pointer.
// @@ - '_size' parameter must not be zero.
// @@ - 'argv_972' must have been connected prior to this call, either
// @@   as a server, or as a client.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_972::argv_4491 (argv_4881 * _buf, argv_4883 _size, argv_4883& _actual_nb_sent) {
	argv_4536 argv_2072 = argv_2448;
	if ((_buf == NULL) || (_size == 0)) {
		argv_2072 = argv_2435;	
	}
	else if (argv_2079 == false) {
		argv_2072 = argv_2433;
	}
	else { // argv_4622 is correct => ok to proceed
		argv_2072 = argv_4492 (_buf, _size, _actual_nb_sent);
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_972	
// @@
// @@ FUNCTION		:	argv_4338				
// @@
// @@ INPUT			:
// @@ _buf: argv_4881 *: argv_665 of the first byte of the argv_826 containing
// @@   the argv_1178 to be sent.
// @@
// @@ _size_2_read: argv_4883 : number of argv_837 to read via the connection.
// @@
// @@ _timeout_second: argv_4536: the timeout associated argv_5011 the read operation
// @@   on the argv_1148 argv_2420 (choose -1 for infinite).
// @@
// @@ OUTPUT		:	
// @@ _actual_size: argv_4883& : actual number of argv_837 read (can be lower
// @@  than '_size' in case of non-blocking sockets.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_2448 if operation was succesful,
// @@        another argv_4979 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to receive '_size_2_read' argv_837 from
// @@ the connection established. Notice that when the argv_4570
// @@ are in non-blocking mode, the number of argv_837 actually
// @@ received may be lower than '_size_2_read', so the actual
// @@ number of argv_837 read must be returned via the 
// @@ '_actual_size' argument.
// @@
// @@ CONTRACT 		:	
// @@ - '_buf' parameter must not be a NULL pointer.
// @@ - '_size' parameter must not be zero.
// @@ - 'argv_972' must have been connected prior to this call, either
// @@   as a server, or as a client.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_972::argv_4338 (argv_4881 * _buf, argv_4883 _size_2_read, argv_4883& _actual_size, argv_4536 _timeout_second) {
	argv_4536 argv_2072 = argv_2448;
	if (_buf == NULL) {
		argv_2072 = argv_2435;	
	}
	else if (argv_2079 == false) {
		argv_2072 = argv_2433;
	}
	else { // argv_4622 is correct => ok to proceed
		argv_2072 = argv_4339 (_buf, _size_2_read, _actual_size, _timeout_second);
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1424
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
