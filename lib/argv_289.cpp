// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_289.cpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1424 contains all the functions and argv_1178
// @@ structures necessary for a given daemon to
// @@ work properly. 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_348.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ global variables
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
extern argv_876		argv_4509;
argv_963  *				argv_4508	= NULL;



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_879
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
// @@ This function permits to set up the argv_4622 of the
// @@ argv_879 argv_3656 to it's initial argv_4622.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_879::reset () {
	argv_4502				= "/";
	argv_4510			= false;
#if defined (__WIN32_OS__)
	argv_2312			= "C:";
#endif // #if defined (__WIN32_OS__)
#if defined (__LINUX_OS__)
	argv_2312			= ".";
#endif // #if defined (__LINUX_OS__)
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_879
// @@
// @@ FUNCTION		:	argv_879			
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
// @@ Normal constructor of the argv_879 argv_3656.
// @@ it permits to set up the argv_4622 of the
// @@ argv_879 argv_3656 to it's initial argv_4622.
// @@ It also argv_4243 the network for first use (win32 only)
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_879::argv_879 () {
#if defined (__WIN32_OS__)
	argv_4254 ();
#endif // #if defined (__WIN32_OS__)
	reset ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_879
// @@
// @@ FUNCTION		:	~argv_879			
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
// @@ destructor of the argv_879 argv_3656.
// @@ it permits to set up the argv_4622 of the
// @@ argv_879 argv_3656 to it's initial argv_4622.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_879::~argv_879 () {
#if defined (__WIN32_OS__)
	argv_4764 ();
#endif // #if defined (__WIN32_OS__)
	reset ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_879
// @@
// @@ FUNCTION		:	argv_1121			
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_4455 if success,
// @@        another argv_4979 otherwise.	
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to create the thread that will do
// @@ the actual task that is application dependant.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_879::argv_1121 () {
	argv_4536 argv_2072 = argv_4445;
	argv_2327.argv_2323 (argv_1346, "+++ ERROR: argv_879::argv_1121 - illegal call of the base class function !");
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_879
// @@
// @@ FUNCTION		:	argv_4959			
// @@
// @@ INPUT			:	
// @@ dwCurrentState : DWORD : the argv_1148 status of the service.
// @@
// @@ dwWin32ExitCode: DWORD : Specifies an Win32 error argv_976 that 
// @@     the service uses to report an error that occurs when it is 
// @@     starting or stopping.
// @@
// @@ dwServiceSpecificExitCode: DWORD :  Specifies a service specific 
// @@     error argv_976 that the service returns when an error occurs while 
// @@     the service is starting or stopping.
// @@
// @@ dwCheckPoint : DWORD : Specifies a argv_4979 that the service increments 
// @@     periodically to report its progress during a lengthy argv_4618, 
// @@     argv_4626, pause, or continue operation.
// @@
// @@ dwWaitHint: DWORD : Specifies an estimate of the amount of argv_4843, 
// @@     in milliseconds, that the service expects a pending argv_4618, argv_4626, 
// @@     pause, or continue operation.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_4455 if success,
// @@        another argv_4979 otherwise.	
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to update the status of the service
// @@ so that depending on the steps performed, the user can see
// @@ what the argv_1148 status of the service is.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#if defined (__WIN32_OS__)
	argv_4536 argv_879::argv_4959 (DWORD dwCurrentState, DWORD dwWin32ExitCode,
						 DWORD dwServiceSpecificExitCode, DWORD dwCheckPoint,
						 DWORD dwWaitHint) {
		
		argv_4536 argv_2072 = argv_4455;

		argv_3635.dwServiceType=SERVICE_WIN32_OWN_PROCESS;
		argv_3635.dwCurrentState=dwCurrentState;
		
		if(dwCurrentState==SERVICE_START_PENDING) {
			argv_3635.dwControlsAccepted=0;
		}
		else {
			argv_3635.dwControlsAccepted = SERVICE_ACCEPT_STOP			
				|SERVICE_ACCEPT_SHUTDOWN;
		}

		if(dwServiceSpecificExitCode==0) {
			argv_3635.dwWin32ExitCode=dwWin32ExitCode;
		}
		else {
			argv_3635.dwWin32ExitCode=ERROR_SERVICE_SPECIFIC_ERROR;
		}
		argv_3635.dwServiceSpecificExitCode=dwServiceSpecificExitCode;
		argv_3635.dwCheckPoint=dwCheckPoint;
		argv_3635.dwWaitHint=dwWaitHint;

		if (! SetServiceStatus (argv_3636,&argv_3635)) {
			argv_2327.argv_2323 (argv_1346, "+++ ERROR: SetServiceStatus failed !");
			argv_2198 ();
			argv_2072 = argv_4454;
		}
		return (argv_2072);
	}
#endif // #if defined (__WIN32_OS__)



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_879
// @@
// @@ FUNCTION		:	argv_2198			
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_4455 if success,
// @@        another argv_4979 otherwise.	
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_4626 the service after this 
// @@ service was started.
// @@
// @@ CONTRACT 		:	
// @@ - the service must have been started prior to this call. 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_879::argv_2198 () {
	argv_4536 argv_2072 = argv_4455;
	argv_780.argv_2305 ();
		if (argv_4510 == false) {
			argv_2072 = argv_4447;
		}
		else { // service is running => ok to argv_4626 it
#if defined (__WIN32_OS__)
			argv_4536 argv_2072 = argv_4959 (SERVICE_STOP_PENDING, NO_ERROR, 0, 0, 0);
			if (argv_2072 != argv_4455) {
				argv_2327.argv_2323 (argv_1346, "+++ ERROR: argv_879::argv_2198 failed ! - argv_4959 failed !");
				argv_2072 = argv_4449;
			}
			else {
				argv_2327.argv_2323 (argv_3634, "argv_879::argv_2198 - status set to SERVICE_STOP_PENDING");
			}

			argv_2327.argv_2323 (argv_3634, "asking the worker thread to die : calling 'argv_2199'");
			argv_2199 ();	
			argv_2327.argv_2323 (argv_3634, "worker threads succesfully terminated");

			argv_4510 = false;
			SetEvent (argv_2200);
			argv_2072 = argv_4959 (SERVICE_STOPPED, NO_ERROR, 0, 0, 0);
			if (argv_2072 != argv_4455) {
				argv_2327.argv_2323 (argv_1346, "+++ ERROR: argv_2198 failed !");
				argv_2072 = argv_4449;
			}
			else {
				argv_2327.argv_2323 (argv_3634, "argv_2198...[OK]");
			}
			reset ();
#endif // #if defined (__WIN32_OS__)

#if defined (__LINUX_OS__)
			argv_2327.argv_2323 (argv_3634, "argv_879::argv_2198 - asking the worker thread to die : calling 'argv_2199'");
			argv_2199 ();	
			argv_4510 = false;
			argv_2327.argv_2323 (argv_3634, "argv_2198...[OK]");
			reset ();
#endif // #if defined (__LINUX_OS__)
		}
	argv_780.argv_4937 ();
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_879
// @@
// @@ FUNCTION		:	argv_2199			
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_4455 if success,
// @@        another argv_4979 otherwise.	
// @@	
// @@ DISCLOSURE	:	protected
// @@	
// @@ DESCRIPTION	:
// @@ This function should never be called.
// @@ The user must derivate the 'argv_879' argv_3656
// @@ and override this function.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_879::argv_2199 () {
	// illegal to call the base class function
	argv_4536 argv_2072 = argv_4446;
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_879
// @@
// @@ FUNCTION		:	argv_4424			
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_4455 if success,
// @@        another argv_4979 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_4424 the service and performs the
// @@ following steps :
// @@ - retrieve the log argv_1424's path.
// @@ - open the service's log argv_1424.
// @@ - register the function that will argv_1900 the service control
// @@   requests.
// @@ - update the service's status at each step.
// @@ - create the worker thread that will perform the actual
// @@   application dependant processing.
// @@ - wait for the worker thread to finish.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_879::argv_4424 () {
	argv_4536 argv_2072 = argv_4455;

	// open the log argv_1424 (using the registry to get the path)
	string argv_2313 = argv_2312 + argv_4502 + "log_av_service_status.txt"; 
	argv_2327.argv_3686 (argv_2313.c_str(), NULL, "");
	cerr << "opened log :" << argv_2313 << endl;
	argv_4508 = &argv_2327; // for the functions that can not be member functions

	argv_2327.argv_2323 (argv_3634, "Starting daemon service");
	
	argv_3636 = RegisterServiceCtrlHandler (argv_4509,
								(LPHANDLER_FUNCTION) argv_4506);

	if (! argv_3636) {
		argv_2072 = argv_4452;
		argv_2327.argv_2323 (argv_1346, "+++ ERROR: argv_4424: RegisterServiceCtrlHandler failed !");
	}
	else { // RegisterServiceCtrlHandler succeeded
		argv_2327.argv_2323 (argv_3634, "RegisterServiceCtrlHandler...[OK]");
		argv_2072 = argv_4959 (SERVICE_START_PENDING, NO_ERROR, 0, 1, 3000);
		if (argv_2072 != argv_4455) { // status update failed
			argv_2327.argv_2323 (argv_1346, "+++ ERROR: argv_4424: argv_4959 failed (SERVICE_START_PENDING) @1 !");
		}
		else {  // status updated succesfully
			argv_2327.argv_2323 (argv_3634, "argv_4959 to SERVICE_START_PENDING mark 1...[OK]");
			argv_2200 = CreateEvent (0,TRUE,FALSE,0);
			if (argv_2200==NULL) {
				argv_2327.argv_2323 (argv_1346, "+++ ERROR: argv_4424: CreateEvent failed !");
				argv_2072 = argv_4444;
			}
			else { // event created succesfully
				argv_2072 = argv_4959 (SERVICE_START_PENDING, NO_ERROR, 0, 2, 1000);
				if (argv_2072 != argv_4455) {
					argv_2327.argv_2323 (argv_1346, "+++ ERROR: argv_4424: argv_4959 failed (SERVICE_START_PENDING) @2 !");
				}
				else { // status updated succesfully
					argv_2327.argv_2323 (argv_3634, "argv_4959 to SERVICE_START_PENDING mark 2...[OK]");
					argv_2072 = argv_1121 ();
					if (argv_2072 != argv_4455) {
						argv_2327.argv_2323 (argv_1346, "+++ ERROR: argv_4424: argv_1121 failed !");
					}
					else { // worker thread created succesfully
						argv_2327.argv_2323 (argv_3634, "worker thread creation...[OK]");
						argv_4507 = SERVICE_RUNNING;
						argv_2072 = argv_4959 (SERVICE_RUNNING, NO_ERROR, 0, 0, 0);
						if (argv_2072 != argv_4455) {
							argv_2327.argv_2323 (argv_1346, "+++ ERROR: argv_4424: argv_4959 failed (SERVICE_RUNNING) !");
						}
						else { // status updated succesfully
							argv_2327.argv_2323 (argv_3634, "argv_4959 to SERVICE_RUNNING ...[OK]");
							if (WaitForSingleObject (argv_2200, INFINITE) == WAIT_FAILED) {
								argv_2327.argv_2323 (argv_1346, "+++ ERROR: argv_4424:  WaitForSingleObject failed !");	
							}
							CloseHandle (argv_2200);
						}
					}
				}
			}
		}
	}
	return (argv_2072);	
}

#if defined (__LINUX_OS__)
void * argv_1285 (void * _param) {
	argv_1145 * param_ptr = (argv_1145 *) _param;
	argv_1145 param = (*param_ptr);
	delete param_ptr;

	pthread_join (param.argv_1900, NULL);

	if (param.argv_1994 == 0) { // watch the admin thread
		param.argv_1177->argv_2327.argv_2323 (argv_690, "*** ADMIN THREAD HAS EXITED !");
	}
	else if (param.argv_1994 == 1) { // watch the scanner thread
		param.argv_1177->argv_2327.argv_2323 (argv_690, "*** SCANNER THREAD HAS EXITED !");
	}

	param.argv_1177->argv_2327.argv_2323 (argv_690, "*** KILLING SERVICE");
	param.argv_1177->argv_2198 ();

	// wait for the peer thread to exit
	pthread_join (param.argv_3832, NULL);
	exit(1);
	return (NULL);
}
#endif // #if defined (__LINUX_OS__)


argv_4536 argv_879::argv_1120 () {
	argv_4536 argv_2072 = argv_4455;
#if defined (__LINUX_OS__)
	argv_2327.argv_2323 (argv_1191, "creating watcher threads");
	argv_1145 * param_ptr = new (std::nothrow) argv_1145;
	param_ptr->argv_1994				= 0;
	param_ptr->argv_1900			= admin_handle;
	param_ptr->argv_3832		= scanner_handle;
	param_ptr->argv_1177	= this;

	// create the thread that will monitor the admin thread
	argv_4536 iret2 = pthread_create (&watcher_admin_handle, NULL, argv_1285, (argv_2338) param_ptr);
	if (iret2 != 0) {
		argv_2072 = argv_4453;
	}
	else {
		// create the thread that will monitor the scanner thread
		argv_1145 * param_ptr = new (std::nothrow) argv_1145;
		param_ptr->argv_1994				= 1;
		param_ptr->argv_1900			= scanner_handle;
		param_ptr->argv_3832		= admin_handle;
		param_ptr->argv_1177	= this;
		iret2 = pthread_create (&watcher_scanner_handle, NULL, argv_1285, (argv_2338) param_ptr);
		if (iret2 != 0) {
			argv_2072 = argv_4453;
		}
	}
#endif
	return (argv_2072);
}	



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1424
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@


