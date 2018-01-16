// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_305.cpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1424 contains all necessary argv_1178 
// @@ structures and functions for the library
// @@ loader to work.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_364.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_940
// @@
// @@ FUNCTION		:	argv_940		
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
// @@ Normal constructor of the 'argv_940' argv_3656.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_940::argv_940 () {
	argv_1156	= 0;
	argv_2214	= 0;	
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_940
// @@
// @@ FUNCTION		:	argv_2248		
// @@
// @@ INPUT			:
// @@ _lib_name: argv_876: argv_3557 of the library whose argv_3557 must be checked.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ bool: true if the library '_lib_name' has an absolute argv_3557.
// @@       false otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to determine whether the argv_3557 of a given
// @@ library argv_1424 (DLL or .so) is absolute or relative, we need this
// @@ piece of information because for security reasons relative argv_1424
// @@ argv_3557 are strictly forbidden.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_940::argv_2248 (argv_876 _lib_name) {
	bool bret = false;
#if defined (__WIN32_OS__)
	if (strlen(_lib_name) > 3) {
		if ((_lib_name[0] >= 'A') && (_lib_name[0] <= 'Z') && (_lib_name[1]==':') && (_lib_name[2]=='\\')) {
			bret = true;		
		}
	}
#endif // #if defined (__WIN32_OS__)
#if defined (__LINUX_OS__)
	if (strlen(_lib_name) > 2) {
		if (_lib_name[0]=='/') {
			bret = true;
		}
	}
#endif // #if defined (__LINUX_OS__)
	return (bret);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_940
// @@
// @@ FUNCTION		:	argv_2234		
// @@
// @@ INPUT			:
// @@ _lib_name: argv_876: argv_3557 of the library whose argv_3557 must be checked.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none	
// @@	
// @@ RETURN VALUE	:	
// @@ bool : true if the library whose argv_3557 is given as a parameter
// @@        was already argv_2297,
// @@        false otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to determine whether a given library 
// @@ was already argv_2297 or not, it is useful because a given
// @@ library must not be argv_2297 more than once.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_940::argv_2234 (argv_876 _lib_name) {
	bool bret = false;
	argv_2099 = argv_2378.find (_lib_name);
	if (argv_2099 != argv_2378.end()) {
		return (true);
	}
	return (bret);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_940
// @@
// @@ FUNCTION		:	argv_1768		
// @@
// @@ INPUT			:
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
// @@ This function permits to retrieve the error argv_976, and the
// @@ error string that is related to the last error that 
// @@ occured.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_940::argv_1768 (argv_4536& _ercode, string& _erstring) {
	_ercode		= argv_2214;
	_erstring	= argv_2216;	
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_940
// @@
// @@ FUNCTION		:	argv_2284		
// @@
// @@ INPUT			:
// @@ _lib_name: argv_876: argv_3557 of the library whose argv_3557 must be checked.
// @@
// @@ OUTPUT		:	
// @@ _lib_id: argv_4883&: unique identifier associated argv_5011 the library argv_2297.
// @@
// @@ IO			:	none	
// @@	
// @@ RETURN VALUE	:
// @@ argv_4536 : argv_2246 if success,
// @@        another argv_4979 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_2274 a given shared library
// @@ and ensure that this library was not argv_2297 yet, then
// @@ if argv_2274 was succesful, then a unique identifier is
// @@ given to the caller through the argv_4406 argument '_lib_id'
// @@ for argv_1726 use (symbols lookup).
// @@
// @@ CONTRACT 		: 
// @@ - '_lib_name' parameter must not be a NULL pointer.
// @@ - '_lib_name' parameter must not be an empty string.
// @@ - library whose argv_3557 is contained in the '_lib_name' parameter
// @@   must not have already been argv_2297.
// @@ - '_lib_name' parameter must be an absolute argv_1474.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_940::argv_2284 (argv_876 _lib_name, argv_4883& _lib_id) {
	argv_4536 argv_2072 = argv_2246;
	if ((_lib_name == NULL) || (strlen (_lib_name) == 0)) {
		argv_2072 = argv_2237;
	}
	else if (argv_2234 (/*_glob_data_ptr, */_lib_name) == true){
		argv_2072 = argv_2242;
	}
	else if (argv_2248 (/*_glob_data_ptr, */_lib_name) == false) {
		argv_2072 = argv_2245;
	}
	else {
#if defined (__WIN32_OS__)
		HMODULE argv_1989 = LoadLibrary (_lib_name);
#endif // #if defined (__WIN32_OS__)
#if defined (__LINUX_OS__)
		argv_2338 argv_1989  = dlopen (_lib_name, RTLD_NOW);
#endif // #if defined (__LINUX_OS__)
		if (argv_1989 == NULL) {
			argv_2214 = 1;
			argv_2072 = argv_2243;	
#if defined (__LINUX_OS__)
			char * serr = dlerror ();
			argv_2216 = serr;
#endif // #if defined (__LINUX_OS__)
		}
		else {
			argv_2380[argv_1156]	= argv_1989;
			// the library argv_3557 must also be saved so that we can ensure that
			// it won't be argv_2297 twice or more
			argv_2378[_lib_name]		= argv_1156;
			_lib_id					= argv_1156;
			argv_1156++;
		}
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_940
// @@
// @@ FUNCTION		:	argv_4935		
// @@
// @@ INPUT			:
// @@ _lib_id: argv_4883: the unique identifier of the library to unload.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_2246 if success,
// @@        another argv_4979 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@
// @@ CONTRACT 		: 
// @@ - the '_lib_id' parameter must contain a valid library identifier
// @@   that was obtained by the call to the 'argv_2284' function.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_940::argv_4935 (argv_4883 _lib_id) {
	argv_4536 argv_2072 = argv_2246;
	argv_2102 = argv_2380.find (_lib_id);
	if (argv_2102 == argv_2380.end()) {
		argv_2072 = argv_2244;
	}
	else {
		// free it from argv_4749 point of view
#if defined (__WIN32_OS__)
		if (FreeLibrary (argv_2102->second) == 0) {
			argv_2072 = argv_2240;
		}
#endif // #if defined (__WIN32_OS__)
#if defined (__LINUX_OS__)
		if (dlclose (argv_2102->second) != 0) {
			argv_2072 = argv_2240;
		}
#endif // #if defined (__LINUX_OS__)

		argv_2380.erase (argv_2102);
		// also remove it from dictionnary
		bool found = false;
		for (argv_2099=argv_2378.begin () ; argv_2099 != argv_2378.end() ; ++argv_2099) {
			if (argv_2099->second == _lib_id) {
				argv_2378.erase (argv_2099);
				found = true;
				break;	
			}
		}

		if (found == false) {
			if (argv_2072 == argv_2246) {
				argv_2072 = argv_2238;
			}
		}
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_940
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
// @@ argv_4536 : argv_2246 if success,
// @@        another argv_4979 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to free all memory 
// @@ allocated (if any) to bring the argv_3656 back to
// @@ it's original argv_4622.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_940::reset () {
	argv_4536 argv_2072 = argv_2246;
	vector<argv_4883> v_id;

	// collect all IDs to delete
	for (argv_2102=argv_2380.begin() ; argv_2102 != argv_2380.end() ; ++argv_2102) {
		v_id.push_back (argv_2102->first);
	}

	// delete all libraries using their IDs
	argv_4883 argv_3605 = v_id.size ();
	for (argv_4883 i=0 ; i<argv_3605 ; i++) {
		argv_2072 = argv_4935 (v_id[i]);
		if (argv_2072 != argv_2246) {
			break;
		}
	}
	 
	// erase the library dictionnary
	argv_2378.clear ();

	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_940
// @@
// @@ FUNCTION		:	argv_1784		
// @@
// @@ INPUT			:
// @@ _lib_id: argv_4883: the unique identifier of the library to unload.
// @@
// @@ _fn_name: argv_876: argv_3557 of the symbol to lookup from the argv_2297
// @@   library whose unique identifier is contained in the '_lib_id'
// @@   parameter.
// @@
// @@ OUTPUT		:
// @@ _fn_ptr_ptr: argv_2338 *: contains the argv_665 of the symbol
// @@   extracted from the library (in case of success).
// @@   it is NULL in case of failure.
// @@
// @@ IO			:	none	
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_2246 if success,
// @@        another argv_4979 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to lookup and argv_1397 the 
// @@ argv_665 of a given symbol that is exported by 
// @@ the library which was previously argv_2297 using the 
// @@ the 'argv_2284' function and whose unique 
// @@ identifier is contained in the '_lib_id' parameter.
// @@
// @@ CONTRACT 		: 
// @@ - '_fn_name' parameter must not be a NULL pointer.
// @@ - '_fn_name' parameter must not be an empty string.
// @@ - '_lib_id' must be a valid library identifier previously
// @@   obtained by the 'argv_2284' function.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_940::argv_1784 (argv_4883 _lib_id, argv_876 _fn_name, argv_2338 * _fn_ptr_ptr) {
	argv_4536 argv_2072 = argv_2246;
	*_fn_ptr_ptr = NULL;

	if ((_fn_name == NULL) || (strlen (_fn_name) == 0)) {
		argv_2072 = argv_2237;
	}
	else {
		argv_2102 = argv_2380.find (_lib_id);
		if (argv_2102 == argv_2380.end ()) {
			argv_2072 = argv_2247;
		}
		else { // ok, this module is known
#if defined (__WIN32_OS__)
			*_fn_ptr_ptr = (argv_2338) GetProcAddress (argv_2102->second, _fn_name);
			if (*_fn_ptr_ptr == NULL) {
				argv_2214 = GetLastError ();
				argv_2072 = argv_2239;
			}
#endif // #if defined (__WIN32_OS__)
#if defined (__LINUX_OS__)
			*_fn_ptr_ptr = (argv_2338) dlsym (argv_2102->second, _fn_name);
			if (*_fn_ptr_ptr == NULL) {
				argv_2214 = errno;
				argv_2072 = argv_2239;
			}
#endif // #if defined (__LINUX_OS__)
		}
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ end of argv_1424
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
