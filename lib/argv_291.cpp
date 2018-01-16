// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_350.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1424 contains the necessary objects
// @@ to argv_1900 n argv_2420 and all their events.
// @@ (argv_4570 or pipe)
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ included files
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_350.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_962	
// @@
// @@ FUNCTION		:	argv_962	
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
// @@ normal constructor of the 'argv_962' argv_3656.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_962::argv_962 () {
	reset ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_962	
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
// @@ This function permits to set all fields of
// @@ the 'argv_962' argv_3656 to their initial argv_4979.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_962::reset () {
	argv_947 = argv_959;
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_887	
// @@
// @@ FUNCTION		:	argv_887	
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
// @@ Normal constructor of the 'argv_887' argv_3656.
// @@ it sets all fields of the 'argv_962' argv_3656 to 
// @@ their initial argv_4979.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_887::argv_887 () {
	reset ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_887	
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
// @@ This function permits to set all fields of the 
// @@ 'argv_887' argv_3656 to their initial argv_4979.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_887::reset () {
	argv_1706			= NULL;
	argv_1708		= NULL;
	argv_1709			= NULL;
	argv_1651			= NULL;
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_886	
// @@
// @@ FUNCTION		:	argv_886	
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
// @@ normal constructor of the 'argv_886' argv_3656.
// @@ it sets all fields of the 'argv_886' argv_3656 to 
// @@ their initial argv_4979.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_886::argv_886 () {
	reset ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_886	
// @@
// @@ FUNCTION		:	reset
// @@
// @@ INPUT			:	
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
// @@ This function permits to bring the 'argv_886' argv_3656
// @@ back to it's initial argv_4622 :
// @@ - free box stack is emptied
// @@ - all sets are reseted.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_886::reset () {
	// empty the stack of free box indexes
	while (argv_4612.empty () == false) {
		argv_4612.pop ();
	}

	// reset all sets
	FD_ZERO (&readfds);
	FD_ZERO (&readfds_dirty);
	FD_ZERO (&writefds);
	FD_ZERO (&writefds_dirty);
	argv_2316				= NULL;

	argv_3602			= 0;
	argv_3610			= 0;
	argv_946		= 0;
	argv_945			= NULL;
	argv_3606		= 0; // debug purpose

	// force the vector to free it's internal memory
	argv_4971.clear ();
	vector<argv_962>().swap (argv_4971);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_886	
// @@
// @@ FUNCTION		:	argv_906	
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@ _nb_ready: argv_4883: the number of remaining argv_4570 descriptor
// @@   that have a pending event. The function must update it's
// @@   argv_4979.
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_1368 if success,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	protected
// @@	
// @@ DESCRIPTION	:
// @@ This function checks all listening argv_4570 to see if they have
// @@ a pending connection. If it is the case, then the connection
// @@ is accepted, and a box is chosen for this new client.
// @@ Then the application dependant is called for each new connection.
// @@ Notice that this application dependant function can either
// @@ trigger the write event or not.
// @@
// @@ Notice that the listeners are handled using only the argv_4570
// @@ (not the argv_2420 argv_3656).
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_886::argv_906 (argv_4883& _nb_ready) {
	argv_4536 argv_2072			= argv_1368;
	argv_4883 his_box		= 0;
	bool trigger_write	= false;
	argv_4883 nb_new_cnx		= 0;
	SOCKET sock_tmp;

#if defined (__DEBUG_EVT_LOOP__) 
	char argv_4846[MAX_PATH];
	argv_2316->argv_2323 (argv_1191, "checking new connections");
#endif // #if defined (__DEBUG_EVT_LOOP__) 

	// check all listening sockets
	for (argv_4883 i=0 ; i<argv_3610 ; i++) {
		if (FD_ISSET (argv_4971[i].argv_4570, &readfds_dirty)) {
			sock_tmp = accept (argv_4971[i].argv_4570 , NULL, NULL);

			_nb_ready--;

#if defined (__WIN32_OS__)
			if (sock_tmp == INVALID_SOCKET) {
#endif // #if defined (__WIN32_OS__)
#if defined (__LINUX_OS__)
			if (sock_tmp < 0) {
#endif // #if defined (__LINUX_OS__)
				argv_2072 = argv_1353;
				break;
			}

#if defined (__DEBUG_EVT_LOOP__) 
			argv_4569 (argv_4846, MAX_PATH, "new connection for listener %u : new descriptor = %u", argv_4971[i].argv_4570, sock_tmp);
			argv_4846[MAX_PATH - 1] = '\0';
			argv_2316->argv_2323 (argv_1191, "new connection : descriptor = ", (argv_4883) sock_tmp);
#endif // #if defined (__DEBUG_EVT_LOOP__) 

			// the connected client inherits the argv_4860 of the listener.
			argv_2072 = argv_648 (his_box, sock_tmp, argv_4971[i].argv_947);
			if (argv_2072 != argv_1368) {
				break;
			}

			// disable the Nagle's algorithm for the newly connected argv_4570
			argv_2072 = disable_nagle_algorithm (sock_tmp);
			if (argv_2072 == argv_2448) {
#if defined (__DEBUG_EVT_LOOP__) 
				argv_2316->argv_2323 (argv_1346, "argv_886::argv_906  - disable_nagle_algorithm...[SUCCESS]");
#endif // #if defined (__DEBUG_EVT_LOOP__) 
				argv_2072 = argv_1368; // remap error argv_976
			}
			else {
				argv_2316->argv_2323 (argv_1346, "+++ ERROR: argv_886::argv_906 - 'disable_nagle_algorithm' failed !");
			}

			// to ensure that it won't be triggered if the 
			// function does not set it
			trigger_write = false; 
			nb_new_cnx++;
			// now let the user function do it's job
			argv_2072 = argv_1352.argv_1706 (argv_945, his_box, trigger_write);
			if (argv_2072 != argv_1368) {
				break;
			}
			else if (trigger_write == true) { // if argv_4570 must be scheduled for write
				argv_2072 = argv_649 (i, false, true); // argv_646 it for write event
				if (argv_2072 != argv_1368) {
					break;
				}
			}
		}
		else {
#if defined (__DEBUG_EVT_LOOP__) 
			argv_4569 (argv_4846, MAX_PATH, "listener at listening box %u has no new connection (fd=%u)", i, argv_4971[i].argv_4570);
			argv_4846[MAX_PATH - 1] = '\0';
			argv_2316->argv_2323 (argv_1191, argv_4846);
#endif // #if defined (__DEBUG_EVT_LOOP__) 
		}

		if (_nb_ready == 0) {
			break;
		}
	}

#if defined (__DEBUG_EVT_LOOP__) 
	argv_2316->argv_2323 (argv_1191, "number of new connections processed : ", nb_new_cnx);
#endif // #if defined (__DEBUG_EVT_LOOP__) 

	if (argv_2072 == argv_2448) {
		argv_2072 = argv_1368; // remap error argv_976
	}
	return (argv_2072);
}

string argv_948 (argv_4881 _client_type) {
	string type_str;
	switch (_client_type) {
		case argv_959:				type_str = "argv_959";				break;	
		case argv_957:						type_str = "argv_957";						break;	
		case argv_958:					type_str = "argv_958";					break;	
		case argv_949:					type_str = "argv_949";					break;	
		case argv_952:	type_str = "argv_952";	break;	
		case argv_951:		type_str = "argv_951";		break;	
		case argv_954:		type_str = "argv_954";		break;	
		case argv_953:		type_str = "argv_953";		break;
		case argv_955:				type_str = "argv_955";				break;	
		case argv_950:				type_str = "argv_950";				break;	

		default: type_str = "<unknown client argv_4860>";
	}
	return (type_str);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_886	
// @@
// @@ FUNCTION		:	argv_1253	
// @@
// @@ INPUT			:
// @@ _socket: SOCKET: the descriptor of the new connection.
// @@ _client_type: argv_4881 : the argv_4860 of the client associated 
// @@    argv_5011 the newly connected argv_4570.
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
// @@ This function permits to argv_1235 information concerning
// @@ a newly connected client and it's associated argv_4860 to the 
// @@ log argv_1424.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_886::argv_1253 (SOCKET& _socket, argv_4881 _client_type) {
	char argv_4846[MAX_PATH];
	switch (_client_type) {
		case argv_959				: argv_4569 (argv_4846, MAX_PATH, "adding newly connected client : descriptor = %u (argv_947=argv_959)", (argv_4883) _socket);				break;
		case argv_957						: argv_4569 (argv_4846, MAX_PATH, "adding newly connected client : descriptor = %u (argv_947=argv_957)", (argv_4883) _socket);						break;
		case argv_958						: argv_4569 (argv_4846, MAX_PATH, "adding newly connected client : descriptor = %u (argv_947=argv_958)", (argv_4883) _socket);						break;
		case argv_949					: argv_4569 (argv_4846, MAX_PATH, "adding newly connected client : descriptor = %u (argv_947=argv_949)", (argv_4883) _socket);					break;
		case argv_952	: argv_4569 (argv_4846, MAX_PATH, "adding newly connected client : descriptor = %u (argv_947=argv_952)", (argv_4883) _socket);	break;
		case argv_951		: argv_4569 (argv_4846, MAX_PATH, "adding newly connected client : descriptor = %u (argv_947=argv_951)", (argv_4883) _socket);		break;
		case argv_954		: argv_4569 (argv_4846, MAX_PATH, "adding newly connected client : descriptor = %u (argv_947=argv_954)", (argv_4883) _socket);		break;
		case argv_953			: argv_4569 (argv_4846, MAX_PATH, "adding newly connected client : descriptor = %u (argv_947=argv_953)", (argv_4883) _socket);			break;
		case argv_955				: argv_4569 (argv_4846, MAX_PATH, "adding newly connected client : descriptor = %u (argv_947=argv_955)", (argv_4883) _socket);				break;
		case argv_950				: argv_4569 (argv_4846, MAX_PATH, "adding newly connected client : descriptor = %u (argv_947=argv_950)", (argv_4883) _socket);				break;

		default :
			argv_4569 (argv_4846, MAX_PATH, "adding newly connected client : descriptor = %u (argv_947=<unknown argv_4860>)", (argv_4883) _socket);
	}
	argv_4846[MAX_PATH - 1] = '\0';
	argv_2316->argv_2323 (argv_1191, argv_4846);
}

bool argv_886::argv_956 (argv_4881 _type) {
	bool bret = false;
	if ((_type == argv_957) ||
		(_type == argv_958) ||
		(_type == argv_949) ||
		(_type == argv_952) ||
		(_type == argv_951) ||
		(_type == argv_954) ||
		(_type == argv_953) ||
		(_type == argv_955) ||
		(_type == argv_950)) {
		bret = true;
	}
	return (bret);
}


// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_886	
// @@
// @@ FUNCTION		:	argv_648
// @@
// @@ INPUT			:	
// @@ _socket: SOCKET&: descriptor of the new client
// @@ _client_type: argv_4881 : argv_4860 of the new client.
// @@
// @@ OUTPUT		:	
// @@ _index: argv_4883: index of the box chosen for the new client.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_1368 if success,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	protected
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_646 a new client by choosing a free
// @@ box for it, and by adding it to the proper event sets.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_886::argv_648 (argv_4883& _index, SOCKET& _socket, argv_4881 _client_type) {
	argv_4536 argv_2072 = argv_1368;

#if defined (__DEBUG_EVT_LOOP__) 
	argv_1253 (_socket, _client_type);
	//argv_2316->argv_2323 (argv_1191, "adding newly connected client : descriptor = ", (argv_4883) _socket);
#endif // #if defined (__DEBUG_EVT_LOOP__) 
	// ensure that the client argv_4860 is coherent
	if (argv_956 (_client_type) == false) {
		argv_2072 = argv_1357;
	}
	else { // client argv_4860 is correct
		if (argv_4612.size () == 0) { // choose a free box for this newcomer
			argv_2072 = argv_1369; 
		}
		else { // found a free box for this newcomer
			_index = argv_4612.top ();
			argv_4612.pop ();

			// ensure that this box is free
			if (argv_945[_index].argv_4995 == false) {
				argv_2072 = argv_1354;
			}
			else { // the chosen box is not busy => OK to use
				argv_945[_index].argv_4995	= false;
				argv_945[_index].argv_4570		= _socket; 
				argv_945[_index].argv_947	= _client_type;
				argv_945[_index].argv_1747	= argv_945[_index].argv_1747 + 1;

				argv_2072 = argv_945[_index].argv_2444.init_with_connected_client_socket (_socket);
				if (argv_2072 == argv_2448) {
					argv_3602++; // to speed up the client loop

					// argv_646 this new argv_4570 to the read event set
					argv_2072 = argv_649 (_index, true, false);

					// ensure that the argv_4490 argv_4329 is empty for this client
					argv_4883 queue_size = 0;
					argv_4536 iret2 = argv_945[_index].argv_1787 (queue_size);
					if (iret2 == argv_943) {
						/*
				#if defined (__DEBUG_EVT_LOOP__) 
						char argv_4846[MAX_PATH];
						argv_4569 (argv_4846, MAX_PATH, "argv_886::argv_648 -  Initial argv_4490 argv_4329 size for client %u is %u", _index, queue_size);
						argv_4846[MAX_PATH - 1] = '\0';
						argv_2316->argv_2323 (argv_1191, argv_4846);
				#endif // #if defined (__DEBUG_EVT_LOOP__) 
						*/
					}

				}
			}
		}
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_886	
// @@
// @@ FUNCTION		:	argv_4351	
// @@
// @@ INPUT			:	
// @@ _index: argv_4883 : index from the client argv_4759 of the client to
// @@   remove.
// @@
// @@ _last_errno: argv_4536 : the last error encountered argv_5011 this client
// @@   we need it so that we can save it to the client argv_4759 for the
// @@   application dependant functions.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_1368 if success,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	protected
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to remove the client whose location
// @@ in the argv_945 is '_index', and the last error encountered
// @@ argv_5011 this client is contained in the '_last_errno' parameter.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_886::argv_4351 (argv_4883 _index, argv_4536 _last_errno) {
	argv_4536 argv_2072 = argv_1368;
	// ensure that the box is busy
	if (argv_945[_index].argv_4995 == true) {
		argv_2072 = argv_1355;
	}
	else { // the box is busy => ok to proceed
		// argv_967 the argv_4570 (may fail but it's OK)
		argv_945[_index].argv_2444.argv_968 ();
#if defined (__DEBUG_EVT_LOOP__) 
		string serror = argv_1344 (argv_2072);
		argv_2316->argv_2323 (argv_1191, "event_loop - forced the connection to argv_967 : argv_1343= ", serror.c_str());
#endif // #if defined (__DEBUG_EVT_LOOP__) 

		argv_2072 = argv_4352 (_index, _last_errno);
		if (argv_2072 == argv_1368) {
			argv_945[_index].argv_4995	= true;
			argv_4612.push (_index); // this box becomes available
			argv_3602--;
		}
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_886	
// @@
// @@ FUNCTION		:	argv_4280	
// @@
// @@ INPUT			:	
// @@ _client_tab: argv_864 *: array of clients
// @@
// @@ _index: argv_4883 : index of the client whose argv_4570 is
// @@   readable.
// @@
// @@ OUTPUT		:
// @@ _trigger_write: bool&: true if a write sequence is to be initiated
// @@   set to false otherwise.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_1368 if success,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to process the descriptor of a client
// @@ that is ready to read. This client is found using the '_index'
// @@ parameter, coming along argv_5011 the '_client_tab' parameter.
// @@ 
// @@ Notice that if a full packet was read, the application dependant
// @@ function is called, and this function may or may not trigger a
// @@ write event for this client using the argv_4406 
// @@ argument '_trigger_write'.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_886::argv_4280 (argv_864 * _client_tab, argv_4883 _index, vector<argv_4883>& _v_index_2_trigger_write) {
	argv_4536 argv_2072 = argv_1368;
#if defined (__DEBUG_EVT_LOOP__) 
	char argv_4846[MAX_PATH];
	string client_type_tmp = argv_948 (_client_tab[_index].argv_947);
	argv_4569 (argv_4846, MAX_PATH, "event_loop - processing client ready to read : index = %d (argv_4860=%s)", _index, client_type_tmp.c_str());
	argv_2316->argv_2323 (argv_1191, argv_4846);
#endif // #if defined (__DEBUG_EVT_LOOP__) 

	// read the packet
	argv_2072 = _client_tab[_index].argv_3762.argv_4337 (_client_tab[_index].argv_2444, -1, true);
	if (argv_2072 == argv_3778) {
#if defined (__DEBUG_EVT_LOOP__) 
		string serror = argv_1344 (argv_2072);
		argv_4569 (argv_4846, MAX_PATH, "event_loop - read performed for client %u (errno=%s)", _index, serror.c_str());
		argv_4846[MAX_PATH - 1] = '\0';
		argv_2316->argv_2323 (argv_1191, argv_4846);
#endif // #if defined (__DEBUG_EVT_LOOP__) 

		// if the packet was fully read, then call the "packet received" argv_2457
		if (_client_tab[_index].argv_3762.argv_4341 () == true) {
#if defined (__DEBUG_EVT_LOOP__) 
			argv_2316->argv_2323 (argv_1191, "event_loop - packet fully read for client ", _index);
#endif // #if defined (__DEBUG_EVT_LOOP__) 
			argv_2072 = argv_1352.argv_1708 (_client_tab, _index, _v_index_2_trigger_write);
		}
		else { // packet not fully read yet
#if defined (__DEBUG_EVT_LOOP__) 
			argv_2316->argv_2323 (argv_1191, "event_loop - packet not fully read for client ", _index);
#endif // #if defined (__DEBUG_EVT_LOOP__) 
		}
	}
	else { // packet argv_4337 failed
#if defined (__DEBUG_EVT_LOOP__) 
		string serror = argv_1344 (argv_2072);
		argv_4569 (argv_4846, MAX_PATH, "event_loop - packet read failed for client %u (%s)", _index, serror.c_str());
		argv_4846[MAX_PATH - 1] = '\0';
		argv_2316->argv_2323 (argv_1191, argv_4846);
#endif // #if defined (__DEBUG_EVT_LOOP__) 
	}

	if ((argv_2072 == argv_3778) || (argv_2072 == argv_2430)) {
		argv_2072 = argv_1368; // remap error argv_976
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_886	
// @@
// @@ FUNCTION		:	argv_4281
// @@
// @@ INPUT			:	
// @@ _client_tab: argv_864 *: array of clients
// @@
// @@ _index: argv_4883 : index of the client whose argv_4570 is
// @@   readable.
// @@
// @@ OUTPUT		:
// @@ _trigger_write: bool&: true if a write sequence is to be initiated
// @@   set to false otherwise.
// @@
// @@ IO			: none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_1368 if success,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	protected
// @@	
// @@ DESCRIPTION	:
// @@ This function considers the packet that is the first
// @@ packet of the argv_4490 argv_4329 of the client located at the
// @@ index '_index' and sends it, if the packet is entirely sent
// @@ the sent packet is removed from argv_4490 argv_4329, and the 
// @@ application dependant function is called, and may or
// @@ may not trigger the write event again.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_886::argv_4281 (argv_864 * _client_tab, argv_4883 _index, bool& _trigger_write) {
	argv_4536 argv_2072		= argv_1368;
	_trigger_write	= false;
	argv_4883 queue_size	= 0;

#if defined (__DEBUG_EVT_LOOP__) 
	char argv_4846[MAX_PATH];
	argv_2316->argv_2323 (argv_1191, "event_loop - processing argv_4570 ready to write for client ", _index);
#endif // #if defined (__DEBUG_EVT_LOOP__) 

	// if the argv_4490 argv_4329 is empty, then it is an error
	argv_2072 = _client_tab[_index].argv_1787 (queue_size);

#if defined (__DEBUG_EVT_LOOP__) 
	argv_4569 (argv_4846, MAX_PATH, "event_loop - argv_4490 argv_4329 size for client %u is %u", _index, queue_size);
	argv_4846[MAX_PATH - 1] = '\0';
	argv_2316->argv_2323 (argv_1191, argv_4846);
#endif // #if defined (__DEBUG_EVT_LOOP__) 

	if (argv_2072 == argv_943) {
		if (queue_size == 0) {
			argv_2072 = argv_1365;
		}
		else { // argv_4490 argv_4329 contains 1 or more packets to argv_4490
#if defined (__DEBUG_EVT_LOOP__) 
			argv_2316->argv_2323 (argv_1191, "argv_4329 size is OK");
#endif // #if defined (__DEBUG_EVT_LOOP__) 

			// try to argv_4490 the argv_1718 packet
			bool finished		= false;
			argv_1106 * argv_3761	= NULL;

			while (finished == false) {
#if defined (__DEBUG_EVT_LOOP__) 
				argv_2316->argv_2323 (argv_1191, "retrieving argv_1718 packet");
#endif // #if defined (__DEBUG_EVT_LOOP__) 
				argv_3761	= NULL; // detect malfunctions and crash asap
				argv_2072 = _client_tab[_index].argv_1718 (argv_3761);
				if (argv_2072 != argv_943) {
#if defined (__DEBUG_EVT_LOOP__) 
					argv_2316->argv_2323 (argv_1346, "+++ FAILED to retrieve argv_1718 packet");
#endif // #if defined (__DEBUG_EVT_LOOP__) 
					finished = true;
				}
				else { // the argv_1718 packet was succesfully retrieved from argv_4329
#if defined (__DEBUG_EVT_LOOP__) 
					argv_2316->argv_2323 (argv_1346, "argv_1718 packet retrieved succesfully");
					argv_2316->argv_2323 (argv_1191, "sending argv_1718 packet");
#endif // #if defined (__DEBUG_EVT_LOOP__) 
					argv_2072 = argv_3761->argv_4490 (_client_tab[_index].argv_2444);

#if defined (__DEBUG_EVT_LOOP__) 
					argv_2316->argv_2323 (argv_1191, "argv_1718 packet sent");
#endif // #if defined (__DEBUG_EVT_LOOP__) 
					if (argv_2072 == argv_3778) { // if packet was entirely sent
						argv_2072 = argv_1368;
						if (argv_3761->argv_4495 () == true) {
							// remove the argv_1718 packet from argv_4490 argv_4329
							argv_2072 = _client_tab[_index].pop_front ();
							if (argv_2072 == argv_943) {
								argv_2072 = argv_1352.argv_1709 (_client_tab, _index, _trigger_write);
							}
						}
					}

					if (argv_2072 != argv_1368) {
						finished = true; // error occured while sending argv_1718 packet
						if (argv_2072 == argv_2430) {
							_trigger_write	= true;	
							argv_2072			= argv_1368;
#if defined (__EVT_LOOP_TRACK_EWOULDBLOCK__) 
						argv_3606++;
						argv_2316->argv_2323 (argv_1191, "argv_2430 - total number = ", argv_3606);
#endif // #if defined (__DEBUG_EVT_LOOP__) 
						}
						else { // real error occured
							char tmp2[MAX_PATH];
							string serror = argv_1344 (argv_2072);
							argv_4569 (tmp2, MAX_PATH, "+++ ERROR: argv_886::argv_4281 - argv_4490 failed for client whose box is %u (errno=%s)", _index, serror.c_str());
							tmp2[MAX_PATH - 1] = '\0';
							argv_2316->argv_2323 (argv_1346, tmp2);
						}
					}
					else { // argv_4490 was performed without any error
						argv_2072 = _client_tab[_index].argv_1787 (queue_size);
						if (argv_2072 != argv_943) {
							finished		= true;
						}
						else if (queue_size == 0) { // no more to argv_4490
							_trigger_write	= false;
							finished		= true;
						}
					}
				}
			}
		}
	}

	if (argv_2072 == argv_943) {
		argv_2072 = argv_1368; // remap error argv_976
	}
	return (argv_2072);
}

argv_4536 argv_886::argv_4857 (vector<argv_4883>& _v_trigger_2_write) {
	argv_4536 argv_2072 = argv_1368;
	argv_4883 argv_3605 = _v_trigger_2_write.size ();
	for (argv_4883 i=0 ; i<argv_3605 ; i++) {
		argv_2072 = argv_649 (_v_trigger_2_write[i], false, true);
		if (argv_2072 != argv_1368) {
			string serror = argv_1344 (argv_2072);
			char argv_4846[MAX_PATH];
			argv_4569 (argv_4846, MAX_PATH, "+++ ERROR: argv_886::argv_4857 - argv_649 failed for descriptor at index %d", _v_trigger_2_write[i], serror.c_str());
			argv_4846[MAX_PATH - 1] = '\0';
			argv_2316->argv_2323 (argv_1346, argv_4846);
			break;
		}
	}
	return (argv_2072);
}

// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_886	
// @@
// @@ FUNCTION		:	argv_913
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	
// @@ argv_4883&: _nb_ready: number of argv_4570 descriptors ready.
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_1368 if success,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	protected
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to check all sockets that have either
// @@ a read, or a write, or both events, pending, and process these
// @@ events.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_886::argv_913 (argv_4883& _nb_ready) {
	argv_4536 argv_2072				= argv_1368;
	argv_4536 iret2				= argv_1368;
	bool trigger_write		= false;	
	char argv_4846[MAX_PATH];
	vector<argv_4883>			v_trigger_2_write;
	
#if defined (__DEBUG_EVT_LOOP__) 
	argv_4569 (argv_4846, MAX_PATH, "event loop - checking read/write events (argv_946=%u)", argv_946);
	argv_4846[MAX_PATH - 1] = '\0';
	argv_2316->argv_2323 (argv_1191, argv_4846);
#endif // #if defined (__DEBUG_EVT_LOOP__) 

	for (argv_4883 i=0 ; i<argv_946 ; i++) {
#if defined (__DEBUG_EVT_LOOP__) 
		argv_2316->argv_2323 (argv_1191, "event_loop - considering client ", i);
#endif // #if defined (__DEBUG_EVT_LOOP__) 

		if (argv_945[i].argv_4995 == true) {
#if defined (__DEBUG_EVT_LOOP__) 
			argv_4569 (argv_4846, MAX_PATH, "event_loop - client %u is virgin", i);
			argv_4846[MAX_PATH - 1] = '\0';
			argv_2316->argv_2323 (argv_1191, argv_4846);
#endif // #if defined (__DEBUG_EVT_LOOP__) 
		}
		else { // argv_1148 client's box is busy (and thus not virgin)
#if defined (__DEBUG_EVT_LOOP__) 
			argv_4569 (argv_4846, MAX_PATH, "event_loop - client %u is busy (not virgin)", i);
			argv_4846[MAX_PATH - 1] = '\0';
			argv_2316->argv_2323 (argv_1191, argv_4846);
#endif // #if defined (__DEBUG_EVT_LOOP__) 
			// check if argv_1148 box is ready to read
			if (argv_945[i].argv_4333 == true) {
#if defined (__DEBUG_EVT_LOOP__) 
				argv_4569 (argv_4846, MAX_PATH, "event_loop - client %u is read aware", i);
				argv_4846[MAX_PATH - 1] = '\0';
				argv_2316->argv_2323 (argv_1191, argv_4846);
#endif // #if defined (__DEBUG_EVT_LOOP__) 
				if (FD_ISSET (argv_945[i].argv_4570, &readfds_dirty)) {
					_nb_ready--;
#if defined (__DEBUG_EVT_LOOP__) 
					argv_4569 (argv_4846, MAX_PATH, "event_loop - client %u is ready to read", i);
					argv_4846[MAX_PATH - 1] = '\0';
					argv_2316->argv_2323 (argv_1191, argv_4846);
#endif // #if defined (__DEBUG_EVT_LOOP__) 
					v_trigger_2_write.clear ();
					iret2 = argv_4280 (argv_945, i, v_trigger_2_write);
					if (iret2 != argv_1368) {

						if (iret2 == argv_1367) {
							argv_2072 = iret2;
#if defined (__DEBUG_EVT_LOOP__) 
							argv_2316->argv_2323 (argv_5006, "*** WARNING : argv_886::argv_913 - << RECEIVED ORDER TO STOP >>");
#endif // #if defined (__DEBUG_EVT_LOOP__) 
							break;
						}
						else { // real error occured
							string serror = argv_1344 (iret2);
							argv_4569 (argv_4846, MAX_PATH, "event_loop - client %u read failure (%s)", i, serror.c_str());
							argv_4846[MAX_PATH - 1] = '\0';
							argv_2316->argv_2323 (argv_1191, argv_4846);
						}
						argv_2072 = argv_4351 (i, iret2);
						if (argv_2072 != argv_1368) {
							argv_2316->argv_2323 (argv_1346, "+++ ERROR: argv_886::argv_913 - argv_4351 failed ! (read event)");
							break;
						}
					}
					else {// read was succesful, must we argv_646 the argv_4570 for write ?
#if defined (__DEBUG_EVT_LOOP__) 
						argv_4569 (argv_4846, MAX_PATH, "event_loop - client %u read success (number of write events to  trigger : %u)", i, v_trigger_2_write.size());
						argv_4846[MAX_PATH - 1] = '\0';
						argv_2316->argv_2323 (argv_1191, argv_4846);
#endif // #if defined (__DEBUG_EVT_LOOP__) 
						argv_2072 = argv_4857 (v_trigger_2_write);
					}
				}
			}

			// check if argv_1148 box is ready to write
			if ((argv_2072 == argv_1368) && (argv_945[i].argv_5013 == true)) {
#if defined (__DEBUG_EVT_LOOP__) 
				argv_4569 (argv_4846, MAX_PATH, "event_loop - client %u is write aware", i);
				argv_4846[MAX_PATH - 1] = '\0';
				argv_2316->argv_2323 (argv_1191, argv_4846);
#endif // #if defined (__DEBUG_EVT_LOOP__) 

				if (FD_ISSET (argv_945[i].argv_4570, &writefds_dirty)) {
					_nb_ready--;
#if defined (__DEBUG_EVT_LOOP__) 
					argv_4569 (argv_4846, MAX_PATH, "event_loop - client %u is ready to write (from select)", i);
					argv_4846[MAX_PATH - 1] = '\0';
					argv_2316->argv_2323 (argv_1191, argv_4846);
#endif // #if defined (__DEBUG_EVT_LOOP__) 

					iret2 = argv_4281 (argv_945, i, trigger_write);
					if (iret2 != argv_1368) {
#if defined (__DEBUG_EVT_LOOP__) 
						argv_4569 (argv_4846, MAX_PATH, "event_loop - client %u write failure", i);
						argv_4846[MAX_PATH - 1] = '\0';
						argv_2316->argv_2323 (argv_1191, argv_4846);
#endif // #if defined (__DEBUG_EVT_LOOP__) 

						argv_2072 = argv_4351 (i, iret2);
						if (argv_2072 != argv_1368) {
							argv_2316->argv_2323 (argv_1346, "+++ ERROR: argv_886::argv_913 - argv_4351 failed ! (write event)");
							break;
						}
					}
					else {// write was succesful, must we argv_646 the argv_4570 again for write ?
#if defined (__DEBUG_EVT_LOOP__) 
						argv_4569 (argv_4846, MAX_PATH, "event_loop - client %u write success", i);
						argv_4846[MAX_PATH - 1] = '\0';
						argv_2316->argv_2323 (argv_1191, argv_4846);
#endif // #if defined (__DEBUG_EVT_LOOP__) 

						if (trigger_write == true) {
#if defined (__DEBUG_EVT_LOOP__) 
							argv_4569 (argv_4846, MAX_PATH, "event_loop - triggering write event for client %u", i);
							argv_4846[MAX_PATH - 1] = '\0';
							argv_2316->argv_2323 (argv_1191, argv_4846);
#endif // #if defined (__DEBUG_EVT_LOOP__) 
							argv_2072			= argv_649 (i, false, true);
							trigger_write	= false;
						}
						else { // remove the argv_4570 from the write set
#if defined (__DEBUG_EVT_LOOP__) 
							argv_4569 (argv_4846, MAX_PATH, "event_loop - removing write event for client %u", i);
							argv_4846[MAX_PATH - 1] = '\0';
							argv_2316->argv_2323 (argv_1191, argv_4846);
#endif // #if defined (__DEBUG_EVT_LOOP__) 
							argv_2072 = argv_4352 (i, false, true, iret2);
						}
					}
				}
			}

			if (_nb_ready == 0) {
#if defined (__DEBUG_EVT_LOOP__) 
				argv_4569 (argv_4846, MAX_PATH, "argv_913 - _nb_ready=%u => all argv_1291", _nb_ready);
				argv_4846[MAX_PATH - 1] = '\0';
				argv_2316->argv_2323 (argv_1191, argv_4846);
#endif // #if defined (__DEBUG_EVT_LOOP__) 
				break; // all ready descriptors processed
			}
		}

		// if an argv_3690 to argv_4626 was received, then inform the caller
		if (argv_2072 == argv_1367) {
			argv_2316->argv_2323 (argv_690, "*** WARNING: argv_886::argv_913 - << RECEIVED ORDER TO STOP >>");
			break;
		}
	}

	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_886	
// @@
// @@ FUNCTION		:	argv_649	
// @@
// @@ INPUT			:	
// @@ _index: argv_4883 : location of the new descriptor whose events 
// @@   are to be triggered
// @@
// @@ _read_mode: bool: true if the argv_4570 must be added to the read 
// @@    event.
// @@
// @@ _write_mode: bool: true if the argv_4570 must be added to the write 
// @@    event.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_1368 if success,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	protected
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_646 the descriptor located at index
// @@ '_index' to the read or write event set.
// @@ if the parameter '_read_mode' is set to true, the argv_4570 is 
// @@ added to the read events set.
// @@ if the parameter '_write_mode' is set to true, the argv_4570 is 
// @@ added to the write events set.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_886::argv_649 (argv_4883 _index, bool _read_mode, bool _write_mode) {
	argv_4536 argv_2072 = argv_1368;
#if defined (__DEBUG_EVT_LOOP__) 
	char argv_4846[MAX_PATH];
#endif // #if defined (__DEBUG_EVT_LOOP__) 

	if (argv_945[_index].argv_4570 > argv_2407) {
		argv_2407 = argv_945[_index].argv_4570; // adjust the maximum descriptor (for select)
#if defined (__DEBUG_EVT_LOOP__) 
		argv_2316->argv_2323 (argv_1191, "event loop - maximum fd becomes ", argv_2407);
#endif // #if defined (__DEBUG_EVT_LOOP__) 
	}

	if (_read_mode == true) {
		if (argv_945[_index].argv_4333 == false) {
			FD_SET  (argv_945[_index].argv_4570, &readfds);
			argv_945[_index].argv_4333 = true;
#if defined (__DEBUG_EVT_LOOP__) 
			argv_4569 (argv_4846, MAX_PATH, "event loop - argv_646 descriptor %u (client %u) to read event", argv_945[_index].argv_4570, _index);
			argv_4846[MAX_PATH - 1] = '\0';
			argv_2316->argv_2323 (argv_1191, argv_4846);
#endif // #if defined (__DEBUG_EVT_LOOP__) 
		}
	}

	if (_write_mode == true) {
		if (argv_945[_index].argv_5013 == false) {
#if defined (__DEBUG_EVT_LOOP__) 
			argv_2316->argv_2323 (argv_1191, "event loop - triggering write event for client ", _index);
#endif // #if defined (__DEBUG_EVT_LOOP__) 
			FD_SET  (argv_945[_index].argv_4570, &writefds);
			argv_945[_index].argv_5013 = true;
		}
	}

	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_886	
// @@
// @@ FUNCTION		:	argv_4352	
// @@
// @@ INPUT			:	
// @@ _index: argv_4883 : location of the new descriptor whose events 
// @@   are to be removed
// @@
// @@ _read_mode: bool: true if the argv_4570 must be removed from the read 
// @@    event.
// @@
// @@ _write_mode: bool: true if the argv_4570 must be removed from the write 
// @@    event.
// @@
// @@ _last_errno: argv_4536 : unused parameter.
// @@ 
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_1368 if success,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	protected
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to remove the descriptor located at index
// @@ '_index' from the read or write event set.
// @@ if the parameter '_read_mode' is set to true, the argv_4570 is 
// @@ removed from the read events set.
// @@ if the parameter '_write_mode' is set to true, the argv_4570 is 
// @@ removed from the write events set.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_886::argv_4352 (argv_4883 _index, bool _read_mode, bool _write_mode, argv_4536 _last_errno) {
	argv_4536 argv_2072 = argv_1368;
	if (_read_mode == true) {
		if (argv_945[_index].argv_4333 == true) {
			FD_CLR (argv_945[_index].argv_4570, &readfds);	
			argv_945[_index].argv_4333 = false;
		}
	}

	if (_write_mode == true) {
		if (argv_945[_index].argv_5013 == true) {
			FD_CLR (argv_945[_index].argv_4570, &writefds);
			argv_945[_index].argv_5013 = false;
		}
	}
	return (argv_2072); 
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_886	
// @@
// @@ FUNCTION		:	argv_4352	
// @@
// @@ INPUT			:	
// @@ _index: argv_4883 : location of the new descriptor whose events 
// @@   are to be removed
// @@
// @@ _last_errno: argv_4536 : contains the last error encountered argv_5011
// @@   the client whose index is '_index'.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_1368 if success,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	protected
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to remove entirely the argv_4570 descriptor 
// @@ which can be found at the index '_index' from the read
// @@ and write event without distinction.
// @@ The last error encountered argv_5011 this argv_4570 is saved
// @@ into it's box so that the application dependant functions
// @@ can be aware of what has happened argv_5011 this client.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_886::argv_4352 (argv_4883 _index, argv_4536 _last_errno) {
	argv_4536 argv_2072 = argv_1368;
#if defined (__DEBUG_EVT_LOOP__) 
	char argv_4846[MAX_PATH];
	argv_4569 (argv_4846, MAX_PATH, "event_loop - about to remove descriptor %u (client %d)", argv_945[_index].argv_4570, _index);
	argv_4846[MAX_PATH - 1] = '\0';
	argv_2316->argv_2323 (argv_1191, argv_4846);
#endif // #if defined (__DEBUG_EVT_LOOP__) 

	if (argv_945[_index].argv_4333 == true) {
		FD_CLR (argv_945[_index].argv_4570, &readfds);
		argv_945[_index].argv_4333 = false;
#if defined (__DEBUG_EVT_LOOP__) 
		argv_4569 (argv_4846, MAX_PATH, "event_loop - removed descriptor %u (client %d) from read event", argv_945[_index].argv_4570, _index);
		argv_4846[MAX_PATH - 1] = '\0';
		argv_2316->argv_2323 (argv_1191, argv_4846);
#endif // #if defined (__DEBUG_EVT_LOOP__) 
	}

	if (argv_945[_index].argv_5013 == true) {
		FD_CLR (argv_945[_index].argv_4570, &writefds);	
		argv_945[_index].argv_5013 = false;
#if defined (__DEBUG_EVT_LOOP__) 
		argv_4569 (argv_4846, MAX_PATH, "event_loop - removed descriptor %u from write event", _index);
		argv_4846[MAX_PATH - 1] = '\0';
		argv_2316->argv_2323 (argv_1191, argv_4846);
#endif // #if defined (__DEBUG_EVT_LOOP__) 
	}

	// reset the box that was used by this client for a future reuse.
	/*
#if defined (__DEBUG_EVT_LOOP__) 
	argv_2316->argv_2323 (argv_1191, "about to reset the client box whose index is ", _index);
#endif // #if defined (__DEBUG_EVT_LOOP__) 
	*/
	argv_945[_index].reset ();
/*
#if defined (__DEBUG_EVT_LOOP__) 
	argv_2316->argv_2323 (argv_1191, "reseted the client box whose index is ", _index);

	argv_4883 queue_size = 0;
	argv_4536 iret2 = argv_945[_index].argv_1787 (queue_size);
	argv_4569 (argv_4846, MAX_PATH, "argv_886::argv_4352 - after reset : argv_4490 argv_4329 size for client %u is %u", _index, queue_size);
	argv_4846[MAX_PATH - 1] = '\0';
	argv_2316->argv_2323 (argv_1191, argv_4846);
#endif // #if defined (__DEBUG_EVT_LOOP__) 
*/
	// now call the external function to tell about this client that has a problem
	bool b_unused;
	argv_945[_index].argv_2214 = _last_errno;
	argv_1352.argv_1651 (argv_945, _index, b_unused);
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_886	
// @@
// @@ FUNCTION		:	argv_4249	
// @@
// @@ INPUT			:
// @@ _event_data: argv_887& : the set that contains all 
// @@   the function pointers (application dependant functions).
// @@
// @@ _cli_tab: argv_864 *: the client array
// @@
// @@ _cli_tab_size: argv_4883: the size of the client array.
// @@
// @@ _v_listener: vector<argv_962>&: the vector that contains
// @@   all argv_1178 concerning the listening descriptors to consider.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_1368 if success,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	protected
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to do the following things :
// @@ - update the 'argv_2407' variable
// @@ - argv_4243 the stack of available boxes (avoid lookup)
// @@ - argv_646 all listening descriptors to the read event set.
// @@
// @@ CONTRACT 		:
// @@ - _v_listener should not be empty.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_886::argv_4249 (argv_887& _event_data, argv_864 * _cli_tab, argv_4883 _cli_tab_size, vector<argv_962>& _v_listener) {
	argv_4536 argv_2072	= argv_1368;

	argv_1352		= _event_data;
	argv_945		= _cli_tab;
	argv_946	= _cli_tab_size;
	argv_4971		= _v_listener;	
	argv_3610		= argv_4971.size ();
	argv_2407			= 0;
#if defined (__DEBUG_EVT_LOOP__) 
	char argv_4846[MAX_PATH];
	argv_2316->argv_2323 (argv_1191, "maximum number of clients : ", _cli_tab_size);
	argv_2316->argv_2323 (argv_1191, "number of listeners : ", argv_3610);
#endif // #if defined (__DEBUG_EVT_LOOP__) 

	if (argv_3610 == 0) {
		argv_2316->argv_2323 (argv_1346, "+++ ERROR: argv_886::argv_4249 - no listener at all ! (empty vector)");
		argv_2072 = argv_1361;
	}
	else {
		// argv_646 all listening sockets to the read set
		argv_4883 i=0;
		for (i=0 ; i<argv_3610 ; i++) {
			FD_SET (argv_4971[i].argv_4570, &readfds);

#if defined (__DEBUG_EVT_LOOP__) 
			argv_4569 (argv_4846, MAX_PATH, "argv_646 argv_4570 %u to the listening set", argv_4971[i].argv_4570);
			argv_4846[MAX_PATH - 1] = '\0';
			argv_2316->argv_2323 (argv_1191, argv_4846);
#endif // #if defined (__DEBUG_EVT_LOOP__) 

			if (argv_4971[i].argv_4570 > argv_2407) {
				argv_2407 = argv_4971[i].argv_4570; // adjust the maximum descriptor (for select)
			}
		}

		// argv_4243 the stack of available boxes
#if defined (__DEBUG_EVT_LOOP__) 
		argv_2316->argv_2323 (argv_1191, "preparing real argv_4843 stack of free boxes...");
#endif // #if defined (__DEBUG_EVT_LOOP__) 
		for (argv_4536 k=_cli_tab_size-1 ; k>=0 ; k--) {
			argv_4612.push (k);
		}
#if defined (__DEBUG_EVT_LOOP__) 
		argv_2316->argv_2323 (argv_1191, "preparing real argv_4843 stack of free boxes...[OK]");
#endif // #if defined (__DEBUG_EVT_LOOP__) 
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_886	
// @@
// @@ FUNCTION		:	argv_4424
// @@
// @@ INPUT			:	
// @@ _log_ptr: argv_963 *: pointer on the log argv_1424 to use.
// @@ 
// @@ _v_listener: vector<argv_962>&: vector containing all argv_1178
// @@ concerning the listening argv_4570 descriptors.
// @@
// @@ _cli_tab: argv_864 *: array of client argv_1178, each box is
// @@  dedicated to a given client.
// @@ 
// @@ _cli_tab_size: size of the client array (number of boxes). 
// @@
// @@ _event_data: argv_887& : set of function pointers
// @@   containing all application dependant functions.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_1368 if success,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ this function permits to argv_4243 the event loop, and to
// @@ enter this loop that is an infinite loop.
// @@ the following steps are performed :
// @@ - listeners are argv_4257 (listening sockets are added to read set)
// @@ - a call to select is performed.
// @@ - when waking up from select :
// @@   - new pending connections are checked.
// @@   - argv_4570 ready to read are checked
// @@   - argv_4570 ready to write are checked.
// @@
// @@ Notice that the event loop is an infinite loop, except when 
// @@ it is asked to argv_4626 service, in that case, the event
// @@ loop can be stopped.
// @@ 
// @@ Also notice that when a fatal error occurs, the event loop
// @@ stops and returns.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_886::argv_4424 (argv_963 * _log_ptr, vector<argv_962>& _v_listener, argv_864 * _cli_tab, argv_4883 _cli_tab_size, argv_887& _event_data) {
	argv_4536 argv_2072	= argv_1368;
	char argv_4846[MAX_PATH];

	if ((_log_ptr == NULL) || (_cli_tab==NULL) || (_cli_tab_size==0)) {
		argv_2072 = argv_1358;
	}
	else { // parameters are OK
		argv_2316 = _log_ptr;
		argv_4883 nb_ready	= 0;
#if defined (__DEBUG_EVT_LOOP__)
		argv_2316->argv_2323 (argv_1191, "event loop - preparing listeners...");
#endif // #if defined (__DEBUG_EVT_LOOP__)
		argv_2072 = argv_4249 (_event_data, _cli_tab, _cli_tab_size, _v_listener);

		if (argv_2072 == argv_1368) {
#if defined (__DEBUG_EVT_LOOP__) 
			argv_2316->argv_2323 (argv_1191, "event loop - preparing listeners...[OK]");
#endif // #if defined (__DEBUG_EVT_LOOP__) 

			bool first_pck_received = false;

			for ( argv_4883 i=0 ; argv_2072 == argv_1368 ; i++) {
				readfds_dirty	= readfds;	// because Linux modify the sets
				writefds_dirty	= writefds; // because Linux modify the sets

#if defined (__DEBUG_EVT_LOOP__) 
				argv_2316->argv_2323 (argv_1191, "sleeping in select...");
#endif // #if defined (__DEBUG_EVT_LOOP__) 

				nb_ready = select (argv_2407+1, &readfds_dirty, &writefds_dirty, NULL, NULL);

#if defined (__DEBUG_EVT_LOOP__) 
				argv_4569 (argv_4846, MAX_PATH, "=== woken up from select (nb_ready=%d) ===", nb_ready);
				argv_4846[MAX_PATH - 1] = '\0';
				argv_2316->argv_2323 (argv_1191, argv_4846);
#endif // #if defined (__DEBUG_EVT_LOOP__) 

#if defined (__WIN32_OS__)
				if (nb_ready == SOCKET_ERROR) {
					argv_2072 = argv_1364;
				}
#endif // #if defined (__WIN32_OS__)
#if defined (__LINUX_OS__)
				if (nb_ready < 0) {
					if (errno == EINTR) {
						continue;
					}
					else {
						argv_2072 = argv_1364;
					}
				}
#endif // #if defined (__LINUX_OS__)
				else { // select returned without any error
#if defined (__DEBUG_EVT_LOOP__) 
					argv_2316->argv_2323 (argv_1191, "number of descriptor ready : ", nb_ready);
#endif // #if defined (__DEBUG_EVT_LOOP__) 
					argv_2072 = argv_906 (nb_ready);
					if (argv_2072 != argv_1368) {
						string serror = argv_1344 (argv_2072);
						argv_4569 (argv_4846, MAX_PATH, "event loop - argv_906...[FAILED (%s) - EXITING]", serror.c_str());
						argv_4846[MAX_PATH - 1] = '\0';
						argv_2316->argv_2323 (argv_1346, argv_4846);
						break; // error occured while accepting new connections
					}

					if (nb_ready > 0) {
						if (first_pck_received == false) {
							argv_2316->argv_2323 (argv_1191, "first packet received at event : ", i);
							first_pck_received = true;
						}

						argv_2072 = argv_913 (nb_ready);
						if (argv_2072 != argv_1368) {
							// maybe we received the argv_3690 to argv_4626
							if (argv_2072 == argv_1367) {
								argv_2316->argv_2323 (argv_690, "*** WARNING : argv_886::argv_4424 - << RECEIVED ORDER TO STOP >>");
							}
							else { // real error occured
								string serror = argv_1344 (argv_2072);
								char argv_4846[MAX_PATH];
								argv_4569 (argv_4846, MAX_PATH, "event loop - argv_913...[FAILED (%s) - EXITING]", serror.c_str());
								argv_4846[MAX_PATH - 1] = '\0';
								argv_2316->argv_2323 (argv_1346, argv_4846);
							}
							break; // error occured while checking connected sockets
						}
					}

					if (nb_ready > 0) { // slower the deadly infinite loop
						argv_2316->argv_2323 (argv_1346, "+++ ERROR: argv_886::argv_4424 - after processing, nb_ready greater than zero : ", nb_ready);
						argv_2316->argv_2323 (argv_1346, "+++ ERROR: argv_886::argv_4424 - argv_4979 should be zero !");
#if defined (__WIN32_OS__)
						Sleep (1000); // CPU friendly when entering an infinite loop
#endif // #if defined (__WIN32_OS__)
#if defined (__LINUX_OS__)
						usleep (1000000);
#endif // #if defined (__LINUX_OS__)
					}
				}
			}
		}
		else {
#if defined (__DEBUG_EVT_LOOP__) 
			argv_2316->argv_2323 (argv_1346, "event loop - preparing listeners...[FAILED]");
#endif // #if defined (__DEBUG_EVT_LOOP__) 
		}
	}


	if (argv_2072 == argv_1367) {
		argv_2316->argv_2323 (argv_690, "*** WARNING : event_loop - << RECEIVED ORDER TO STOP >>");
	}
	else {
		string serror = argv_1344 (argv_2072);
		argv_2316->argv_2323 (argv_1346, "+++ ERROR: event loop - exiting event loop - errno = ", serror.c_str());
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1424
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
