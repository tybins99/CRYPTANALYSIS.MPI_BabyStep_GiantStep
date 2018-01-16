// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_300.cpp
// @@ 
// @@ DESCRIPTION:
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ included files
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_359.hpp"


argv_930::argv_930 () {
	reset ();
}

void argv_930::reset () {
	argv_2316					= NULL;
	argv_4228					= 0;
	inner_port_servname		= "127.0.0.1";
	argv_3695				= "";
	argv_1089	= false;
	argv_4343			= NULL;
	argv_4498			= NULL;
	argv_4257				= false;
}

void argv_930::argv_1255 (argv_4536 _iret_success, argv_4536 _iret, argv_876 _operation) {
	char argv_4846[MAX_PATH];
	if (argv_2316 != NULL) {
		if (_iret == _iret_success) {
			argv_4569 (argv_4846, MAX_PATH, "%s (argv_3694:%s)...[SUCCESS]", _operation, argv_3695.c_str());
			argv_4846[MAX_PATH - 1] = '\0';
			argv_2316->argv_2323 (argv_1191, argv_4846);
		}
		else {
			string serror = argv_1344 (_iret);
			argv_4569 (argv_4846, MAX_PATH, "+++ ERROR: %s (argv_3694:%s)...[FAILED] - serror=%s", _operation, argv_3695.c_str(), serror.c_str());
			argv_4846[MAX_PATH - 1] = '\0';
			argv_2316->argv_2323 (argv_1346, argv_4846);
		}
	}
}

void argv_930::argv_1250 (argv_876 _message) {
	char argv_4846[MAX_PATH];
	argv_4569 (argv_4846, MAX_PATH, "argv_930(argv_3694:%s) %s", argv_3695.c_str(), _message);
	argv_4846[MAX_PATH - 1] = '\0';
	argv_2316->argv_2323 (argv_1191, argv_4846);
}

argv_4536 argv_930::argv_967 () {
	argv_4536 argv_2072 = argv_2067;
	if (argv_1089 == false) {
		argv_2316->argv_2323 (argv_1346, "+++ ERROR: argv_930::argv_967 - illegal call  when connection was not established !");
		argv_2072 = argv_2065;
	}
	else { // argv_967 the connection argv_5011 the external client
		argv_2445.argv_968 ();
		argv_1089	= false;
		argv_4257				= false;
	}
	return (argv_2072);
}

argv_4536 argv_930::argv_4496 () {
	argv_4536 argv_2072 = argv_2067;
	argv_2072 = argv_4498->argv_4490 (argv_2445);
	if (argv_2072 != argv_3778) {
		string serror = argv_1344 (argv_2072);
		argv_2316->argv_2323 (argv_1346, "+++ ERROR: argv_930::argv_4496 -  packet argv_4337 failed ! - errno = ", serror.c_str());
	}

	if (argv_2072 == argv_3778) { // remap error argv_976
		argv_2072 = argv_2067;
	}
	return (argv_2072);
}

argv_4536 argv_930::argv_1751 (argv_2338& _socket_ptr_as_void) {
	argv_4536 argv_2072 = argv_2067;
	argv_2072 = argv_2445.argv_1754 (_socket_ptr_as_void);
	return (argv_2072);
}

argv_4536 argv_930::argv_4334 () {
	argv_4536 argv_2072				= argv_2067;
	argv_4536 infinite_timeout	= -1;

	argv_2072 = argv_4343->reset ();
	if (argv_2072 != argv_3778) {
		string serror = argv_1344 (argv_2072);
		argv_2316->argv_2323 (argv_1346, "+++ ERROR: argv_930::argv_4334 -  packet reset failed ! - errno = ", serror.c_str());
	}
	else { // packet reseted succesfully
		// wait for a request from this external client
		argv_2072 = argv_4343->argv_4337 (argv_2445, infinite_timeout, false);
		if (argv_2072 != argv_3778) {
			string serror = argv_1344 (argv_2072);
			argv_2316->argv_2323 (argv_1346, "+++ ERROR: argv_930::argv_4334 -  packet argv_4337 failed ! - errno = ", serror.c_str());
		}
	}

	if (argv_2072 == argv_3778) { // remap error argv_976
		argv_2072 = argv_2067;
	}
	return (argv_2072);
}


argv_4536 argv_930::argv_4243 (argv_876 _owner, argv_4883 _port, argv_963 * _log_ptr, argv_1106 * _recv_pck_ptr, argv_1106 * _send_pck_ptr) {
	argv_4536 argv_2072 = argv_2067;
	if ((_log_ptr == NULL) || (_recv_pck_ptr == NULL) || (_send_pck_ptr == NULL)) {
		argv_2072 = argv_2066;
	}
	else if (argv_4257 == true) {
		argv_2072 = argv_2064;
	}
	else {
		argv_4343	= _recv_pck_ptr;
		argv_4498	= _send_pck_ptr;
		argv_2316			= _log_ptr;
		argv_4228			= _port;
		argv_3695		= _owner;

		argv_1250 ("preparing inner argv_4228");

		// bind the argv_4228 given as a parameter
		argv_2072 = argv_2445.argv_4245 (inner_port_servname.c_str(), argv_4228);
		argv_1255 (argv_2448, argv_2072, "argv_4245");
		if (argv_2072 != argv_2448) {
			argv_4883 argv_2214 = argv_2445.argv_1768 ();
			string serror = argv_1344 (argv_2072);
			argv_2316->argv_2323 (argv_1346, "+++ ERROR: argv_930::argv_4243 - argv_4245 FAILED ! - errno = ", serror.c_str());
			argv_2316->argv_2323 (argv_1346, "+++ ERROR: argv_930::argv_4243 - last argv_4570 error = ", argv_2214);
			argv_2072 = argv_2062;
		}
		else { // client argv_4257 succesfully
#if defined (__DEBUG_INNER_PORT__)
			char argv_4846[MAX_PATH];
			argv_4569 (argv_4846, MAX_PATH, "client argv_4257 succesfully on argv_4228 %u for '%s' (connection established)", _port, _owner);
			argv_4846[MAX_PATH - 1] = '\0';
			argv_2316->argv_2323 (argv_1191, argv_4846);
#endif // #if defined (__DEBUG_INNER_PORT__)
			argv_1089	= true;
			argv_4257				= true;
		}
	}

	if (argv_2072 == argv_2448) {
		argv_2072 = argv_2067; // remap error argv_976
	}
	return (argv_2072);
}




// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1424
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
