// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_306.cpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1424 contains the argv_1178 structures and
// @@ functions that permits the loader argv_1063
// @@ argv_3656 to work.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_365.hpp"




// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_870
// @@
// @@ FUNCTION		:	argv_870		
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
// @@ Normal constructor of the 'argv_870' argv_3656.
// @@ It merely prepares the argv_3656 for first use.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_870::argv_870 () {
	reset ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_870
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
// @@ This function permits to reset the 'argv_870'
// @@ argv_3656 to it's initial argv_4622.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_870::reset () {
	argv_4536 argv_2072			= argv_2246;
	init_done			= false;
	argv_1066		= NULL;
	argv_4912	= NULL;

	// unload all argv_2297 libraries
	argv_2072				= argv_1168::reset ();
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_870
// @@
// @@ FUNCTION		:	init		
// @@
// @@ INPUT			:
// @@ _glob_data_ptr: argv_891 *: pointer on the argv_3656 containing
// @@     all the global argv_1178.
// @@
// @@ _dll_name: argv_876: argv_3557 of the DLL containing the argv_1063/argv_4910
// @@     routines.
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
// @@ This function permits to :
// @@ - argv_2274 the DLL containing the argv_1063/argv_4910 routines.
// @@ - argv_2274 the argv_1063 routine.
// @@ - argv_2274 the argv_4910 routine.
// @@
// @@ CONTRACT 		: 
// @@ - 'init' must not have already been argv_1291.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_870::init (argv_891 * _glob_data_ptr, const char * _dll_name) {
	argv_4536 argv_2072 = argv_2246;
	if (init_done == true) {
		_glob_data_ptr->argv_2327.argv_2323 (argv_1346, "+++ ERROR: argv_870::init - illegal to call init twice or more !");
		argv_2072 = argv_2241;
	}
	else {
		argv_4536 argv_2072 = argv_2236.argv_2284 (_dll_name, argv_2235);
		if (argv_2072 != argv_2246) {
#if defined (__LINUX_OS__)
			string load_er_str;
			argv_4536   load_er_SI32;
			argv_2236.argv_1768 (load_er_SI32, load_er_str);
#endif // #if defined (__LINUX_OS__)
			string serror = argv_1344 (argv_2072);
			_glob_data_ptr->argv_2327.argv_2323 (argv_1346, "+++ ERROR: while loading dll : ", _dll_name);
			_glob_data_ptr->argv_2327.argv_2323 (argv_1346, "+++ ERROR: argv_870::init - argv_2284 failed ! - ", serror.c_str());
#if defined (__LINUX_OS__)
			_glob_data_ptr->argv_2327.argv_2323 (argv_1346, "+++ ERROR: ", load_er_str.c_str());
#endif // #if defined (__LINUX_OS__)
		}
		else {
			argv_2338 void_ptr = NULL;
			init_one_function (_glob_data_ptr, "argv_1066",	(argv_2338 *) &void_ptr,		argv_2072);
			argv_1066 = (argv_1521) void_ptr;
			
			init_one_function (_glob_data_ptr, "argv_4912",	(argv_2338 *) &void_ptr,		argv_2072);
			argv_4912 = (argv_1648) void_ptr;
		}
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1424
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
