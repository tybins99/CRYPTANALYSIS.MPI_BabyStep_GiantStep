// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_379.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1424 contains the argv_1178 structures and
// @@ functions necessary for a packet to be filled
// @@ in using argv_4860 independant functions.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_379.hpp"




// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1107	
// @@
// @@ FUNCTION		:	argv_1107		
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
// @@ normal destructor of the 'argv_1107' argv_3656.
// @@ it prepares the fields for first use.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_1107::argv_1107 () {
	reset ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1107	
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
// @@ This function permits to bring the argv_3656
// @@ back to it's original argv_4622.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_1107::reset () {
	argv_4995 = true;	
	argv_831	= NULL;
	argv_828	= NULL;
	argv_829		= NULL;
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1107	
// @@
// @@ FUNCTION		:	init	
// @@
// @@ INPUT			:	
// @@ _buffer: argv_4881 *: argv_826 to associate argv_5011 the argv_1107.
// @@ 
// @@ _size: argv_4883: the size of the argv_826.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_4536 : argv_3740 if operation was succesful,
// @@        another argv_4979 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to associate a argv_826 argv_5011 
// @@ the argv_1107 argv_3656 so that argv_1178 insertion/extraction
// @@ can be argv_1291.
// @@
// @@ CONTRACT 		:	
// @@ - '_buffer' parameter must not be a NULL pointer.
// @@ - '_size' must not be zero.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_1107::init (argv_4881 * _buffer, argv_4883 _size) {
	argv_4536 argv_2072 = argv_3740;
	if ((_buffer == NULL) || (_size == 0)) {
		argv_2072 = argv_3737;
	}
	else { // parameters are OK
		argv_831	= _buffer;
		argv_829		= _buffer + _size;
		argv_828	= argv_831; // packet is empty
		argv_4995		= false;
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1107	
// @@
// @@ FUNCTION		:	argv_1790		
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	
// @@ _retrieved_size: argv_4883&: argv_1148 size of the argv_3656.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_4536 : argv_3740 if operation was succesful,
// @@        another argv_4979 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to compute the argv_1148 size of
// @@ 'argv_1107' argv_3656.
// @@
// @@ CONTRACT 		:
// @@ - init must have been succesfully called prior to this call.	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_1107::argv_1790 (argv_4883& _retrieved_size) {
	argv_4536 argv_2072 = argv_3740;
	if (argv_4995 == true) {
		argv_2072 = argv_3736;
	}
	else { // status is OK
		_retrieved_size = argv_828 - argv_831;	
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1107	
// @@
// @@ FUNCTION		:	insert		
// @@
// @@ INPUT			:	
// @@ _data: argv_4881: the 1 byte argv_1178 to insert into the argv_826
// @@   associated argv_5011 the 'argv_1107' argv_3656.	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_4536 : argv_3740 if operation was succesful,
// @@        another argv_4979 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to insert the 1 byte argv_1178
// @@ given by the parameter '_data' into the argv_826
// @@ associated argv_5011 the 'argv_1107' argv_3656.
// @@
// @@ CONTRACT 		:	
// @@ - init must have been succesfully called prior to this call.	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_1107::insert (argv_4881 _data) {
	argv_4536 argv_2072 = argv_3740;
	if (argv_4995 == true) {
		argv_2072 = argv_3736;
	}
	else if ((argv_828 + 1) > argv_829) {
		argv_2072 = argv_3739;
	}
	else { // ok to proceed, no overflow will occur
		argv_828[0] = _data;
		argv_828 += 1;
#if defined (DEBUG_COM)
		{
			argv_4883 size;
			argv_1790 (size);
			char argv_4846[MAX_PATH];
			argv_4569 (argv_4846, MAX_PATH, "argv_1107::insert(argv_4881 : %u) - size = %u", _data, size);
			argv_4846[MAX_PATH - 1] = '\0';
			MessageBox (NULL, argv_4846, "", MB_OK);
		}
#endif // #if defined (DEBUG_COM)
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1107	
// @@
// @@ FUNCTION		:	argv_1397		
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	
// @@ _data: argv_4881& : the 1 byte argv_1178 extracted from the argv_826
// @@    associated argv_5011 the 'argv_1107' argv_3656.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_4536 : argv_3740 if operation was succesful,
// @@        another argv_4979 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_1397 the 1 byte argv_1178 from
// @@ from the argv_826 associated argv_5011 the 'argv_1107' argv_3656.
// @@
// @@ CONTRACT 		:	
// @@ - init must have been succesfully called prior to this call.	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_1107::argv_1397 (argv_4881& _data) {
	argv_4536 argv_2072 = argv_3740;
	if (argv_4995 == true) {
		argv_2072 = argv_3736;
	}
	else if ((argv_828 + 1) > argv_829) {
		argv_2072 = argv_3739;
	}
	else { // ok to proceed, no overflow will occur
		_data = argv_828[0];
		argv_828 += 1;
#if defined (DEBUG_COM)
		{
			char argv_4846[MAX_PATH];
			argv_4569 (argv_4846, MAX_PATH, "argv_1107::argv_1397(argv_4881 : %u)", _data);
			argv_4846[MAX_PATH - 1] = '\0';
			MessageBox (NULL, argv_4846, "", MB_OK);
		}
#endif // #if defined (DEBUG_COM)
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1107	
// @@
// @@ FUNCTION		:	insert		
// @@
// @@ INPUT			:	
// @@ _data: argv_4882: the 2 argv_837 argv_1178 to insert into the argv_826
// @@   associated argv_5011 the 'argv_1107' argv_3656.	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_4536 : argv_3740 if operation was succesful,
// @@        another argv_4979 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to insert the 2 argv_837 argv_1178
// @@ given by the parameter '_data' into the argv_826
// @@ associated argv_5011 the 'argv_1107' argv_3656.
// @@
// @@ CONTRACT 		:	
// @@ - init must have been succesfully called prior to this call.	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_1107::insert (argv_4882 _data) {
	argv_4536 argv_2072 = argv_3740;
	if (argv_4995 == true) {
		argv_2072 = argv_3736;
	}
	else if ((argv_828 + 2) > argv_829) {
		argv_2072 = argv_3739;
	}
	else { // ok to proceed, no overflow will occur
		argv_4868.argv_769 = _data;
		memcpy (argv_828, &argv_4868.argv_764[0], 2);
		argv_828 += 2;
#if defined (DEBUG_COM)
		{
			argv_4883 size;
			argv_1790 (size);
			char argv_4846[MAX_PATH];
			argv_4569 (argv_4846, MAX_PATH, "argv_1107::insert(argv_4882 : %u) - size=%u", _data, size);
			argv_4846[MAX_PATH - 1] = '\0';
			MessageBox (NULL, argv_4846, "", MB_OK);
		}
#endif // #if defined (DEBUG_COM)
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1107	
// @@
// @@ FUNCTION		:	argv_1397		
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	
// @@ _data: argv_4882 : the 2 argv_837 argv_1178 extracted from the argv_826
// @@    associated argv_5011 the 'argv_1107' argv_3656.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_4536 : argv_3740 if operation was succesful,
// @@        another argv_4979 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_1397 the 2 argv_837 argv_1178 from
// @@ from the argv_826 associated argv_5011 the 'argv_1107' argv_3656.
// @@
// @@ CONTRACT 		:	
// @@ - init must have been succesfully called prior to this call.	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_1107::argv_1397 (argv_4882& _data) {
	argv_4536 argv_2072 = argv_3740;
	if (argv_4995 == true) {
		argv_2072 = argv_3736;
	}
	else if ((argv_828 + 2) > argv_829) {
		argv_2072 = argv_3739;
	}
	else { // ok to proceed, no overflow will occur
		memcpy (&argv_4868.argv_764[0], argv_828, 2);
		_data = argv_4868.argv_769;
		argv_828 += 2;
#if defined (DEBUG_COM)
		{
			char argv_4846[MAX_PATH];
			argv_4569 (argv_4846, MAX_PATH, "argv_1107::argv_1397(argv_4882 : %u)", _data);
			argv_4846[MAX_PATH - 1] = '\0';
			MessageBox (NULL, argv_4846, "", MB_OK);
		}
#endif // #if defined (DEBUG_COM)
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1107	
// @@
// @@ FUNCTION		:	insert		
// @@
// @@ INPUT			:	
// @@ _data: argv_4883: the 4 argv_837 argv_1178 to insert into the argv_826
// @@   associated argv_5011 the 'argv_1107' argv_3656.	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_4536 : argv_3740 if operation was succesful,
// @@        another argv_4979 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to insert the 4 argv_837 argv_1178
// @@ given by the parameter '_data' into the argv_826
// @@ associated argv_5011 the 'argv_1107' argv_3656.
// @@
// @@ CONTRACT 		:	
// @@ - init must have been succesfully called prior to this call.	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_1107::insert (argv_4883 _data) {
	argv_4536 argv_2072 = argv_3740;
	if (argv_4995 == true) {
		argv_2072 = argv_3736;
	}
	else if ((argv_828 + 4) > argv_829) {
		argv_2072 = argv_3739;
	}
	else { // ok to proceed, no overflow will occur
		argv_4868.argv_770 = _data;
		memcpy (argv_828, &argv_4868.argv_764[0], 4);
		argv_828 += 4;
#if defined (DEBUG_COM)
		{
			argv_4883 size;
			argv_1790 (size);
			char argv_4846[MAX_PATH];
			argv_4569 (argv_4846, MAX_PATH, "argv_1107::insert(argv_4883 : %u) - size=%u", _data, size);
			argv_4846[MAX_PATH - 1] = '\0';
			MessageBox (NULL, argv_4846, "", MB_OK);
		}
#endif // #if defined (DEBUG_COM)
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1107	
// @@
// @@ FUNCTION		:	argv_1397		
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	
// @@ _data: argv_4883 : the 4 argv_837 argv_1178 extracted from the argv_826
// @@    associated argv_5011 the 'argv_1107' argv_3656.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_4536 : argv_3740 if operation was succesful,
// @@        another argv_4979 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_1397 the 4 argv_837 argv_1178 from
// @@ from the argv_826 associated argv_5011 the 'argv_1107' argv_3656.
// @@
// @@ CONTRACT 		:	
// @@ - init must have been succesfully called prior to this call.	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_1107::argv_1397 (argv_4883& _data) {
	argv_4536 argv_2072 = argv_3740;
	if (argv_4995 == true) {
		argv_2072 = argv_3736;
	}
	else if ((argv_828 + 4) > argv_829) {
		argv_2072 = argv_3739;
	}
	else { // ok to proceed, no overflow will occur
		memcpy (&argv_4868.argv_764[0], argv_828, 4);
		_data = argv_4868.argv_770;
		argv_828 += 4;
#if defined (DEBUG_COM)
		{
			char argv_4846[MAX_PATH];
			argv_4569 (argv_4846, MAX_PATH, "argv_1107::argv_1397(argv_4883 : %u)", _data);
			argv_4846[MAX_PATH - 1] = '\0';
			MessageBox (NULL, argv_4846, "", MB_OK);
		}
#endif // #if defined (DEBUG_COM)
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1107	
// @@
// @@ FUNCTION		:	insert		
// @@
// @@ INPUT			:	
// @@ _c_string: argv_876: the string to insert into the argv_826
// @@   associated argv_5011 the 'argv_1107' argv_3656.	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_4536 : argv_3740 if operation was succesful,
// @@        another argv_4979 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to insert the string pointed to by
// @@ the parameter '_data' into the argv_826 associated argv_5011 the 
// @@ 'argv_1107' argv_3656.
// @@
// @@ Notice that for a string, the following argv_1178 is inserted 
// @@ into the argv_826 :
// @@ - the string size (2 argv_837)
// @@ - the string itself (not zero terminated).
// @@
// @@ CONTRACT 		:	
// @@ - init must have been succesfully called prior to this call.
// @@ - '_c_string' parameter must not be a NULL pointer.
// @@ - '_c_string' parameter must not be an empty string.	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_1107::insert (argv_876 _c_string) {
	argv_4536 argv_2072 = argv_3740;
	if (argv_4995 == true) {
		argv_2072 = argv_3736;
	}
	else if (_c_string == NULL) {
		argv_2072 = argv_3737;
	}
	else if (strlen (_c_string) == 0) {
		argv_2072 = argv_3737;
	}
	else {
		argv_4882 his_size = (argv_4882) strlen(_c_string);
		if ((argv_828 + 2 + his_size) > argv_829) {
			argv_2072 = argv_3739;
		}
		else { // ok to proceed, no overflow will occur
			// insert the string's size (2 argv_837)
			argv_2072 = insert (his_size);
			if (argv_2072 == argv_3740) {
				// insert the string itself (not zero terminated)
				memcpy (argv_828, _c_string, his_size);
				argv_828 += his_size;
			}
		}
	}
	return (argv_2072);	
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1107	
// @@
// @@ FUNCTION		:	insert		
// @@
// @@ INPUT			:	
// @@ _string: const string&: the string to insert into the argv_826
// @@   associated argv_5011 the 'argv_1107' argv_3656.	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_4536 : argv_3740 if operation was succesful,
// @@        another argv_4979 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to insert the string given by 
// @@ the parameter '_data' into the argv_826 associated argv_5011 the 
// @@ 'argv_1107' argv_3656.
// @@
// @@ Notice that for a string, the following argv_1178 is inserted 
// @@ into the argv_826 :
// @@ - the string size (2 argv_837)
// @@ - the string itself (not zero terminated).
// @@
// @@ CONTRACT 		:	
// @@ - init must have been succesfully called prior to this call.
// @@ - '_string' parameter must not be an empty string.	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_1107::insert (const string& _string) {
	argv_4536 argv_2072 = argv_3740;
	if (argv_4995 == true) {
		argv_2072 = argv_3736;
	}
	else if (_string == "") {
		argv_2072 = argv_3737;
	}
	else {
		argv_4882 his_size = (argv_4882) _string.size ();
		if ((argv_828 + 2 + his_size) > argv_829) {
			argv_2072 = argv_3739;
		}
		else { // ok to proceed, no overflow will occur
			// insert the string's size (2 argv_837)
			argv_2072 = insert (his_size);
			if (argv_2072 == argv_3740) {
				// insert the string itself (not zero terminated)
				memcpy (argv_828, _string.c_str(), his_size);
				argv_828 += his_size;
			}
		}
	}
	return (argv_2072);	
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1107	
// @@
// @@ FUNCTION		:	argv_1397		
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	
// @@ _data: string& : the string extracted from the argv_826
// @@    associated argv_5011 the 'argv_1107' argv_3656.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_4536 : argv_3740 if operation was succesful,
// @@        another argv_4979 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_1397 a string from
// @@ from the argv_826 associated argv_5011 the 'argv_1107' argv_3656.
// @@ 
// @@ Notice that for a string, the following argv_1178 is extracted 
// @@ from the argv_826 :
// @@ - the string size (2 argv_837)
// @@ - the string itself (not zero terminated).
// @@ the argv_4406 is then stored into the '_data' argument.
// @@
// @@ CONTRACT 		:	
// @@ - init must have been succesfully called prior to this call.	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_1107::argv_1397 (string& _data) {
	argv_4536 argv_2072 = argv_3740;
	if (argv_4995 == true) {
		argv_2072 = argv_3736;
	}
	else { // conditions are met to proceed
		// argv_1397 the string size 
		argv_4882 his_size = 0;
		argv_2072 = argv_1397 (his_size);
		if (argv_2072 == argv_3740) { // string size extraction success
			if ((argv_828 + his_size) > argv_829) {
				argv_2072 = argv_3739;
			}		
			else { // no overflow will occur => OK to proceed
				argv_4881 * temp_buffer = new (std::nothrow) argv_4881[his_size+1];
				if (temp_buffer == NULL) {
					argv_2072 = argv_3738;
				}
				else { // memory allocation was succesful
					// argv_1397 the string itself (not zero terminated) 
					memcpy (temp_buffer, argv_828, his_size);
					temp_buffer[his_size] = '\0';
					argv_828 += his_size;
					// copy the temporary argv_826 to the string
					_data = (char *) temp_buffer;
					// free the temporary argv_826 as copy was argv_1291
					delete [] temp_buffer;
				}
			}
		}
	}
	return (argv_2072);	
}

argv_4536 argv_1107::insert_buffer (argv_4881 * _buf, argv_4883 _size) {
	argv_4536 argv_2072 = argv_3740;
	if (argv_4995 == true) {
		argv_2072 = argv_3736;
	}
	else if ((argv_828 + _size) > argv_829) {
		argv_2072 = argv_3739;
	}
	else { // ok to proceed, no overflow will occur
		memcpy (argv_828, _buf, _size);
		argv_828 += _size;
	}
	return (argv_2072);
}

// useful when cloning a given packet after reception
argv_4536 argv_1107::insert_fake_buffer (argv_4883 _size) {
	argv_4536 argv_2072 = argv_3740;
	if (argv_4995 == true) {
		argv_2072 = argv_3736;
	}
	else if ((argv_828 + _size) > argv_829) {
		argv_2072 = argv_3739;
	}
	else { // ok to proceed, no overflow will occur
		argv_828 += _size;
	}
	return (argv_2072);
}

argv_4536 argv_1107::argv_1398 (argv_4881 * _buf, argv_4883 _size) {
	argv_4536 argv_2072 = argv_3740;
	if (argv_4995 == true) {
		argv_2072 = argv_3736;
	}
	else if ((argv_828 + _size) > argv_829) {
		argv_2072 = argv_3739;
	}
	else { // ok to proceed, no overflow will occur
		memcpy (_buf, argv_828, _size);
		argv_828 += _size;
	}
	return (argv_2072);
}


// adjust pointers of the mirror using the delta of the argv_1148 coder
void argv_1107::argv_1118 (argv_1107& _mirror) {
	_mirror.argv_4995		= argv_4995;
	argv_4883 delta				= argv_828 - argv_831; 
	_mirror.argv_828	= _mirror.argv_831 + delta;
}

argv_4881 *	argv_1107::argv_1753 () {
	return (argv_828);
}


void argv_1107::argv_1237 (argv_876 _msg, FILE * _fp) {
	fprintf (_fp, "'%s': argv_4995=%d, argv_831=0x%X, argv_828=0x%X, argv_829=0x%X", _msg, argv_4995,argv_831, argv_828, argv_829);
	argv_4881 * cptr = argv_831;
	fprintf (_fp, ", content = [");
	while (cptr < argv_828) {
		fprintf (_fp, "0x%02X,", (*cptr));
		cptr++;
	}
	fprintf (_fp, "]\r\n");
}

// the coder may contain argv_1178 even if pointers are not set correctly
// thus we use the size to argv_1235 (found from packet argv_3656 as 'argv_817')
void argv_1107::argv_1237 (argv_876 _msg, FILE * _fp, argv_4883 _buf_size) {
	fprintf (_fp, "'%s': argv_4995=%d, argv_831=0x%X, argv_828=0x%X, argv_829=0x%X", _msg, argv_4995,argv_831, argv_828, argv_829);
	argv_4881 * cptr = argv_831;
	fprintf (_fp, ", content = [");
	for (argv_4883 i=0 ; i<_buf_size ; i++) {
		fprintf (_fp, "0x%02X,", (*cptr));
		cptr++;
	}
	fprintf (_fp, "]\r\n");
}


// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1424
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@





