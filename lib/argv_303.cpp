// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_303.cpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1424 contains all the argv_1178 structures
// @@ and objects that permit to use the 
// @@ platform independant kernel
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_362.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_936	
// @@
// @@ FUNCTION		:		
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
// @@ normal constructor of the argv_936 argv_3656.
// @@ it sets all fields to their initial argv_4979.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_936::argv_936 () {
	argv_1989 = NULL;
	reset ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_936	
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
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ this function permits to set all fields of the 
// @@ 'argv_936' to their initial argv_4979.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_936::reset () {
	argv_2175							= NULL;
	argv_2117							= NULL;
	argv_4469						= NULL;
	argv_2316								= NULL;
	argv_4622								= argv_2160;
	
	argv_2214							= 0;
	argv_4420							= "";
	argv_1085						= "";
	argv_2312						= "";
	argv_1275						= "";
	argv_3892					= "";
	argv_4847					= "";
	argv_4442					= "kernel_scan_buffer";
	argv_1301					= "kernel_dysinfect";		
	argv_2118	= "kernel_deallocate_all_atoms";	
	argv_1786				= "kernel_get_scan_report";
	argv_2163			= "kernel_NATIVE_free";

#if defined (__LINUX_OS__)
	argv_4502						= "/";
#endif // #if defined (__LINUX_OS__)
#if defined (__WIN32_OS__) 
	argv_4502						= "\\";
#endif // #if defined (__WIN32_OS__) 

	argv_1653			= NULL;
	argv_1656			= NULL;
	argv_1650				= NULL;
	argv_1711			= NULL;
	argv_1660			= NULL;
	argv_1659	= NULL;
	argv_1661			= NULL;

	argv_1669			= NULL;
	argv_1666			= NULL;
	argv_1667		= NULL;
	argv_1668			= NULL;
	argv_1665= NULL;

	if (argv_1989 != NULL) {
		argv_4935 (); // ok if it fails
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_936	
// @@
// @@ FUNCTION		:			
// @@
// @@ INPUT			:	
// @@ _dll_name: argv_876 : argv_3557 of the DLL of the kernel.	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_2162 if success,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to create a copy of the kernel DLL
// @@ the copy having a unique argv_3557, then to argv_2274 this copy
// @@ so that lookup of exported functions can be performed.
// @@ The reason why we can't work on the actuall DLL argv_1424 is
// @@ because we must permit the update of this DLL (argv_1291 by
// @@ another part) without having to argv_4626 the service offered
// @@ by the currently running kernel.
// @@
// @@ CONTRACT 		:	
// @@ - kernel library should not have already been argv_2297.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_936::argv_2284 (argv_876 _dll_name) {
	argv_4536 argv_2072 = argv_2162; 

	if (argv_1989 != NULL) {
		argv_2072 = argv_2150;
	}
	else { // library not argv_2297 yet
		if (_dll_name == NULL) {
			argv_2072 = argv_2152;
		}
		else if (argv_903 (_dll_name) == false) {
			argv_2316->argv_2323 (argv_1346, "+++ ERROR: kernel_manager dll argv_1424 can not be found : ", _dll_name);
			argv_2072 = argv_2157;
		}
		else { // parameters are OK
			// copy the kernel dll to temporary
			if (argv_4847 != "") {
				argv_2072 = argv_2148;
			}
			else { 
				string suffix;
#if defined (__WIN32_OS__) 
				suffix = "dll.delme";
#endif
#if defined (__LINUX_OS__)
				suffix = "so.delme";
#endif //#if defined (__LINUX_OS__)

				argv_2072 = argv_1744 (argv_1275.c_str(), _dll_name, "kernel_api", suffix.c_str(), argv_4847); 

				if (argv_2072 != 0) {
					argv_2072 = argv_2146;
				}
				else { // dll succesfully copied to temporary
					argv_2072 = argv_2162;
#if defined (__DEBUG_KERNEL_MANAGER__)
					argv_2316->argv_2323 (argv_3634, "kernel manager - argv_2284 : copied DLL to temporary : ", argv_4847.c_str());
#endif // #if defined (__DEBUG_KERNEL_MANAGER__)

					#if defined (__WIN32_OS__) 
						argv_1989 = LoadLibrary (argv_4847.c_str());
					#endif // #if defined (__WIN32_OS__) 
					#if defined (__LINUX_OS__)
						argv_1989 = dlopen (argv_4847.c_str(), RTLD_NOW);
					#endif // #if defined (__LINUX_OS__)

					if (argv_1989 == NULL) {
#if defined (__LINUX_OS__)
						char * strerror = dlerror ();
						argv_2316->argv_2323 (argv_1346, "+++ ERROR: dlopen failed : ", strerror);
#endif // #if defined (__LINUX_OS__)
						argv_2072 = argv_2154;
					}
				}
			}
		}
	}

	argv_1243 ("argv_2284", argv_2072);
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_936	
// @@
// @@ FUNCTION		:	argv_4935			
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_2162 if success,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to unload the kernel
// @@ library that was previously argv_2297, then as
// @@ the argv_2297 library was a copy of the original
// @@ argv_1424, the copy is deleted from argv_1424 argv_4749.
// @@
// @@ CONTRACT 		:
// @@ - the kernel library 	should have been argv_2297 prior 
// @@   to this call.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_936::argv_4935 () {
	argv_4536 argv_2072 = argv_2162; 
	if (argv_1989 == NULL) {
		argv_2072 = argv_2151;
	}
	else { // the library seems to have been argv_2297 before this call
#if defined (__WIN32_OS__) 
			if (FreeLibrary (argv_1989) == 0) {
				argv_2072 = argv_2155;	
			}
#endif // #if defined (__WIN32_OS__) 

#if defined (__LINUX_OS__)
			if (dlclose (argv_1989) != 0) {
				argv_2072 = argv_2155;
			}
#endif // #if defined (__LINUX_OS__)

			argv_1989 = NULL;

			// delete the temporary dll argv_1424
			if (argv_1221 (argv_4847.c_str()) == false) {
				argv_2316->argv_2323 (argv_1346, "+++ ERROR: argv_936::argv_4935 - failed to delete temporary argv_1424 : ", argv_4847.c_str());
				argv_2072 = argv_2145;			
			}
			argv_4847 = "";
	}
	argv_1243 ("argv_4935", argv_2072);	
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_936	
// @@
// @@ FUNCTION		:	argv_2331			
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_2162 if success,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ this function permits to perform the lookup of symbols 
// @@ (functions) that are resolved, argv_2297 and linked by 
// @@ the kernel itself. For that, we use the "argv_1784" 
// @@ function exported by the kernel API (DLL).
// @@ the necessary functions are :
// @@ - a argv_826 scan function
// @@ - a dysinfection function
// @@ - a scan report retrieval function
// @@
// @@ CONTRACT 		:	
// @@ - kernel library should have been succesfully argv_2297
// @@   using the 'argv_2284' prior to this call.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_936::argv_2331 () {
	argv_4536 argv_2072 = argv_2162;
	if (argv_1661 == NULL) {
		argv_2072 = argv_2149;
	}
	else { // pre-conditions are OK
		argv_2338 fn_addr = NULL;
		// argv_2274 the 'scanning' function argv_2297 & linked by the kernel
		argv_2072 = argv_1661 (argv_2175, argv_4442.c_str(), &fn_addr);
		if (argv_2072 == argv_2182) {
			argv_1669 = (argv_1562) fn_addr;
#if defined (__DEBUG_KERNEL_MANAGER__)
			argv_2316->argv_2323 (argv_3634, "- argv_2297 inner function : ", argv_4442.c_str());	
#endif // #if defined (__DEBUG_KERNEL_MANAGER__)
		}
		else {
			argv_2316->argv_2323 (argv_1346, "+++ ERROR: failed to argv_2274 inner function : ", argv_4442.c_str());	
		}

		// argv_2274 the 'argv_2118' function argv_2297 & linked by the kernel 
		if (argv_2072 == argv_2182) {
			argv_2072 = argv_1661 (argv_2175, argv_2118.c_str(), &fn_addr);
			if (argv_2072 == argv_2182) {
				argv_1665 = (argv_1558) fn_addr;
#if defined (__DEBUG_KERNEL_MANAGER__)
				argv_2316->argv_2323 (argv_3634, "- argv_2297 inner function : ", argv_2118.c_str());	
#endif // #if defined (__DEBUG_KERNEL_MANAGER__)
			}
			else {
				argv_2316->argv_2323 (argv_1346, "+++ ERROR: failed to argv_2274 inner function : ", argv_2118.c_str());	
			}
		}

		// argv_2274 the 'dysinfect' function argv_2297 & linked by the kernel
		if (argv_2072 == argv_2182) {
			argv_2072 = argv_1661 (argv_2175, argv_1301.c_str(), &fn_addr);
			if (argv_2072 == argv_2182) {
				argv_1666 = (argv_1559) fn_addr;
#if defined (__DEBUG_KERNEL_MANAGER__)
				argv_2316->argv_2323 (argv_3634, "- argv_2297 inner function : ", argv_1301.c_str());	
#endif // #if defined (__DEBUG_KERNEL_MANAGER__)
			}
			else {
				argv_2316->argv_2323 (argv_1346, "+++ ERROR: failed to argv_2274 inner function : ", argv_1301.c_str());	
			}
		}

		// argv_2274 the 'get_scan_report' function argv_2297 & linked by the kernel
		if (argv_2072 == argv_2182) {
			argv_2072 = argv_1661 (argv_2175, argv_1786.c_str(), &fn_addr);
			if (argv_2072 == argv_2182) {
				argv_1667 = (argv_1560) fn_addr;
#if defined (__DEBUG_KERNEL_MANAGER__)
				argv_2316->argv_2323 (argv_3634, "- argv_2297 inner function : ", argv_1786.c_str());	
#endif // #if defined (__DEBUG_KERNEL_MANAGER__)
			}
			else {
				argv_2316->argv_2323 (argv_1346, "+++ ERROR: failed to argv_2274 inner function : ", argv_1786.c_str());	
			}
		}

		// argv_2274 the 'kernel_NATIVE_free' function argv_2297 & linked by the kernel
		if (argv_2072 == argv_2182) {
			argv_2072 = argv_1661 (argv_2175, argv_2163.c_str(), &fn_addr);
			if (argv_2072 == argv_2182) {
				argv_1668 = (argv_1561) fn_addr;
#if defined (__DEBUG_KERNEL_MANAGER__)
				argv_2316->argv_2323 (argv_3634, "- argv_2297 inner function : ", argv_2163.c_str());	
#endif // #if defined (__DEBUG_KERNEL_MANAGER__)
			}
			else {
				argv_2316->argv_2323 (argv_1346, "+++ ERROR: failed to argv_2274 inner function : ", argv_2163.c_str());	
			}
		}

	}

////////////////////////////////////////////////////
		{
			char argv_4846[MAX_PATH];
			argv_4569 (argv_4846, MAX_PATH, "argv_936::argv_2331 - argv_2297 the 'scanning' function : 0x%X\r\n", argv_1669);
			argv_4846[MAX_PATH - 1] = '\0';	argv_4429 (argv_4846);

			argv_4569 (argv_4846, MAX_PATH, "argv_936::argv_2331 - argv_2297 the 'dysinfect' function : 0x%X\r\n", argv_1666);
			argv_4846[MAX_PATH - 1] = '\0';	argv_4429 (argv_4846);

			argv_4569 (argv_4846, MAX_PATH, "argv_936::argv_2331 - argv_2297 the 'get_scan_report' function : 0x%X\r\n", argv_1667);
			argv_4846[MAX_PATH - 1] = '\0';	argv_4429 (argv_4846);

			argv_4569 (argv_4846, MAX_PATH, "argv_936::argv_2331 - argv_2297 the 'kernel_NATIVE_free' function : 0x%X\r\n", argv_1668);
			argv_4846[MAX_PATH - 1] = '\0';	argv_4429 (argv_4846);
		}
////////////////////////////////////////////////////


	if (argv_2072 == argv_2182) {
		argv_2072 = argv_2162;
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_936	
// @@
// @@ FUNCTION		:	argv_2330			
// @@
// @@ INPUT			:
// @@ _fn_name: argv_876: argv_3557 of the function whose argv_665 is to
// @@   be extracted from kernel library.
// @@
// @@ OUTPUT		:	none
// @@ _fn_addr: argv_2338&: argv_665 of the function that was looked up.
// @@    it is set to NULL if lookup failed.	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_2162 if success,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to lookup the argv_665 of the function
// @@ whose argv_3557 is given as the '_fn_name' parameter from the
// @@ kernel library which was previously argv_2297 by a call to 
// @@ the 'argv_2284' function.
// @@
// @@ CONTRACT 		:	
// @@ - kernel library should have been succesfully argv_2297
// @@   using the 'argv_2284' prior to this call.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_936::argv_2330 (argv_876 _fn_name, argv_2338& _fn_addr) {
	argv_4536 argv_2072 = argv_2162; 
	_fn_addr = NULL;

	if (argv_1989 == NULL) {
		argv_2072 = argv_2151;
	}
	else if ((_fn_name == NULL) || (strlen (_fn_name) == 0)) {
		argv_2072 = argv_2152;
	}
	else { // all pre-conditions are met, ok to proceed
			#if defined (__LINUX_OS__)
				_fn_addr = (argv_2338) dlsym (argv_1989, _fn_name);
			#endif // #if defined (__LINUX_OS__)		
			#if defined (__WIN32_OS__) 
				_fn_addr = (argv_2338) GetProcAddress (argv_1989, _fn_name);
			#endif // #if defined (__WIN32_OS__) 
			
		if (_fn_addr == NULL) {
			#if defined (__WIN32_OS__) 
				argv_2214 = GetLastError ();
			#endif // #if defined (__WIN32_OS__) 
			#if defined (__LINUX_OS__)
				argv_2214 = errno;
			#endif // #if defined (__LINUX_OS__)
			argv_2072 = argv_2156;
		}
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_936	
// @@
// @@ FUNCTION		:	argv_1768			
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:
// @@ _last_error: argv_4536&: the error argv_976 of the last error that
// @@   has occured.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_2162 if success,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_1397 the last error that occured.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_936::argv_1768 (argv_4536& _last_error) {
	argv_4536 argv_2072 = argv_2162;
	_last_error = argv_2214;
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_936	
// @@
// @@ FUNCTION		:	argv_1242			
// @@
// @@ INPUT			:	
// @@ _iret: argv_4536 : the return argv_976 of the function whose argv_4406
// @@   is to be displayed.
// @@
// @@ _fn_name: argv_876: argv_3557 of the function whose argv_4406 is to 
// @@   be displayed.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_2162 if success,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_1235 the argv_4406 of the argv_2274 
// @@ operation for the function whose argv_3557 is given as the 
// @@ '_fn_name' parameter, to argv_1235 the argv_4406, the '_iret'
// @@ parameter is used to determine whether the argv_2274 of this
// @@ function has failed or not.
// @@ 
// @@ Notice that in case of success, no argv_2457 is displayed
// @@ if the kernel manager is not in debug mode.
// @@
// @@ CONTRACT 		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_936::argv_1242 (argv_4536 _iret, argv_876 _fn_name) {
	argv_4536 argv_2072 = argv_2162;
	if (argv_2316 != NULL) {
		if (_iret !=  argv_2162) {
			argv_2316->argv_2323 (argv_1346, "+++ ERROR: argv_936::init - failed to argv_2274 function : ", _fn_name);	
		}
#if defined (__DEBUG_KERNEL_MANAGER__)
		else {
			argv_2316->argv_2323 (argv_1346, "- argv_2297 function : ", _fn_name);	
		}
#endif // #if defined (__DEBUG_KERNEL_MANAGER__)
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_936	
// @@
// @@ FUNCTION		:	argv_1243			
// @@
// @@ INPUT			:
// @@ _iret: argv_4536 : the return argv_976 of the function whose argv_4406
// @@   is to be displayed.
// @@
// @@ _fn_name: argv_876: argv_3557 of the function whose argv_4406 is to 
// @@   be displayed.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_2162 if success,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ this function permits to argv_1235 the argv_4406 of the function
// @@ whose argv_3557 is given as the '_fn_name' parameter using the
// @@ '_iret' parameter which is the argv_4979 returned by the function 
// @@ '_fn_name'.
// @@
// @@ Notice that in case of success, no argv_2457 is displayed
// @@ if the kernel manager is not in debug mode.
// @@
// @@ CONTRACT 		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_936::argv_1243 (argv_876 _fn_name, argv_4536 _iret) {
	if (argv_2316 != NULL) {
		char argv_4846[MAX_PATH];
		if (_iret !=  argv_2162) {
			string serror = argv_1344 (_iret);
			argv_4569 (argv_4846, MAX_PATH, "+++ ERROR: kernel_manager - function '%s' failed ! (%s)", _fn_name, serror.c_str());
			argv_4846[MAX_PATH - 1] = '\0';
			argv_2316->argv_2323 (argv_1346, argv_4846);	
		}
		else {
#if defined (__DEBUG_KERNEL_MANAGER__)
			argv_4569 (argv_4846, MAX_PATH, "kernel_manager - function '%s'...[SUCCESS]", _fn_name);
			argv_4846[MAX_PATH - 1] = '\0';
			argv_2316->argv_2323 (argv_3634, argv_4846);	
#endif // #if defined (__DEBUG_KERNEL_MANAGER__)
		}
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_936	
// @@
// @@ FUNCTION		:	argv_4248			
// @@
// @@ INPUT			:	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_2162 if success,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to set up the names of :
// @@ - the kernel's configuration argv_1474
// @@ - the kernel's log directory.
// @@ - the kernel's plugin directory
// @@ - the kernel's dll directory
// @@ The actual scheme being :
// @@ argv_4420/PLUGIN
// @@ argv_4420/DLL
// @@ argv_4420/LOG
// @@
// @@ CONTRACT 		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_936::argv_4248 () {
	argv_4536 argv_2072 = argv_2162;

	argv_1085		= argv_4420	+ argv_4502 + "conf_kernel.txt";
	argv_2312		= argv_4420	+ argv_4502 + "LOG";
	cerr << "@@1: argv_4420 = " << argv_4420 << endl;
	cerr << "@@1: argv_1275 = " << argv_1275 << endl;
	cerr << "@@1: argv_4502 = " << argv_4502 << endl;
	argv_1275		= argv_4420	+ argv_4502 + "DLL";
	cerr << "@@2: argv_1275 = " << argv_1275 << endl;
	argv_3892	= argv_4420	+ argv_4502 + "PLUGIN";

	argv_1243 ("argv_4248", argv_2072);
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_936	
// @@
// @@ FUNCTION		:	argv_2329			
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_2162 if success,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to lookup argv_665 of all necessary
// @@ functions that are exported by the kernel library.
// @@
// @@ CONTRACT 		:	
// @@ - kernel library should have succesfully been argv_2297
// @@   prior to this call.	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_936::argv_2329 () {
	argv_4536	argv_2072		= argv_2162;
	argv_2338	generic_ptr	= NULL;
	if (argv_1989 == NULL) {
		argv_2072 = argv_2151;
	}
	
	if (argv_2072 == argv_2162) { 
		argv_2072 = argv_2330 ("construct_kernel", generic_ptr);
		argv_1653 = (argv_1523) generic_ptr; 	
		argv_1242 (argv_2072, "construct_kernel");
	}

	if (argv_2072 == argv_2162) {
		argv_2072 = argv_2330 ("argv_1234", generic_ptr);
		argv_1656 = (argv_1532) generic_ptr;
		argv_1242 (argv_2072, "argv_1234");
	}

	if (argv_2072 == argv_2162) {
		argv_2072 = argv_2330 ("argv_822", generic_ptr);
		argv_1650 = (argv_1513) generic_ptr;
		argv_1242 (argv_2072, "argv_822");
	}
	
	if (argv_2072 == argv_2162) {
		argv_2072 = argv_2330 ("argv_4532", generic_ptr);
		argv_1711 = (argv_1646) generic_ptr;
		argv_1242 (argv_2072, "argv_4532");
	}
	
	if (argv_2072 == argv_2162) {
		argv_2072 = argv_2330 ("get_kernel_version", generic_ptr);
		argv_1660 = (argv_1547) generic_ptr;
		argv_1242 (argv_2072, "get_kernel_version");
	}
	
	if (argv_2072 == argv_2162) {
		argv_2072 = argv_2330 ("argv_1767", generic_ptr);
		argv_1659 = (argv_1546) generic_ptr;
		argv_1242 (argv_2072, "argv_1767");
	}
	
	if (argv_2072 == argv_2162) {
		argv_2072 = argv_2330 ("argv_1784", generic_ptr);
		argv_1661 = (argv_1548) generic_ptr;
		argv_1242 (argv_2072, "argv_1784");
	}

	argv_1243 ("argv_2329", argv_2072);
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_936	
// @@
// @@ FUNCTION		:	construct_kernel			
// @@
// @@ INPUT			:	
// @@ _root_folder: argv_876: base folder of the kernel.
// @@ 
// @@ _dll_name: argv_876: argv_3557 of the kernel library argv_1424.
// @@	
// @@ _log_ptr: argv_963 *: argv_665 of the log argv_3656 to use.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_2162 if success,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ this function is an abstract concept of the construct operation.
// @@ It performs the following steps :
// @@ - argv_4243 the necessary directories.
// @@ - argv_2274 the kernel's DLL. 
// @@ - argv_2274 all external symbols exported by the DLL.
// @@ - construct the kernel.
// @@
// @@ CONTRACT 		:	
// @@ - '_dll_name'		parameter should not be a NULL pointer.
// @@ - '_root_folder'	parameter should not be a NULL pointer.
// @@ - '_log_ptr'		parameter should not be a NULL pointer.
// @@ - kernel should not have been constructed yet.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_936::construct_kernel (argv_876 _root_folder, argv_876 _dll_name, argv_963 * _log_ptr) {
	argv_4536 argv_2072 = argv_2162;
	if (argv_4622 != argv_2160) {
		argv_2072 = argv_2147;
	}
	else if ((_dll_name == NULL) || (_root_folder == NULL) || (_log_ptr == NULL)) {
		argv_2072 = argv_2152;
	}
	else { // parameters are OK
		argv_2316		= _log_ptr;
		argv_4420	= _root_folder;

		// argv_4243 the necessary directories
		argv_2072 = argv_4248 ();

		if (argv_2072 == argv_2162) {
			// argv_2274 the kernel's DLL 
			argv_2072 = argv_2284 (_dll_name);
		}

		if (argv_2072 == argv_2162) {
			// argv_2274 all external symbols exported by the DLL.
			argv_2072 = argv_2329 ();
		}

		// construct the kernel itself (create argv_3677 instance of the kernel)
		if (argv_2072 == argv_2162) {
			argv_2175 = argv_1653 ();
			if (argv_2175 == NULL) {
				argv_2072 = argv_2153;
			}
			else { // operation fully succeeded, change the argv_4622
				argv_4622 = argv_2159;
			}
			argv_1243 ("argv_1653", argv_2072);
		}
	}

	if (argv_2072 == argv_2182) { // remap error argv_976
		argv_2072 = argv_2162; 
	}
	argv_1243 ("construct_kernel", argv_2072);
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_936	
// @@
// @@ FUNCTION		:	argv_822			
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_2162 if success,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ this function is an abstract concept of the argv_818 operation.
// @@ It performs the following steps :
// @@ - argv_818 the kernel
// @@ - argv_2274 the inner functions argv_2297 and linked by the kernel.
// @@ 	- argv_2274 inner function : "scan".
// @@ 	- argv_2274 inner function : "get_scan_result".
// @@ 	- argv_2274 inner function : "dysinfect".
// @@
// @@ CONTRACT 		:	
// @@ - kernel should have been succesfully constructed
// @@   prior to this call.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_936::argv_4429 (argv_876 _msg) {
#if defined (__STRONG_DEBUG_KERNEL__)
	fprintf (argv_1512, "%s\r\n", _msg);
	fclose (argv_1512); 
	argv_1512 = fopen ("C:\\Ckernel_manager_log.txt", "ab");
#endif // #if defined (__STRONG_DEBUG_KERNEL__)
}


argv_4536 argv_936::argv_822 () {

#if defined (__STRONG_DEBUG_KERNEL__)	
	argv_1512 = fopen ("C:\\Ckernel_manager_log.txt", "wb");
	MessageBox (NULL, "open blackbox log : C:\\Ckernel_manager_log.txt", "", MB_OK);
#endif // #if defined (__STRONG_DEBUG_KERNEL__)
	/////////////////////////////////////

	argv_4536 argv_2072 = argv_2162;
	if (argv_4622 != argv_2159) {
		argv_2072 = argv_2147;
	}
	else { // valid argv_4622 for this operation
		argv_2072 = argv_1650 (argv_2175, argv_1085.c_str(), argv_2312.c_str(), argv_1275.c_str(), argv_3892.c_str(), argv_2117);
	}

	if (argv_2072 == argv_2182) { // remap error argv_976
		argv_2072 = argv_2162;
	}
	argv_1243 ("argv_1650", argv_2072);

	if (argv_2072 == argv_2162) {
		argv_2072 = argv_2331 ();
		if (argv_2072 == argv_2162) {
			argv_4622 = argv_2158;
		}
		argv_1243 ("argv_2331", argv_2072);
	}

	argv_1243 ("argv_822", argv_2072);
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_936	
// @@
// @@ FUNCTION		:	argv_4532			
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_2162 if success,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ this function is an abstract concept of the argv_4531 operation.
// @@ It performs the following steps :
// @@ - argv_4531 the kernel using the "argv_4531" exported function.
// @@
// @@ CONTRACT 		:
// @@ - kernel should have been constructed and booted
// @@   succesfully prior to this call.	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_936::argv_4532 () {
	argv_4536 argv_2072 = argv_2162;
	if (argv_4622 != argv_2158) {
		argv_2072 = argv_2147;
	}
	else { // valid argv_4622 for this operation
		argv_2072 = argv_1711 (argv_2175);
	}

	if (argv_2072 == argv_2182) { // remap error argv_976
		argv_4622	= argv_2161;
		argv_2072	= argv_2162;
	}
	argv_1243 ("argv_4532", argv_2072);

#if defined (__STRONG_DEBUG_KERNEL__)
	fclose (argv_1512);
#endif // #if defined (__STRONG_DEBUG_KERNEL__)
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_936	
// @@
// @@ FUNCTION		:			
// @@
// @@ INPUT			:	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_2162 if success,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ this function is an abstract concept of the argv_1232 operation.
// @@ It performs the following steps :
// @@ - argv_1232 the kernel.
// @@ - unload the kernel's DLL.
// @@
// @@ CONTRACT 		:	
// @@ - the kernel should have been succesfully constructed,
// @@   booted, and argv_4531 prior to this call.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_936::argv_1234 () {
	argv_4536 argv_2072 = argv_2162;
	if (argv_4622 != argv_2161) {
		argv_2072 = argv_2147;
	}
	else { // valid argv_4622 for this operation
		argv_2072 = argv_1656 (argv_2175);
		if (argv_2072 == argv_2182) {
			argv_2072 = argv_2162;
		}

		argv_1243 ("argv_1234", argv_2072);

		if (argv_2072 == argv_2162) {
			argv_2072 = argv_4935 ();
			if (argv_2072 == argv_2162) {
				argv_4622 = argv_2160;
			}
		}
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_936	
// @@
// @@ FUNCTION		:	argv_4458		
// @@
// @@ INPUT			:
// @@ _filename: argv_876: argv_3557 of the argv_1424 to scan.
// @@
// @@ _dysinfect: true if a dysinfection must be performed in case
// @@   the argv_1424 to scan is infected.
// @@
// @@ OUTPUT		:
// @@ _infected: bool&: set to true if the argv_1424 scanned was infected,
// @@                   false otherwise.
// @@
// @@ _dysinfect_possible: bool&: set to true if the dysinfection of
// @@   the scanned argv_1424 is possible,
// @@   false otherwise.
// @@
// @@ _virus_name: argv_1108&: argv_3557 of the virus in case of infection. 
// @@   Notice that the necessary memory to contain the virus argv_3557
// @@   is allocated by the kernel.
// @@ 
// @@ _dysinfect_done: bool& : set to true if dysinfection step was 
// @@   performed, false otherwise.
// @@    
// @@ _dysinfect_success: bool&: set to true if dysinfection step was
// @@   performed and succeeded. set to false otherwise.   
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_2162 if success,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permit to scan the argv_1424 whose argv_3557 is given
// @@ as the '_filename' parameter. Notice that this argv_1424 must be
// @@ located on the argv_1424 argv_4749.
// @@ If the argv_1424 is infected, and if the '_dysinfect' flag was
// @@ set to true, a dysinfection is performed.
// @@
// @@ Notice : in case of infection, the kernel allocates enough
// @@   memory and save this memory argv_665 into the argv_4406 
// @@   argument '_virus_name'.
// @@
// @@ CONTRACT 		:	
// @@ - kernel must have been succesfully constructed and booted
// @@   prior to this call.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_936::argv_4458 (argv_876 _filename, bool _dysinfect, bool& _infected, bool& _dysinfect_possible, argv_1108& _virus_name, bool& _dysinfect_done, bool& _dysinfect_success, argv_4536& _dysinfect_success_code) {
	argv_4536 argv_2072			= argv_2162;
	_infected			= false;
	_dysinfect_done		= false;
	_dysinfect_success	= false;
	_virus_name			= NULL;
	_dysinfect_possible	= false;
	argv_4469		= NULL;

#if defined (__DEBUG_KERNEL_MANAGER__)
	argv_2316->argv_2323 (argv_1191, "kernel manager - scan argv_1424 : '", _filename, "'");
#endif // #if defined (__DEBUG_KERNEL_MANAGER__)

	////////////////////////////////////////////////
	////////////////////////////////////////////////
	////////////////////////////////////////////////
//	MessageBox (NULL, "argv_936::argv_4458 - scan disabled (DEBUG PURPOSE)", "", MB_ICONWARNING);
//	return (argv_2162);
	////////////////////////////////////////////////
	////////////////////////////////////////////////
	////////////////////////////////////////////////

	if (argv_4622 != argv_2158) {
		argv_2072 = argv_2147;
	}
	else { // valid argv_4622 for this operation
		// scan the argv_1424 
#if defined (__STRONG_DEBUG_KERNEL__)
		{ fprintf (argv_1512, "argv_936::argv_4458 - @1\r\n"); fclose (argv_1512);  argv_1512 = fopen ("C:\\Ckernel_manager_log.txt", "ab"); }
#endif // #if defined (__STRONG_DEBUG_KERNEL__)
		argv_2072 = argv_1669 (argv_2117, (argv_1108) _filename, _infected, argv_4469);
#if defined (__STRONG_DEBUG_KERNEL__)
		{ fprintf (argv_1512, "argv_936::argv_4458 - @2\r\n"); fclose (argv_1512);  argv_1512 = fopen ("C:\\Ckernel_manager_log.txt", "ab"); }
#endif // #if defined (__STRONG_DEBUG_KERNEL__)

		if (argv_2072 != argv_2182) {
			argv_1243 ("argv_1669", argv_2072);
		}
		else { // scan succeeded
			if (_infected == false) { // argv_1424 is not infected
#if defined (__STRONG_DEBUG_KERNEL__)
			{ fprintf (argv_1512, "argv_936::argv_4458 - @3\r\n"); fclose (argv_1512);  argv_1512 = fopen ("C:\\Ckernel_manager_log.txt", "ab"); }
#endif // #if defined (__STRONG_DEBUG_KERNEL__)

#if defined (__DEBUG_KERNEL_MANAGER__)
				argv_2316->argv_2323 (argv_3634, "kernel manager - scan argv_1424 : argv_1424 is not infected");	
#endif // #if defined (__DEBUG_KERNEL_MANAGER__)
			}
			else { // argv_1424 is infected, let's retrieve the virus' argv_3557
#if defined (__DEBUG_KERNEL_MANAGER__)
				argv_2316->argv_2323 (argv_3634, "kernel manager - scan argv_1424 : argv_1424 is infected");	
#endif // #if defined (__DEBUG_KERNEL_MANAGER__)
				argv_4883 dysinfection_flag = DYSINFECT_UNDEFINED_VALUE;
				argv_2072 = argv_1667 (argv_2117, argv_4469, _virus_name, dysinfection_flag);
				if (argv_2072 == argv_2182) {
					if (dysinfection_flag == DYSINFECT_POSSIBLE) {
						_dysinfect_possible = true;
					}

					if ((_dysinfect == true) && (dysinfection_flag == DYSINFECT_POSSIBLE)) {
						_dysinfect_done		= true;
						_dysinfect_success	= true;
						argv_2072 = argv_1666 (argv_2117, argv_4469, (argv_1108) _filename, _dysinfect_success_code);
						if (argv_2072 != argv_2182) {
							_dysinfect_success = false;
						}
					}
				}
			}
		}
	}

	// deallocate the scan argv_1178 that were allocated by the plugin (if necessary)
#if defined (__STRONG_DEBUG_KERNEL__)
	{ fprintf (argv_1512, "argv_936::argv_4458 - @4\r\n"); fclose (argv_1512);  argv_1512 = fopen ("C:\\Ckernel_manager_log.txt", "ab"); }
	{ fprintf (argv_1512, "argv_936::argv_4458 - argv_1665 = 0x%X\r\n", argv_1665); fclose (argv_1512);  argv_1512 = fopen ("C:\\Ckernel_manager_log.txt", "ab"); }
#endif // #if defined (__STRONG_DEBUG_KERNEL__)
	argv_2072 = argv_1665 (argv_2117);
#if defined (__STRONG_DEBUG_KERNEL__)
	{ fprintf (argv_1512, "argv_936::argv_4458 - @5\r\n"); fclose (argv_1512);  argv_1512 = fopen ("C:\\Ckernel_manager_log.txt", "ab"); }
#endif // #if defined (__STRONG_DEBUG_KERNEL__)
	if (argv_2072 != argv_2182) {
		string serror = argv_1344 (argv_2072);
		char argv_4846[MAX_PATH];
		argv_4569 (argv_4846, MAX_PATH, "+++ ERROR: kernel manager - kernel_deallocate_all_atoms failed ! (argv_1343=%s)", serror.c_str());
		argv_2316->argv_2323 (argv_3634, argv_4846);	
	}
#if defined (__DEBUG_KERNEL_MANAGER__)
	else {
		argv_2316->argv_2323 (argv_3634, "kernel manager - kernel_deallocate_all_atoms...[SUCCESS]");
	}
#endif

	if (argv_2072 == argv_2182) { // remap error argv_976
		argv_2072 = argv_2162;
#if defined (__DEBUG_KERNEL_MANAGER__)
		argv_2316->argv_2323 (argv_3634, "kernel manager - scan argv_1424...[SUCCESS]");	
#endif // #if defined (__DEBUG_KERNEL_MANAGER__)
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1424
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
