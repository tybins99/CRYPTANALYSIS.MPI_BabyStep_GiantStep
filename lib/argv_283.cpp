// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_283.cpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1424 contains the functions that permit
// @@ to communicate argv_5011 the service update.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_342.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ namespace usage declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
using namespace std;



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	argv_1003	
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
// @@ to argv_4243 the admin API to use the TCP/IP stack.
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
	bool argv_1003 () {
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
// @@ FUNCTION		:	argv_1004	
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
// @@ no other call to the admin api is necessary.
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
	bool argv_1004 () {
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
// @@ FUNCTION		:	internal_com_admin_client_create
// @@
// @@ INPUT			:	
// @@ _cli_ptr_ptr: argv_2338 *: contains the argv_665 of the new instance
// @@   of the admin client.
// @@
// @@ OUTPUT		:	
// @@ _result: bool& : true if operation was succesful,
// @@          false otherwise.	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_689 if operation was succesful,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to create a new instance of the admin
// @@ client argv_3656 and argv_4243 it for use.
// @@
// @@ Notice that this function is not exported by the DLL (internal
// @@ function).
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
extern "C"
{
	argv_4536 internal_com_admin_client_create (argv_2338 * _cli_ptr_ptr, bool& _result) {
		_result = true;
		argv_4474 ** cli_ptr_ptr = (argv_4474 **) _cli_ptr_ptr;
		argv_4536 argv_2072 = argv_689;
		if (cli_ptr_ptr == NULL) {
			argv_2072 = argv_684;
		}
		else if (*cli_ptr_ptr != NULL) {
			argv_2072 = argv_682;
		}
		else { // allocate the client structure
			*cli_ptr_ptr = new (std::nothrow) argv_4474; 
			if (*cli_ptr_ptr == NULL) {
				argv_2072 = argv_686;
			}
			else { // memory allocation was succesful for the client structure
				(*cli_ptr_ptr)->argv_2214 = argv_689;

				// allocate the argv_2444 argv_3656
				(*cli_ptr_ptr)->argv_2437 = new (std::nothrow) argv_974;
				if ((*cli_ptr_ptr)->argv_2437 == NULL) {
					argv_2072 = argv_686;
				}
				else { // argv_2420 sock argv_3656 succesfully allocated
					// allocate the packet argv_3656
					(*cli_ptr_ptr)->argv_3761 = new (std::nothrow) argv_1106;
					if ((*cli_ptr_ptr)->argv_3761 == NULL) {
						argv_2072 = argv_686;
					}
				}
			}
		}

		if (argv_2072 != argv_689) {
			_result = false;
		}
		return (argv_2072);
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	internal_com_admin_client_destruct	
// @@
// @@ INPUT			:	
// @@ _cli_ptr: argv_2338: argv_665 of the admin argv_3656 obtained
// @@   by a previous call to the function 'internal_com_admin_client_create'.
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
// @@ This function permits to argv_1232 the admin argv_3656 after use
// @@ and to release all memory used by this argv_3656 and other related
// @@ objects as well.
// @@
// @@ Notice that this function is not exported by the DLL (internal
// @@ function).
// @@
// @@ CONTRACT		:	
// @@ - '_cli_ptr' parameter must not be a NULL pointer.	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
extern "C"
{
	bool internal_com_admin_client_destruct (argv_2338 _cli_ptr) {
		bool bret = true;
		argv_4474 * cli_ptr = (argv_4474 *) _cli_ptr;
		argv_4536 argv_2072 = argv_689;
		if (cli_ptr == NULL) {
			argv_2072 = argv_684;
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
// @@ FUNCTION		:	internal_com_admin_client_connect
// @@
// @@ INPUT			:
// @@ _cli_ptr: argv_2338: argv_665 of the admin client obtained by a previous
// @@ call to the 'internal_com_admin_client_create' function.
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
// @@ This function permits to connect the admin argv_3656 to the server
// @@ whose IP (or argv_3557) and argv_4228 were given as parameters.
// @@
// @@ Notice that this function is not exported by the DLL (internal
// @@ function).
// @@
// @@ CONTRACT		:	
// @@ - '_cli_ptr' parameter must not be a NULL pointer.
// @@ - '_servname' parameter must not be a NULL pointer.	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
extern "C"
{
	bool internal_com_admin_client_connect (argv_2338 _cli_ptr, argv_876 _servname, argv_4883 _servport) {
		bool bret = true;
		argv_4536 argv_2072 = argv_689;
		argv_4474 * cli_ptr = (argv_4474 *) _cli_ptr;
		if ((cli_ptr == NULL) || (_servname == NULL)) { // parameters are OK
			argv_2072 = argv_684;
		}
		else { // parameters are OK
			argv_2072 = cli_ptr->argv_2437->argv_4245 (_servname, _servport);
			if (argv_2072 == argv_2448) { // remap error argv_976
				argv_2072 = argv_689;
			}
			else {
				char argv_4846[MAX_PATH];
				string serror = argv_1344 (argv_2072);
				argv_4569 (argv_4846, MAX_PATH, "internal_com_admin_client_connect - argv_4245(%s,%d) failed ! (argv_1343=%s)", _servname, _servport, serror.c_str());
				argv_4846[MAX_PATH - 1] = '\0';
				MessageBox (NULL, argv_4846, "", MB_ICONERROR);
			}
		}

		if (cli_ptr != NULL) {
			cli_ptr->argv_2214	= argv_2072;
		}
		if (argv_2072 != argv_689) {
			bret = false;
		}
		return (bret);
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	internal_com_admin_client_disconnect
// @@
// @@ INPUT			:
// @@ _cli_ptr: argv_2338: argv_665 of the admin client obtained by a previous
// @@ call to the 'internal_com_admin_client_create' function.
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
// @@ This function permits to disconnect the admin client from the
// @@ scanning server.
// @@
// @@ Notice that this function is not exported by the DLL (internal
// @@ function).
// @@
// @@ CONTRACT		:	
// @@ - '_cli_ptr' parameter must not be a NULL pointer.	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
extern "C"
{
	bool internal_com_admin_client_disconnect (argv_2338 _cli_ptr) {
		bool bret = true;
		argv_4536 argv_2072 = argv_689;
		argv_4474 * cli_ptr = (argv_4474 *) _cli_ptr;
		if (cli_ptr == NULL) { // parameters are OK
			argv_2072 = argv_684;
		}
		else { // parameters are OK
			argv_2072 = cli_ptr->argv_2437->argv_968 ();
		}

		if (argv_2072 == argv_2448) { // remap error argv_976
			argv_2072 = argv_689; 
		}

		if (cli_ptr != NULL) {
			cli_ptr->argv_2214 = argv_2072;
		}

		if (argv_2072 != argv_689) { 
			bret = false;
		}
		return (bret);
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	internal_com_admin_client_read_answer
// @@
// @@ INPUT			:	
// @@ _cli_ptr: argv_2338: argv_665 of the admin client obtained by a previous
// @@ call to the 'internal_com_admin_client_create' function.
// @@
// @@ _timeout_second: argv_4536: the timeout associated argv_5011 the read operation
// @@   on the argv_1148 argv_2420 (choose -1 for infinite).
// @@
// @@ _expected_type: argv_4881: the argv_4860 expected for the answer from the server.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_4536 : argv_689 if operation was succesful,
// @@        another argv_4979 otherwise.	
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to read the update argv_4406 coming from
// @@ the server. Notice that the server is supposed to argv_4490 a 
// @@ specific answer argv_4860, so the caller must provide the expected
// @@ argv_4860. If the received argv_4860 does not match the '_expected_type'
// @@ parameter, a protocol violation error occurs.
// @@
// @@ Notice that this function is not exported by the DLL (internal
// @@ function).
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 internal_com_admin_client_read_answer (argv_4474 * _cli_ptr, argv_4536 _timeout_second, argv_4881 _expected_type) {
	argv_4536 argv_2072				= argv_689;
	argv_4881 extracted_type		= argv_3817;
	argv_4881 extracted_result	= 0;

	argv_2072 = _cli_ptr->argv_3761->reset ();

	if (argv_2072 == argv_3778) {
		argv_2072 = _cli_ptr->argv_3761->argv_4337 (*(_cli_ptr->argv_2437), _timeout_second, false);
	}

	if (argv_2072 == argv_3778) { // packet received succesfully
		// argv_1397 the received packet argv_4860
		argv_2072 = _cli_ptr->argv_3761->argv_1794 (extracted_type);
	}

	if (argv_2072 == argv_3778) { // argv_4860 extraction succeeded
		if (extracted_type != _expected_type) {
			argv_2072 = argv_688;
		}
		else { // the received argv_4860 matches the expected argv_4860
			// argv_1397 the argv_4406 of the operation sent by the server
			argv_2072 = _cli_ptr->argv_3761->argv_1397 (extracted_result);
			if (argv_2072 == argv_3778) {
				if (extracted_result == 1) {
					argv_2072 = argv_687;
				}
				else if ((extracted_result == 0) && (extracted_result == 1)) {
					argv_2072 = argv_685;
				}
			}
		}
	}

	if (argv_2072 == argv_3778) {
		argv_2072 = argv_689; // remap error argv_976
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	internal_com_admin_client_send_request
// @@
// @@ INPUT			:
// @@ _cli_ptr: argv_2338: argv_665 of the admin client obtained by a previous
// @@ call to the 'internal_com_admin_client_create' function.
// @@
// @@ _pck_type: argv_4881: the argv_4860 of request to be sent to the server.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_689 if operation was succesful,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_4490 a given request to the 
// @@ admin server. The request argv_4860 being given by the caller
// @@ via the '_pck_type' parameter.
// @@
// @@ Notice that this function is not exported by the DLL (internal
// @@ function).
// @@
// @@ CONTRACT		:	
// @@ - '_cli_ptr' parameter must not be a NULL pointer.	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 internal_com_admin_client_send_request (argv_4474 * _cli_ptr, argv_4881 _pck_type) {
	argv_4536 argv_2072 = argv_689;
	if (_cli_ptr == NULL) { // parameters are OK
		argv_2072 = argv_684;
	}
	else { // parameters are OK
		argv_2072 = _cli_ptr->argv_3761->reset ();
		if (argv_2072 == argv_3778) { // packet was reseted succesfully
			argv_2072 = _cli_ptr->argv_3761->argv_4518 (_pck_type);
		}

		if (argv_2072 == argv_3778) { // packet argv_4860 was set succesfully
			argv_4883 unused_data = 0; // empty packets are not allowed
			argv_2072 = _cli_ptr->argv_3761->insert (unused_data);
		}

		if (argv_2072 == argv_3778) { // argv_3698 the packet so that it can be ready
			argv_2072 = _cli_ptr->argv_3761->argv_3698 ();
		}

		if (argv_2072 == argv_3778) { // argv_4490 the packet to the server
			argv_2072 = _cli_ptr->argv_3761->argv_4490 (*(_cli_ptr->argv_2437));
		}
	}

	if (argv_2072 == argv_3778) {
		argv_2072 = argv_689; // remap error argv_976
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	internal_com_admin_client_update
// @@
// @@ INPUT			:
// @@ _cli_ptr: argv_2338: argv_665 of the admin client obtained by a previous
// @@ call to the 'internal_com_admin_client_create' function.
// @@
// @@ _timeout_second: argv_4536: the timeout associated argv_5011 the read operation
// @@   on the argv_1148 argv_2420 (choose -1 for infinite).
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
// @@ This function permits to argv_4490 the update request to the
// @@ scan server, then the answer from the server is read.
// @@ 
// @@ Notice that the admin client is supposed to have been 
// @@ connected to the server prior to this call.
// @@
// @@ CONTRACT		:	
// @@ - '_cli_ptr' parameter must not be a NULL pointer.	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
extern "C"
{
	bool internal_com_admin_client_update (argv_2338 _cli_ptr, argv_4536 _timeout_second) {
		bool bret = true;
		argv_4536 argv_2072 = argv_689;
		argv_4474 * cli_ptr = (argv_4474 *) _cli_ptr;
		if (cli_ptr == NULL) { // parameters are OK
			argv_2072 = argv_684;
		}
		else { // parameters are OK
			argv_2072 = internal_com_admin_client_send_request (cli_ptr, argv_3818);
			if (argv_2072 == argv_689) {
				argv_2072 = internal_com_admin_client_read_answer (cli_ptr, _timeout_second, argv_3819);
			}
		}

		if (argv_2072 != argv_689) { 
			MessageBox (NULL, "internal_com_admin_client_update - internal_com_admin_client_send_request failed !", "", MB_ICONERROR);
			bret = false;
		}

		if (cli_ptr != NULL) {
			cli_ptr->argv_2214 = argv_2072;
		}
		return (bret);
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-
// @@
// @@ FUNCTION		:	argv_1002	
// @@
// @@ INPUT			:	
// @@ _servname: argv_876: argv_3557 or IP of the server to connect to.
// @@
// @@ _servport: argv_4883: argv_4228 of the server to connect to.
// @@
// @@ _timeout_second: argv_4536: the timeout associated argv_5011 the read operation
// @@   on the argv_1148 argv_2420 (choose -1 for infinite).
// @@
// @@ OUTPUT		:
// @@ _ret_code: argv_4536&: return argv_976 for the operation.
// @@
// @@ _serror: argv_1108: the string error argv_2457 of the operation.	
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
// @@ This function permits to perform the update by connecting to
// @@ the server whose argv_3557 or IP is given as the '_servname' parameter
// @@ and whose argv_4228 is given by the '_servport' parameter.
// @@ The argv_4406 of the operation can be determined by the argv_4406
// @@ parameters '_ret_code' and '_serror'.
// @@
// @@ Notice that the caller is supposed to have allocated the 
// @@ '_serror' argv_826 (to MAX_PATH size) prior to this call.
// @@
// @@ CONTRACT		:	
// @@ - '_servname' parameter must not be a NULL pointer.	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
extern "C"
{
	bool argv_1002 (argv_876 _servname, argv_4883 _servport, argv_4536 _timeout_second, argv_4536& _ret_code, argv_1108 _serror) {
		bool bret = true;
		MessageBox (NULL, "argv_1002 - @1", "", MB_OK);
		argv_4536 argv_2072 = argv_689;
		if (_servname == NULL) { // parameters are OK
			argv_2072 = argv_684;
		}
		else { // parameters are OK
			argv_2338 admin_data_ptr = NULL;
			// create the client
			argv_2072 = internal_com_admin_client_create (&admin_data_ptr, bret);
			if (bret ==  true) { // connect the client
				MessageBox (NULL, "admin client created", "", MB_OK);
				bret = internal_com_admin_client_connect (admin_data_ptr, _servname, _servport);

				if (bret == true) { // perform the update
					bret = internal_com_admin_client_update (admin_data_ptr, _timeout_second);
				}

				if (bret == true) { // argv_967 the connection (closed by the server anyway)
					bret = internal_com_admin_client_disconnect (admin_data_ptr);
				}

				if (admin_data_ptr != NULL) {
					_ret_code = internal_com_admin_get_last_error (admin_data_ptr, _serror);
					internal_com_admin_client_destruct (admin_data_ptr);
				}
			}
			else {
				MessageBox (NULL, "argv_1002 - internal_com_admin_client_create failed !", "", MB_ICONERROR);
			}
		}
		return (bret);
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	internal_com_admin_get_last_error
// @@
// @@ INPUT			:	
// @@ _cli_ptr: argv_2338: argv_665 of the admin client obtained by a previous
// @@ call to the 'internal_com_admin_client_create' function.
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
// @@ admin client as a string.
// @@ 
// @@ Notice that the caller is supposed to have allocated the 
// @@ '_serror' argv_826 (to MAX_PATH size) prior to this call.
// @@
// @@ CONTRACT		:	
// @@ - '_servname' parameter must not be a NULL pointer.	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
extern "C"
{
	argv_4536 internal_com_admin_get_last_error (argv_2338 _cli_ptr, argv_1108 _serror) {
		argv_4536 retrieved_last_error = argv_689;	
		_serror[0] = '\0';
		if (_cli_ptr == NULL) {
			retrieved_last_error = argv_683;
		}
		else {
			argv_4474 * cli_ptr	= (argv_4474 *) _cli_ptr;
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



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ end of argv_1424
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@


