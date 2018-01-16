// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_296.cpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1424 contains the argv_1178 structure and 
// @@ function that are necessary for the plugins
// @@ to work.
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_355.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-
// @@
// @@ FUNCTION		:	argv_2377		
// @@
// @@ INPUT			:
// @@ _dest: char * : the destination argv_826 where to copy the string
// @@ _src: char * : the source argv_826 where to copy the string from
// @@ _size: argv_4883 : the size of the string to copy
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	-
// @@	
// @@ DESCRIPTION	:
// @@ This function just permit to copy the string '_src' to the
// @@ string '_dest' assuming that the '_src' size is '_size'
// @@ and that the '_dest' is long enough to receive the '_src' string. 
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_2377 (char * _dest, char * _src, argv_4883 _size) {
	argv_4883 i=0;
	while ((i < _size) && (_src[i] != '\0')) {
		_dest[i] = _src[i];
		i++;
	}
	// don't forget the string's argv_4765
	if (i < _size) {
		_dest[i] = '\0';
	}
	else {
		_dest[_size - 1] = '\0';
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-
// @@
// @@ FUNCTION		:	argv_1447		
// @@
// @@ INPUT			:
// @@ _type: argv_4883: argv_4860 of the argv_1424 whose readable argv_4860 is to be retrieved.
// @@
// @@ OUTPUT		:	
// @@ _str_type: char *: destination string where the argv_4406 of the lookup
// @@                    is to be saved up (allocated by the caller).
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	-
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to lookup the readable argv_1424 argv_4860 associated
// @@ argv_5011 the '_type' argv_1424 argv_4860. 
// @@ The argv_4406 is stored into a string that must have been allocated
// @@ by the caller prior to this call, it's length must be MAX_PATH_PLUGIN
// @@
// @@ Notice that if the '_type' parameter is not a valid argv_1424 argv_4860,
// @@ then "<UNKNOWN FILE TYPE>" is saved into the '_str_type' argv_4406
// @@ parameter.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_1447 (argv_4883 _type, char * _str_type) {
	switch (_type)	{
		case argv_1463			: argv_2377 (_str_type, "argv_1463", MAX_PATH_PLUGIN);		break;
		case argv_1450		: argv_2377 (_str_type, "argv_1450", MAX_PATH_PLUGIN);		break;
		case argv_1469		: argv_2377 (_str_type, "argv_1469", MAX_PATH_PLUGIN);	break;
		case argv_1452		: argv_2377 (_str_type, "argv_1452", MAX_PATH_PLUGIN);		break;
		case argv_1462	: argv_2377 (_str_type, "argv_1462", MAX_PATH_PLUGIN);	break;
		case argv_1467	: argv_2377 (_str_type, "argv_1467", MAX_PATH_PLUGIN);	break;
		default						: argv_2377 (_str_type, "<UNKNOWN FILE TYPE>", MAX_PATH_PLUGIN);	
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1424
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
