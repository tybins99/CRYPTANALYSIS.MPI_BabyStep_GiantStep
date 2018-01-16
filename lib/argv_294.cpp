// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_294.cpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1424 contains all argv_1178 structures and
// @@ objects that permits to have an event-driven
// @@ TCP/IP based loop to create an application.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_353.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ global variable
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_889 * argv_1730 = NULL;



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ C functions called by the event loop
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	argv_3621	
// @@
// @@ INPUT			:	
// @@ _cli_tab: argv_864 *: array of client argv_1178.
// @@
// @@ _index: argv_4883 : index of the client that has just connected.
// @@
// @@ OUTPUT		:
// @@ _trigger_write: bool&: this flag can be set to true if the write 
// @@    event is to be triggered.
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
// @@ This function is the C function whose argv_665 is given to 
// @@ the event loop so that the gateway can be informed about
// @@ a given event.
// @@ This function is a wrapper that call the actual function
// @@ that handles the event.
// @@ This function is called when the client whose box in the 
// @@ client array '_cli_tab' and located at index '_index' 
// @@ connects itself.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_3621 (argv_864 * _cli_tab, argv_4883 _index, bool& _trigger_write) {
	argv_4536 argv_2072 = argv_1730->argv_3620 (_cli_tab, _index, _trigger_write);
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	argv_3764	
// @@
// @@ INPUT			:	
// @@ _cli_tab: argv_864 *: array of client argv_1178.
// @@
// @@ _index: argv_4883 : index of the client that has just finished
// @@   reading a given packet.
// @@
// @@ OUTPUT		:
// @@ _trigger_write: bool&: this flag can be set to true if the write 
// @@    event is to be triggered.
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
// @@ This function is the C function whose argv_665 is given to 
// @@ the event loop so that the gateway can be informed about
// @@ a given event.
// @@ This function is a wrapper that call the actual function
// @@ that handles the event.
// @@ This function is called when the client whose box in the 
// @@ client array '_cli_tab' and located at index '_index' 
// @@ has just finish to read a given packet.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_3764 (argv_864 * _cli_tab, argv_4883 _index, bool& _trigger_write) {
	argv_4536 argv_2072 = argv_1730->argv_3763 (_cli_tab, _index, _trigger_write);
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	argv_3768	
// @@
// @@ INPUT			:	
// @@ _cli_tab: argv_864 *: array of client argv_1178.
// @@
// @@ _index: argv_4883 : index of the client that has just finished
// @@   sending a given packet.
// @@
// @@ OUTPUT		:
// @@ _trigger_write: bool&: this flag can be set to true if the write 
// @@    event is to be triggered.
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
// @@ This function is the C function whose argv_665 is given to 
// @@ the event loop so that the gateway can be informed about
// @@ a given event.
// @@ This function is a wrapper that call the actual function
// @@ that handles the event.
// @@ This function is called when the client whose box in the 
// @@ client array '_cli_tab' and located at index '_index' 
// @@ has just finish to write a given packet.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_3768 (argv_864 * _cli_tab, argv_4883 _index, bool& _trigger_write) {
	argv_4536 argv_2072 = argv_1730->argv_3767 (_cli_tab, _index, _trigger_write);
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	argv_2429	
// @@
// @@ INPUT			:	
// @@ _cli_tab: argv_864 *: array of client argv_1178.
// @@
// @@ _index: argv_4883 : index of the client that has a pending error.
// @@
// @@ OUTPUT		:
// @@ _trigger_write: bool&: this flag can be set to true if the write 
// @@    event is to be triggered.
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
// @@ This function is the C function whose argv_665 is given to 
// @@ the event loop so that the gateway can be informed about
// @@ a given event.
// @@ This function is a wrapper that call the actual function
// @@ that handles the event.
// @@ This function is called when the client whose box in the 
// @@ client array '_cli_tab' and located at index '_index' 
// @@ has a pending error.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_2429 (argv_864 * _cli_tab, argv_4883 _index, bool& _trigger_write) {
	argv_4536 argv_2072 = argv_1730->argv_2428 (_cli_tab, _index, _trigger_write);
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ C++ functions associated argv_5011 argv_4570 events
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_889	
// @@
// @@ FUNCTION		:	argv_3620		
// @@
// @@ INPUT			:	
// @@ _cli_tab: argv_864 *: array of client argv_1178.
// @@
// @@ _index: argv_4883 : index of the client that has just connected.
// @@
// @@ OUTPUT		:
// @@ _trigger_write: bool&: this flag can be set to true if the write 
// @@    event is to be triggered.
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
// @@ This function is called when the client whose box in the 
// @@ client array '_cli_tab' and located at index '_index' 
// @@ connects itself.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_889::argv_3620 (argv_864 * _cli_tab, argv_4883 _index, bool& _trigger_write) {
	argv_4536 argv_2072 = argv_1368;
#if defined (__DEBUG_GATEWAY__)
	char argv_4846[MAX_PATH];
	argv_4569 (argv_4846, MAX_PATH, "argv_889::argv_3620 - new client at box %u (sockfd=%u)", _index, _cli_tab[_index].argv_4570);
	argv_4846[MAX_PATH - 1] = '\0';
	argv_2316->argv_2323 (argv_3634, argv_4846);
#endif // #if defined (__DEBUG_GATEWAY__)

	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_889	
// @@
// @@ FUNCTION		:	argv_3763		
// @@
// @@ INPUT			:
// @@ _cli_tab: argv_864 *: array of client argv_1178.
// @@
// @@ _index: argv_4883 : index of the client that has just finished
// @@   reading a given packet.
// @@
// @@ OUTPUT		:
// @@ _trigger_write: bool&: this flag can be set to true if the write 
// @@    event is to be triggered.
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
// @@ This function is called when the client whose box in the 
// @@ client array '_cli_tab' and located at index '_index' 
// @@ has just finish to read a given packet.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_889::argv_3763 (argv_864 * _cli_tab, argv_4883 _index, bool& _trigger_write) {
	argv_4536 argv_2072 = argv_1368;
#if defined (__DEBUG_GATEWAY__)
	argv_2316->argv_2323 (argv_3634, "argv_889::argv_3763");
#endif // #if defined (__DEBUG_GATEWAY__)
	// log the packet into the log argv_1424
	argv_1430	= false;
	argv_4966		= argv_3817;
	argv_4848	= "";
	argv_2072 = _cli_tab[_index].argv_3762.argv_1785 (argv_1430, argv_4966, argv_4848);
	if (argv_2072 != argv_3778) { // failed to argv_1397 receive report for this client
		argv_2316->argv_2323 (argv_1346, "+++ ERROR: argv_889::argv_3763 - failed to argv_1397 receive report !");	
	}
	else { // receive report extracted succesfully
		string user_type_str = argv_4967 (argv_4966);

		if (argv_1430 == false) { // a argv_1178 packet was received
#if defined (__DEBUG_GATEWAY__)
			argv_4569 (argv_4846, MAX_PATH, "argv_889::argv_3763 - a argv_1178 packet was received (argv_4966=%s)", user_type_str.c_str());
			argv_4846[MAX_PATH - 1] = '\0';
			argv_2316->argv_2323 (argv_3634, argv_4846);
#endif // #if defined (__DEBUG_GATEWAY__)
		}
		else { // a argv_1424 was received
#if defined (__DEBUG_GATEWAY__)
			argv_4569 (argv_4846, MAX_PATH, "argv_889::argv_3763 - a argv_1424 packet was received (argv_4966=%s), argv_4848='%s'", user_type_str.c_str(), argv_4848.c_str());
			argv_4846[MAX_PATH - 1] = '\0';
			argv_2316->argv_2323 (argv_3634, argv_4846);
#endif // #if defined (__DEBUG_GATEWAY__)
		}

		argv_2072 = argv_4277 (_cli_tab, _index, _trigger_write);
		if (argv_2072 != argv_1368) {
			if (argv_2072 == argv_1367) {
				argv_2316->argv_2323 (argv_690, "*** WARNING : argv_889::argv_3763 - << RECEIVED ORDER TO STOP >>");
			}
			else { // real error occured
				string serror = argv_1344 (argv_2072);
				argv_2316->argv_2323 (argv_1346, "+++ ERROR: argv_889::argv_3763 failed ! - errno = ", serror.c_str());
			}
		}
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_889	
// @@
// @@ FUNCTION		:	argv_3767		
// @@
// @@ INPUT			:	
// @@ _cli_tab: argv_864 *: array of client argv_1178.
// @@
// @@ _index: argv_4883 : index of the client that has just finished
// @@   sending a given packet.
// @@
// @@ OUTPUT		:
// @@ _trigger_write: bool&: this flag can be set to true if the write 
// @@    event is to be triggered.
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
// @@ This function is called when the client whose box in the 
// @@ client array '_cli_tab' and located at index '_index' 
// @@ has just finish to write a given packet.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_889::argv_3767 (argv_864 * _cli_tab, argv_4883 _index, bool& _trigger_write) {
	argv_4536 argv_2072 = argv_1368;
#if defined (__DEBUG_GATEWAY__)
	char argv_4846[MAX_PATH];
	argv_4569 (argv_4846, MAX_PATH, "argv_889::argv_3767 - packet fully sent for client whose box is %u (sockfd=%u)", _index, _cli_tab[_index].argv_4570);
	argv_4846[MAX_PATH - 1] = '\0';
	argv_2316->argv_2323 (argv_3634, argv_4846);
#endif // #if defined (__DEBUG_GATEWAY__)
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_889	
// @@
// @@ FUNCTION		:	argv_2428	
// @@
// @@ INPUT			:
// @@ _cli_tab: argv_864 *: array of client argv_1178.
// @@
// @@ _index: argv_4883 : index of the client that has a pending error.
// @@
// @@ OUTPUT		:
// @@ _trigger_write: bool&: this flag can be set to true if the write 
// @@    event is to be triggered.
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
// @@ This function is called when the client whose box in the 
// @@ client array '_cli_tab' and located at index '_index' 
// @@ has a pending error.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_889::argv_2428 (argv_864 * _cli_tab, argv_4883 _index, bool& _trigger_write) {
	argv_4536 argv_2072 = argv_1368;
#if defined (__DEBUG_GATEWAY__)
	char argv_4846[MAX_PATH];
	argv_4569 (argv_4846, MAX_PATH, "argv_889::argv_2428 - error occured argv_5011 client whose box is %u (sockfd=%u)", _index, _cli_tab[_index].argv_4570);
	argv_4846[MAX_PATH - 1] = '\0';
	argv_2316->argv_2323 (argv_3634, argv_4846);
#endif // #if defined (__DEBUG_GATEWAY__)
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_889	
// @@
// @@ FUNCTION		:	argv_1258		
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_1368 if success,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_1235 to log argv_1424 the scan argv_4406
// @@ for a given argv_1424.
// @@ 
// @@ Notice that this function is disabled if the gateway is not
// @@ in debug mode.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_889::argv_1258 () {
	argv_4536 argv_2072		= argv_1368;
#if defined (__DEBUG_GATEWAY__)
	char argv_4846[MAX_PATH];
	string total_msg = "";

	if (argv_4470 == false) { argv_4569 (argv_4846, MAX_PATH, "|scan FAILED"); }
	else { argv_4569 (argv_4846, MAX_PATH, "|scan SUCCESS"); }
	argv_4846[MAX_PATH - 1] = '\0';
	total_msg += argv_4846;	

	if (infected == false) { argv_4569 (argv_4846, MAX_PATH, "|no virus found"); }
	else { argv_4569 (argv_4846, MAX_PATH, "|virus FOUND"); }
	argv_4846[MAX_PATH - 1] = '\0';
	total_msg += argv_4846;	

	if (infected == true) {
		if (argv_1302 == false) { argv_4569 (argv_4846, MAX_PATH, "|dysinfection NOT POSSIBLE"); }
		else { argv_4569 (argv_4846, MAX_PATH, "|dysinfection POSSIBLE"); }
		argv_4846[MAX_PATH - 1] = '\0';
		total_msg += argv_4846;	
	}

	if (infected == true) {
		if (argv_1300 == false) { argv_4569 (argv_4846, MAX_PATH, "|dysinfection NOT DONE"); }
		else { argv_4569 (argv_4846, MAX_PATH, "|dysinfection DONE"); }
		argv_4846[MAX_PATH - 1] = '\0';
		total_msg += argv_4846;	
	}

	if (infected == true) {
		if (argv_1303 == false) { argv_4569 (argv_4846, MAX_PATH, "|dysinfection FAILED"); }
		else { argv_4569 (argv_4846, MAX_PATH, "|dysinfection SUCCESS"); }
		argv_4846[MAX_PATH - 1] = '\0';
		total_msg += argv_4846;	
	}

	if (infected == true) {
		argv_4569 (argv_4846, MAX_PATH, "|virus argv_3557 : '%s'", argv_4999);
		argv_4846[MAX_PATH - 1] = '\0';
		total_msg += argv_4846;	
	}
	argv_2316->argv_2323 (argv_3634, total_msg.c_str());
#endif // #if defined (__DEBUG_GATEWAY__)
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_889	
// @@
// @@ FUNCTION		:	argv_4458		
// @@
// @@ INPUT			:
// @@ _filename: argv_876 : argv_3557 of the argv_1424 to scan.	
// @@
// @@ _dysinfect : bool: true if the argv_1424, in case of infection,
// @@   must be dysinfected, false otherwise.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_1368 if success,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to scan the argv_1424 whose argv_3557 is 
// @@ contained in the '_filename' parameter, if the '_dysinfect'
// @@ parameter is set to true, and if the argv_1424 is infected, then
// @@ a dysinfection of the argv_1424 is attempted.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_889::argv_4458 (argv_876 _filename, bool _dysinfect) {
	argv_4536 argv_2072		= argv_1368;
	argv_4470	= false;

#if defined (__BYPASS_KERNEL__)
	argv_2072 = argv_2162;
	infected				= false;
	argv_1302		= false;
	argv_1300			= false;
	argv_1303		= false;
#else 

	argv_2072 = argv_2143->argv_4458 (_filename, _dysinfect, infected, argv_1302, argv_4999, argv_1300, argv_1303);

#endif // #if defined (__BYPASS_KERNEL__)

	if (argv_2072 == argv_2162) {
#if defined (__DEBUG_GATEWAY__)
		argv_2316->argv_2323 (argv_3634, "gateway - argv_4458...[SUCCESS]");
#endif // #if defined (__DEBUG_GATEWAY__)
		argv_2072 = argv_1368; // remap error argv_976
		argv_4470 = true;
	}
	else {
		string serror = argv_1344 (argv_2072);
		char argv_4846[MAX_PATH];
		argv_4569 (argv_4846, MAX_PATH, "+++ ERROR: gateway : failed to scan argv_1424 '%s' (%s)", _filename, serror.c_str());
		argv_4846[MAX_PATH - 1] = '\0';
		argv_2316->argv_2323 (argv_1346, argv_4846);
	}
	argv_1258 ();
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_889	
// @@
// @@ FUNCTION		:	argv_4511		
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:
// @@ _answer_type: argv_4883& : argv_4860 of the answer packet to argv_4490.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_1368 if success,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to determine the argv_4860 of the answer
// @@ packet to argv_4490 using the argv_4860 of the received packet.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_889::argv_4511 (argv_4883& _answer_type) {
	argv_4536 argv_2072		= argv_1368;
	_answer_type	= argv_3817;
	// set the answer's argv_4860
	if (argv_4966 == argv_3805) {
		_answer_type = argv_3806;
	}
	else if (argv_4966 == argv_3801) {
		_answer_type = argv_3802;	
	}
	else if (argv_4966 == argv_3807) {
		_answer_type = argv_3808;	
	}
	else if (argv_4966 == argv_3803) {
		_answer_type = argv_3804;	
	}
	else if (argv_4966 == PCK_TYPE_UPDATE) {
		_answer_type = argv_3819;	
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_889	
// @@
// @@ FUNCTION		:	argv_4493		
// @@
// @@ INPUT			:	
// @@ _cli_tab: argv_864 *: array of client argv_1178.
// @@
// @@ _index: argv_4883 : index of the client concerned by the operation.
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
// @@ This function permits to argv_4490 the dysinfected argv_1424
// @@ back to the remote client.
// @@ NOTICE : we don't need to trigger the write event as it will
// @@          have already been triggered by the 'argv_1496' 
// @@          function.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_889::argv_4493 (argv_864 * _cli_tab, argv_4883 _index, argv_876 _dysinfected_filename) {
	argv_4536 argv_2072 = argv_1368;

#if defined (__DEBUG_GATEWAY__)
	argv_2316->argv_2323 (argv_3634, "sending the dysinfected argv_1424 to the client");
#endif // #if defined (__DEBUG_GATEWAY__)

	// former packet will be deallocated by the event loop 
	argv_3761 = new (std::nothrow) argv_1106; // create a new packet for argv_4490

	if (argv_3761 == NULL) {
		argv_2072 = argv_1360;
	}
	else { // new argv_4490 packet was succesfully allocated
		// argv_4243 the packet to argv_4490 the argv_1424 to the client
		bool must_delete_file = false;
		argv_2072 = argv_3761->argv_4256 (_dysinfected_filename, _cli_tab[_index].argv_2444, argv_3804, must_delete_file);

		if (argv_2072 != argv_3778) {
			delete argv_3761; 		
		}
		else { // the argv_1424 to argv_4490 was argv_4257 succesfully
			argv_2072 = _cli_tab[_index].push_back (argv_3761); // argv_646 packet to the argv_4490 argv_4329
			if (argv_2072 != argv_943) { // the addition to the argv_4490 argv_4329 failed
				string serror = argv_1344 (argv_2072);
				argv_2316->argv_2323 (argv_1346, "+++ ERROR: argv_889::argv_4493 - push_back failed ! - errno = ", serror.c_str());
			}
		}
	}

	if ((argv_2072 == argv_3778) || (argv_2072 == argv_943)) {
		argv_2072 = argv_1368;
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_889	
// @@
// @@ FUNCTION		:	argv_1498		
// @@
// @@ INPUT			:	
// @@ _cli_tab: argv_864 *: array of client argv_1178.
// @@
// @@ _index: argv_4883 : index of the client concerned by the operation.
// @@
// @@ OUTPUT		:
// @@ _trigger_write: bool&: this flag can be set to true if the write 
// @@    event is to be triggered.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_1368 if success,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to inform an update client about the
// @@ kernel's update argv_4406.
// @@ it performs the following steps :
// @@ - allocate a new binary packet.
// @@ - set the packet argv_4860.
// @@ - insert the argv_4406 of the update operation into the packet :
// @@   - 0=failure, 1=success (coded using a argv_4881).
// @@ - argv_3698 the binary packet.
// @@ - push back this packet onto the argv_4490 argv_4329 of the concerned
// @@   client.
// @@ - set the '_trigger_write' to true so that a write operation
// @@   can occur for the concerned client.
// @@
// @@ NOTICE : it is up to the event loop to free the allocated 
// @@          packet after sending it.
// @@ 
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_889::argv_1498 (argv_864 * _cli_tab, argv_4883 _index, bool& _trigger_write, argv_4536 _iret) {
	argv_4536 argv_2072 = argv_1368;

	// former packet will be deallocated by the event loop 
	argv_3761 = new (std::nothrow) argv_1106; // create a new packet for argv_4490
	if (argv_3761 == NULL) {
		argv_2072 = argv_1360;
	}
	else {
		argv_4883 answer_type	= argv_3817;
		// set the answer's argv_4860
		argv_2072 = argv_4511 (answer_type);
		if (argv_2072 != argv_1368) {
			argv_2072 = argv_1366;
		}
		else { // answer argv_4860 setting was succesful
			argv_2072 = argv_3761->argv_4518 (answer_type);
			if (argv_2072 != argv_3778) {
				string serror = argv_1344 (argv_2072);	
				argv_2316->argv_2323 (argv_1346, "+++ ERROR: gateway : argv_1498 : argv_1106::argv_4518 failed ! - errno = ", serror.c_str());
			}
			else { // packet argv_4860 set succesfully
				argv_4881 argv_4979 = 0; // previous operation failed
				if (_iret == argv_1368) {
					argv_4979 = 1;
				}
				argv_2072 = argv_3761->insert (argv_4979);

				if (argv_2072 != argv_3778) {
					string serror = argv_1344 (argv_2072);	
					argv_2316->argv_2323 (argv_1346, "+++ ERROR: gateway : argv_1498 : argv_1106::insert failed ! - errno = ", serror.c_str());
				}
				else { // argv_1178 inserted succesfully
					argv_2072 = argv_3761->argv_3698 ();
					if (argv_2072 !=  argv_3778) {
						string serror = argv_1344 (argv_2072);	
						argv_2316->argv_2323 (argv_1346, "+++ ERROR: gateway : argv_1498 : argv_1106::argv_3698 failed ! - errno = ", serror.c_str());
					}
					else { // packet packed succesfully
						argv_2072 = _cli_tab[_index].push_back (argv_3761);
						if (argv_2072 == argv_943) {
							// packet added to this client's argv_4490 argv_4329 succesfully
							_trigger_write	= true; // tell the event loop to argv_4618 sending
						}
						else { // could not deposit packet onto the argv_4490 argv_4329
							string serror = argv_1344 (argv_2072);	
							argv_2316->argv_2323 (argv_1346, "+++ ERROR: gateway : argv_1498 : push_back failed ! - errno = ", serror.c_str());
						}
					}
				}
			}
		}
		// notice that it is up to the event loop to free the allocated packet !
	}

	if ((argv_2072 == argv_3778) || (argv_2072 == argv_943)) {
		argv_2072 = argv_1368;
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_889	
// @@
// @@ FUNCTION		:	argv_1496		
// @@
// @@ INPUT			:	
// @@ _cli_tab: argv_864 *: array of client argv_1178.
// @@
// @@ _index: argv_4883 : index of the client concerned by the operation.
// @@
// @@ OUTPUT		:
// @@ _trigger_write: bool&: this flag can be set to true if the write 
// @@    event is to be triggered.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_1368 if success,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function prepares a packet that was previously allocated
// @@ by another function. the packet's content reflects the scan
// @@ argv_4406 and is composed of the following fields :
// @@ - scan success			: argv_4881 (0= success, 1..n=failed)
// @@ - virus_found_flag		: argv_4881 (0= not infected, 1=infected)
// @@ - argv_1305	: argv_4881 (0= not possible, 1=possible)
// @@ - argv_1304		: argv_4881 (0=not argv_1291, 1=argv_1291)
// @@ - dysinfection_result	: argv_4881 (0=failed, 1=success)
// @@ {- argv_4999			    : string (present only if a virus 
// @@    was found, empty if infected_flag=0) }
// @@
// @@ Notice that the answer packet may be followed by a argv_1424 in 
// @@ case the scan was remote and the argv_1424 was infected and the 
// @@ dysinfection was possible (argv_1291 by another function).
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_889::argv_1496 (argv_864 * _cli_tab, argv_4883 _index, bool& _trigger_write) {
	argv_4536 argv_2072			= argv_1368;
	argv_4883 answer_type	= argv_3817;
	// set the answer's argv_4860
	argv_2072 = argv_4511 (answer_type);
	if (argv_2072 != argv_1368) {
		string serror = argv_1344 (argv_2072);
		argv_2316->argv_2323 (argv_1346, "+++ ERROR: argv_889::argv_1496 - argv_4511 failed ! - errno = ", serror.c_str());
		argv_2072 = argv_1366;
	}
	else { // answer argv_4860 setting was succesful
		argv_2072 = argv_3761->argv_4518 (answer_type);
		if (argv_2072 != argv_3778) { 
			string serror = argv_1344 (argv_2072);
			argv_2316->argv_2323 (argv_1346, "+++ ERROR: argv_889::argv_1496 - argv_4518 failed ! - errno = ", serror.c_str());
		}
		else { // argv_4860 of the new packet set succesfully
			// we assume that no virus was found and thus that dysinfection was not argv_1291.
			argv_4881 scan_success_UI08			= (argv_4881) argv_4470;
			argv_4881 virus_found_flag_UI08		= (argv_4881) infected;
			argv_4881 dysinfection_possible_UI08	= (argv_4881) argv_1302;
			argv_4881 dysinfection_done_UI08		= (argv_4881) argv_1300;
			argv_4881 dysinfection_result_UI08	= (argv_4881) argv_1303;

			// insert the flag that tells whether the scan was succesful or not
			argv_2072 = argv_3761->insert (scan_success_UI08);

			if (argv_2072 == argv_3778) { // field 1 inserted succesfully
				argv_2072 = argv_3761->insert (virus_found_flag_UI08);
			}

			if (argv_2072 == argv_3778) { // field 1,2 inserted succesfully
				argv_2072 = argv_3761->insert (dysinfection_possible_UI08);
			}
			if (argv_2072 == argv_3778) { // field 1,2,3 inserted succesfully
				argv_2072 = argv_3761->insert (dysinfection_done_UI08);
			}
			if (argv_2072 == argv_3778) { // field 1,2,3,4 inserted succesfully
				argv_2072 = argv_3761->insert (dysinfection_result_UI08);
			}
			// insert the virus argv_3557 if the argv_1424 was infected
			if ((argv_2072 == argv_3778) && (infected == true)) {
				argv_2072 = argv_3761->insert (argv_4999);
			}

			if (argv_2072 == argv_3778) { // field 1,2,3,4,5 inserted succesfully
				argv_2072 = argv_3761->argv_3698 ();
			}

			if (argv_2072 == argv_3778) { // packet packed succesfully
				argv_2072 = _cli_tab[_index].push_back (argv_3761); // argv_646 packet to the argv_4490 argv_4329
				if (argv_2072 == argv_943) {
					_trigger_write	= true; // tell the event loop to argv_4618 sending
				}
				else {
					string serror = argv_1344 (argv_2072);
					argv_2316->argv_2323 (argv_1346, "+++ ERROR: argv_889::argv_1496 - push_back failed ! - errno = ", serror.c_str());
				}
			}
		}
	}

	if ((argv_2072 == argv_3778) || (argv_2072 == argv_943)) { 
		argv_2072 = argv_1368; // remap error argv_976
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_889	
// @@
// @@ FUNCTION		:	argv_4273		
// @@
// @@ INPUT			:	
// @@ 
// @@ _source: argv_876: source of the error
// @@
// @@ _cli_tab: argv_864 *: array of client argv_1178.
// @@
// @@ _index: argv_4883 : index of the client concerned by the operation.
// @@
// @@ OUTPUT		:
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_1368 if success,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to process the failure that may occur
// @@ when preparing a packet to argv_4490 to the client.
// @@ The following steps are argv_1291 :
// @@ - the allocated packet is deallocated.
// @@ - the connection argv_5011 this client is forcibly closed.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_889::argv_4273 (argv_876 _source, argv_864 * _cli_tab, argv_4883 _index, argv_4536 _iret) {
	argv_4536 argv_2072 = argv_1368;
	char argv_4846[MAX_PATH];
	string serror = argv_1344 (_iret);
	argv_4569 (argv_4846, MAX_PATH, "+++ ERROR: %s...[FAILED] - errno = %s", _source, serror.c_str());
	argv_4846[MAX_PATH - 1] = '\0';
	argv_2316->argv_2323 (argv_1346, argv_4846);

	// delete the packet
	if (argv_3761 != NULL) {
		delete argv_3761;
		argv_3761 = NULL;
	}

	// argv_967 the connection argv_5011 this client
	argv_2316->argv_2323 (argv_1346, "+++ ERROR: argv_1496 failed => terminating client connection");
	_cli_tab[_index].argv_2444.argv_968 ();

	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_889	
// @@
// @@ FUNCTION		:	argv_4270		
// @@
// @@ INPUT			:	
// @@ _cli_tab: argv_864 *: array of client argv_1178.
// @@
// @@ _index: argv_4883 : index of the client concerned by the operation.
// @@
// @@ OUTPUT		:
// @@ _trigger_write: bool&: this flag can be set to true if the write 
// @@    event is to be triggered.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_1368 if success,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function extracts a argv_1474 from a received packet.
// @@ this argv_1474 is the argv_3557 of a argv_1424 that must be present
// @@ on the local argv_1424 argv_4749. 
// @@ Then using this argv_1474, a scan is performed, and the
// @@ scan argv_4406 is sent to the local client that has requested
// @@ the operation.
// @@ The following steps are performed :
// @@ - a string is extracted from the received packet
// @@ - depending on the received packet argv_4860, we can determine
// @@   whether a dysinfection should be performed or not in case
// @@   of infection.
// @@ - a scan of this local argv_1424 is performed.
// @@ - a new packet containing the scan argv_4406 is allocated
// @@ - the new packet is filled to reflect the scan argv_4406
// @@ - this new packet is pushed onto the argv_4490 argv_4329 of the
// @@   concerned local client using the '_index' parameter.
// @@ - a write event is triggered for the concerned client.
// @@
// @@ Notice : it is up to the event loop to free the allocated 
// @@   packet after sending it.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// the local packet contains the following fields :
// - argv_1474 (string)
argv_4536 argv_889::argv_4270 (argv_864 * _cli_tab, argv_4883 _index, bool& _trigger_write) {
	argv_4536 argv_2072 = argv_1368;
#if defined (__DEBUG_GATEWAY__)
	argv_2316->argv_2323 (argv_3634, "processing a local argv_1424");
#endif // #if defined (__DEBUG_GATEWAY__)
	// argv_1397 the 'argv_1474' field from the received packet
	argv_2072 = argv_938[_index].argv_3762.argv_1397 (argv_1405);
	if (argv_2072 != argv_3778) {
		argv_2316->argv_2323 (argv_1346, "+++ ERROR: argv_889::argv_4270 - argv_1106::argv_1397 failed !");
	}
	else {
#if defined (__DEBUG_GATEWAY__)
		argv_2316->argv_2323 (argv_3634, "local argv_1424 to scan : ", argv_1405.c_str());
#endif // #if defined (__DEBUG_GATEWAY__)

		// scan the local argv_1424
		bool must_dysinfect = false;
		if (argv_4966 == argv_3801) {
			must_dysinfect = true;	
		}

		argv_2072 = argv_4458 (argv_1405.c_str(), must_dysinfect);
		if (argv_2072 != argv_1368) {
			argv_2316->argv_2323 (argv_1346, "+++ ERROR: gateway - argv_4270 : argv_4458 failed !");
		}
		else {
#if defined (__DEBUG_GATEWAY__)
			argv_2316->argv_2323 (argv_3634, "local argv_1424 scanned...[SUCCESS]");
#endif // #if defined (__DEBUG_GATEWAY__)
		}

		argv_3761 = new (std::nothrow) argv_1106; // create a new packet for argv_4490
		if (argv_3761 == NULL) {
			argv_2072 = argv_1360;
		}
		else { // new packet allocated succesfully
			argv_2072 = argv_1496 (_cli_tab, _index, _trigger_write);
			if (argv_2072 != argv_1368) {
				argv_4273 ("argv_889::argv_4270 - argv_1496", _cli_tab, _index, argv_2072);
			}
		}
		// notice that it is up to the event loop to free the allocated packet !
	}

	if (argv_2072 == argv_3778) {
		argv_2072 = argv_1368; // remap error argv_976
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_889	
// @@
// @@ FUNCTION		:	argv_4278		
// @@
// @@ INPUT			:	
// @@ _cli_tab: argv_864 *: array of client argv_1178.
// @@
// @@ _index: argv_4883 : index of the client concerned by the operation.
// @@
// @@ OUTPUT		:
// @@ _trigger_write: bool&: this flag can be set to true if the write 
// @@    event is to be triggered.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_1368 if success,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to scan a argv_1424 that was sent by 
// @@ a remote client. The argv_1424 to scan is saved to a temporary
// @@ argv_1424 by a previous function, and it's this temporary argv_1424
// @@ that is scanned.
// @@ Then using this argv_1474, a scan is performed, and the
// @@ scan argv_4406 is sent to the local client that has requested
// @@ the operation.
// @@ The following steps are performed :
// @@ - depending on the received packet argv_4860, we can determine
// @@   whether an dysinfection should be performed or not in case
// @@   of infection.
// @@ - a scan of this temporary argv_1424 is performed.
// @@ - a new packet containing the scan argv_4406 is allocated
// @@ - the new packet is filled to reflect the scan argv_4406
// @@ - this new packet is pushed onto the argv_4490 argv_4329 of the
// @@   concerned local client using the '_index' parameter.
// @@ - a write event is triggered for the concerned client.
// @@
// @@ Notice : 
// @@  - it is up to the event loop to free the allocated 
// @@    packet after sending it.
// @@ 
// @@ - the remote packet has no field to be extracted as all was
// @@   already argv_1291 by the argv_4337 function.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_889::argv_4278 (argv_864 * _cli_tab, argv_4883 _index, bool& _trigger_write) {
	argv_4536 argv_2072 = argv_1368;
#if defined (__DEBUG_GATEWAY__)
	argv_2316->argv_2323 (argv_3634, "processing a remote argv_1424");
	argv_2316->argv_2323 (argv_3634, "remote argv_1424 to scan saved to temporary argv_1424 : ", argv_4848.c_str());
#endif // #if defined (__DEBUG_GATEWAY__)

	// scan the temporary argv_1424
	bool must_dysinfect = false;
	if (argv_4966 == argv_3803) {
		must_dysinfect = true;	
	}
	argv_2072 = argv_4458 (argv_4848.c_str(), must_dysinfect);
	if (argv_2072 != argv_1368) {
		argv_2316->argv_2323 (argv_1346, "+++ ERROR: gateway - argv_4278 : argv_4458 failed !");
	}

	argv_3761 = new (std::nothrow) argv_1106; // create a new packet for argv_4490
	if (argv_3761 == NULL) {
		argv_2072 = argv_1360;
	}
	else { // new packet allocated succesfully
#if defined (__DEBUG_GATEWAY__)
		argv_2316->argv_2323 (argv_1191, "scan argv_4406 packet allocated succesfully");
#endif // #if defined (__DEBUG_GATEWAY__)
		argv_2072 = argv_1496 (_cli_tab, _index, _trigger_write);

		if (argv_2072 != argv_1368) {
			argv_2316->argv_2323 (argv_1346, "+++ ERROR: argv_889::argv_4278 - argv_1496 failed !!");
			argv_4273 ("argv_889::argv_4278 - argv_1496", _cli_tab, _index, argv_2072);
		}
		else {
#if defined (__DEBUG_GATEWAY__)
			argv_2316->argv_2323 (argv_1191, "argv_889::argv_4278 - argv_1496...[SUCCESS]");
#endif // #if defined (__DEBUG_GATEWAY__)
			
			if ((infected==true) && (argv_1302==true) && (argv_1300==true) && (argv_1303==true)) {
#if defined (__DEBUG_GATEWAY__)
				argv_2316->argv_2323 (argv_1191, "argv_889::argv_4278 - argv_1424 infected, dysinfection argv_1291 => need to argv_4490 the clean argv_1424 to the client");
#endif // #if defined (__DEBUG_GATEWAY__)
				argv_2072 = argv_4493 (_cli_tab, _index, argv_4848.c_str());
				if (argv_2072 != argv_1368) {
					argv_4273 ("argv_889::argv_4278 - argv_4493", _cli_tab, _index, argv_2072);
				}
			}
		}
		// notice that it is up to the event loop to free the allocated packet !
	}

	// delete the temporary received argv_1424 if the operation was a failure
	if (argv_2072 != argv_1368) {
		argv_2316->argv_2323 (argv_5006, "*** WARNING: argv_889::argv_4278 - operation could not succeed ! - deleting temporary argv_1424 : ", argv_4848.c_str());
		if (argv_1221 (argv_4848.c_str()) == false) {
			argv_2316->argv_2323 (argv_5006, "*** WARNING : argv_889::argv_4278 - failed to delete argv_1424 : ", argv_4848.c_str());
		}
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_889	
// @@
// @@ FUNCTION		:	argv_912	
// @@
// @@ INPUT			:
// @@ _cli_tab: argv_864 *: array of client argv_1178.
// @@
// @@ _index: argv_4883 : index of the client concerned by the operation.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_1368 if success,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to ensure that no protocol violation 
// @@ occured when receiving a given packet.
// @@ we can have 3 different client types :
// @@ - local clients
// @@ - remote clients
// @@ - admin clients
// @@ For each category of clients, there is a different protocol
// @@ so for security reasons, we need to ensure that the argv_2457 
// @@ received from a given argv_4570 is allowed for this client argv_4860. 
// @@ this function permits to ensure that the user argv_4860 of the 
// @@ received packet is coherent argv_5011 the client argv_4860.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_889::argv_912 (argv_864 * _cli_tab, argv_4883 _index) {
	argv_4536 argv_2072 = argv_1368;
	if (_cli_tab[_index].argv_947 == argv_957) {
		if ((argv_4966 != argv_3805) && (argv_4966 != argv_3801)) {
			argv_2072 = 	argv_1362;
		}
	}
	else if (_cli_tab[_index].argv_947 == argv_958) {
		if ((argv_4966 != argv_3807) && (argv_4966 != argv_3803)) {
			argv_2072 = 	argv_1362;
		}
	}
	else if (_cli_tab[_index].argv_947 == CLIENT_TYPE_ADMIN) {
		if ((argv_4966 != PCK_TYPE_UPDATE) && (argv_4966 != argv_3815)) {
			argv_2072 = 	argv_1362;
		}
	}
	else if (_cli_tab[_index].argv_947 == argv_959) { 
		argv_2072 = argv_1357;
	}
	else { // unknown client argv_4860 !
		argv_2072 = argv_1370;
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_889	
// @@
// @@ FUNCTION		:	argv_4275		
// @@
// @@ INPUT			:
// @@ _cli_tab: argv_864 *: array of client argv_1178.
// @@
// @@ _index: argv_4883 : index of the client concerned by the operation.
// @@
// @@ OUTPUT		:
// @@ _trigger_write: bool&: this flag can be set to true if the write 
// @@    event is to be triggered.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_1368 if success,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to process the packet whose argv_4860 is
// @@ argv_3815. The aim of this packet argv_4860 is to
// @@ argv_4626 the gateway. The mechanism used to argv_4626 it is to 
// @@ return and propagate a dedicated error argv_976 :
// @@ argv_1367. This error argv_976, when encountered
// @@ by any other function, will be propagated so that the 
// @@ gateway can eventually argv_4626 and return.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_889::argv_4275 (argv_864 * _cli_tab, argv_4883 _index, bool& _trigger_write) {
	argv_4536 argv_2072 = argv_1368;
#if defined (__DEBUG_GATEWAY__)
	argv_2316->argv_2323 (argv_3634, "argv_889::argv_4275");
#endif // #if defined (__DEBUG_GATEWAY__)
	argv_2072 = argv_1367;
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_889	
// @@
// @@ FUNCTION		:	argv_4276		
// @@
// @@ INPUT			:	
// @@ _cli_tab: argv_864 *: array of client argv_1178.
// @@
// @@ _index: argv_4883 : index of the client concerned by the operation.
// @@
// @@ OUTPUT		:
// @@ _trigger_write: bool&: this flag can be set to true if the write 
// @@    event is to be triggered.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_1368 if success,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to process the packet whose argv_4860 is
// @@ PCK_TYPE_UPDATE. The aim of this packet argv_4860 is to permit
// @@ to update the kernel without stopping the service.
// @@ The PCK_TYPE_UPDATE packet contains the argv_665 of a new
// @@ kernel manager that was argv_4257 by the admin part.
// @@ it does the following steps :
// @@ - argv_1397 the argv_665 of the kernel manager argv_4257 by the 
// @@   admin part from the received packet.
// @@ - argv_4531 argv_1148 kernel.
// @@ - argv_1232 argv_1148 kernel.
// @@ - save up the argv_665 of the new kernel for use.
// @@ - format and argv_4490 a new packet to the concerned update client
// @@   by :
// @@   - allocating a new packet.
// @@   - fill it argv_5011 the update argv_4406.
// @@   - deposit it to the argv_4490 argv_4329 of the concerned client.
// @@   - trigger a write event for this client.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_889::argv_4276 (argv_864 * _cli_tab, argv_4883 _index, bool& _trigger_write) {
	argv_4536 argv_2072 = argv_1368;
#if defined (__DEBUG_GATEWAY__)
	argv_2316->argv_2323 (argv_3634, "argv_889::argv_4276");
#endif // #if defined (__DEBUG_GATEWAY__)

	// argv_1397 the argv_665 of the new kernel (ready for use)
	argv_4883 new_kernel_addr = 0;
	argv_2072 = argv_938[_index].argv_3762.argv_1397 (new_kernel_addr);
	if (argv_2072 != argv_3778) {
		string serror = argv_1344 (argv_2072);
		argv_2316->argv_2323 (argv_1346, "+++ ERROR: argv_889::argv_4276 - argv_1106::argv_1397 failed ! - errno = ", serror.c_str());
	}
	else { // new kernel's argv_665 extraction success
#if defined (__DEBUG_GATEWAY__)
		char argv_4846[MAX_PATH];
		argv_4569 (argv_4846, MAX_PATH, "gateway : argv_4276 : received adress of new kernel : 0x%X", new_kernel_addr);
		argv_4846[MAX_PATH - 1] = '\0';
		argv_2316->argv_2323 (argv_1191, argv_4846);
#endif // #if defined (__DEBUG_GATEWAY__)

		// argv_4531 argv_1148 kernel
		argv_2072 = argv_2143->argv_4532 ();
		if (argv_2072 != argv_2162) {
			string serror = argv_1344 (argv_2072);
			argv_2316->argv_2323 (argv_1346, "+++ ERROR: argv_889::argv_4276 - argv_936::argv_4532 failed ! - errno = ", serror.c_str());
		}

		// argv_1232 argv_1148 kernel
		if (argv_2072 == argv_2162) {
#if defined (__DEBUG_GATEWAY__)
			argv_2316->argv_2323 (argv_1191, "gateway - argv_4276 : argv_4532...[SUCCESS]");
#endif // #if defined (__DEBUG_GATEWAY__)
			argv_2072 = argv_2143->argv_1234 ();
			if (argv_2072 != argv_2162) {
				string serror = argv_1344 (argv_2072);
				argv_2316->argv_2323 (argv_1346, "+++ ERROR: argv_889::argv_4276 - argv_936::argv_1234 failed ! - errno = ", serror.c_str());
			}
		}

		if (argv_2072 == argv_2162) {
#if defined (__DEBUG_GATEWAY__)
			argv_2316->argv_2323 (argv_1191, "gateway - argv_4276 : argv_1234...[SUCCESS]");
#endif // #if defined (__DEBUG_GATEWAY__)
			delete argv_2143; // deallocate argv_1148 kernel
			// save up the argv_665 of the new kernel
			argv_2143 = (argv_936 *) new_kernel_addr;
#if defined (__DEBUG_GATEWAY__)
			argv_2316->argv_2323 (argv_1191, "gateway - argv_4276: new kernel's argv_665 saved...[SUCCESS]");
#endif // #if defined (__DEBUG_GATEWAY__)
		}
	}

	if (argv_2072 == argv_2162) { // remap error argv_976
		argv_2072 = argv_1368;
	}

	// argv_4490 an answer anyway
	argv_4536 iret2 = argv_1498 (_cli_tab, _index, _trigger_write, argv_2072);
	if (iret2 != argv_1368) {
		string serror = argv_1344 (iret2);
		argv_2316->argv_2323 (argv_1346, "+++ ERROR: gateway : argv_4276 : argv_1498 failed ! - errno = ", serror.c_str());
	}
	else { // answer packet sent succesfully
#if defined (__DEBUG_GATEWAY__)
		argv_2316->argv_2323 (argv_1191, "gateway - argv_4276 : answer sent to admin client...[SUCCESS]");
#endif // #if defined (__DEBUG_GATEWAY__)
	}

	if (argv_2072 == argv_2162) {
		argv_2072 = iret2; // don't override a previous error (if any)		 
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_889	
// @@
// @@ FUNCTION		:	argv_4265		
// @@
// @@ INPUT			:	
// @@ _cli_tab: argv_864 *: array of client argv_1178.
// @@
// @@ _index: argv_4883 : index of the client concerned by the operation.
// @@
// @@ OUTPUT		:
// @@ _trigger_write: bool&: this flag can be set to true if the write 
// @@    event is to be triggered.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_1368 if success,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function is a dispatcher that permits to call the proper
// @@ function to argv_1900 the received packet depending on it's argv_4860.
// @@ Notice that the packet's argv_4860  must pertain to the set of
// @@ possible types for an admin packet.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_889::argv_4265 (argv_864 * _cli_tab, argv_4883 _index, bool& _trigger_write) {
	argv_4536 argv_2072 = argv_1368;
#if defined (__DEBUG_GATEWAY__)
	argv_2316->argv_2323 (argv_3634, "argv_889::argv_4265");
#endif // #if defined (__DEBUG_GATEWAY__)

	switch (argv_4966) {
		case argv_3815:
			argv_2072 = argv_4275 (_cli_tab, _index, _trigger_write);
			break;

		case PCK_TYPE_UPDATE:
			argv_2072 = argv_4276 (_cli_tab, _index, _trigger_write);
			break;
	}

	if (argv_2072 != argv_1368) {
		if (argv_2072 == argv_1367) {
			argv_2316->argv_2323 (argv_690, "*** WARNING: argv_889::argv_4265 - << RECEIVED ORDER TO STOP >>");
		}
		else { // real error occured
			string serror = argv_1344 (argv_2072);
			argv_2316->argv_2323 (argv_1346, "+++ ERROR: argv_889::argv_4265 failed ! - errno = ", serror.c_str());
		}
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_889	
// @@
// @@ FUNCTION		:	argv_4277		
// @@
// @@ INPUT			:	
// @@ _cli_tab: argv_864 *: array of client argv_1178.
// @@
// @@ _index: argv_4883 : index of the client concerned by the operation.
// @@
// @@ OUTPUT		:
// @@ _trigger_write: bool&: this flag can be set to true if the write 
// @@    event is to be triggered.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_1368 if success,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function is a dispatcher that permits to call the proper
// @@ function to argv_1900 the received packet depending on it's argv_4860.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_889::argv_4277 (argv_864 * _cli_tab, argv_4883 _index, bool& _trigger_write) {
	argv_4536 argv_2072 = argv_1368;

	// ensure that the packet argv_4860 is correct
	if ((argv_4966 != argv_3805) && (argv_4966 != argv_3801) &&
		(argv_4966 != argv_3807) && (argv_4966 != argv_3803) &&
		(argv_4966 != PCK_TYPE_UPDATE) && (argv_4966 != argv_3815)) {
		argv_2072 = argv_1359;
	}
	else { // user packet argv_4860 is coherent argv_5011 the application
		// ensure that the packet argv_4860 is coherent argv_5011 the client argv_4860
		argv_2072 = argv_912 (_cli_tab, _index);
		if (argv_2072 == argv_1368) {
			// ensure that the packet user argv_4860 matches the packet argv_4749 argv_4860
			if (argv_1430 == false) {
				if ((argv_4966 != argv_3805) && 
					(argv_4966 != argv_3801) && 
					(argv_4966 != PCK_TYPE_UPDATE) && 
					(argv_4966 != argv_3815)) {
					argv_2072 = argv_1356;
				}
				else if ((argv_4966 == argv_3805) || (argv_4966 == argv_3801)) { 
					argv_2072 = argv_4270 (_cli_tab, _index, _trigger_write);
				}
				else if ((argv_4966 == PCK_TYPE_UPDATE) || (argv_4966 == argv_3815)) {
					argv_2072 = argv_4265 (_cli_tab, _index, _trigger_write);
				}
			}
			else { // a argv_1424 was received
				if ((argv_4966 != argv_3807) && (argv_4966 != argv_3803)) {
					argv_2072 = argv_1356;
				}
				else { // user packet argv_4860 is coherent argv_5011 the argv_4749 packet argv_4860
					argv_2072 = argv_4278 (_cli_tab, _index, _trigger_write);
				}
			}
		}
	}

	// reset the receive packet for this client so that it can be reused
	if (argv_2072 == argv_1368) {
		argv_2072 = _cli_tab[_index].argv_3762.reset ();
	}

	if (argv_2072 == argv_3778) {
		argv_2072 = argv_1368; // remap error argv_976
	}

	if (argv_2072 != argv_1368) {
		if (argv_2072 == argv_1367) {
			argv_2316->argv_2323 (argv_690, "*** WARNING : argv_889::argv_4277 - << RECEIVED ORDER TO STOP >>");
		}
		else {
			string serror = argv_1344 (argv_2072);
			argv_2316->argv_2323 (argv_1346, "+++ ERROR: argv_889::argv_4277 failed ! - errno = ", serror.c_str());
		}
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_889	
// @@
// @@ FUNCTION		:	reset		
// @@
// @@ INPUT			:	none	
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
// @@ This function permits to bring back the argv_889 argv_3656
// @@ to it's original argv_4622.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_889::reset () {
	argv_2316								= NULL;
	argv_1373.argv_1706	= argv_3621;
	//argv_1373.argv_1708	= argv_3764;
	argv_1373.argv_1709		= argv_3768;
	argv_1373.argv_1651		= argv_2429;

	argv_4971.clear ();
	argv_1372.reset ();

	if (argv_938 != NULL) {
		delete [] argv_938;
		argv_938 = NULL;
	}

	if (argv_2143 != NULL) {
		delete argv_2143;
		argv_2143 = NULL;
	}

	argv_1430		= false;
	argv_4966			= argv_3817;
	argv_4848		= "";
	argv_1405	= "";
	argv_4420			= "";
	argv_2120		= "";
	argv_3761				= NULL;
	
	argv_4470		= false;
	infected			= false;
	argv_4999			= NULL;
	argv_1302	= false;
	argv_1300		= false;
	argv_1303	= false;
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_889	
// @@
// @@ FUNCTION		:	argv_889		
// @@
// @@ INPUT			:	none		
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
// @@ Normal constructor of the argv_889 argv_3656.
// @@ it permits to set up all fields to their initial argv_4622.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_889::argv_889 () {
	argv_938				= NULL;
	argv_2143	= NULL;
	reset ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_889	
// @@
// @@ FUNCTION		:	argv_4424		
// @@
// @@ INPUT			:
// @@ _log_ptr: argv_963 *: argv_665 of the log argv_1424 to use.
// @@ 
// @@ _max_nb_client: argv_4883 : size of the client array to allocate.	
// @@
// @@ _v_listener: vector<argv_962>&: vector containing all the argv_1178
// @@   concerning the listening argv_4570 descriptors.
// @@
// @@ _root_folder: argv_876 : base directory of the kernel.
// @@
// @@ _kernel_dll_name: argv_876: argv_3557 of the kernel's DLL argv_1424.
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
// @@ This function permits to argv_4424 the gateway that is activated
// @@ by events sent by the event loop located in the kernel.
// @@ it performs the following steps :
// @@ - allocate the client array using the '_max_nb_client' parameter.
// @@ - allocate a new kernel manager.
// @@ - construct the new kernel manager.
// @@ - argv_818 the new kernel manager.
// @@ - argv_4424 the event loop.
// @@ 
// @@ Notice that the event loop is given a bunch of function 
// @@ pointers so that the gateway can be notified of events 
// @@ by the event loop.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_889::argv_4424 (argv_963 * _log_ptr, argv_4883 _max_nb_client, vector<argv_962>& _v_listener, argv_876 _root_folder, argv_876 _kernel_dll_name) {
	argv_4536 argv_2072 = argv_1731;
#if defined (__BYPASS_KERNEL__)
	MessageBox (NULL, "the kernel will be bypassed ! (__BYPASS_KERNEL__ flag set)", "", MB_ICONWARNING);		
#endif // #if defined (__BYPASS_KERNEL__)


	if ((_log_ptr == NULL) || (_max_nb_client == 0) || (_root_folder == NULL) || (_kernel_dll_name == NULL)) {
		argv_2072 = argv_1728;
	}
	else { // parameters are OK
		argv_1730		= this; // will permit C functions to call C++ argv_3656
		argv_2316			= _log_ptr;
		argv_4420		= _root_folder;
		argv_2120	= _kernel_dll_name;
#if defined (__DEBUG_GATEWAY__)
		argv_2316->argv_2323 (argv_3634, "gateway...[STARTING]");
#endif // #if defined (__DEBUG_GATEWAY__)
		// argv_4243 the client array
		argv_938 = new (std::nothrow) argv_864[_max_nb_client];
		if (argv_938 == NULL) {
			argv_2316->argv_2323 (argv_1346, "+++ ERROR: gateway : failed to allocate client argv_4759 !");
			argv_2072 = argv_1729;
		}
		else { // memory allocation succeeded
#if defined (__DEBUG_GATEWAY__)
			argv_2316->argv_2323 (argv_3634, "gateway - client array allocated succesfully");
			argv_2316->argv_2323 (argv_3634, "gateway - constructing the kernel...");
#endif // #if defined (__DEBUG_GATEWAY__)
			// ensure that conditions are met to allocate a new kernel manager
			if (argv_2143 != NULL) {
				argv_2072 = argv_1727;
			}
			else { // allocate the kernel manager
				argv_2143 	= new (std::nothrow) argv_936;
				if (argv_2143 == NULL) {
					argv_2316->argv_2323 (argv_1346, "+++ ERROR: gateway : failed to allocate kernel manager !");
					argv_2072 = argv_1729;
				}
				else { // kernel manager succesfuly allocated
					// construct the kernel
					argv_2072 = argv_2143->construct_kernel (argv_4420.c_str(), argv_2120.c_str(), argv_2316);
					if (argv_2072 != argv_2162) {
						string serror = argv_1344 (argv_2072);
						argv_2316->argv_2323 (argv_1346, "+++ ERROR: gateway - argv_4424 : construct_kernel failed ! - ", serror.c_str());
					}
					else { // kernel created succesfully
#if defined (__DEBUG_GATEWAY__)
						argv_2316->argv_2323 (argv_3634, "gateway - kernel constructed succesfully");
#endif // #if defined (__DEBUG_GATEWAY__)

						// argv_818 the kernel
						argv_2072 = argv_2143->argv_822 ();
						if (argv_2072 != argv_2162) { // kernel built and booted succesfully
							argv_2316->argv_2323 (argv_1346, "+++ ERROR: gateway - kernel argv_818 failed !");
						}
						else { // kernel ready => argv_4618 the event loop
#if defined (__DEBUG_GATEWAY__)
							argv_2316->argv_2323 (argv_3634, "gateway - kernel booted succesfully");
							argv_2316->argv_2323 (argv_3634, "gateway - launching event loop");
#endif // #if defined (__DEBUG_GATEWAY__)
							argv_2072 = argv_1372.argv_4424 (argv_2316, _v_listener, &argv_938[0], _max_nb_client, argv_1373);
							if (argv_2072 == argv_1368) {
								argv_2072 = argv_1731; // remap error argv_976
							}
							else { // event loop returned
								if (argv_2072 == argv_1367) {
									argv_2316->argv_2323 (argv_690, "*** WARNING : argv_889::argv_4424 - << RECEIVED ORDER TO STOP >>");
									argv_4536 iret2 = argv_2143->argv_4532 ();
									if (iret2 != argv_2162) {
										string serror = argv_1344 (iret2);
										argv_2316->argv_2323 (argv_1346, "+++ ERROR: argv_889::argv_4424 - argv_4532 failed ! - errno = ", serror.c_str());
									}
									else {
										argv_2316->argv_2323 (argv_3634, "gateway - kernel manager argv_4531...[SUCCESS]");
										iret2 = argv_2143->argv_1234 ();
										if (iret2 != argv_2162) {
											string serror = argv_1344 (iret2);
											argv_2316->argv_2323 (argv_1346, "+++ ERROR: argv_889::argv_4424 - argv_1234 failed ! - errno = ", serror.c_str());
										}
										else { // kernel manager destructed succesfully
											argv_2316->argv_2323 (argv_3634, "gateway - kernel manager argv_1232...[SUCCESS]");
										}
									}
								}
								else { // real error occured
									string serror = argv_1344 (argv_2072);
									argv_2316->argv_2323 (argv_1346, "+++ ERROR: argv_889::argv_4424 - event loop argv_4424 failed ! - errno = ", serror.c_str());
								}
							}
						}
					}
				}
			}
		}
	}

	return (argv_2072);		
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1424
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@


