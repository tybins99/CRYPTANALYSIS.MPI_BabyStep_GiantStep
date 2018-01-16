// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_309.cpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1424 contains the argv_1178 structures and
// @@ functions that permits the general loader
// @@ argv_3656 to work.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_368.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1168
// @@
// @@ FUNCTION		:	argv_1168		
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
// @@ Normal constructor of the 'argv_1168' argv_3656.
// @@ It merely prepares the argv_3656 for first use.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_1168::argv_1168 () {
	reset ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1168
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
// @@ argv_4536 : argv_2246 if operation was succesful,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to reset the 'argv_1168'
// @@ argv_3656 to it's initial argv_4622.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_1168::reset () {
	argv_4536 argv_2072 = argv_2246;
	argv_2072 = argv_2236.reset ();
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1168
// @@
// @@ FUNCTION		:	init_one_function		
// @@
// @@ INPUT			:
// @@ _glob_data_ptr: argv_891 *: pointer on the argv_3656 containing
// @@     all the global argv_1178.
// @@
// @@ _fn_name: argv_876: argv_3557 of the function whose argv_665 is to be
// @@     retrieved.
// @@
// @@ OUTPUT		:
// @@ _fn_ptr_ptr: argv_2338 *: contains the argv_665 of the function whose
// @@     argv_3557 was passed as a parameter,
// @@     NULL in case of failure.
// @@
// @@ IO			:	
// @@ _iret: argv_4536&: the argv_4979/argv_4406 argument that comes from the previous
// @@     call to this function, and that may be update by the argv_1148 call
// @@     to this function.	
// @@	
// @@ RETURN VALUE	:	none	
// @@	
// @@ DISCLOSURE	:	protected
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to lookup the argv_665 of the the function
// @@ '_fn_name' from the currently argv_2297 DLL, and to return it's
// @@ argv_665 into '_fn_ptr_ptr' argv_4406 parameter.
// @@ Notice that if a previous call to this function has failed, 
// @@ in other words if the '_iret' parameter is different of
// @@ argv_2246, then nothing is argv_1291.
// @@ If the '_iret' parameter is equal to argv_2246, then
// @@ the function '_fn_name' is lookup up and the argv_4406 (success or
// @@ failure is saved by updating the argv_4979 of the argv_4979/argv_4406
// @@ '_iret' parameter.
// @@
// @@ CONTRACT 		:	
// @@ - the '_iret' parameter must be equal to argv_2246.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_1168::init_one_function (argv_891 * _glob_data_ptr, argv_876 _fn_name, argv_2338 * _fn_ptr_ptr, argv_4536& _iret) {
	if (_iret == argv_2246) {
		_iret = argv_2236.argv_1784 (argv_2235, _fn_name, _fn_ptr_ptr);
		if (_iret != argv_2246) {
			string serror = argv_1344 (_iret);
			char argv_4846[MAX_PATH];
			argv_4569 (argv_4846, MAX_PATH, "+++ ERROR: argv_1141::init_one_function - failed for function : %s (%s)", _fn_name, serror.c_str());
			argv_4846[MAX_PATH - 1] = '\0';
			_glob_data_ptr->argv_2327.argv_2323 (argv_1346, argv_4846);
		}
		else {
#if defined (DEBUG_SYSTEM_LOADER)
			char argv_4846[MAX_PATH];
			argv_4569 (argv_4846, MAX_PATH, "retrieved argv_665 of function : %s : %X", _fn_name, *_fn_ptr_ptr);
			argv_4846[MAX_PATH - 1] = '\0';
			_glob_data_ptr->argv_2327.argv_2323 (argv_1191, argv_4846);
#endif // #if defined (DEBUG_SYSTEM_LOADER)
		}
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ global declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
