// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_285.cpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1424 contains the functions that permit
// @@ to communicate argv_5011 the service scanner either
// @@ from remote, or from a local client 
// @@ independantly.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_344.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ namespace usage declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
using namespace std;


/*
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	argv_1040	
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ bool : true if operation was succesful,
// @@        false otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function is to be called prior to any other in argv_3690
// @@ to argv_4243 the com API to use the TCP/IP stack.
// @@ Notice that it does nothing under Linux platforms.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
extern "C"
{
	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	bool argv_1040 () {
		bool bret = true;
#if defined (__WIN32_OS__) 
		bret = argv_4254 ();
#endif // #if defined (__WIN32_OS__) 
		return (bret);

	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	argv_1041	
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ bool : true if operation was succesful,
// @@        false otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function is to be called before exiting and when
// @@ no other call to the com api is necessary.
// @@ Notice that it does nothing on Linux platforms.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
extern "C"
{
	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	bool argv_1041 () {
		bool bret = true;
#if defined (__WIN32_OS__) 
		bret = argv_4764 ();
#endif // #if defined (__WIN32_OS__) 
		return (bret);
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	argv_1009
// @@
// @@ INPUT			:	
// @@ _cli_ptr_ptr: argv_2338 *: contains the argv_665 of the new instance
// @@   of the com client.
// @@
// @@ OUTPUT		:	
// @@ _result: bool& : true if operation was succesful,
// @@          false otherwise.	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_1021 if operation was succesful,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to create a new instance of the com
// @@ client argv_3656 and argv_4243 it for use.
// @@
// @@ CONTRACT		:	
// @@ - '_cli_ptr_ptr' must not be a NULL pointer.
// @@ - '*_cli_ptr_ptr' must be NULL, i.e must not contain a valid 
// @@   argv_665. 	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
extern "C"
{
	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	argv_4536 argv_1009 (argv_2338 * _cli_ptr_ptr, bool& _result) {
		_result = true;
		argv_4475 ** cli_ptr_ptr = (argv_4475 **) _cli_ptr_ptr;
		argv_4536 argv_2072 = argv_1021;
		if (cli_ptr_ptr == NULL) {
			argv_2072 = argv_1015;
		}
		else if (*cli_ptr_ptr != NULL) {
			argv_2072 = argv_1013;
		}
		else { // allocate the client structure
			*cli_ptr_ptr = new (std::nothrow) argv_4475; 
			if (*cli_ptr_ptr == NULL) {
				argv_2072 = argv_1016;
			}
			else { // memory allocation was succesful for the client structure
				// allocate the argv_2444 argv_3656
				(*cli_ptr_ptr)->argv_2437 = new (std::nothrow) argv_974;
				if ((*cli_ptr_ptr)->argv_2437 == NULL) {
					argv_2072 = argv_1016;
				}
				else { // argv_2420 sock argv_3656 succesfully allocated
					(*cli_ptr_ptr)->argv_2214 = argv_1021;

					// allocate the packet argv_3656
					(*cli_ptr_ptr)->argv_3761 = new (std::nothrow) argv_1106;
					if ((*cli_ptr_ptr)->argv_3761 == NULL) {
						argv_2072 = argv_1016;
					}
				}
			}
		}

		if (argv_2072 != argv_1021) {
			_result = false;
		}
		return (argv_2072);
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	argv_1010	
// @@
// @@ INPUT			:	
// @@ _cli_ptr: argv_2338: argv_665 of the com argv_3656 obtained
// @@   by a previous call to the function 'argv_1009'.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ bool : true if operation was succesful,
// @@        false otherwise.	
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_1232 the com argv_3656 after use
// @@ and to release all memory used by this argv_3656 and other related
// @@ objects as well.
// @@
// @@ CONTRACT		:	
// @@ - '_cli_ptr' parameter must not be a NULL pointer.	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
extern "C"
{
	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	bool argv_1010 (argv_2338 _cli_ptr) {
		bool bret = true;
		argv_4475 * cli_ptr = (argv_4475 *) _cli_ptr;
		argv_4536 argv_2072 = argv_1021;
		if (cli_ptr == NULL) {
			argv_2072 = argv_1015;
			bret = false;
		}
		else { // parameters are OK
			delete cli_ptr;
		}
		return (bret);
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	argv_1008
// @@
// @@ INPUT			:
// @@ _cli_ptr: argv_2338: argv_665 of the com client obtained by a previous
// @@ call to the 'argv_1009' function.
// @@
// @@ _servname: argv_876: argv_3557 or IP argv_665 of the server to connect to.
// @@
// @@ _servport: argv_4883: argv_4228 to connect to.
// @@ 
// @@ OUTPUT		:	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ bool : true if operation was succesful,
// @@        false otherwise.	
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to connect the com argv_3656 to the server
// @@ whose IP (or argv_3557) and argv_4228 were given as parameters.
// @@ Notice that this function disables the TCP/IP nagle algorithm
// @@ as well for the connected argv_4570.
// @@
// @@ CONTRACT		:	
// @@ - '_cli_ptr' parameter must not be a NULL pointer.
// @@ - '_servname' parameter must not be a NULL pointer.	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
extern "C"
{
	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	bool argv_1008 (argv_2338 _cli_ptr, argv_876 _servname, argv_4883 _servport) {
		bool bret = true;
		argv_4536 argv_2072 = argv_1021;
		argv_4475 * cli_ptr = (argv_4475 *) _cli_ptr;
		if ((cli_ptr == NULL) || (_servname == NULL)) { // parameters are OK
			argv_2072 = argv_1015;
		}
		else { // parameters are OK
			argv_2072 = cli_ptr->argv_2437->argv_4245 (_servname, _servport);
			if (argv_2072 == argv_2448) {
				SOCKET * sock_ptr = NULL;

				argv_2072 = 	cli_ptr->argv_2437->argv_1754 ((argv_2338&) sock_ptr);

				// disable the Nagle's algorithm
				argv_2072 = disable_nagle_algorithm (*sock_ptr);

				if (argv_2072 == argv_2448) {
					argv_2072 = argv_1021;
				}
			}
		}

		if (cli_ptr != NULL) {
			cli_ptr->argv_2214	= argv_2072;
		}
		if (argv_2072 != argv_1021) {
			bret = false;
		}
		return (bret);
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	argv_1018
// @@
// @@ INPUT			:	
// @@ _cli_ptr: argv_2338: argv_665 of the com client obtained by a previous
// @@ call to the 'argv_1009' function.
// @@
// @@ _filename: argv_876 : argv_3557 of the local argv_1424 to scan for viruses.
// @@
// @@ _dysinfect: bool: set to true if dysinfection is to be argv_1291.
// @@                   set to false otherwise.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ bool: true if operation was succesful,
// @@       false otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to scan the local argv_1424 whose argv_3557 is
// @@ given as a parameter for viruses.
// @@ The caller can choose to attempt a dysinfection if necessary
// @@ via the '_dysinfect' parameter.
// @@ The argv_4406 of the scan may be obtained by a call to the 
// @@ 'com_client_get_local_result' function.
// @@
// @@ Notice that the caller is suposed to have connected the com
// @@ argv_3656 using the 'argv_1008' prior to this call.
// @@
// @@ CONTRACT		:
// @@ - '_cli_ptr'  parameter must not be a NULL pointer.
// @@ - '_filename' parameter must not be a NULL pointer.		
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
extern "C"
{
	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	bool argv_1018 (argv_2338 _cli_ptr, argv_876 _filename, bool _dysinfect) {
		bool bret = true;
		argv_4536 argv_2072 = argv_1021;
		argv_4475 * cli_ptr = (argv_4475 *) _cli_ptr;
		if ((cli_ptr == NULL) || (_filename == NULL)) { // parameters are OK
			argv_2072 = argv_1015;
		}
		else { // parameters are OK
			argv_2072 = cli_ptr->argv_3761->reset ();
			if (argv_2072 == argv_3778) { // packet was reseted succesfully
				argv_4881 his_type		= argv_3805;

				if (_dysinfect == true) {
					his_type		= argv_3801;
				}
				argv_2072 = cli_ptr->argv_3761->argv_4518 (his_type);

				if (argv_2072 == argv_3778) { // packet argv_4860 was set succesfully
					argv_2072 = cli_ptr->argv_3761->insert (_filename);
				}

				if (argv_2072 == argv_3778) { // argv_3698 the packet so that it can be ready
					argv_2072 = cli_ptr->argv_3761->argv_3698 ();
				}

				if (argv_2072 == argv_3778) { // argv_4490 the packet to the server
					argv_2072 = cli_ptr->argv_3761->argv_4490 (*(cli_ptr->argv_2437));
				}
			}
		}

		if (argv_2072 == argv_3778) { // remap error argv_976
			argv_2072 = argv_1021; 
		}

		if (cli_ptr != NULL) {
			cli_ptr->argv_2214 = argv_2072;
		}

		if (argv_2072 != argv_1021) { 
			bret = false;
		}
		return (bret);
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	argv_1019
// @@
// @@ INPUT			:	
// @@ _cli_ptr: argv_2338: argv_665 of the com client obtained by a previous
// @@ call to the 'argv_1009' function.
// @@
// @@ _filename: argv_876 : argv_3557 of the remote argv_1424 to scan for viruses.
// @@
// @@ _dysinfect: bool: set to true if dysinfection is to be argv_1291.
// @@                   set to false otherwise.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ bool: true if operation was succesful,
// @@       false otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to perform the scan of a local argv_1424
// @@ when the scan server is located on another host, thus in
// @@ argv_3690 to perform the scan, this function sends the entire
// @@ argv_1424 content to the remote scan server.
// @@ The caller can choose to attempt a dysinfection if necessary
// @@ via the '_dysinfect' parameter.
// @@ the argv_4406 of the scan may be obtained by a call to the
// @@ 'com_client_get_remote_result' function.
// @@
// @@ WARNING: this function is much slower than the 
// @@ 'argv_1018' function (because it sends the argv_1424
// @@  content to the scan server) and thus should not be used when 
// @@ the scan client and scan server are located on the same host. 
// @@
// @@ Notice that the caller is suposed to have connected the com
// @@ argv_3656 using the 'argv_1008' prior to this call.
// @@
// @@ CONTRACT		:
// @@ - '_cli_ptr'  parameter must not be a NULL pointer.
// @@ - '_filename' parameter must not be a NULL pointer.		
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
extern "C"
{
	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	bool argv_1019 (argv_2338 _cli_ptr, argv_876 _filename, bool _dysinfect) {
		bool bret = true;
		
		argv_4536 argv_2072 = argv_1021;
		argv_4475 * cli_ptr = (argv_4475 *) _cli_ptr;
		if ((cli_ptr == NULL) || (_filename == NULL)) { // parameters are OK
			argv_2072 = argv_1015;
		}
		else if (argv_903 (_filename) == false) {
			argv_2072 = argv_1017;
		}
		else { // parameters are OK
			argv_2072 = cli_ptr->argv_3761->reset ();
			if (argv_2072 == argv_3778) { // packet was reseted succesfully
				argv_4881 his_type		= argv_3807;

				if (_dysinfect == true) {
					his_type		= argv_3803;
				}

				argv_2072 = cli_ptr->argv_3761->argv_4494 (_filename, *(cli_ptr->argv_2437), his_type, false);
			}
		}

		if (argv_2072 == argv_3778) { // remap error argv_976
			argv_2072 = argv_1021; 
		}

		if (cli_ptr != NULL) {
			cli_ptr->argv_2214 = argv_2072;
		}

		if (argv_2072 != argv_1021) { 
			bret = false;
		}
		return (bret);
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	com_client_get_local_result	
// @@
// @@ INPUT			:	
// @@ _cli_ptr: argv_2338: argv_665 of the com client obtained by a previous
// @@ call to the 'argv_1009' function.
// @@
// @@ _socket_timeout: argv_4536: the maximum argv_4570 inactivity duration expressed
// @@    in second (set to -1 for INFINITE).
// @@
// @@ OUTPUT		:
// @@ _scan_success: bool&: true of the scanning operation was succesful,
// @@                       false otherwise.	
// @@
// @@ _infected: bool&: true if a virus was found during scanning,
// @@                   false otherwise (notice that this field is meaningful
// @@                   only when '_scan_success' is true).
// @@
// @@ _dysinfect_possible: true if the infected argv_1424 can be dysinfected,
// @@                      false otherwise (notice that this field is meaningful
// @@                      only when '_infected' is true).
// @@ 
// @@ _virus_name: argv_1108: argv_3557 of the virus found (notice that this field is 
// @@                    meaningful only  when '_infected' is true).
// @@                    Notice that this field should have been allocated by the
// @@                    caller to a size of MAX_PATH.
// @@ 
// @@ _dysinfect_done: bool& : true if dysinfection was performed,
// @@                          false otherwise (notice that this field is meaningful
// @@                          only if '_infected' and '_dysinfect_possible' are true).
// @@
// @@ _dysinfect_success: bool&: true if the dysinfection succeeded, 
// @@                            false otherwise (notice that this field is meaningful
// @@                            only if '_infected' and '_dysinfect_possible' and 
// @@                            '_dysinfect_done' are true).
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ bool: true if operation was succesful, 
// @@       false otherwise.	
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to obtain the argv_4406 of the 'argv_1018'
// @@ function.
// @@ Notice that the argv_4406 fields have dependancies (see parameters description).
// @@ For information, the detailed description of the scanning server
// @@ answer is as follows :
// @@ BODY DESCRIPTION:
// @@ - scan success				(1)  : 0= success, 1=failed
// @@ - infection flag				(1)	 : 0= not infected, 1=infected
// @@ - dysinfection possible		(1)  : 0= not possible, 1=possible
// @@ - dysinfection argv_1291 flag		(1)	 : 0=not argv_1291, 1=argv_1291
// @@ - dysinfection report flag	(1)	 : 0=failed, 1=success
// @@ - {virus argv_3557}				(??) : empty if infected_flag=0
// @@
// @@ CONTRACT		:	
// @@ - '_cli_ptr' parameter must not be a NULL pointer.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
extern "C"
{
	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	bool com_client_get_local_result (argv_2338 _cli_ptr, argv_4536 _socket_timeout, bool& _scan_success, bool& _infected, bool& _dysinfect_possible, argv_1108 _virus_name, bool& _dysinfect_done, bool& _dysinfect_success) {
		bool bret			= true;

		_scan_success		= false;
		_infected			= false;
		_dysinfect_possible	= false;
		_dysinfect_done		= false;
		_dysinfect_success	= false;

		argv_4536 argv_2072 = argv_1021;
		_virus_name[0] = '\0';

		argv_4475 * cli_ptr = (argv_4475 *) _cli_ptr;
		if (cli_ptr == NULL) { // parameters are OK
			argv_2072 = argv_1015;
		}
		else { // parameters are OK
			argv_2072 = cli_ptr->argv_3761->reset ();

			if (argv_2072 == argv_3778) { // packet was reseted succesfully
				argv_2072 = cli_ptr->argv_3761->argv_4337 (*(cli_ptr->argv_2437), _socket_timeout, false);

				if (argv_2072 == argv_3778) { // packet received succesfully
					// argv_1397 the received packet argv_4860
					argv_4881 his_type = argv_3817;
					argv_2072 = cli_ptr->argv_3761->argv_1794 (his_type);
					if (argv_2072 == argv_3778) { // argv_4860 extraction succeeded
						argv_4881 scan_success_UI08				= 0;
						argv_4881 infection_flag_UI08			= 0;
						argv_4881 dysinfect_possible_flag_UI08	= 0;
						argv_4881 dysinf_done_flag_UI08			= 0;
						argv_4881 dysinf_report_flag_UI08		= 0;

						if (argv_2072 == argv_3778) {
							argv_2072 = cli_ptr->argv_3761->argv_1397 (scan_success_UI08);
						}
						if (argv_2072 == argv_3778) {
							argv_2072 = cli_ptr->argv_3761->argv_1397 (infection_flag_UI08);
						}
						if (argv_2072 == argv_3778) {
							argv_2072 = cli_ptr->argv_3761->argv_1397 (dysinfect_possible_flag_UI08);
						}
						if (argv_2072 == argv_3778) {
							argv_2072 = cli_ptr->argv_3761->argv_1397 (dysinf_done_flag_UI08);
						}
						if (argv_2072 == argv_3778) {
							argv_2072 = cli_ptr->argv_3761->argv_1397 (dysinf_report_flag_UI08);
						}

						if ((argv_2072 == argv_3778) && (infection_flag_UI08 == 1)) {
							string argv_4999;
							argv_2072 = cli_ptr->argv_3761->argv_1397 (argv_4999);
							if (argv_2072 == argv_3778) {
								argv_4883 nb_todo = argv_4999.size();
								if (nb_todo > MAX_PATH) {
									nb_todo = MAX_PATH;
								}
								strncpy (_virus_name, argv_4999.c_str(), nb_todo);
								_virus_name[nb_todo - 1] = '\0';
							}
						}

						if (argv_2072 == argv_3778) { // all argv_1178 retrieved succesfully
							if (scan_success_UI08 == 1) {
								_scan_success		= true;
							}
							if (infection_flag_UI08 == 1) {
								_infected			= true;
							}
							if (dysinfect_possible_flag_UI08 == 1) {
								_dysinfect_possible	= true;	
							}
							if (dysinf_done_flag_UI08 == 1) {
								_dysinfect_done		= true;
							}
							if (dysinf_report_flag_UI08 == 1) {
								_dysinfect_success	= true;
							}
						}
					}
				}
			}
		}

		if (argv_2072 == argv_3778) { // remap error argv_976
			argv_2072 = argv_1021; 
		}

		if (cli_ptr != NULL) {
			cli_ptr->argv_2214 = argv_2072;
		}

		if (argv_2072 != argv_1021) { 
			bret = false;
		}
		return (bret);
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	com_client_get_remote_result	
// @@
// @@ INPUT			:	
// @@ _cli_ptr: argv_2338: argv_665 of the com client obtained by a previous
// @@ call to the 'argv_1009' function.
// @@
// @@ _socket_timeout: argv_4536: the maximum argv_4570 inactivity duration expressed
// @@    in second (set to -1 for INFINITE).
// @@
// @@ _dest_filename: argv_3557 of the local argv_1424 that must contain the argv_4406
// @@   of the dysinfection (in case of infection).
// @@
// @@ OUTPUT		:
// @@ _scan_success: bool&: true of the scanning operation was succesful,
// @@                       false otherwise.	
// @@
// @@ _infected: bool&: true if a virus was found during scanning,
// @@                   false otherwise (notice that this field is meaningful
// @@                   only when '_scan_success' is true).
// @@
// @@ _dysinfect_possible: true if the infected argv_1424 can be dysinfected,
// @@                      false otherwise (notice that this field is meaningful
// @@                      only when '_infected' is true).
// @@ 
// @@ _virus_name: argv_1108: argv_3557 of the virus found (notice that this field is 
// @@                    meaningful only  when '_infected' is true).
// @@                    Notice that this field should have been allocated by the
// @@                    caller to a size of MAX_PATH.
// @@ 
// @@ _dysinfect_done: bool& : true if dysinfection was performed,
// @@                          false otherwise (notice that this field is meaningful
// @@                          only if '_infected' and '_dysinfect_possible' are true).
// @@
// @@ _dysinfect_success: bool&: true if the dysinfection succeeded, 
// @@                            false otherwise (notice that this field is meaningful
// @@                            only if '_infected' and '_dysinfect_possible' and 
// @@                            '_dysinfect_done' are true).
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ bool: true if operation was succesful, 
// @@       false otherwise.	
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to obtain the argv_4406 of the 'argv_1019'
// @@ function.
// @@ Notice that the argv_4406 fields have dependancies (see parameters description).
// @@ For information, the detailed description of the scanning server
// @@ answer is as follows :
// @@ BODY DESCRIPTION:
// @@ - scan success				(1)  : 0= success, 1=failed
// @@ - infection flag				(1)	 : 0= not infected, 1=infected
// @@ - dysinfection possible		(1)  : 0= not possible, 1=possible
// @@ - dysinfection argv_1291 flag		(1)	 : 0=not argv_1291, 1=argv_1291
// @@ - dysinfection report flag	(1)	 : 0=failed, 1=success
// @@ - {virus argv_3557}				(??) : empty if infected_flag=0
// @@
// @@ CONTRACT		:	
// @@ - '_cli_ptr' parameter must not be a NULL pointer.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
extern "C"
{
	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	bool com_client_get_remote_result (argv_2338 _cli_ptr, argv_4536 _timeout_second, argv_876 _dest_filename, bool& _scan_success, bool& _infected, bool& _dysinfect_possible, argv_1108 _virus_name, bool& _dysinfect_done, bool& _dysinfect_success) {
		bool bret = true;
		argv_4536 argv_2072 = argv_1021;
		argv_4475 * cli_ptr = (argv_4475 *) _cli_ptr;
		if ((cli_ptr == NULL) || (_dest_filename == NULL)) { // parameters are OK
			argv_2072 = argv_1015;
		}
		else { // parameters are OK
			argv_2072 = cli_ptr->argv_3761->reset ();
			if (argv_2072 == argv_3778) { // packet was reseted succesfully
				bret = com_client_get_local_result (_cli_ptr, _timeout_second, _scan_success, _infected, _dysinfect_possible, _virus_name, _dysinfect_done, _dysinfect_success);

				if (bret == true) { // scan report received succesfully
					argv_2072 = cli_ptr->argv_3761->reset ();

					// read the dysinfected argv_1424 if necessary
					if ((argv_2072 == argv_3778) && (_infected==true) && (_dysinfect_done==true) && (_dysinfect_success == true))  { 
						argv_2072 = cli_ptr->argv_3761->argv_4340 (*(cli_ptr->argv_2437), _timeout_second, _dest_filename);
					}
				}
			}
		}

		if (argv_2072 == argv_3778) { // remap error argv_976
			argv_2072 = argv_1021; 
		}

		if (cli_ptr != NULL) {
			cli_ptr->argv_2214 = argv_2072;
		}

		if (argv_2072 != argv_1021) { 
			bret = false;
		}
		return (bret);
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	argv_1011
// @@
// @@ INPUT			:
// @@ _cli_ptr: argv_2338: argv_665 of the com client obtained by a previous
// @@ call to the 'argv_1009' function.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ bool: true if operation was succesful,
// @@       false otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to disconnect the com client from the
// @@ scanning server.
// @@
// @@ CONTRACT		:	
// @@ - '_cli_ptr' parameter must not be a NULL pointer.	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
extern "C"
{
	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	bool argv_1011 (argv_2338 _cli_ptr) {
		bool bret = true;
		argv_4536 argv_2072 = argv_1021;
		argv_4475 * cli_ptr = (argv_4475 *) _cli_ptr;
		if (cli_ptr == NULL) { // parameters are OK
			argv_2072 = argv_1015;
		}
		else { // parameters are OK
			argv_2072 = cli_ptr->argv_2437->argv_968 ();
		}

		if (argv_2072 == argv_2448) { // remap error argv_976
			argv_2072 = argv_1021; 
		}

		if (cli_ptr != NULL) {
			cli_ptr->argv_2214 = argv_2072;
		}

		if (argv_2072 != argv_1021) { 
			bret = false;
		}
		return (bret);
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	com_client_get_last_error
// @@
// @@ INPUT			:	
// @@ _cli_ptr: argv_2338: argv_665 of the com client obtained by a previous
// @@ call to the 'argv_1009' function.
// @@
// @@ OUTPUT		:	
// @@ _serror: argv_1108: error string retrieved, this parameter is supposed
// @@          to have been allocated by the caller prior to this call.	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_4536 : the error argv_976 of the last error as a numeric argv_4979.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to retrieve the last error of the
// @@ com client as a string.
// @@ 
// @@ Notice that the caller is supposed to have allocated the 
// @@ '_serror' argv_826 (to MAX_PATH size) prior to this call.
// @@
// @@ CONTRACT		:	
// @@ - '_cli_ptr' parameter must not be a NULL pointer.	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
extern "C"
{
	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	argv_4536 com_client_get_last_error (argv_2338 _cli_ptr, argv_1108 _serror) {
		argv_4536 retrieved_last_error = argv_1021;	
		_serror[0] = '\0';
		if (_cli_ptr == NULL) {
			retrieved_last_error = argv_1014;
		}
		else {
			argv_4475 * cli_ptr	= (argv_4475 *) _cli_ptr;
			retrieved_last_error	= cli_ptr->argv_2214;
			string serror = argv_1344 (retrieved_last_error);

			argv_4883 nb_todo = MAX_PATH - 1;
			if (serror.size() < MAX_PATH) {
				nb_todo = serror.size();
			}
			strncpy (_serror, serror.c_str(), nb_todo);
			_serror[nb_todo] = '\0';		
		}
		return (retrieved_last_error);
	}
}
*/

// ============================================================================
// ============================================================================
// ============================================================================
// ============================================================================
// ============================================================================
// ============================================================================
// WARNING: this function is not exported by the DLL (internal use only).
argv_4536 internal_connect_unit (argv_4477& _unit,  argv_876 _servname, argv_4883 _servport) {
	argv_4536 argv_2072 = argv_1021;
	_unit.argv_2420.reset ();
	argv_2072 = _unit.argv_2420.argv_4245 (_servname, _servport);
	if (argv_2072 == argv_2448) { // remap error argv_976
		argv_2072 = argv_1021;
	}
	return (argv_2072);
}

argv_4536 internal_prepare_packet (argv_1106& _pck, vector<argv_875>& _v_atom, argv_4881 _type) {
	argv_4536 argv_2072 = argv_1021;
	argv_2072 = _pck.reset ();
	if (argv_2072 == argv_3778) { // packet was reseted succesfully
		argv_2072 = _pck.argv_4518 (_type);

		if (argv_2072 == argv_3778) {
			argv_4883 argv_3605 = _v_atom.size ();
			for (argv_4883 i=0 ; i<argv_3605 ; i++) {
				switch (_v_atom[i].argv_4860) {
					case argv_1094:
						argv_2072 = _pck.insert (_v_atom[i].argv_4982);
						break;

					case argv_1095:
						argv_2072 = _pck.insert (_v_atom[i].argv_4983);
						break;

					case argv_1093:
						argv_2072 = _pck.insert (_v_atom[i].argv_4981);
						break;

					default:
						argv_2072 = argv_1022;
						break;
				}

				if (argv_2072 != argv_3778) {
					break;
				}
			}
		}

		if (argv_2072 == argv_3778) { // argv_3698 the packet so that it can be ready
			argv_2072 = _pck.argv_3698 ();
		}
	}

	if (argv_2072 == argv_3778) {
		argv_2072 = argv_1021;
	}
	return (argv_2072);
}

// used by the function that retrieves a remote dysinfected argv_1424.
void internal_generate_unique_tmp_filename (argv_876 _tmp_folder, argv_4883& _generation, argv_1108 _dest_filename) {
	SYSTEMTIME		argv_4842;
	GetLocalTime (&argv_4842);
	argv_4569 (_dest_filename, MAX_PATH, "%s\\com_%u_%u_%u_%u_%u_%u_%u_%u.argv_4846", _tmp_folder, argv_4842.wYear, argv_4842.wMonth, argv_4842.wDay, argv_4842.wHour, argv_4842.wMinute, argv_4842.wSecond, argv_4842.wMilliseconds, _generation);
	_generation++;
	_dest_filename[MAX_PATH - 1] = '\0';
}

void internal_reset_result (argv_4476& _result) {
	_result.argv_1230[0]		= '\0';
	_result.argv_1304		= false;
	_result.argv_1305	= false;
	_result.argv_1306	= false;
	_result.infected				= false;
	_result.argv_3608		= 0;
	_result.argv_4470			= false;
	_result.argv_4860					= argv_3817;
	_result.argv_4999[0]			= '\0';
}

// -------------------------------------------------------

extern "C"
{
	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	argv_4536 argv_1040 () {
		argv_4536 argv_2072 = argv_1021;
#if defined (__WIN32_OS__) 
		argv_4254 ();
#endif // #if defined (__WIN32_OS__) 
		return (argv_2072);
	}
}

extern "C"
{
	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	argv_4536 argv_1041 () {
		argv_4536 argv_2072 = argv_1021;
#if defined (__WIN32_OS__) 
		argv_4764 ();
#endif // #if defined (__WIN32_OS__) 
		return (argv_2072);
	}
}

extern "C"
{
	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	argv_4536 argv_1009 (argv_2338 * _cli_ptr_ptr, argv_876 _tmp_folder) {
		argv_4475 ** cli_ptr_ptr = (argv_4475 **) _cli_ptr_ptr;
		argv_4536 argv_2072 = argv_1021;
		if ((cli_ptr_ptr == NULL) || (_tmp_folder == NULL)) {
			argv_2072 = argv_1015;
		}
		else if (*cli_ptr_ptr != NULL) {
			argv_2072 = argv_1013;
		}
		else { // allocate the client structure
			*cli_ptr_ptr = new (std::nothrow) argv_4475; 
			if ((*cli_ptr_ptr) == NULL) {
				argv_2072 = argv_1016;
			}
			else { // memory allocation was succesful for the client structure
				(*cli_ptr_ptr)->argv_4849			= _tmp_folder; 
				(*cli_ptr_ptr)->argv_4850		= 0;
			}
		} 
		return (argv_2072);
	}
}


extern "C"
{
	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	argv_4536 argv_1010 (argv_2338 _cli_ptr) {
		argv_4536 argv_2072 = argv_1021;
		argv_4475 * cli_ptr = (argv_4475 *) _cli_ptr;
		if (cli_ptr == NULL) {
			argv_2072 = argv_1015;
		}
		else { // parameters are OK
			delete cli_ptr;
		}
		return (argv_2072);
	}
}

argv_4536 internal_update_maxfd (argv_2338 _cli_ptr) {
	argv_4536 argv_2072 = argv_1021;
	argv_4475 * cli_ptr = (argv_4475 *) _cli_ptr;
	SOCKET * sock_ptr_1 = NULL;
	SOCKET * sock_ptr_2 = NULL;

	argv_2072 = cli_ptr->argv_758.argv_2420.argv_1754 ((argv_2338&) sock_ptr_1);
	if (argv_2072 == argv_2448) {
		argv_2072 = cli_ptr->argv_4471.argv_2420.argv_1754 ((argv_2338&) sock_ptr_2);
		if (argv_2072 == argv_2448) { // all descriptors retrieved succesfully

			cli_ptr->argv_758.argv_4570	= (*sock_ptr_1);
			cli_ptr->argv_4471.argv_4570		= (*sock_ptr_2);

			cli_ptr->argv_4487.argv_2407		= cli_ptr->argv_758.argv_4570;
			if (cli_ptr->argv_4471.argv_4570 > cli_ptr->argv_4487.argv_2407) {
				cli_ptr->argv_4487.argv_2407	= cli_ptr->argv_4471.argv_4570;
			}
/*
			{
				char argv_4846[MAX_PATH];
				argv_4569 (argv_4846, MAX_PATH, "archive_socket=%d, scan_unit_socket=%d => argv_2407=%d", cli_ptr->argv_758.argv_4570, cli_ptr->argv_4471.argv_4570, cli_ptr->argv_4487.argv_2407);
				argv_4846[MAX_PATH - 1] = '\0';
				MessageBox (NULL, argv_4846, "", MB_OK);
			}*/
			// argv_4243 the select argv_1178
			FD_ZERO (&cli_ptr->argv_4487.readfds);
			FD_ZERO (&cli_ptr->argv_4487.readfds_dirty);

			FD_SET (cli_ptr->argv_758.argv_4570,	&cli_ptr->argv_4487.readfds);
			FD_SET (cli_ptr->argv_4471.argv_4570,		&cli_ptr->argv_4487.readfds);
			cli_ptr->argv_4487.argv_2407 = 0;
		}
	}

	if (argv_2072 == argv_2448) {
		argv_2072 = argv_1021;
	}
	return (argv_2072);
}


extern "C"
{
	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	argv_4536 argv_1008 (argv_2338 _cli_ptr, argv_876 _servname, argv_4883 _archive_port, argv_4883 _scan_port) {
		argv_4536 argv_2072 = argv_1021;
		argv_4475 * cli_ptr = (argv_4475 *) _cli_ptr;
		if ((cli_ptr == NULL) || (_servname == NULL)) { // parameters are OK
			argv_2072 = argv_1015;
		}
		else { // parameters are OK
			argv_2072 = internal_connect_unit (cli_ptr->argv_758, _servname, _archive_port);
			if (argv_2072 == argv_1021) {
				argv_2072 = internal_connect_unit (cli_ptr->argv_4471, _servname, _scan_port);
				if (argv_2072 == argv_1021) {
					// update argv_2407 for select using the 2 descriptors.
					argv_2072 = internal_update_maxfd (_cli_ptr);
				}
			}
		}
		return (argv_2072);
	}
}


extern "C"
{
	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	argv_4536 argv_1011 (argv_2338 _cli_ptr) {
		argv_4536 argv_2072 = argv_1021;
		argv_4475 * cli_ptr = (argv_4475 *) _cli_ptr;
		if (cli_ptr == NULL) { // parameters are OK
			argv_2072 = argv_1015;
		}
		else { // parameters are OK
			argv_4536 iret_1 = cli_ptr->argv_758.argv_2420.argv_968 ();
			argv_4536 iret_2 = cli_ptr->argv_4471.argv_2420.argv_968 ();

			// gather only argv_3677 error out of all possible errors
			if (iret_1 != argv_2448) {
				argv_2072 = iret_1;
			}
			else if (iret_2 != argv_2448) {
				argv_2072 = iret_2;
			}
		}

		if (argv_2072 == argv_2448) { // remap error argv_976
			argv_2072 = argv_1021; 
		}
		return (argv_2072);
	}
}


extern "C"
{
	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	argv_4536 argv_1018 (argv_2338 _cli_ptr, argv_876 _filename, bool _dysinfect) {
		argv_4536 argv_2072 = argv_1021;
		argv_4475 * cli_ptr = (argv_4475 *) _cli_ptr;
		if ((cli_ptr == NULL) || (_filename == NULL)) { // parameters are OK
			argv_2072 = argv_1015;
		}
		else { // parameters are OK
			argv_4881 his_type		= argv_3805;

			if (_dysinfect == true) {
				his_type		= argv_3801;
			}
			vector<argv_875> v_atom;
			argv_647 (_filename, v_atom);

			argv_2072 = internal_prepare_packet (cli_ptr->argv_4471.argv_3766, v_atom, his_type);
			if (argv_2072 == argv_1021) { // argv_4490 the packet to the server
				argv_2072 = cli_ptr->argv_4471.argv_3766.argv_4490 (cli_ptr->argv_4471.argv_2420);
			}
		}

		if (argv_2072 == argv_3778) { // remap error argv_976
			argv_2072 = argv_1021; 
		}
		return (argv_2072);
	}
}


extern "C"
{
	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	argv_4536 argv_1019 (argv_2338 _cli_ptr, argv_876 _filename, bool _dysinfect) {
		argv_4536 argv_2072 = argv_1021;
		argv_4475 * cli_ptr = (argv_4475 *) _cli_ptr;
		if ((cli_ptr == NULL) || (_filename == NULL)) { // parameters are OK
			argv_2072 = argv_1015;
		}
		else if (argv_903 (_filename) == false) {
			argv_2072 = argv_1017;
		}
		else { // parameters are OK
			argv_2072 = cli_ptr->argv_4471.argv_3766.reset ();
			if (argv_2072 == argv_3778) { // packet was reseted succesfully
				argv_4881 opa_type	= argv_3807;

				if (_dysinfect == true) {
					opa_type	= argv_3803;
				}

				argv_2072 = cli_ptr->argv_4471.argv_3766.argv_4494 (_filename, cli_ptr->argv_4471.argv_2420, opa_type, false);
			}
		}

		if (argv_2072 == argv_3778) { // remap error argv_976
			argv_2072 = argv_1021; 
		}
		return (argv_2072);
	}
}

extern "C"
{
	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	argv_4536 argv_1012 (argv_2338 _cli_ptr, argv_876 _archive_file, argv_876 _dest_root_folder) {
		argv_4536 argv_2072 = argv_1021;
		argv_4475 * cli_ptr = (argv_4475 *) _cli_ptr;
		if ((cli_ptr == NULL) || (_archive_file == NULL) || (_dest_root_folder == NULL)) {
			argv_2072 = argv_1015;
		}
		else { // parameters correctness succesfuly checked
			argv_4881 opa_type = argv_3788;
			vector<argv_875> v_atom;
			argv_647 (_archive_file, v_atom);
			argv_647 (_dest_root_folder, v_atom);

			argv_2072 = internal_prepare_packet (cli_ptr->argv_758.argv_3766, v_atom, opa_type);
			if (argv_2072 == argv_1021) { // argv_4490 the packet to the server
				argv_2072 = cli_ptr->argv_758.argv_3766.argv_4490 (cli_ptr->argv_758.argv_2420);
			}
		}

		if (argv_2072 == argv_3778) { // remap error argv_976
			argv_2072 = argv_1021; 
		}
		return (argv_2072);
	}
}

extern "C"
{
	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	argv_4536 argv_1007 (argv_2338 _cli_ptr, argv_876 _folder_2_compress, argv_876 _result_filename) {
		argv_4536 argv_2072 = argv_1021;
		argv_4475 * cli_ptr = (argv_4475 *) _cli_ptr;
		if ((cli_ptr == NULL) || (_folder_2_compress == NULL) || (_result_filename == NULL)) {
			argv_2072 = argv_1015;
		}
		else { // parameters correctness succesfuly checked
			argv_4881 opa_type = argv_3785;
			vector<argv_875> v_atom;
			argv_647 (_folder_2_compress, v_atom);
			argv_647 (_result_filename, v_atom);

			argv_2072 = internal_prepare_packet (cli_ptr->argv_758.argv_3766, v_atom, opa_type);
			if (argv_2072 == argv_1021) { // argv_4490 the packet to the server
				argv_2072 = cli_ptr->argv_758.argv_3766.argv_4490 (cli_ptr->argv_758.argv_2420);
			}
		}

		if (argv_2072 == argv_3778) { // remap error argv_976
			argv_2072 = argv_1021; 
		}
		return (argv_2072);
	}
}


extern "C"
{
	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	argv_4536 argv_1006 (argv_2338 _cli_ptr) {
		argv_4536 argv_2072 = argv_1021;
		argv_4475 * cli_ptr = (argv_4475 *) _cli_ptr;

		argv_4881 opa_type = argv_3784;
		vector<argv_875> v_atom;
		argv_4883 unused_UI32 = 0; // because empty packets are not allowed
		argv_647 (unused_UI32, v_atom);

		argv_2072 = internal_prepare_packet (cli_ptr->argv_758.argv_3766, v_atom, opa_type);
		if (argv_2072 == argv_1021) { // argv_4490 the packet to the server
			argv_2072 = cli_ptr->argv_758.argv_3766.argv_4490 (cli_ptr->argv_758.argv_2420);
		}

		if (argv_2072 == argv_3778) { // remap error argv_976
			argv_2072 = argv_1021; 
		}
		return (argv_2072);
	}
}

extern "C"
{
	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	argv_4536 argv_1005 (argv_2338 _cli_ptr) {
		argv_4536 argv_2072 = argv_1021;
		argv_4475 * cli_ptr = (argv_4475 *) _cli_ptr;

		argv_4881 opa_type = argv_3783;
		vector<argv_875> v_atom;
		argv_4883 unused_UI32 = 0; // because empty packets are not allowed
		argv_647 (unused_UI32, v_atom);

		argv_2072 = internal_prepare_packet (cli_ptr->argv_758.argv_3766, v_atom, opa_type);
		if (argv_2072 == argv_1021) { // argv_4490 the packet to the server
			argv_2072 = cli_ptr->argv_758.argv_3766.argv_4490 (cli_ptr->argv_758.argv_2420);
		}

		if (argv_2072 == argv_3778) { // remap error argv_976
			argv_2072 = argv_1021; 
		}
		return (argv_2072);
	}
}

argv_4536 internal_check_select_return_code (argv_4536 _nb_ready, bool& _must_continue) {
	argv_4536 argv_2072		= argv_1021;
	_must_continue	= false;
#if defined (__WIN32_OS__)
	if (_nb_ready == SOCKET_ERROR) {
		{
			argv_4536 argv_1343	= WSAGetLastError ();
			char argv_4846[MAX_PATH];
			argv_4569 (argv_4846, MAX_PATH, "select failed (errno=%d)", argv_1343);
			argv_4846[MAX_PATH - 1] = '\0';
			MessageBox (NULL, argv_4846, "", MB_OK);
		}
		argv_2072 = argv_1020;
	}
#endif // #if defined (__WIN32_OS__)
#if defined (__LINUX_OS__)
	if (nb_ready < 0) {
		if (errno == EINTR) {
			_must_continue = true;
		}
		else {
			argv_2072 = argv_1020; // real select error occured
		}
	}
#endif // #if defined (__LINUX_OS__)
	return (argv_2072);
}


void internal_affiche_UI08 (argv_876 _name, argv_4881 _value) {
	char argv_4846[MAX_PATH];
	argv_4569 (argv_4846, MAX_PATH, "%s : %d", _name, _value);
	argv_4846[MAX_PATH - 1] = '\0';
	MessageBox (NULL, argv_4846, "", MB_OK);
}

// argv_1397 the fields from the received packet
// @@ BODY DESCRIPTION:
// @@ - argv_3557 of the concerned argv_1424 (string)
// @@ - scan success				(1)  : 0= success, 1=failed
// @@ - infection flag				(1)	 : 0= not infected, 1=infected
// @@ - dysinfection possible		(1)  : 0= not possible, 1=possible
// @@ - dysinfection argv_1291 flag		(1)	 : 0=not argv_1291, 1=argv_1291
// @@ - dysinfection report flag	(1)	 : 0=failed, 1=success
// @@ - argv_1307	(4)  (see "general_avx.hpp")
// @@ - {virus argv_3557}				(??) : empty if infected_flag=0
argv_4536 internal_process_packet_PCK_TYPE_SCAN_LOCAL_RESULT (argv_2338 _cli_ptr, argv_4477& _com_unit, argv_4476 * _result_ptr) {
	argv_4536 argv_2072 = argv_1021;
	argv_4475 * cli_ptr = (argv_4475 *) _cli_ptr;

	argv_4881	scan_success_UI08				= 0;
	argv_4881	infection_flag_UI08				= 0;
	argv_4881	dysinfect_possible_flag_UI08	= 0;
	argv_4881	dysinf_done_flag_UI08			= 0;
	argv_4881	dysinf_report_flag_UI08			= 0;
	string	argv_1154;

	argv_2072 = _com_unit.argv_3762.argv_1397 (argv_1154);

	if (argv_2072 == argv_3778) {
		argv_2072 = _com_unit.argv_3762.argv_1397 (scan_success_UI08);
		//internal_affiche_UI08 ("argv_4470", scan_success_UI08);
	}

	if (argv_2072 == argv_3778) {
		argv_2072 = _com_unit.argv_3762.argv_1397 (infection_flag_UI08);
		//internal_affiche_UI08 ("infection_flag", infection_flag_UI08);
	}
	if (argv_2072 == argv_3778) {
		argv_2072 = _com_unit.argv_3762.argv_1397 (dysinfect_possible_flag_UI08);
		//internal_affiche_UI08 ("argv_1302", dysinfect_possible_flag_UI08);
	}
	if (argv_2072 == argv_3778) {
		argv_2072 = _com_unit.argv_3762.argv_1397 (dysinf_done_flag_UI08);
		//internal_affiche_UI08 ("dysinf_done_flag", dysinf_done_flag_UI08);
	}
	if (argv_2072 == argv_3778) {
		argv_2072 = _com_unit.argv_3762.argv_1397 (dysinf_report_flag_UI08);
		//internal_affiche_UI08 ("dysinf_result_flag", dysinf_report_flag_UI08);
	}

	if (argv_2072 == argv_3778) { // argv_4536
		argv_4883 retcode_tmp = DYSINFECT_UNDEFINED_VALUE;
		argv_2072 = _com_unit.argv_3762.argv_1397 (retcode_tmp);
		_result_ptr->argv_1307 = (argv_4536) retcode_tmp;
	}

	if ((argv_2072 == argv_3778) && (infection_flag_UI08 == 1)) {
		string argv_4999;
		argv_2072 = _com_unit.argv_3762.argv_1397 (argv_4999);
		if (argv_2072 == argv_3778) {
			argv_4883 virus_name_length = argv_4999.size();
			
			if (virus_name_length > MAX_PATH) {
				strncpy (_result_ptr->argv_4999, argv_4999.c_str(), MAX_PATH);
				_result_ptr->argv_4999[MAX_PATH - 1] = '\0';
			}
			else {
				strncpy (_result_ptr->argv_4999, argv_4999.c_str(), virus_name_length);
				_result_ptr->argv_4999[virus_name_length] = '\0';
			}
		}
	}

	if (argv_2072 == argv_3778) { // all argv_1178 retrieved succesfully
		strncpy (_result_ptr->argv_1154, argv_1154.c_str(), MAX_PATH);
		_result_ptr->argv_1154[MAX_PATH - 1] = '\0';

		if (scan_success_UI08 == 1) {
			_result_ptr->argv_4470			= true;
		}
		if (infection_flag_UI08 == 1) {
			_result_ptr->infected				= true;
		}
		if (dysinfect_possible_flag_UI08 == 1) {
			_result_ptr->argv_1305	= true;	
		}
		if (dysinf_done_flag_UI08 == 1) {
			_result_ptr->argv_1304		= true;
		}
		if (dysinf_report_flag_UI08 == 1) {
			_result_ptr->argv_1306	= true;
		}
	}

	if (argv_2072 == argv_3778) { // remap error argv_976
		argv_2072 = argv_1021;
	}
	return (argv_2072);
}

argv_4536 internal_process_packet_PCK_TYPE_SCAN_REMOTE_RESULT (argv_2338 _cli_ptr, argv_4477& _com_unit, argv_4476 * _result_ptr) {
	argv_4536 argv_2072 = argv_1021;
	argv_4475 * cli_ptr = (argv_4475 *) _cli_ptr;

	argv_2072 = internal_process_packet_PCK_TYPE_SCAN_LOCAL_RESULT (_cli_ptr, _com_unit, _result_ptr);
	if (argv_2072 == argv_1021) {
		argv_2072 = _com_unit.argv_3762.reset ();

		// read the dysinfected argv_1424 if necessary
		if ((argv_2072 == argv_3778) && (_result_ptr->infected==true) && (_result_ptr->argv_1304==true) && (_result_ptr->argv_1306 == true))  {
			// generate a unique temporary argv_1474
			internal_generate_unique_tmp_filename (cli_ptr->argv_4849.c_str(), cli_ptr->argv_4850, _result_ptr->argv_1230);
			// receive the dysinfected argv_1424.
			argv_2072 = _com_unit.argv_3762.argv_4340 (_com_unit.argv_2420, cli_ptr->argv_4571, _result_ptr->argv_1230);
		}
	}
	return (argv_2072);
}


// - argv_4881: argv_4406: 0= success, 1=failed
// - argv_4883: number of files in the archive (non-recursively)
//   (not relevant if argv_4406 is "failed")
argv_4536 internal_process_packet_PCK_TYPE_ARCHIVE_EXTRACT_LIST_RESULT (argv_2338 _cli_ptr, argv_4477& _com_unit, argv_4476 * _result_ptr) {
	argv_4536 argv_2072 = argv_1021;
	argv_4475 * cli_ptr = (argv_4475 *) _cli_ptr;

	argv_2072 = _com_unit.argv_3762.argv_1397 (_result_ptr->argv_3682);
	if (argv_2072 == argv_3778) {
		argv_2072 = _com_unit.argv_3762.argv_1397 (_result_ptr->argv_3608);
	}

	if (argv_2072 == argv_3778) {
		argv_2072 = argv_1021;
	}
	return (argv_2072);
}

// a single argv_1474 that was extracted is sent to us (relative path)
// so it is up to the caller to rebuild a full pathname using the temporary argv_4419
// he sent to the COM manager when sending it's request.
argv_4536 internal_process_packet_PCK_TYPE_ARCHIVE_EXTRACT_RESULT (argv_2338 _cli_ptr, argv_4477& _com_unit, argv_4476 * _result_ptr) {
	argv_4536 argv_2072 = argv_1021;
	argv_4475 * cli_ptr = (argv_4475 *) _cli_ptr;
	// retrieve the number of elements of this archive
	argv_2072 = _com_unit.argv_3762.argv_1397 (_result_ptr->argv_3605);
	if (argv_2072 == argv_3778) {
		// retrieve the argv_1148 element's argv_1994
		argv_2072 = _com_unit.argv_3762.argv_1397 (_result_ptr->argv_1152);
		if (argv_2072 == argv_3778) {
			// retrieve the argv_1148 element's argv_3557
			argv_2072 = _com_unit.argv_3762.argv_1397 (_result_ptr->argv_1406);
		}
	}

	if (argv_2072 == argv_3778) {
		argv_2072 = argv_1021;
	}
	return (argv_2072);
}

argv_4536 internal_process_packet_PCK_TYPE_ARCHIVE_CREATE_RESULT (argv_2338 _cli_ptr, argv_4477& _com_unit, argv_4476 * _result_ptr) {
	argv_4536 argv_2072 = argv_1021;
	argv_4475 * cli_ptr = (argv_4475 *) _cli_ptr;

	argv_2072 = _com_unit.argv_3762.argv_1397 (_result_ptr->argv_3682);

	if (argv_2072 == argv_3778) {
		argv_2072 = argv_1021;
	}
	return (argv_2072);
}

argv_4536 internal_process_received_packet (argv_2338 _cli_ptr, argv_4477& _com_unit, argv_4476 * _result_ptr) {
	argv_4536 argv_2072 = argv_1021;
	argv_4475 * cli_ptr = (argv_4475 *) _cli_ptr;
	
	argv_2072 = _com_unit.argv_3762.argv_1794 (_result_ptr->argv_4860);
	if (argv_2072 == argv_3778) { // argv_4860 extraction succeeded
		switch (_result_ptr->argv_4860) {
			case argv_3806:
			case argv_3802:
				argv_2072 = internal_process_packet_PCK_TYPE_SCAN_LOCAL_RESULT (_cli_ptr, _com_unit, _result_ptr);
				break;

			case argv_3808:
				argv_2072 = internal_process_packet_PCK_TYPE_SCAN_REMOTE_RESULT (_cli_ptr, _com_unit, _result_ptr);
				break;

			case argv_3787:
				argv_2072 = internal_process_packet_PCK_TYPE_ARCHIVE_EXTRACT_LIST_RESULT (_cli_ptr, _com_unit, _result_ptr);
				break;

			case argv_3789:
				argv_2072 = internal_process_packet_PCK_TYPE_ARCHIVE_EXTRACT_RESULT (_cli_ptr, _com_unit, _result_ptr);
				break;

			case argv_3786:
				argv_2072 = internal_process_packet_PCK_TYPE_ARCHIVE_CREATE_RESULT (_cli_ptr, _com_unit, _result_ptr);
				break;
		}
	}	

	if (argv_2072 == argv_3778) {
		argv_2072 = argv_1021;
	}
	return (argv_2072);
}

// process only argv_3677 ready descriptor (user must call it in a loop if necessary).
// we have 3 different sockets :
// - archive extractor argv_4570
// - archive creator argv_4570
// - scan argv_4570 (virus & spyware).
argv_4536 internal_process_ready_descriptors (argv_2338 _cli_ptr, argv_4536 _nb_ready, argv_4476 * _result_ptr) {
	argv_4536 argv_2072 = argv_1021;
	argv_4475 * cli_ptr = (argv_4475 *) _cli_ptr;

	internal_reset_result (*_result_ptr);

	if (FD_ISSET (cli_ptr->argv_758.argv_4570, &cli_ptr->argv_4487.readfds_dirty)) {
		argv_2072 = cli_ptr->argv_758.argv_3762.reset ();
		if (argv_2072 == argv_3778) {
			argv_2072 = cli_ptr->argv_758.argv_3762.argv_4337 (cli_ptr->argv_758.argv_2420, cli_ptr->argv_4571, false);
			if (argv_2072 == argv_3778) { // packet received succesfully
				argv_2072 = internal_process_received_packet (_cli_ptr, cli_ptr->argv_758, _result_ptr);
			}
		}
	}
	else if (FD_ISSET (cli_ptr->argv_4471.argv_4570, &cli_ptr->argv_4487.readfds_dirty)) {
		argv_2072 = cli_ptr->argv_4471.argv_3762.reset ();
		if (argv_2072 == argv_3778) {
			argv_2072 = cli_ptr->argv_4471.argv_3762.argv_4337 (cli_ptr->argv_4471.argv_2420, cli_ptr->argv_4571, false);
			if (argv_2072 == argv_3778) { // packet received succesfully
				argv_2072 = internal_process_received_packet (_cli_ptr, cli_ptr->argv_4471, _result_ptr);
			}
		}
	}
	return (argv_2072);	
}

extern "C"
{
	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	// pump a argv_2457 from any of the 3 possible sockets
	argv_4536 argv_4328 (argv_2338 _cli_ptr, argv_4476 * _result_ptr) {
		argv_4536 argv_2072 = argv_1021;
		argv_4475 * cli_ptr = (argv_4475 *) _cli_ptr;
		
		argv_4536 nb_ready		= 0;
		bool must_continue	= true;
		while ((argv_2072 == argv_1021) && (must_continue == true)) {
			cli_ptr->argv_4487.readfds_dirty = cli_ptr->argv_4487.readfds;	// because Linux modify the sets
			nb_ready = select ((cli_ptr->argv_4487.argv_2407)+1, &cli_ptr->argv_4487.readfds_dirty, NULL, NULL, NULL);
			/*
			{
				char argv_4846[MAX_PATH];
				argv_4569 (argv_4846, MAX_PATH, "select returned %d", nb_ready);
				argv_4846[MAX_PATH - 1] = '\0';
				MessageBox (NULL, argv_4846, "", MB_OK);
			}*/
			argv_2072 = internal_check_select_return_code (nb_ready, must_continue);

			if (argv_2072 == argv_1021) {
				if (must_continue == true) { // when interrupted by a signal (linux).
					continue;
				}
				else { // select returned without any error
					// here we process the first argv_4570 ready, and the others are not 
					// processed, the user must call 'argv_4328' several times
					// if he wants to retrieve all available messages.
					argv_2072 = internal_process_ready_descriptors (_cli_ptr, nb_ready, _result_ptr);
				}
			}
		}
		return (argv_2072);
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ end of argv_1424
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@


