// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_382.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1424 contains all the functions and argv_1178
// @@ structures necessary for the scan daemon to
// @@ work properly. 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_382.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ global variables
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#if defined (__WIN32_OS__) 
	extern argv_876		argv_4509;
#endif // #if defined (__WIN32_OS__) 
extern argv_963  *		argv_4508;
argv_1134 *		argv_1177	= NULL;


void WINAPI service_main (DWORD _argc, LPTSTR _argv[]) {
	argv_1134 * daemon_mgr_ptr_local = new (std::nothrow) argv_1134;
	if (daemon_mgr_ptr_local == NULL) {
		FILE * argv_1510 = fopen ("C:\\av_service_log.txt", "wb");
		if (argv_1510) {
			fprintf (argv_1510, "+++ ERROR: memory allocation failed for service argv_3656");
			fclose (argv_1510);
		}
	}
	else {
		argv_1177 = daemon_mgr_ptr_local;
		daemon_mgr_ptr_local->argv_4424 ();	
		delete daemon_mgr_ptr_local;
	}
}


argv_4536 main (argv_4536 _argc, char ** _argv) {
	argv_4536 argv_2072 = 0;

	SERVICE_TABLE_ENTRY servicetable[]=
	{
		{(char *) argv_4509, (LPSERVICE_MAIN_FUNCTION) service_main},
		{NULL,NULL}
	};

	BOOL bresult = StartServiceCtrlDispatcher (servicetable);
	if (! bresult) {
		argv_2072 = 1;
	}
	return (argv_2072);
	
}

void argv_4506 (DWORD nControlCode) {
	argv_4536 argv_2072 = argv_4455;

	switch (nControlCode) {
		case SERVICE_CONTROL_SHUTDOWN:
		case SERVICE_CONTROL_STOP:
		case SERVICE_STOP_PENDING:
			argv_1177->argv_4507 = SERVICE_STOP_PENDING;
			argv_2072 = argv_1177->argv_4959 (SERVICE_STOP_PENDING, NO_ERROR, 0, 1, 3000);
			if (argv_2072 != argv_4455) {
				argv_4508->argv_2323 (argv_1346, "+++ ERROR: argv_4506: argv_4959 failed ! (SERVICE_STOP_PENDING)");
			}
			else {
				argv_4508->argv_2323 (argv_3634, "service status set to SERVICE_STOP_PENDING...[OK]");
			}
			argv_1177->argv_2198 ();
			return;
			break;

		default:
			break;
	}
	
	argv_2072 = argv_1177->argv_4959 (argv_1177->argv_4507, NO_ERROR, 0, 0, 0);
	if (argv_2072 != argv_4455) {
		argv_4508->argv_2323 (argv_1346, "+++ ERROR: argv_4506: argv_4959 failed !");
	}
	else {
		argv_4508->argv_2323 (argv_3634, "argv_4506: argv_4959...[OK]");
	}
	Sleep (5000);
}

DWORD WINAPI argv_1284 (argv_2338 lParam) {
	argv_1135 * env_ptr = (argv_1135 *) lParam;
	argv_4536 argv_2072 = env_ptr->inner_objects.argv_1023.argv_4424 (&env_ptr->log_set.argv_2311, env_ptr->data_set.argv_2392, env_ptr->argv_4971, &env_ptr->inner_objects.argv_715, &env_ptr->inner_objects.argv_728, &env_ptr->inner_objects.argv_4578);
	return (0);
}

DWORD WINAPI argv_1282 (argv_2338 lParam) {
	argv_1135 * env_ptr = (argv_1135 *) lParam;
	argv_4536 argv_2072 = env_ptr->inner_objects.argv_715.argv_4424 ("Carchive_creator", env_ptr->data_set.internal_archive_creator_port, &env_ptr->log_set.argv_2307, env_ptr->data_set.argv_705.c_str(), env_ptr->data_set.argv_704.c_str());
	return (0);
}

DWORD WINAPI argv_1283 (argv_2338 lParam) {
	argv_1135 * env_ptr = (argv_1135 *) lParam;
	argv_4536 argv_2072 = env_ptr->inner_objects.argv_728.argv_4424 ("Carchive_extractor", env_ptr->data_set.internal_archive_extractor_port, &env_ptr->log_set.argv_2308, env_ptr->data_set.argv_705.c_str(), env_ptr->data_set.argv_704.c_str());
	return (0);
}

DWORD WINAPI argv_1289 (argv_2338 lParam) {
	argv_1135 * env_ptr = (argv_1135 *) lParam;
	argv_4536 argv_2072 = env_ptr->inner_objects.argv_4578.argv_4424 ("Cspyware_manager", env_ptr->data_set.internal_spyware_manager_port, &env_ptr->log_set.argv_2320);
	return (0);
}

DWORD WINAPI argv_1287 (argv_2338 lParam) {
	argv_1135 * env_ptr = (argv_1135 *) lParam;
	argv_4536 argv_2072 = env_ptr->inner_objects.argv_4459.argv_4424 (env_ptr->data_set.argv_4420.c_str(), env_ptr->data_set.argv_2120.c_str(), "Cscan_gateway", env_ptr->data_set.internal_scan_gateway_port, &env_ptr->log_set.argv_2319);
	return (0);
}

DWORD WINAPI argv_1290 (argv_2338 lParam) {
	argv_1135 * env_ptr = (argv_1135 *) lParam;
	argv_4536 argv_2072 = env_ptr->inner_objects.argv_4941.argv_4424 (env_ptr->data_set.argv_1391.c_str(), env_ptr->data_set.internal_update_manager_port, env_ptr->data_set.argv_1392, &env_ptr->log_set.argv_2326, env_ptr->data_set.argv_4420.c_str(), env_ptr->data_set.argv_2120.c_str());
	return (0);
}

void argv_1134::argv_1254 (argv_876 _from, argv_4536 _success_iret, argv_4536 _iret) {
	char argv_4846[MAX_PATH];	
	if (_iret == _success_iret) {
		argv_4569 (argv_4846, MAX_PATH, "%s...[SUCCESS]", _from);
		argv_4846[MAX_PATH - 1] = '\0';
		argv_2327.argv_2323 (argv_1191, argv_4846);	
	}
	else {
		string serror = argv_1344 (_iret);
		argv_4569 (argv_4846, MAX_PATH, "+++ ERROR: %s...[FAILED] - argv_1343 = %s", _from, serror.c_str());
		argv_4846[MAX_PATH - 1] = '\0';
		argv_2327.argv_2323 (argv_1346, argv_4846);
	}
}

// this function permits to argv_1397 the necessary settings from registry (win32)
// for now this extraction is just simulated as the product should be installed
// in argv_3690 to have a valid registry tree established.
//
// NOTICE: Linux gets parameters from command argv_2250
argv_4536 argv_1134::argv_1401 () {
	argv_4536 argv_2072 = argv_4455;
#if defined (__WIN32_OS__) 
	argv_1342.data_set.internal_servname				= "127.0.0.1";
	argv_1342.data_set.argv_1391				= "INADDR_ANY";

	argv_4883 base_port								= 30000;
	argv_1342.data_set.argv_1389			= base_port + 0;
	argv_1342.data_set.argv_1390			= base_port + 1;
	argv_1342.data_set.argv_1388			= base_port + 2;
	argv_1342.data_set.argv_1392	= base_port + 3;

	argv_1342.data_set.internal_archive_creator_port	= base_port + 4;
	argv_1342.data_set.internal_archive_extractor_port= base_port + 5;	
	argv_1342.data_set.internal_spyware_manager_port	= base_port + 6;
	argv_1342.data_set.internal_scan_gateway_port		= base_port + 7;
	argv_1342.data_set.internal_update_manager_port	= base_port + 8;
	argv_1342.data_set.internal_admin_port			= base_port + 9;

	argv_1342.data_set.argv_2392					= 30;

	char argv_4846[MAX_PATH];
	strncpy (argv_4846, "C:\\new_engine\\SRC\\fake_GUI", MAX_PATH);
	argv_4846[MAX_PATH - 1] = '\0';

	argv_1342.data_set.argv_4420					= argv_4846;
	argv_1342.data_set.argv_2120				= argv_1342.data_set.argv_4420 + "\\DLL\\" + "kernel_api.dll";
	argv_1342.data_set.argv_705				= argv_1342.data_set.argv_4420 + "\\DLL";
	argv_1342.data_set.argv_704					= "vrazmain.dll";

#endif // #if defined (__WIN32_OS__) 
	argv_1259 ();
	return (argv_2072);
}

void argv_1134::argv_1259 () {
#if defined (__DEBUG_SCAN_DAEMON__)
	argv_2327.argv_2323 (argv_1191, "internal_servname               = ", argv_1342.data_set.internal_servname.c_str());	
	argv_2327.argv_2323 (argv_1191, "argv_1391               = ", argv_1342.data_set.argv_1391.c_str());
	argv_2327.argv_2323 (argv_1191, " ");
	argv_2327.argv_2323 (argv_1191, "argv_1389             = ", argv_1342.data_set.argv_1389);
	argv_2327.argv_2323 (argv_1191, "argv_1390            = ", argv_1342.data_set.argv_1390);
	argv_2327.argv_2323 (argv_1191, "argv_1388           = ", argv_1342.data_set.argv_1388);
	argv_2327.argv_2323 (argv_1191, "argv_1392    = ", argv_1342.data_set.argv_1392);
	argv_2327.argv_2323 (argv_1191, "");
	argv_2327.argv_2323 (argv_1191, "internal_archive_creator_port   = ", argv_1342.data_set.internal_archive_creator_port);
	argv_2327.argv_2323 (argv_1191, "internal_archive_extractor_port = ", argv_1342.data_set.internal_archive_extractor_port);
	argv_2327.argv_2323 (argv_1191, "internal_spyware_manager_port   = ", argv_1342.data_set.internal_spyware_manager_port);
	argv_2327.argv_2323 (argv_1191, "internal_scan_gateway_port      = ", argv_1342.data_set.internal_scan_gateway_port);
	argv_2327.argv_2323 (argv_1191, "internal_update_manager_port    = ", argv_1342.data_set.internal_update_manager_port);
	argv_2327.argv_2323 (argv_1191, "internal_admin_port             = ", argv_1342.data_set.internal_admin_port);
	argv_2327.argv_2323 (argv_1191, "");
	argv_2327.argv_2323 (argv_1191, "argv_2392                   = ", argv_1342.data_set.argv_2392);
	argv_2327.argv_2323 (argv_1191, "argv_4420                     = ", argv_1342.data_set.argv_4420.c_str());
	argv_2327.argv_2323 (argv_1191, "argv_2120                 = ", argv_1342.data_set.argv_2120.c_str());
	argv_2327.argv_2323 (argv_1191, "argv_705               = ", argv_1342.data_set.argv_705.c_str());
	argv_2327.argv_2323 (argv_1191, "argv_704                  = ", argv_1342.data_set.argv_704.c_str());
	argv_2327.argv_2323 (argv_1191, "");
#endif // #if defined (__DEBUG_SCAN_DAEMON__)
}

argv_4536 argv_1134::argv_5004 (argv_876 _name, HANDLE _handle, argv_4536 _timeout) {
	argv_4536 argv_2072		= argv_4455;
	argv_4536 ret_local = WaitForSingleObject (_handle, /*INFINITE*/_timeout);

	if (ret_local == WAIT_OBJECT_0) {
#if defined (__DEBUG_SCAN_DAEMON__)
		argv_2327.argv_2323 (argv_3634, "following thread succesfully finished : '", _name, "'");
#endif // #if defined (__DEBUG_SCAN_DAEMON__)
	}
	else if (ret_local == WAIT_TIMEOUT) {
		argv_2072 = argv_4457;
		argv_2327.argv_2323 (argv_1346, "+++ ERROR: argv_1134::send_stop_packet - WAIT_TIMEOUT for following thread : '", _name, "'");
	}
	else {
		argv_2072 = argv_4456;
		argv_2327.argv_2323 (argv_1346, "+++ ERROR: argv_1134::send_stop_packet - wait failed for following thread : '", _name, "'");
	}
	return (argv_2072);
}


argv_4536 argv_1134::argv_5003 () {
	argv_4536 argv_2072		= argv_4455;
	argv_4536 ret_local	= 0;
	argv_4883 argv_3605	= argv_4977.size ();
	argv_4883 nb_success = 0;
	argv_4883 nb_error   = 0;

	for (argv_4883 i=0 ; i<argv_3605 ; i++) {
		ret_local = argv_5004 (argv_4977[i].argv_3557.c_str(), argv_4977[i].argv_4798, argv_2402);
		if (ret_local == argv_4455) {
			nb_success++;
		}
		else {
			nb_error++;
		}
	}

	char argv_4846[MAX_PATH];
	argv_4569 (argv_4846, MAX_PATH, "terminated inner threads (%u argv_1291, %u success, %u failure)", argv_3605, nb_success, nb_error);
	argv_4846[MAX_PATH - 1] = '\0';
	argv_2327.argv_2323 (argv_3634, argv_4846);
	return (argv_2072);
}

// we need to argv_4490 a different argv_2457 to kill the COM manager when we are sure
// that all other parts have been succesfully killed.
argv_4536 argv_1134::argv_2197 (argv_929& _inner_client) {
	argv_4536 argv_2072 = argv_4455;
#if defined (__DEBUG_SCAN_DAEMON__)
	argv_2327.argv_2323 (argv_1191, "scan_daemon: killing the COM manager");
#endif // #if defined (__DEBUG_SCAN_DAEMON__)
	// forge a rich packet and argv_4490 it to the COM manager
	vector<argv_875> v_atom;
	argv_4883 unused_UI32 = 0; // because empty packets are not allowed
	argv_647 (unused_UI32, v_atom);
	argv_2072 = _inner_client.argv_1492 (argv_3816, v_atom, "argv_1134::argv_2199", argv_3790);
	if (argv_2072 != argv_2060) {
		argv_1254 ("argv_1134::argv_2197 - argv_1492", argv_2060, argv_2072);
	}
	else {
#if defined (__DEBUG_SCAN_DAEMON__)
		argv_2327.argv_2323 (argv_1191, "scan_daemon: sent the termination packet (FINALIZE) to the COM manager");
		argv_2327.argv_2323 (argv_1191, "scan_daemon: waiting for COM manager to argv_4626");
#endif // #if defined (__DEBUG_SCAN_DAEMON__)
		argv_5004 (argv_1038.argv_3557.c_str(), argv_1038.argv_4798, argv_2402);
	}
	return (argv_2072);
}

// to argv_4626 the service, the only thing that we need to do is to forge a rich
// packet and argv_4490 it to the com manager. Then the com manager will broadcast 
// this request to other parts.
// Notice that we argv_4490 a argv_3815 to argv_4626 the following parts :
// - archive creator
// - archive extractor
// - spyware manager
// - argv_4459
// - update manager
// Then when we are sure that all these threads have exited, we argv_4490 another
// argv_2457 argv_4860 argv_3816 in argv_3690 to tell the COM manager
// to terminate itself.
argv_4536 argv_1134::argv_2199 () {
	argv_4536 argv_2072 = argv_4455;
#if defined (__DEBUG_SCAN_DAEMON__)
	argv_2327.argv_2323 (argv_1191, "scan_daemon: killing the service");
#endif // #if defined (__DEBUG_SCAN_DAEMON__)
	argv_929 inner_client;

	argv_2072 = inner_client.argv_4243 ("argv_1134", argv_1342.data_set.internal_admin_port, &argv_2327);
	if (argv_2072 != argv_2060) {
		argv_1254 ("argv_1134::argv_2199 - argv_4243", argv_2060, argv_2072);
	}
	else { // client connected to the admin argv_4228
#if defined (__DEBUG_SCAN_DAEMON__)
		argv_2327.argv_2323 (argv_1191, "scan_daemon: connected to the COM manager");
#endif // #if defined (__DEBUG_SCAN_DAEMON__)
		// forge a rich packet and argv_4490 it to the COM manager
		vector<argv_875> v_atom;
		argv_4883 unused_UI32 = 0; // because empty packets are not allowed
		argv_647 (unused_UI32, v_atom);
		argv_2072 = inner_client.argv_1492 (argv_3815, v_atom, "argv_1134::argv_2199", argv_3790);
		if (argv_2072 != argv_2060) {
			argv_1254 ("argv_1134::argv_2199 - argv_1492", argv_2060, argv_2072);
		}
		else {
#if defined (__DEBUG_SCAN_DAEMON__)
			argv_2327.argv_2323 (argv_1191, "scan_daemon: sent the termination packet to the COM manager");
			argv_2327.argv_2323 (argv_1191, "scan_daemon: waiting for all blocks to argv_4626");
#endif // #if defined (__DEBUG_SCAN_DAEMON__)
			argv_2072 = argv_5003 ();
			if (argv_2072 != argv_4455) {
				argv_1254 ("argv_1134::argv_2199 - argv_5003", argv_4455, argv_2072);
			}

			argv_2072 = argv_2197 (inner_client);
		}
	}

	if (argv_2072 == argv_2060) { // remap error argv_976
		argv_2072 = argv_4455;
	}
	argv_2327.argv_2323 (argv_3634, "application dependant service killed");
	return (argv_2072);
}

void argv_1134::reset () {
	;
}

argv_1134::argv_1134 () {
	reset ();
}

argv_1134::~argv_1134 () {

}

argv_4536 argv_1134::argv_2226 (argv_876 _name, argv_2338 _callback_ptr, argv_2338 _param_ptr, bool _is_com_manager) {
	argv_4536 argv_2072 = argv_4455;
#if defined (__DEBUG_SCAN_DAEMON__)
	argv_2327.argv_2323 (argv_1191, "- launching thread : ", _name);
#endif // #if defined (__DEBUG_SCAN_DAEMON__)

	argv_1144 thread_desc;
	thread_desc.argv_3557 = _name;

	thread_desc.argv_4798 = CreateThread (0, 0, (argv_1712) _callback_ptr, (argv_2338) _param_ptr, 0, &thread_desc.argv_4799);
	if (thread_desc.argv_4798 == NULL) {
		argv_2327.argv_2323 (argv_1346, "+++ ERROR: failed to launch thread : ", _name);
		argv_2072 = argv_4453;
	}
	else { // save up this new thread descriptor (useful to monitor thread termination).
#if defined (__DEBUG_SCAN_DAEMON__)
		argv_2327.argv_2323 (argv_1191, " => thread started : ", _name);
#endif // #if defined (__DEBUG_SCAN_DAEMON__)
		if (_is_com_manager == false) {
			argv_4977.push_back (thread_desc);
		}
		else { // save up the thread descriptor of the COM manager separately 
			argv_1038 = thread_desc;
		}
	}
	return (argv_2072);
}


argv_4536 argv_1134::argv_2222 () {
	argv_4536 argv_2072 = argv_4455;
	argv_2072 = argv_2226 ("argv_1023", argv_1284, (argv_2338) &argv_1342, true);
	if (argv_2072 != argv_4455) {
		argv_1254 ("argv_1134::argv_2222", argv_4455, argv_2072);
	}
	return (argv_2072);
}

argv_4536 argv_1134::argv_2220 () {
	argv_4536 argv_2072 = argv_4455;
	argv_2072 = argv_2226 ("argv_715", argv_1282, (argv_2338) &argv_1342);
	if (argv_2072 != argv_4455) {
		argv_1254 ("argv_1134::argv_2220", argv_4455, argv_2072);
	}
	return (argv_2072);
}

argv_4536 argv_1134::argv_2221 () {
	argv_4536 argv_2072 = argv_4455;
	argv_2072 = argv_2226 ("argv_728", argv_1283, (argv_2338) &argv_1342);
	if (argv_2072 != argv_4455) {
		argv_1254 ("argv_1134::argv_2221", argv_4455, argv_2072);
	}
	return (argv_2072);
}

argv_4536 argv_1134::argv_2224 () {
	argv_4536 argv_2072 = argv_4455;
	argv_2072 = argv_2226 ("argv_4578", argv_1289, (argv_2338) &argv_1342);
	if (argv_2072 != argv_4455) {
		argv_1254 ("argv_1134::argv_2224", argv_4455, argv_2072);
	}
	return (argv_2072);
}

argv_4536 argv_1134::argv_2223 () {
	argv_4536 argv_2072 = argv_4455;
	argv_2072 = argv_2226 ("argv_4459", argv_1287, (argv_2338) &argv_1342);
	if (argv_2072 != argv_4455) {
		argv_1254 ("argv_1134::argv_2223", argv_4455, argv_2072);
	}
	return (argv_2072);
}

argv_4536 argv_1134::argv_2227 () {
	argv_4536 argv_2072 = argv_4455;

	argv_2072 = argv_2226 ("argv_4941", argv_1290, (argv_2338) &argv_1342);
	if (argv_2072 != argv_4455) {
		argv_1254 ("argv_1134::argv_2227", argv_4455, argv_2072);
	}
	return (argv_2072);
}

// this function permits to create all necessary threads :
// - com manager thread
// - archive creator thread
// - archive extractor thread
// - spyware manager thread
// - scan gateway thread
argv_4536 argv_1134::argv_2219 () {
	argv_4536 argv_2072 = argv_4455;

#if defined (__DEBUG_SCAN_DAEMON__)
	argv_2327.argv_2323 (argv_1191, "argv_1134: launching all inner objects");
#endif // #if defined (__DEBUG_SCAN_DAEMON__)

	argv_2072 = argv_2222 ();
	if (argv_2072 != argv_4455) {
		argv_1254 ("argv_1134::argv_2219 - argv_2222", argv_4455, argv_2072);
	}

	if (argv_2072 == argv_4455) {
		argv_2072 = argv_2220 ();
		if (argv_2072 != argv_4455) {
			argv_1254 ("argv_1134::argv_2219 - argv_2220", argv_4455, argv_2072);
		}
	}

	if (argv_2072 == argv_4455) {
		argv_2072 = argv_2221 ();
		if (argv_2072 != argv_4455) {
			argv_1254 ("argv_1134::argv_2219 - argv_2221", argv_4455, argv_2072);
		}
	}

	if (argv_2072 == argv_4455) {
		argv_2072 = argv_2224 ();
		if (argv_2072 != argv_4455) {
			argv_1254 ("argv_1134::argv_2219 - argv_2224", argv_4455, argv_2072);
		}
	}

	if (argv_2072 == argv_4455) {
		argv_2072 = argv_2223 ();
		if (argv_2072 != argv_4455) {
			argv_1254 ("argv_1134::argv_2219 - argv_2223", argv_4455, argv_2072);
		}
	}

	if (argv_2072 == argv_4455) {
		argv_2072 = argv_2227 ();
		if (argv_2072 != argv_4455) {
			argv_1254 ("argv_1134::argv_2219 - argv_2227", argv_4455, argv_2072);
		}
	}
	return (argv_2072);
}

// all necessary threads are created by this function called by the base class
argv_4536 argv_1134::argv_1121 () {
	argv_4536 argv_2072 = argv_4455;

	argv_2072 = argv_1401 (); // (Linux gets parameters from command argv_2250)
	if (argv_2072 != argv_4455) {
		argv_1254 ("argv_1134::argv_1121 - argv_1401", argv_4455, argv_2072);
	}
	else { // settings extracted succesfully
		// open all log files
		argv_2072 = argv_3685 ();
		if (argv_2072 != argv_4455) {
			argv_1254 ("argv_1134::argv_1121 - argv_3685", argv_4455, argv_2072);
		}
		else { // all log files opened succesfully
			argv_2072 = argv_4244 ();
			if (argv_2072 != argv_4455) {
				argv_1254 ("argv_1134::argv_1121 - argv_4244", argv_4455, argv_2072);
			}
			else { // all listeners ready (all ports bound).
				argv_2072 = argv_2219 ();
				if (argv_2072 != argv_4455) {
					argv_1254 ("argv_1134::argv_1121 - argv_2219", argv_4455, argv_2072);
				}
				else {
					argv_4510 = true;
				}
			}
		}
	}
	return (argv_2072);
}

argv_4536 argv_1134::argv_3685 () {
	argv_4536 argv_2072 = argv_4455;
#if defined (__DEBUG_SCAN_DAEMON__)
	argv_2327.argv_2323 (argv_1191, "argv_1134: opening all log files");
#endif // #if defined (__DEBUG_SCAN_DAEMON__)

	string log_base		= argv_2312 + argv_4502;

	argv_2313 = log_base + "argv_2311.txt"; 
	argv_1342.log_set.argv_2311.argv_3686 (argv_2313.c_str(), NULL, "");

	string argv_2313 = log_base + "argv_2307.txt"; 
	argv_1342.log_set.argv_2307.argv_3686 (argv_2313.c_str(), NULL, "");

	argv_2313 = log_base + "argv_2308.txt"; 
	argv_1342.log_set.argv_2308.argv_3686 (argv_2313.c_str(), NULL, "");

	argv_2313 = log_base + "argv_2320.txt"; 
	argv_1342.log_set.argv_2320.argv_3686 (argv_2313.c_str(), NULL, "");

	argv_2313 = log_base + "argv_2319.txt"; 
	argv_1342.log_set.argv_2319.argv_3686 (argv_2313.c_str(), NULL, "");

	argv_2313 = log_base + "argv_2326.txt"; 
	argv_1342.log_set.argv_2326.argv_3686 (argv_2313.c_str(), NULL, "");

#if defined (__DEBUG_SCAN_DAEMON__)
	argv_2327.argv_2323 (argv_1191, "argv_1134: opening all log files...[DONE]");
#endif // #if defined (__DEBUG_SCAN_DAEMON__)
	return (argv_2072);
}

argv_4536 argv_1134::argv_4244 () {
	argv_4536 argv_2072 = argv_4455;

	argv_2072 = argv_4250		("argv_1389", argv_1342.data_set.argv_1391.c_str(), argv_1342.data_set.argv_1389, argv_957);

	if (argv_2072 == argv_4455) {
		argv_2072 = argv_4250 ("argv_1390", argv_1342.data_set.argv_1391.c_str(), argv_1342.data_set.argv_1390, argv_958);
	}
	if (argv_2072 == argv_4455) {
		argv_2072 = argv_4250 ("argv_1388", argv_1342.data_set.argv_1391.c_str(), argv_1342.data_set.argv_1388, argv_949);
	}
	/*
	if (argv_2072 == argv_4455) {
		argv_2072 = argv_4250 ("argv_1392", argv_1342.data_set.argv_1391.c_str(), argv_1342.data_set.argv_1392, argv_955);
	}*/
	if (argv_2072 == argv_4455) {
		argv_2072 = argv_4250 ("internal_archive_creator_port", argv_1342.data_set.internal_servname.c_str(), argv_1342.data_set.internal_archive_creator_port, argv_951);
	}
	if (argv_2072 == argv_4455) {
		argv_2072 = argv_4250 ("internal_archive_extractor_port", argv_1342.data_set.internal_servname.c_str(), argv_1342.data_set.internal_archive_extractor_port, argv_952);
	}
	if (argv_2072 == argv_4455) {
		argv_2072 = argv_4250 ("internal_spyware_manager_port", argv_1342.data_set.internal_servname.c_str(), argv_1342.data_set.internal_spyware_manager_port, argv_954);
	}
	if (argv_2072 == argv_4455) {
		argv_2072 = argv_4250 ("internal_scan_gateway_port", argv_1342.data_set.internal_servname.c_str(), argv_1342.data_set.internal_scan_gateway_port, argv_953);
	}
	if (argv_2072 == argv_4455) {
		argv_2072 = argv_4250 ("internal_update_manager_port", argv_1342.data_set.internal_servname.c_str(), argv_1342.data_set.internal_update_manager_port, argv_955);
	}
	if (argv_2072 == argv_4455) {
		argv_2072 = argv_4250 ("internal_admin_port", argv_1342.data_set.internal_servname.c_str(), argv_1342.data_set.internal_admin_port, argv_950);
	}
	return (argv_2072);
}

argv_4536 argv_1134::argv_4250 (argv_876 _name, argv_876 _servname, argv_4883 _port, argv_4881 _client_type) {
	argv_4536 argv_2072 = argv_4455;
	char argv_4846[MAX_PATH];

#if defined (__DEBUG_SCAN_DAEMON__)
	argv_4569 (argv_4846, MAX_PATH, "preparing listener '%s' : servname: %s, argv_4228: %u", _name, _servname, _port);
	argv_4846[MAX_PATH - 1] = '\0';
	argv_2327.argv_2323 (argv_1191, argv_4846);
#endif // #if defined (__DEBUG_SCAN_DAEMON__)

	// bind the argv_4228 and the servname
	argv_974 argv_2444;
	argv_2072 = argv_2444.argv_4251 (_servname, _port);
	if (argv_2072 != argv_2448) {
		string serror = argv_1344 (argv_2072);
		argv_4569 (argv_4846, MAX_PATH, "+++ ERROR: argv_1134::argv_4250 - argv_4251 failed ! (%s,%s,%u) - argv_1343 = ", _name, _servname, _port, serror.c_str());
		argv_4846[MAX_PATH - 1] = '\0';
		argv_2327.argv_2323 (argv_1346, argv_4846);
	}
	else { // server argv_4257 => argv_1397 it's listening argv_4570 
		argv_962 listener;
		listener.argv_947	= _client_type;
		argv_2338 void_ptr			= NULL;
		SOCKET * socket_ptr		= NULL;
		argv_2072 = argv_2444.argv_1770 ((argv_2338&) void_ptr);

		if (argv_2072 != argv_2448) {
			argv_1254 ("argv_1134::argv_4250 - argv_1770", argv_2448, argv_2072);
		}
		else { // argv_646 the listening argv_4570 to the vector for the event loop of COM manager
			socket_ptr = (SOCKET *) void_ptr;
			listener.argv_4570 = (*socket_ptr);
#if defined (__DEBUG_SCAN_DAEMON__)
			argv_4569 (argv_4846, MAX_PATH, "extracted listening argv_4570 of '%s' : %d", _name, listener.argv_4570);
			argv_4846[MAX_PATH - 1] = '\0';
			argv_2327.argv_2323 (argv_1191, argv_4846);
#endif // #if defined (__DEBUG_SCAN_DAEMON__)
			argv_1342.argv_4971.push_back (listener);
		}
	}

	if (argv_2072 == argv_2448) { // remap error argv_976
		argv_2072 = argv_4455;
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1424
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
