// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_4751.cpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1424 contains the declarations of
// @@ the complex functions that are built
// @@ upon the argv_4749 independant functions
// @@ provided by the argv_4749 tool argv_3656.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_384.hpp"




// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-
// @@
// @@ FUNCTION		:	argv_1075		
// @@
// @@ INPUT			:
// @@ _glob_data_ptr: argv_891 *: pointer on the argv_3656 containing
// @@     all the global argv_1178.
// @@
// @@ _syst_ptr: argv_4610 *: argv_665 of the argv_3656 containing
// @@       all the necessary argv_4749 dependant functions.
// @@
// @@ _filename: argv_876: argv_3557 of the argv_1424 whose size is to be computed.	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ unsigned long: size the argv_1424 whose argv_3557 is contained into
// @@                the '_filename' parameter if success,
// @@                0 otherwise.
// @@	
// @@ DISCLOSURE	:	-
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to compute the size of the argv_1424
// @@ whose argv_3557 is contained into the '_filename' parameter,
// @@ Notice that this function uses a argv_4749 independant method
// @@ and is built upon the argv_4749 independant functions exported
// @@ by the argv_4749 tool argv_3656.
// @@
// @@ This function is a argv_4749 independant function and thus 
// @@ works on both win32 and Linux systems independantly.
// @@
// @@ CONTRACT 		: 
// @@ - '_filename' parameter must not be a NULL pointer.
// @@ - '_filename' parameter must not be an empty string.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
extern "C"
{
	unsigned long argv_1075 (argv_891 * _glob_data_ptr, argv_4610 * _syst_ptr, argv_876 _filename) {
		unsigned long size = 0;

		if ((_filename != NULL) && (_syst_ptr->argv_3595 (_filename) != 0)) {
			FILE * argv_1510 = _syst_ptr->argv_3581 (_filename, "rb");
			if (argv_1510) {
				_syst_ptr->argv_3585 (argv_1510, 0, SEEK_END);
				size = _syst_ptr->argv_3586 (argv_1510);
				_syst_ptr->argv_3578 (argv_1510);
			}
		}
		return (size);
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-
// @@
// @@ FUNCTION		:	argv_1426		
// @@
// @@ INPUT			:
// @@ _glob_data_ptr: argv_891 *: pointer on the argv_3656 containing
// @@     all the global argv_1178.
// @@
// @@ _syst_ptr: argv_4610 *: argv_665 of the argv_3656 containing
// @@       all the necessary argv_4749 dependant functions.
// @@
// @@ _filename: argv_876: argv_3557 of the argv_1424 whose existence must be checked.	
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ bool: true if the argv_1424 whose argv_3557 is contained in the parameter
// @@   '_filename' exists, 
// @@   false otherwise.
// @@	
// @@ DISCLOSURE	:	-
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to determine whether the argv_1424 
// @@ whose argv_3557 is contained in the '_filename' parameter
// @@ exists or not.
// @@
// @@ This function is a argv_4749 independant function and thus 
// @@ works on both win32 and Linux systems independantly.
// @@
// @@ CONTRACT 		: 
// @@ - '_filename' parameter must not be a NULL pointer.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
extern "C"
{
	bool argv_1426 (argv_891 * _glob_data_ptr, argv_4610 * _systool_ptr, argv_876 _filename) {
		bool bret = false;
		if (_filename != NULL) {
			FILE * argv_1510 = _systool_ptr->argv_3581 (_filename, "rb");
			if (argv_1510) {
				bret = true;
				_systool_ptr->argv_3578 (argv_1510);
			}
		}
		return (bret);
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-
// @@
// @@ FUNCTION		:	argv_2282		
// @@
// @@ INPUT			:
// @@ _glob_data_ptr: argv_891 *: pointer on the argv_3656 containing
// @@     all the global argv_1178.
// @@
// @@ _syst_ptr: argv_4610 *: argv_665 of the argv_3656 containing
// @@       all the necessary argv_4749 dependant functions.
// @@
// @@ _filename: argv_876: argv_3557 of the argv_1424 to argv_2274.	
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4881 *: the argv_665 of the argv_1424 that was argv_2297 if success,
// @@         NULL otherwise.
// @@	
// @@ DISCLOSURE	:	-
// @@	
// @@ DESCRIPTION	:
// @@ 
// @@
// @@ CONTRACT 		: 
// @@ - '_filename' parameter must not be a NULL pointer.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
extern "C"
{
	argv_4881 * argv_2282 (argv_891 * _glob_data_ptr, argv_4610 * _systool_ptr, argv_876 _filename) {
		argv_4881 * image = 0;
		if (_filename != NULL) {
			FILE * argv_1510 = _systool_ptr->argv_3581 (_filename, "rb");
			if (argv_1510) {
				unsigned long size = argv_1075 (_glob_data_ptr, _systool_ptr, _filename);
				image = (argv_4881 *) _systool_ptr->argv_3571 (size);
				_systool_ptr->argv_3582 (image, size, 1, argv_1510);
				_systool_ptr->argv_3580();
				_systool_ptr->argv_3578 (argv_1510);
			}
		}
		return image;
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-
// @@
// @@ FUNCTION		:	argv_1101		
// @@
// @@ INPUT			:
// @@ _glob_data_ptr: argv_891 *: pointer on the argv_3656 containing
// @@     all the global argv_1178.
// @@
// @@ _syst_ptr: argv_4610 *: argv_665 of the argv_3656 containing
// @@       all the necessary argv_4749 dependant functions.
// @@
// @@ _src_filename: argv_876: argv_3557 of the original argv_1424 to copy.
// @@
// @@ _dst_filename: argv_876 : argv_3557 of the copied argv_1424.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : 0 if operation was succesful,
// @@        1 if argv_3677 or more parameters are incorrect,
// @@        2 if the source argv_1424 could not be opened,
// @@        3 if the source argv_1424 could not be opened,
// @@        4 if the source argv_1424 size could not be computed,
// @@        5 if an error occured while reading the source argv_1424,
// @@		 6 if an error occured while writing the destination argv_1424,		
// @@		 7 if the destination argv_1424 could not be closed.
// @@
// @@ DISCLOSURE	:	-
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to copy the argv_1424 '_src_filename'
// @@ to the destination argv_1424 '_dst_filename'. 
// @@
// @@ CONTRACT 		: 
// @@ - '_src_filename' parameter must not be a NULL pointer.
// @@ - '_dst_filename' parameter must not be a NULL pointer.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
extern "C"
{
	argv_4536 argv_1101 (argv_891 * _glob_data_ptr, argv_4610 * _systool_ptr, argv_876 _src_filename, argv_876 _dst_filename) {
		argv_4536 argv_2072 = 0;
		if ((_src_filename == NULL) || (_dst_filename == NULL)) {
			argv_2072 = 1;
		}
		else { // parameters are OK
			FILE * argv_1647 = _systool_ptr->argv_3581 (_src_filename, "rb");
			if (! argv_1647) {
				argv_2072 = 2; 
			}
			else { // source argv_1424 opened succesfully
				FILE * argv_1529 = _systool_ptr->argv_3581 (_dst_filename, "wb"); 
				if ( ! argv_1529) {
					argv_2072 = 3;
				}
				else { // destination argv_1424 opened succesfully
					char argv_825[argv_1102];
					unsigned long argv_1444 = argv_1075 (_glob_data_ptr, _systool_ptr, _src_filename);
					if (argv_1444 == 0) {
						argv_2072 = 4;
					}

					unsigned long nb_todo				= 0;
					unsigned long total_nb_remaining	= argv_1444;
					bool finished						= false;
					argv_4883 argv_3613						= 0;
					argv_4883 argv_3617						= 0;

					do {
						nb_todo = total_nb_remaining;
						if (nb_todo >= argv_1102) {
							nb_todo = argv_1102;	
						}

						argv_3613 = _systool_ptr->argv_3582 (argv_825, 1, nb_todo, argv_1647);
						if (argv_3613 != nb_todo) {
							argv_2072		= 5;
							break;
						}

						argv_3617 = _systool_ptr->argv_3587 (argv_825, 1, nb_todo, argv_1529);
						if (argv_3617 != nb_todo) {
							argv_2072		= 6;
							break;
						}

						total_nb_remaining -= nb_todo;
						if (total_nb_remaining == 0) {
							finished	= true;
						}
					}
					while (finished == false);

					if (_systool_ptr->argv_3578 (argv_1529) != 0) {
						if (argv_2072 == 0) { // don't overwrite another error argv_976
							argv_2072 = 7;
						}
					}
				}

				_systool_ptr->argv_3578 (argv_1647);
			}
		}
		return (argv_2072);
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1424
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
