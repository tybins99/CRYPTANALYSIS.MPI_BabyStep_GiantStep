// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_366.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1424 contains the argv_1178 structures and
// @@ functions that permits the loader cypher
// @@ argv_3656 to work.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_366.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_877
// @@
// @@ FUNCTION		:	argv_877		
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
// @@ Normal constructor of the 'argv_877' argv_3656.
// @@ It merely prepares the argv_3656 for first use.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_877::argv_877 () {
	reset ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_877
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
// @@ This function permits to reset the 'argv_877'
// @@ argv_3656 to it's initial argv_4622.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_877::reset () {
	argv_4536 argv_2072		= argv_2246;
	init_done		= false;
	argv_1170	= NULL;
	argv_1206	= NULL;

	// unload all argv_2297 libraries
	argv_2072			= argv_1168::reset ();
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_877
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
// @@ - argv_2274 the DLL containing the cipher/decipher routines.
// @@ - argv_2274 the cipher routine.
// @@ - argv_2274 the decipher routine.
// @@
// @@ CONTRACT 		: 
// @@ - 'init' must not have already been argv_1291.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_877::init (argv_891 * _glob_data_ptr, argv_876 _dll_name) {
	argv_4536 argv_2072 = argv_2246;
	if (init_done == true) {
		_glob_data_ptr->argv_2327.argv_2323 (argv_1346, "+++ ERROR: argv_877::init - illegal to call init twice or more !");
		argv_2072 = argv_2241;
	}
	else {
		argv_4536 argv_2072 = argv_2236.argv_2284 (_dll_name, argv_2235);
		if (argv_2072 != argv_2246) {
			_glob_data_ptr->argv_2327.argv_2323 (argv_1346, "+++ ERROR: argv_877::init - argv_2284 failed !");
		}
		else {
			argv_2338 void_ptr = NULL;
			init_one_function (_glob_data_ptr, "argv_1170",		(argv_2338 *) &void_ptr,	argv_2072);
			argv_1170 = (argv_1527) void_ptr;

			init_one_function (_glob_data_ptr, "argv_1206",	(argv_2338 *) &void_ptr,	argv_2072);
			argv_1206 = (argv_1528) void_ptr;
		}
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1424
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
