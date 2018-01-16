// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_322.cpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1424 contains all the argv_1178 structures
// @@ and functions to argv_2274 or create a given
// @@ plugin. 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_380.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1083
// @@
// @@ FUNCTION		:	argv_1083		
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
// @@ normal constructor of the 'argv_1083' argv_3656.
// @@ it prepares the 'argv_1083' argv_3656 for first use.
// @@
// @@ CONTRACT 		: none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_1083::argv_1083 () {
	// avoid having these fields deleted by the reset function
	argv_4914		= (argv_4883) NULL;
	argv_4915		= 0;
	argv_4756				= NULL;	
	reset ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1083
// @@
// @@ FUNCTION		:	argv_1083		
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
// @@ destructor of the 'argv_1083' argv_3656.
// @@
// @@ CONTRACT 		: none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_1083::~argv_1083 () {
	reset ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1083
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
// @@ This function permits to bring the 'argv_1083'
// @@ argv_3656 to it's initial argv_4622.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_1083::reset () {
	init_done						= false;
	argv_1228				= false;
	argv_2342.clear ();
	argv_2344.clear ();
	argv_1069				= NULL;
	argv_1175					= NULL;
	argv_1799					= NULL;
	argv_5022				= NULL;
	argv_977.reset ();
	argv_4587					= 0;
	argv_1294					= 0;
	argv_4586					= NULL;

	if (argv_4756 != NULL) {
		argv_4756->argv_3584 ((argv_2338) argv_4914, argv_4915);
		argv_4914			= (argv_4883) NULL;
		argv_4915			= 0;
	}
	argv_4756						= NULL;

	argv_1207					= (argv_4883) NULL;
	argv_1343							= 0;
	argv_1351						= 0;
}


// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1082
// @@
// @@ FUNCTION		:	argv_1082		
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
// @@ normal constructor of the 'argv_1082' argv_3656.
// @@ it prepares the 'argv_1082' argv_3656 for first use.
// @@
// @@ CONTRACT 		: none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_1082::argv_1082 () {
	reset ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1082
// @@
// @@ FUNCTION		:	~argv_1082		
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
// @@ destructor of the 'argv_1082' argv_3656.
// @@ it prepares the 'argv_1082' argv_3656 for first use.
// @@
// @@ CONTRACT 		: none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_1082::~argv_1082 () {
	reset ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1082
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
// @@ This function permits to bring the 'argv_1082'
// @@ argv_3656 to it's initial argv_4622.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_1082::reset () {
	dset.reset ();
	argv_816						= NULL;
	argv_3603					= 0;
	argv_817						= 0;

	argv_3557							= "";
	argv_1748					= 0;
	argv_4991					= 0;
	argv_4992					= 0;
	argv_4860							= argv_3930;
	argv_4761						= 0;
	argv_2231		= 0;
	argv_1114			= "";
	argv_2230			= 0;
	argv_1113			= "";
	argv_3547.clear ();
	argv_3607				= 0;
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1082
// @@
// @@ FUNCTION		:	init		
// @@
// @@ INPUT			:
// @@ _glob_data_ptr: argv_891 *: pointer on the argv_3656 containing
// @@     all the global argv_1178.
// @@
// @@ _systool_ptr: argv_4610 *: pointer on an argv_3656 that contains
// @@    all the argv_4749 dependant routines.
// @@
// @@ _compress_tool_ptr: argv_870 *: pointer on an argv_3656 that
// @@    contains the routines that permit to argv_1063/argv_4910
// @@    a given argv_826.
// @@
// @@ _cypher_tool_ptr: argv_877 *: pointer on an argv_3656 that
// @@    contains the routines that permit to cipher/decipher
// @@    a given argv_826.
// @@
// @@ _xmem_manager_ptr: argv_1166 *: pointer on an argv_3656 that
// @@ contains the routines to obtain aligned blocks of virtual memory.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_4536 : argv_3922 if operation was succesful,
// @@        another argv_4979 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_4243 the argv_1082
// @@ argv_3656 by giving it the argv_665 of all necessary
// @@ objects.
// @@ Notice that this function must be called only once
// @@ prior to first use.
// @@
// @@ CONTRACT 		: 
// @@ - '_systool_ptr' parameter must not be a NULL pointer.
// @@ - '_glob_data_ptr' parameter must not be a NULL pointer.
// @@ - '_compress_tool_ptr' parameter must not be a NULL pointer.
// @@ - '_cypher_tool_ptr' parameter must not be a NULL pointer.
// @@ - '_xmem_mgr_ptr' parameter must not be a NULL pointer.
// @@ - init must not have been called prior to this call.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_1082::init (argv_891 * _glob_data_ptr, argv_4610 * _systool_ptr, argv_870 * _compress_tool_ptr, argv_877 * _cypher_tool_ptr, argv_1166 * _xmem_manager_ptr) {
	argv_4536 argv_2072 = argv_3922;
	if ((_systool_ptr==NULL) || (_compress_tool_ptr==NULL) || (_cypher_tool_ptr==NULL) || (_glob_data_ptr == NULL) || (_xmem_manager_ptr==NULL)) {
		argv_2072 = argv_3902;
	}
	else if (dset.init_done == true) {
		argv_2072 = argv_3899;
	}
	else {
		dset.argv_1799			= _glob_data_ptr;
		dset.argv_4756			= _systool_ptr;
		dset.argv_1069		= _compress_tool_ptr;
		dset.argv_1175		= _cypher_tool_ptr;
		dset.argv_5022		= _xmem_manager_ptr;	
		dset.init_done				= true;
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1082
// @@
// @@ FUNCTION		:	argv_4430		
// @@
// @@ INPUT			:
// @@ _value: argv_4883: the integer argv_4979 to save to plugin argv_1424.
// @@
// @@ _fp_dest: FILE *: argv_1424 pointer of the destination argv_1424
// @@   containing the generated plugin.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_4536 : argv_3922 if operation was succesful,
// @@        another argv_4979 otherwise.	
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function save a given integer into the plugin
// @@ argv_1424 that was opened and accessible via the '_fp_dest'
// @@ parameter.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_1082::argv_4430 (argv_4883 _value, FILE * _fp_dest) {
	argv_4536 argv_2072 = argv_3922;
	argv_767 atyp;
	atyp.argv_770	= _value;
	argv_4883 argv_3604 = fwrite (&atyp.argv_764[0], 1, dset.argv_1799->int_size, _fp_dest);
	if (argv_3604 != dset.argv_1799->int_size) {
		argv_2072 = argv_3919;
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1082
// @@
// @@ FUNCTION		:	argv_4431		
// @@
// @@ INPUT			:
// @@ _str: argv_876: the string to save to the plugin argv_1424.
// @@
// @@ _fp_dest: FILE *: argv_1424 pointer of the destination argv_1424
// @@   containing the generated plugin.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_3922 if operation was succesful,
// @@        another argv_4979 otherwise.	
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to save a given string to
// @@ the plugin argv_1424.
// @@ Notice that the string is saved along argv_5011 it's size
// @@ for a fastest retrieval and also without the trailing '\0'
// @@ character. So the actual steps are :
// @@ - save the string's length
// @@ - save the string itself (without the \0)
// @@
// @@ CONTRACT 		:	
// @@ - '_str' parameter must not be an empty string.	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_1082::argv_4431 (argv_876 _str, FILE * _fp_dest) {
	argv_4536 argv_2072 = argv_3922;
	argv_4883 his_size = strlen(_str);
	if (his_size == 0) {
		argv_2072 = argv_3921;
	}
	else {
		argv_2072 = argv_4430 (his_size, _fp_dest);
		if (argv_2072 == argv_3922) {
			argv_4883 argv_3604 = fwrite (&_str[0], 1, his_size, _fp_dest);
			if (argv_3604 != his_size) {
				argv_2072 = argv_3897;
			}
		}
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1082
// @@
// @@ FUNCTION		:	argv_1091		
// @@
// @@ INPUT			:
// @@ _file_ptr: argv_4883: 32 bit pointer on the mmaped argv_1424 where to
// @@   find argv_1178.
// @@
// @@ _file_size: argv_4883: size of the mmaped argv_1424 where to find argv_1178.
// @@
// @@ _msg: argv_876: argv_2457 that must be displayed to log argv_1424 in 
// @@   of error.
// @@
// @@ OUTPUT		:	
// @@ _extracted_value: argv_4883&: the integer argv_4979 extracted from
// @@   mmapped argv_1424 whose first byte is denoted by the '_file_ptr'
// @@   parameter.
// @@
// @@ IO			:	
// @@ _current_offset: argv_4883&: argv_4979/argv_4406 argument that permits to
// @@   use the argv_1148 offset of the argv_1424 whose first byte is denoted
// @@   by the '_file_ptr' parameter, and also to update it after use.
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_3922 if operation was succesful,
// @@        another argv_4979 otherwise.	
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function just consumes 4 argv_837 from the mmaped argv_1424 
// @@ whose first byte is denoted by the parameter '_file_ptr'
// @@ and then maps these 4 argv_837 into an integer argv_4979 that
// @@ is returned to the caller via the '_extracted_value' 
// @@ parameter.
// @@
// @@ CONTRACT 		: 
// @@ - the sum of _current_offset + int size must not exceed
// @@   the limit of the mmapped argv_1424 '_file_size'.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_1082::argv_1091 (argv_4883 _file_ptr, argv_4883 _file_size, argv_4883& _current_offset, argv_876 _msg, argv_4883& _extracted_value) {
	argv_4536 argv_2072 = argv_3922;
	if ((_current_offset + dset.argv_1799->int_size) >= _file_size) {
		dset.argv_1799->argv_2327.argv_2323 (argv_1346, "+++ ERROR: overflow while parsing integer");
		argv_2072 = argv_3912;	
	}
	else {
		argv_767 atyp;
		argv_4881 * cptr = (argv_4881 *) _file_ptr;
		memcpy (&atyp.argv_764[0], (argv_4881 *) &cptr[_current_offset], dset.argv_1799->int_size);
		_current_offset += dset.argv_1799->int_size;
		_extracted_value = atyp.argv_770;
	}

	if (argv_2072 != argv_3922) {
		dset.argv_1799->argv_2327.argv_2323 (argv_1346, "+++ ERROR: parse error while consuming '", _msg, "'");
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1082
// @@
// @@ FUNCTION		:	argv_1092		
// @@
// @@ INPUT			:
// @@ _file_ptr: argv_4883: 32 bit pointer on the mmaped argv_1424 where to
// @@   find argv_1178.
// @@
// @@ _file_size: argv_4883: size of the mmaped argv_1424 where to find argv_1178.
// @@
// @@ _msg: argv_876: argv_2457 that must be displayed to log argv_1424 in 
// @@   of error.
// @@
// @@ OUTPUT		:	
// @@ _extracted_str: string&: string extracted from the plugin argv_1424.	
// @@
// @@ IO			:
// @@ _current_offset: argv_4883&: argv_4979/argv_4406 argument that permits to
// @@   use the argv_1148 offset of the argv_1424 whose first byte is denoted
// @@   by the '_file_ptr' parameter, and also to update it after use.
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_3922 if operation was succesful,
// @@        another argv_4979 otherwise.	
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_1397 a string from the plugin
// @@ argv_1424, the argv_1148 offset in the plugin argv_1424 '_current_offset'
// @@ is used and then changed accordingly.
// @@ Notice that a string is not like a C string : it is 
// @@ composed of 2 fields :
// @@ - the string's length (4 argv_837, i.e an integer)
// @@ - the string itself, not terminated by '\0' character.
// @@ thus to argv_2274 a string, the steps are :
// @@ - argv_1090 an integer (the string's length)
// @@ - argv_1090 the string itself
// @@
// @@ CONTRACT 		: 
// @@ - the sum of _current_offset + int size + string size 
// @@   must not exceed the limit of the mmapped argv_1424 '_file_size'.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_1082::argv_1092  (argv_4883 _file_ptr, argv_4883 _file_size, argv_4883& _current_offset, argv_876 _msg, string& _extracted_str) {
	argv_4536 argv_2072 = argv_3922;
	// parse the string's length
	argv_4883 string_size;
	_extracted_str = "";
	argv_2072 = argv_1091 (_file_ptr, _file_size, _current_offset, "string's length field", string_size);
	if (argv_2072 != argv_3922) {
		dset.argv_1799->argv_2327.argv_2323 (argv_1346, "+++ ERROR: parse error while consuming string's length");
	}
	else if (string_size >= argv_2398) { 
		argv_2072 = argv_3920;
		dset.argv_1799->argv_2327.argv_2323 (argv_1346, "+++ ERROR: parse error : string length is too long : ", string_size);
	}
	else if (string_size == 0) {
		argv_2072 = argv_3921;
		dset.argv_1799->argv_2327.argv_2323 (argv_1346, "+++ ERROR: parse error : string length is too short : ", string_size);
	}
	else if ((_current_offset + string_size) >= _file_size) {
		dset.argv_1799->argv_2327.argv_2323 (argv_1346, "+++ ERROR: parsing string would overflow the argv_1424 !");
		argv_2072 = argv_3912;
	}
	else { // ok to argv_1090 the string
		char tabtmp[argv_2398 + 1];
		argv_4881 * cptr = (argv_4881 *) _file_ptr;
		memcpy (&tabtmp[0], &cptr[_current_offset], string_size);
		tabtmp[string_size] = '\0';
		_current_offset += string_size; 
		_extracted_str = tabtmp;
	}

	if (argv_2072 != argv_3922) {
		dset.argv_1799->argv_2327.argv_2323 (argv_1346, "+++ ERROR: parse error while consuming '", _msg, "'");
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1082
// @@
// @@ FUNCTION		:	argv_3711		
// @@
// @@ INPUT			:
// @@ _file_ptr: argv_4883: 32 bit pointer on the mmaped argv_1424 where to
// @@   find argv_1178.
// @@
// @@ _file_size: argv_4883: size of the mmaped argv_1424 where to find argv_1178.
// @@
// @@ _filename: argv_876: argv_3557 of the plugin argv_1424 being parsed.
// @@
// @@
// @@ OUTPUT		:	
// @@
// @@ IO			:	
// @@ _current_offset: argv_4883&: argv_4979/argv_4406 argument that permits to
// @@   use the argv_1148 offset of the argv_1424 whose first byte is denoted
// @@   by the '_file_ptr' parameter, and also to update it after use.
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_3922 if operation was succesful,
// @@        another argv_4979 otherwise.	
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to parse the argv_1982 of a given plugin
// @@ argv_1424. the argv_1982's fields are :
// @@ - the plugin argv_3557 (string)
// @@ - the argv_1747 date (argv_4883)
// @@ - the plugin major version (argv_4883)
// @@ - the plugin minor version (argv_4883)
// @@ - the plugin argv_4860 (argv_4883).
// @@ - the plugin target argv_4860 (argv_4883)
// @@ - the length before uncompressing the argv_815 (argv_4883)
// @@ - the crc of the argv_815 before argv_4910 (string)
// @@ - the length after argv_4910 the argv_815 (argv_4883)
// @@ - the crc of the argv_815 after argv_4910 (string)
// @@ - the number of dependancies (other plugins)
// @@ For each dependancy :
// @@ {
// @@	- the dependancy argv_3557 (a plugin argv_3557 as a string)
// @@ }
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_1082::argv_3711 (argv_4883 _file_ptr, argv_4883 _file_size, argv_876 _filename, argv_4883& _current_offset) {
	argv_4536 argv_2072 = argv_3922;
	// argv_3557
	argv_2072 = argv_1092 (_file_ptr, _file_size, _current_offset, "plugin argv_3557", argv_3557);
	if (argv_2072 == argv_3922) { // argv_1747 date
		argv_2072 = argv_1091 (_file_ptr, _file_size, _current_offset, "argv_1747 date", argv_1748);
	}
	if (argv_2072 == argv_3922) { // version Major
		argv_2072 = argv_1091 (_file_ptr, _file_size, _current_offset, "version Major", argv_4991);
	}
	if (argv_2072 == argv_3922) { // version Minor
		argv_2072 = argv_1091 (_file_ptr, _file_size, _current_offset, "version Minor", argv_4992);
	}
	if (argv_2072 == argv_3922) { // plugin argv_4860 
		argv_2072 = argv_1091 (_file_ptr, _file_size, _current_offset, "plugin argv_4860", argv_4860);
	}
	if (argv_2072 == argv_3922) { // plugin target argv_4860
		argv_2072 = argv_1091 (_file_ptr, _file_size, _current_offset, "plugin target argv_4860", argv_4761);
	}
	if (argv_2072 == argv_3922) { // length before argv_4910 
		argv_2072 = argv_1091 (_file_ptr, _file_size, _current_offset, "length before argv_4910", argv_2231);
	}
	if (argv_2072 == argv_3922) { // crc before argv_4910
		argv_2072 = argv_1092 (_file_ptr, _file_size, _current_offset, "CRC before argv_4910", argv_1114);
	}
	if (argv_2072 == argv_3922) { // length after argv_4910
		argv_2072 = argv_1091 (_file_ptr, _file_size, _current_offset, "length after argv_4910", argv_2230);
	}
	if (argv_2072 == argv_3922) { // crc after argv_4910
		argv_2072 = argv_1092 (_file_ptr, _file_size, _current_offset, "CRC after argv_4910", argv_1113);
	}
	if (argv_2072 == argv_3922) { // number of dependancy
		argv_2072 = argv_1091 (_file_ptr, _file_size, _current_offset, "number of dependancy", argv_3603);
	} 
	if (argv_2072 == argv_3922) {
		if (argv_3603 >= argv_2397) {
			dset.argv_1799->argv_2327.argv_2323 (argv_1346, "+++ ERROR: too many dependancies : ", argv_3603);
			argv_2072 = argv_3923;
		}
		else {
			// argv_2274 all dependancies
			string nametmp;
			for (argv_4883 i=0 ; i<argv_3603 ; i++) {
				argv_2072 = argv_1092 (_file_ptr, _file_size, _current_offset, "nth dependancy", nametmp);
				if (argv_2072 != argv_3922) {
					dset.argv_1799->argv_2327.argv_2323 (argv_1346, "+++ ERROR: failed to parse dependancy ", i);
					break;
				}
				else {
					dset.argv_2099 = dset.argv_2342.find (nametmp);
					if (dset.argv_2099 != dset.argv_2342.end()) {
						argv_2072 = argv_3891;
						dset.argv_1799->argv_2327.argv_2323 (argv_1346, "+++ ERROR: dependancy already defined : ", nametmp.c_str());
						break;
					}
					else { // ok to argv_646 this new dependancy
						dset.argv_2342[nametmp] = true;
					}
				}
			}
		}
	}

	if (argv_2072 == argv_3922) { /// argv_2274 the list of exported symbols
		// argv_1090 the list size (as a argv_4883)
		argv_2072 = argv_1091 (_file_ptr, _file_size, _current_offset, "number of exported symbol", argv_3607);
		if (argv_2072 == argv_3922) { // argv_1090 the list itself
			string exported_symbol_name;
			for (argv_4883 i=0 ; i<argv_3607 ; i++) {
				argv_2072 = argv_1092 (_file_ptr, _file_size, _current_offset, "exported symbol argv_3557", exported_symbol_name);
				if (argv_2072 != argv_3922) {
					break;
				}
				else { 
					dset.argv_2100 = dset.argv_2344.find (exported_symbol_name);
					if (dset.argv_2100 != dset.argv_2344.end()) {
						dset.argv_1799->argv_2327.argv_2323 (argv_1346, "+++ ERROR: exported symbol already defined : ", exported_symbol_name.c_str());
						argv_2072 = argv_3893;	
						break;
					}
					else {
						dset.argv_2344[exported_symbol_name] = true;
					}
				}
			}
		}
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1082
// @@
// @@ FUNCTION		:	argv_1244		
// @@
// @@ INPUT			:
// @@ _filename: argv_876: argv_3557 of the plugin argv_1424 whose argv_1982
// @@   is to be displayed.
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
// @@ This function permits to argv_1235 to log argv_1424
// @@ the informations contained in the argv_1982 of
// @@ the argv_2297 plugin.
// @@ This function is for debug purpose only.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_1082::argv_1244 (argv_876 _filename) {
#if defined (DEBUG_PLUGIN_LOADER)
	string type_str;
	dset.argv_1799->argv_2327.argv_2323 (argv_1191, "===== plugin argv_1982 of argv_1424 : ", _filename, " ========");
	dset.argv_1799->argv_2327.argv_2323 (argv_1191, "argv_3557                       : ", argv_3557.c_str());
	dset.argv_1799->argv_2327.argv_2323 (argv_1191, "argv_1747 date            : ", argv_1748);
	dset.argv_1799->argv_2327.argv_2323 (argv_1191, "version Major              : ", argv_4991);
	dset.argv_1799->argv_2327.argv_2323 (argv_1191, "version Minor              : ", argv_4992);
	type_str = argv_3924 (argv_4860);
	dset.argv_1799->argv_2327.argv_2323 (argv_1191, "argv_4860                       : ", type_str.c_str());
	dset.argv_1799->argv_2327.argv_2323 (argv_1191, "target argv_4860                : ", argv_4761);
	dset.argv_1799->argv_2327.argv_2323 (argv_1191, "length before argv_4910   : ", argv_2231);
	dset.argv_1799->argv_2327.argv_2323 (argv_1191, "CRC before argv_4910      : ", argv_1114.c_str());
	dset.argv_1799->argv_2327.argv_2323 (argv_1191, "length after argv_4910    : ", argv_2230);
	dset.argv_1799->argv_2327.argv_2323 (argv_1191, "CRC after argv_4910       : ", argv_1113.c_str());
	dset.argv_1799->argv_2327.argv_2323 (argv_1191, "number of dependancies     : ", argv_3603);
	
	for (dset.argv_2099=dset.argv_2342.begin() ; dset.argv_2099 != dset.argv_2342.end() ; ++dset.argv_2099) {
		dset.argv_1799->argv_2327.argv_2323 (argv_1191, "   - ", dset.argv_2099->first.c_str());
	}

	dset.argv_1799->argv_2327.argv_2323 (argv_1191, "number of exported symbols : ", dset.argv_2344.size());
	for (dset.argv_2100 = dset.argv_2344.begin() ; dset.argv_2100 != dset.argv_2344.end() ; ++dset.argv_2100) {
		dset.argv_1799->argv_2327.argv_2323 (argv_1191, "   - ", dset.argv_2100->first.c_str());
	}
#endif // #if defined (DEBUG_PLUGIN_LOADER)
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1082
// @@
// @@ FUNCTION		:	argv_3708		
// @@
// @@ INPUT			:
// @@ _file_ptr: argv_4883: 32 bit pointer on the mmaped argv_1424 where to
// @@   find argv_1178.
// @@
// @@ _file_size: argv_4883: size of the mmaped argv_1424 where to find argv_1178.
// @@
// @@ _filename: argv_876: argv_3557 of the plugin argv_1424 being parsed.
// @@
// @@ OUTPUT		:	
// @@
// @@ IO			:	
// @@ _current_offset: argv_4883&: argv_4979/argv_4406 argument that permits to
// @@   use the argv_1148 offset of the argv_1424 whose first byte is denoted
// @@   by the '_file_ptr' parameter, and also to update it after use.
// @@	
// @@ RETURN VALUE	:
// @@ argv_4536 : argv_3922 if operation was succesful,
// @@        another argv_4979 otherwise.	
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_2274 a given COFF argv_1424 which can
// @@ be found right after the argv_1982 of the plugin.
// @@ The COFF argv_1424 itself is the argv_815 of the plugin.
// @@
// @@ CONTRACT 		: 
// @@ - '_current_offset' + argv_817 must be lower 
// @@   or equal to '_file_size'
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_1082::argv_3708 (argv_4883 _file_ptr, argv_4883 _file_size, argv_876 _filename, argv_4883& _current_offset) {
	argv_4536 argv_2072   = argv_3922;
	argv_816	= (argv_4881 *) _file_ptr;
	argv_817	= argv_2230;

	if ((_current_offset + argv_817) >= _file_size) {
		argv_2072 = argv_3912; 
		dset.argv_1799->argv_2327.argv_2323 (argv_1346, "+++ ERROR: overflow while parsing argv_815 of plugin : ", argv_3557.c_str());	
	}
	else {
		argv_4881 * true_file_ptr   = (argv_4881 *) _file_ptr;
		argv_4881 * body_start_addr = &true_file_ptr[_current_offset];
		argv_4881 * argv_1339     = &true_file_ptr[_file_size];	
		argv_4883   argv_817       = (argv_4883) argv_1339 - (argv_4883) body_start_addr; 

		argv_2072 = dset.argv_977.init (dset.argv_1799, dset.argv_4756, dset.argv_1069, dset.argv_1175, body_start_addr, argv_817, dset.argv_5022);
		if (argv_2072 != argv_993) {
			dset.argv_1799->argv_2327.argv_2323 (argv_1346, "+++ ERROR: argv_1082::argv_3708 - argv_866::init failed ! - plugin was : ", argv_3557.c_str());
		}
		else {
			argv_2072 = dset.argv_977.argv_2274 ();
			if (argv_2072 == argv_993) {
				argv_2072 = argv_3922;
			}
			else {
				dset.argv_1799->argv_2327.argv_2323 (argv_1346, "+++ ERROR: argv_1082::argv_3708 - failed to argv_2274 COFF argv_1424, plugin was : ", argv_3557.c_str());
			}
		}
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1082
// @@
// @@ FUNCTION		:	argv_3715		
// @@
// @@ INPUT			:
// @@ _file_ptr: argv_4883: 32 bit pointer on the mmaped argv_1424 where to
// @@   find argv_1178.
// @@
// @@ _file_size: argv_4883: size of the mmaped argv_1424 where to find argv_1178.
// @@
// @@ _filename: argv_876: argv_3557 of the plugin argv_1424 being parsed.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_4536 : argv_3922 if operation was succesful,
// @@        another argv_4979 otherwise.	
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to parse a given plugin argv_1424.
// @@ a plugin argv_1424 is composed of two parts :
// @@ - a argv_1982
// @@ - a argv_815
// @@ The argv_1982 contains several fields :
// @@ - the plugin argv_3557 (string)
// @@ - the argv_1747 date (argv_4883)
// @@ - the plugin major version (argv_4883)
// @@ - the plugin minor version (argv_4883)
// @@ - the plugin argv_4860 (argv_4883).
// @@ - the length before uncompressing the argv_815 (argv_4883)
// @@ - the crc of the argv_815 before argv_4910 (string)
// @@ - the length after argv_4910 the argv_815 (argv_4883)
// @@ - the crc of the argv_815 after argv_4910 (string)
// @@ - the number of dependancies (other plugins)
// @@ For each dependancy :
// @@ {
// @@	- the dependancy argv_3557 (a plugin argv_3557 as a string)
// @@ }
// @@
// @@ The argv_815 can be found right after the argv_1982.
// @@ The argv_815 is actually a COFF argv_1424 appended to the argv_815.
// @@ (see www.microsoft.com/whdc/argv_4749/platform/firmware/PECOFF.mspx)
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_1082::argv_3715 (argv_4883 _file_ptr, argv_4883 _file_size, argv_876 _filename) {
	argv_4536 argv_2072 = argv_3922;

	argv_4883 body_offset = 0;
	argv_2072 = argv_3711 (_file_ptr, _file_size, _filename, body_offset);
	if (argv_2072 != argv_3922) {
		dset.argv_1799->argv_2327.argv_2323 (argv_1346, "+++ ERROR: failed to parse argv_1982 of plugin : ", _filename);
	}
	else {
#if defined (DEBUG_PLUGIN_LOADER)
		dset.argv_1799->argv_2327.argv_2323 (argv_1191, "parsed argv_1982 succesfully");
#endif // #if defined (DEBUG_PLUGIN_LOADER)
		argv_1244 (_filename);

#if defined (DEBUG_PLUGIN_LOADER)
		dset.argv_1799->argv_2327.argv_2323 (argv_1191, "parsing COFF argv_815 of argv_1424 : ", _filename);
#endif // #if defined (DEBUG_PLUGIN_LOADER)
		argv_2072 = argv_3708 (_file_ptr, _file_size, _filename, body_offset);
		if (argv_2072 != argv_3922) {
			dset.argv_1799->argv_2327.argv_2323 (argv_1346, "+++ ERROR: failed to parse argv_815 of plugin : ", _filename);
		}
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1082
// @@
// @@ FUNCTION		:	argv_3836		
// @@
// @@ INPUT			:
// @@ _filename: argv_876: argv_3557 of the plugin argv_1424 to argv_2274.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_4536 : argv_3922 if operation was succesful,
// @@        another argv_4979 otherwise.	
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_2274 the plugin argv_1424 whose argv_3557
// @@ is stored into the parameter '_filename'.
// @@ Notice that as plugins are encrypted and compressed, the
// @@ following steps are performed :
// @@ - decipher the plugin argv_1424 into memory
// @@ - argv_4910 the deciphered argv_1424 into memory as well
// @@ - parse the plugin argv_1424 :
// @@   - argv_2274 the argv_1982
// @@   - argv_2274 and parse the argv_815
// @@
// @@ Notice that the argv_1424 to argv_2274 is supposed to have been
// @@ mapped into memory by another function prior to this call.
// @@
// @@ CONTRACT 		:	none 
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_1082::argv_3836 (argv_893 * _gmp_ptr, argv_1130& _public_key, argv_876 _filename) {
	argv_4536 argv_2072 = argv_3922;

	// 2. decypher the argv_1424 into virtual memory
	{ 
		char argv_4846[MAX_PATH];
		argv_4569 (argv_4846, MAX_PATH, "argv_3836: argv_4756=0x%X, argv_4586=0x%X, argv_4587=%u, argv_1207=0x%X, argv_1294=%u", (argv_4883)dset.argv_4756, (argv_4883)dset.argv_4586, dset.argv_4587, (argv_4883) dset.argv_1207, dset.argv_1294);
		argv_4846[MAX_PATH - 1] = '\0';
		dset.argv_1799->argv_2327.argv_2323 (argv_1191, argv_4846);	
	}

	argv_2072 = dset.argv_1175->argv_1206 (dset.argv_4756, _gmp_ptr, _public_key, (argv_4883) dset.argv_4586, dset.argv_4587, dset.argv_1207, dset.argv_1294);
	if (argv_2072 != argv_1173) {
		string serror = argv_1344 (argv_2072);
		argv_4569 (dset.argv_4846, MAX_PATH, "+++ ERROR: argv_1082::argv_3836: decypher_file failed for argv_1424 : %s (errno: %s)", _filename, serror.c_str());
		dset.argv_4846[MAX_PATH - 1] = '\0';
		dset.argv_1799->argv_2327.argv_2323 (argv_1346, dset.argv_4846);
	}
	else {
#if defined (DEBUG_PLUGIN_LOADER)
		dset.argv_1799->argv_2327.argv_2323 (argv_1191, "plugin deciphered succesfully");
#endif // #if defined (DEBUG_PLUGIN_LOADER)

		// 3. argv_4910 the argv_1424 into virtual memory
		argv_2072 = dset.argv_1069->argv_4912 (dset.argv_4756, (argv_4883) dset.argv_1207, dset.argv_4587, dset.argv_4914, dset.argv_4915);
		if (argv_2072 != argv_2210) {
			dset.argv_1799->argv_2327.argv_2323 (argv_1346, "+++ ERROR: argv_1082::argv_3836: uncompress_file failed for argv_1424 : ", _filename);	
		}
		else {
#if defined (DEBUG_PLUGIN_LOADER)
			dset.argv_1799->argv_2327.argv_2323 (argv_1191, "plugin uncompressed succesfully");
#endif // #if defined (DEBUG_PLUGIN_LOADER)
			// 4. parse and argv_2274 the argv_1178 into a container
			argv_2072 = argv_3715 (dset.argv_4914, dset.argv_4915, _filename);
			if (argv_2072 != argv_3922) {
				dset.argv_1799->argv_2327.argv_2323 (argv_1346, "+++ ERROR: argv_1082::argv_3836: argv_3715 failed for argv_1424 : ", _filename);
			}
			dset.argv_4756->argv_3580 ();
			//argv_816				= (argv_4881 *) dset.argv_1207;
			argv_2230 = dset.argv_4915;
			// dset.argv_4756->argv_3584 ((argv_2338) dset.argv_4914);
		}

#if defined (DEBUG_PLUGIN_LOADER)
		dset.argv_1799->argv_2327.argv_2323 (argv_1191, "freeing the decyphered argv_1424 from virtual memory...");
#endif // #if defined (DEBUG_PLUGIN_LOADER)
		dset.argv_4756->argv_3584 ((argv_2338) dset.argv_1207, dset.argv_1294);
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1082
// @@
// @@ FUNCTION		:	argv_3837		
// @@
// @@ INPUT			:
// @@ _fp_dest: FILE *: descriptor on a argv_1424 opened
// @@   argv_5011 write access to save the plugin.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_4536 : argv_3922 if operation was succesful,
// @@        another argv_4979 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to generate a given plugin
// @@ using the argv_1178 contained in the argv_1082 itself.
// @@ a plugin argv_1424 is composed of two parts :
// @@ - a argv_1982
// @@ - a argv_815
// @@ The argv_1982 contains several fields :
// @@ - the plugin argv_3557 (string)
// @@ - the argv_1747 date (argv_4883)
// @@ - the plugin major version (argv_4883)
// @@ - the plugin minor version (argv_4883)
// @@ - the plugin argv_4860 (argv_4883).
// @@ - the plugin target argv_4860 (argv_4883) , i.e: PE, TXT, BIN
// @@ - the length before uncompressing the argv_815 (argv_4883)
// @@ - the crc of the argv_815 before argv_4910 (string)
// @@ - the length after argv_4910 the argv_815 (argv_4883)
// @@ - the crc of the argv_815 after argv_4910 (string)
// @@ - the number of dependancies (other plugins)
// @@ For each dependancy :
// @@ {
// @@	- the dependancy argv_3557 (a plugin argv_3557 as a string)
// @@ }
// @@ - the number of exported symbols (argv_4883)
// @@ {
// @@	- the exported symbol argv_3557 (as a string)
// @@ }
// @@
// @@ The argv_815 must be appended right after the argv_1982.
// @@ The argv_815 is actually a COFF argv_1424 appended to the argv_815.
// @@ (see www.microsoft.com/whdc/argv_4749/platform/firmware/PECOFF.mspx)
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_1082::argv_3837 (FILE * _fp_dest) {
	argv_4536 argv_2072 = argv_3922;

	// === save the argv_1982 =====
	// argv_3557 (string)
	argv_2072 = argv_4431 (argv_3557.c_str(), _fp_dest); 	
	if (argv_2072 == argv_3922) { // argv_1747 date (int)
		argv_2072 = argv_4430 (argv_1748, _fp_dest);
	}
	if (argv_2072 == argv_3922) { // version Major (int)
		argv_2072 = argv_4430 (argv_4991, _fp_dest);
	}
	if (argv_2072 == argv_3922) { // version Minor (int)
		argv_2072 = argv_4430 (argv_4992, _fp_dest);
	}
	if (argv_2072 == argv_3922) { // plugin argv_4860 (int)
		argv_2072 = argv_4430 (argv_4860, _fp_dest);
	}
	if (argv_2072 == argv_3922) { // plugin target argv_4860 (int)	 
		argv_2072 = argv_4430 (argv_4761, _fp_dest);
	}
	if (argv_2072 == argv_3922) { // argv_2231 (int)
		argv_2072 = argv_4430 (argv_2231, _fp_dest);
	}
	if (argv_2072 == argv_3922) { // argv_1114 (string)
		argv_2072 = argv_4431 (argv_1114.c_str(), _fp_dest);
	}
	if (argv_2072 == argv_3922) { // argv_2230 (int)
		argv_2072 = argv_4430 (argv_2230, _fp_dest);
	}
	if (argv_2072 == argv_3922) { // argv_1113 (string)
		argv_2072 = argv_4431 (argv_1113.c_str(), _fp_dest);
	}
	if (argv_2072 == argv_3922) { // number of dependancy (int)
		argv_2072 = argv_4430 (dset.argv_2342.size(), _fp_dest);
	}
	if (argv_2072 == argv_3922) { // all dependancies (string)
		map<string, bool>::iterator iter_local;
		for (iter_local=dset.argv_2342.begin() ; iter_local != dset.argv_2342.end() ; ++iter_local) {
			argv_2072 = argv_4431 (iter_local->first.c_str(), _fp_dest);
			if (argv_2072 != argv_3922) {
				break;	
			}
		}
	}

	if (argv_2072 == argv_3922) { // all exported symbols
		argv_4883 argv_3605 = dset.argv_2344.size ();
		argv_2072 = argv_4430 (argv_3605, _fp_dest);
		if (argv_2072 == argv_3922) {
			for (dset.argv_2100 = dset.argv_2344.begin() ; dset.argv_2100 != dset.argv_2344.end() ; ++dset.argv_2100) {
				argv_2072 = argv_4431 (dset.argv_2100->first.c_str(), _fp_dest);
				if (argv_2072 != argv_3922) {
					break;	
				}
			}
		}
	}

	// === save the argv_815 ===
	if (argv_2072 != argv_3922) {
		dset.argv_1799->argv_2327.argv_2323 (argv_1346, "+++ ERROR: argv_1082::argv_3837 - failed to save plugin argv_1982 !");
	}
	else {
		argv_4883 argv_3604 = fwrite (dset.argv_4586, 1, dset.argv_4587, _fp_dest);
		if (argv_3604 != dset.argv_4587) {
			dset.argv_1799->argv_2327.argv_2323 (argv_1346, "+++ ERROR: argv_1082::argv_3837 - failed to write argv_815 to argv_1424 !");
			argv_2072 = argv_3890;
		}
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1082
// @@
// @@ FUNCTION		:	argv_1736		
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:
// @@ - map<string, argv_1082 *>&: _map_plugin_name: each plugin, argv_5011 
// @@   it's associated argv_3557
// @@	
// @@ RETURN VALUE	:
// @@ argv_4536 : argv_3922 if operation was succesful,
// @@        another argv_4979 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to generate a map that associates 
// @@ plugin names argv_5011 their associated argv_866 using 
// @@ as an input a plugin dependancy list, that is stored
// @@ into a map.
// @@ The container that associates each plugin argv_3557 argv_5011
// @@ their coff loader is called the argv_3547 map.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_1082::argv_1736 (map<string, argv_1082 *>&	_map_plugin_name) {
	argv_4536 argv_2072 = argv_3922;
	map<string, bool>::iterator				iter_depend;
	map<string, argv_1082 *>::iterator	iter_name;

	argv_3547.clear ();
	// lookup the argv_866 associated argv_5011 each dependancy of the argv_1148 plugin and argv_646 them
	// into the argv_3547 map for symbol resolution.
	for (iter_depend=dset.argv_2342.begin() ; iter_depend != dset.argv_2342.end() ; ++iter_depend) {
		iter_name = _map_plugin_name.find (iter_depend->first);	
		if (iter_name == _map_plugin_name.end()) {
			dset.argv_1799->argv_2327.argv_2323 (argv_1346, "+++ ERROR: argv_1082::argv_1736 -  plugin not found ! - argv_3557 was : ", iter_depend->first.c_str());
			argv_2072 = argv_3931;
			break;
		}
		else {
			// associate the plugin argv_3557 and it's argv_866
			argv_3547[iter_depend->first] = iter_name->second->argv_1750 ();
		}
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1082
// @@
// @@ FUNCTION		:	argv_2278		
// @@
// @@ INPUT			:
// @@ _filename: argv_876: argv_3557 of the plugin argv_1424 to argv_2274.
// @@
// @@ _gmp_ptr: argv_893 * : pointer on an argv_3656 containing
// @@   all necessary functions to work argv_5011 the GMP.
// @@ 
// @@ _public_key: argv_1130&: the public argv_2188 to use for
// @@   plugin decipher.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_3922 if operation was succesful,
// @@        another argv_4979 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_2274 a given plugin argv_1424.
// @@ This plugin argv_1424's argv_3557 is contained in the '_filename'
// @@ parameter.
// @@ Notice that as plugins are encrypted and compressed, the
// @@ to argv_2274 a plugin argv_1424, the following steps are argv_1291 :
// @@ - mmap the plugin argv_1424
// @@ - decipher the plugin argv_1424 into memory
// @@ - argv_4910 the deciphered argv_1424 into memory as well
// @@ - parse the plugin argv_1424 :
// @@   - argv_2274 the argv_1982
// @@   - argv_2274 and parse the argv_815
// @@
// @@ CONTRACT 		: 
// @@ - '_filename' parameter must not be a NULL pointer
// @@ - '_filename' parameter must not be an empty string
// @@ - '_filename' parameter must contains the argv_3557 of an
// @@   existing and accessible argv_1424 (read access).
// @@ - the 'init' function must have been called prior to this call.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_1082::argv_2278 (argv_893 * _gmp_ptr, argv_1130& _public_key, argv_876 _filename) {
	argv_4536 argv_2072 = argv_3922;
#if defined (DEBUG_PLUGIN_LOADER)
	dset.argv_1799->argv_2327.argv_2323 (argv_1191, "processing plugin : ", _filename);
#endif // #if defined (DEBUG_PLUGIN_LOADER)

	if (dset.init_done == false) {
		dset.argv_1799->argv_2327.argv_2323 (argv_1346, "+++ ERROR: argv_1082::argv_2278 - illegal call before init !");
		argv_2072 = argv_3901;
	}
	else { // argv_4622 is OK for the operation
		if ((_filename == NULL) || (strlen(_filename)==0) || (_gmp_ptr==NULL)) {
			dset.argv_1799->argv_2327.argv_2323 (argv_1191, "argv_1082::argv_2278 - @4");
			dset.argv_1799->argv_2327.argv_2323 (argv_1346, "+++ ERROR: argv_1082::argv_2278 - invalid parameter !");
			argv_2072 = argv_3902;		
		}
		else if (argv_1426 (dset.argv_1799, dset.argv_4756, _filename) == false) {
			dset.argv_1799->argv_2327.argv_2323 (argv_1346, "+++ ERROR: argv_1082::argv_2278 - no such plugin : ", _filename);
			argv_2072 = argv_3911;
		}
		else { // parameters are ok, and the argv_1424 to argv_2274 exists
			argv_888	mmap_src;

			// 1. mmap the argv_1424 to argv_2274 to memory
			bool bret = mmap_src.argv_2532 (_filename, argv_2534, dset.argv_4586, dset.argv_4587);
			if (bret == false) {
				mmap_src.argv_1769 (dset.argv_1343, dset.argv_1351);
				argv_4569 (dset.argv_4846, MAX_PATH, "argv_1082::argv_2278(%s) failed ! - dset.argv_1351=%d, dset.argv_1343=%d", _filename, dset.argv_1351, dset.argv_1343);
				dset.argv_4846[MAX_PATH - 1] = '\0';
				dset.argv_1799->argv_2327.argv_2323 (argv_1346, dset.argv_4846);
				argv_2072 = argv_3910;
			}
			else {
#if defined (DEBUG_PLUGIN_LOADER)
				argv_4569 (dset.argv_4846, MAX_PATH, "plugin mmapped succesfully @0x%X (argv_1424 size : %d)", dset.argv_4586, dset.argv_4587);
				dset.argv_1799->argv_2327.argv_2323 (argv_1191, dset.argv_4846);
#endif // #if defined (DEBUG_PLUGIN_LOADER)
				argv_2072 = argv_3836 (_gmp_ptr, _public_key, _filename);
				mmap_src.argv_971 ();
			}
		}
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1082
// @@
// @@ FUNCTION		:	argv_4432		
// @@
// @@ INPUT			:
// @@ _coff_filename: argv_876: argv_3557 of the COFF argv_1424 use
// @@   when generating the plugin.
// @@
// @@ _dst_filename: argv_876: argv_3557 of the destination argv_1424
// @@   where the generated plugin is to be saved.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_4536 : argv_3922 if operation was succesful,
// @@        another argv_4979 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to generate a plugin argv_1424 
// @@ and save the argv_4406 into the argv_1424 whose argv_3557 is
// @@ into the '_dst_filename' parameter.
// @@ To generate a plugin, a plugin description argv_1424
// @@ must have been given and argv_2297 prior to this call. 
// @@
// @@ a plugin argv_1424 is composed of two parts :
// @@ - a argv_1982
// @@ - a argv_815
// @@ The argv_1982 contains several fields :
// @@ - the plugin argv_3557 (string)
// @@ - the argv_1747 date (argv_4883)
// @@ - the plugin major version (argv_4883)
// @@ - the plugin minor version (argv_4883)
// @@ - the plugin argv_4860 (argv_4883).
// @@ - the plugin target argv_4860 (argv_4883), i.e: PE, TXT,...
// @@ - the length before uncompressing the argv_815 (argv_4883)
// @@ - the crc of the argv_815 before argv_4910 (string)
// @@ - the length after argv_4910 the argv_815 (argv_4883)
// @@ - the crc of the argv_815 after argv_4910 (string)
// @@ - the number of dependancies (other plugins)
// @@ For each dependancy :
// @@ {
// @@	- the dependancy argv_3557 (a plugin argv_3557 as a string)
// @@ }
// @@ - the number of exported symbols (argv_4883)
// @@ {
// @@	- the exported symbol argv_3557 (as a string)
// @@ }
// @@
// @@ The argv_815 must be appended right after the argv_1982.
// @@ The argv_815 is actually a COFF argv_1424 appended to the argv_815.
// @@ (see www.microsoft.com/whdc/argv_4749/platform/firmware/PECOFF.mspx)
// @@
// @@
// @@ CONTRACT 		: 
// @@ - the 'init' function must have been called prior to this call.
// @@ - the plugin description argv_1424 must have been argv_2297 prior 
// @@   to this call.
// @@ - '_coff_filename' parameter must not be a NULL pointer.
// @@ - '_coff_filename' parameter must not be an empty string.
// @@ - '_coff_filename' must be an existing and accessible
// @@   argv_1424 (read access).
// @@ - '_dst_filename' parameter must not be a NULL pointer.
// @@ - '_dst_filename' parameter must not be an empty string.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_1082::argv_4432 (argv_876 _coff_filename, argv_876 _dst_filename) {
	argv_4536 argv_2072 = argv_3922;
	if (dset.init_done == false) {
		dset.argv_1799->argv_2327.argv_2323 (argv_1346, "+++ ERROR: argv_1082::argv_4432 - illegal call before init !");
		argv_2072 = argv_3901;
	}
	else if (dset.argv_1228 == false) {
		dset.argv_1799->argv_2327.argv_2323 (argv_1346, "+++ ERROR: argv_1082::argv_4432 - illegal call before loading description argv_1424 !");
		argv_2072 = argv_3900;
	}
	else if ((_coff_filename == NULL) || (strlen(_coff_filename)==0) || (_dst_filename==0) || (strlen(_dst_filename)==0)) {
		dset.argv_1799->argv_2327.argv_2323 (argv_1346, "+++ ERROR: argv_1082::argv_4432 - invalid parameter !");
		argv_2072 = argv_3902;		
	}
	else if (argv_1426 (dset.argv_1799, dset.argv_4756, _coff_filename) == false) {
		dset.argv_1799->argv_2327.argv_2323 (argv_1346, "+++ ERROR: argv_1082::argv_4432 - no such argv_1424 : ", _coff_filename);
		argv_2072 = argv_3911;
	}
	else {
#if defined (DEBUG_PLUGIN_LOADER)
		{
			argv_4569 (dset.argv_4846, MAX_PATH, "argv_1082::argv_4432 - coff argv_1424 : %s, destination argv_1424 : %s", _coff_filename, _dst_filename);
			dset.argv_4846[MAX_PATH - 1] = '\0';
			dset.argv_1799->argv_2327.argv_2323 (argv_1191, dset.argv_4846);
		}
#endif // #if defined (DEBUG_PLUGIN_LOADER)
		FILE * argv_1529 = fopen (_dst_filename, "wb");
		if (! argv_1529) {
			dset.argv_1799->argv_2327.argv_2323 (argv_1346, "+++ ERROR: argv_1082::argv_4432 - fopen failed for destination argv_1424 : ", _dst_filename);
			argv_2072 = argv_3896;
		}
		else {
			argv_888	mmap_src;

			// 1. mmap the coff argv_1424 (the argv_815 actually)
			bool bret = mmap_src.argv_2532 (_coff_filename, argv_2534, dset.argv_4586, dset.argv_4587);
			if (bret == false) {
				mmap_src.argv_1769 (dset.argv_1343, dset.argv_1351);
				argv_4569 (dset.argv_4846, MAX_PATH, "argv_1082::argv_2278(%s) failed ! - dset.argv_1351=%d, dset.argv_1343=%d", _coff_filename, dset.argv_1351, dset.argv_1343);
				dset.argv_4846[MAX_PATH - 1] = '\0';
				dset.argv_1799->argv_2327.argv_2323 (argv_1346, dset.argv_4846);
				argv_2072 = argv_3910;
			}
			else {
#if defined (DEBUG_PLUGIN_LOADER)
				argv_4569 (dset.argv_4846, MAX_PATH, "plugin mmapped succesfully @0x%X (argv_1424 size : %d)", dset.argv_4586, dset.argv_4587);
				dset.argv_1799->argv_2327.argv_2323 (argv_1191, dset.argv_4846);
#endif // #if defined (DEBUG_PLUGIN_LOADER)
				argv_2072 = argv_3837 (argv_1529);
				mmap_src.argv_971 ();
			}

			if (fclose (argv_1529) != 0) {
				dset.argv_1799->argv_2327.argv_2323 (argv_1346, "+++ ERROR: fclose failed ! - argv_1424 was : ", _dst_filename);
				argv_2072 = argv_3894;
			}
		}
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1082
// @@	
// @@ FUNCTION		:	argv_653		
// @@
// @@ INPUT			:
// @@ _dep_name: argv_876: argv_3557 of the plugin to be added as a 
// @@   dependancy of the argv_1148 plugin.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_3922 if operation was succesful,
// @@        another argv_4979 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ Each plugin may depend on zero or more other plugins
// @@ where necessary symbols are defined.
// @@ This function permits to argv_646 the argv_3557 of another plugin
// @@ into a container to create a list of dependancies.
// @@ The list of dependancies is very important when
// @@ performing the symbol resolution step.
// @@
// @@ CONTRACT 		: 
// @@ - the 'init' function must have been called prior to this call.
// @@ - '_dep_name' parameter must not be a NULL pointer.
// @@ - '_dep_name' parameter must not be an empty string.
// @@ - '_dep_name' must not be the argv_3557 of a dependancy already added
// @@   to the argv_1148 plugin.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_1082::argv_653 (argv_876 _dep_name) {
	argv_4536 argv_2072 = argv_3922;
	if (dset.init_done == false) {
		argv_2072 = argv_3901;
	}
	else if (_dep_name == NULL) {
		argv_2072 = argv_3902;
	}
	else if (strlen(_dep_name) == 0) {
		argv_2072 = argv_3902;
	}
	else {
		dset.argv_2099 = dset.argv_2342.find (_dep_name);
		if (dset.argv_2099 != dset.argv_2342.end()) {
			argv_2072 = argv_3891;
		}
		else { // dependancy not already defined => ok to argv_646 it
			dset.argv_2342[_dep_name] = true;	
		}
	}
	return (argv_2072);
}


argv_4536 argv_1082::argv_654 (argv_876 _symbol_name) {
	argv_4536 argv_2072 = argv_3922;
	if (dset.init_done == false) {
		argv_2072 = argv_3901;
	}
	else if (_symbol_name == NULL) {
		argv_2072 = argv_3902;
	}
	else if (strlen(_symbol_name) == 0) {
		argv_2072 = argv_3902;
	}
	else {
		dset.argv_2100 = dset.argv_2344.find (_symbol_name);
		if (dset.argv_2100 != dset.argv_2344.end()) {
			argv_2072 = argv_3893;
		}
		else { // exported symbol not added yet => ok to argv_646 it
			dset.argv_2344[_symbol_name] = true;
		}
	}
	return (argv_2072);
}

bool argv_1082::argv_1762 (string& _exported_symbol) {
	bool bret = true;
	dset.argv_2101 = dset.argv_2344.begin ();
	if (dset.argv_2101 == dset.argv_2344.end()) {
		bret = false;
	}
	else {
		_exported_symbol = dset.argv_2101->first;	
	}
	return (bret);
}

bool argv_1082::argv_1780 (string& _exported_symbol) {
	bool bret = true;
	++dset.argv_2101;
	if (dset.argv_2101 == dset.argv_2344.end()) {
		bret = false;
	}
	else {
		_exported_symbol = dset.argv_2101->first;	
	}
	return (bret);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1082
// @@
// @@ FUNCTION		:	argv_3713		
// @@
// @@ INPUT			:
// @@ _buf: char *: argv_826 containing the argv_2250 to parse.
// @@
// @@ OUTPUT		:
// @@ _var: string&: argv_3557 of the variable returned to the caller.
// @@
// @@ _val: string&: argv_4979 of the variable returned to the caller.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_3922 if operation was succesful,
// @@        another argv_4979 otherwise.	
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to parse argv_3677 argv_2250 of the plugin 
// @@ description argv_1424 that is used when generating a new plugin.
// @@ The plugin description argv_1424 is a serie of lines.
// @@ Each argv_2250 as a <variable> = <argv_4979> scheme.
// @@ The fields to be present are :
// @@ argv_4860			= <integer>
// @@ argv_4761	= <integer> , i.e: PE, TXT, BIN...
// @@ argv_3557			= <plugin argv_3557>
// @@ argv_4991 = <integer>
// @@ argv_4992 = <integer>
// @@ dependancy	= <first plugin argv_3557>
// @@ dependancy	= <second plugin argv_3557>
// @@ 
// @@ Notice that the 'dependancy' field is optional and can
// @@ be absent if the plugin is fully cohesive.
// @@
// @@ NOTICE that argv_3677 or more argv_2250 may be commented using 
// @@ the C++ syntax (double slash).
// @@ Also notice that the lines are free form, which means that
// @@ you can argv_646 spaces and tabs as necessary.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_1082::argv_3713 (char * _buf, string& _var, string& _val) {
	argv_4536 argv_2072 = argv_3922;

	_var = "";
	_val = "";
	argv_4883 size = strlen (_buf);
	argv_4883 i=0;

	// eat first white spaces
	while ((i < size) && ((_buf[i]==' ') || (_buf[i]=='\t') || (_buf[i]=='\r') || (_buf[i]=='\n'))) {
		i++;
	}

	if (i < size) {
		if ((_buf[i]=='/') && ((i+1) < size) && (_buf[i+1]=='/')) {
			;
		}
		else { // argv_1090 variable
			while ((i < size) && (_buf[i]!=' ') && (_buf[i]!='\t') && (_buf[i]!='\r') && (_buf[i]!='\n') && (_buf[i]!='=')) {
				_var += _buf[i];
				i++;
			}

			if (i >= size) {
				dset.argv_1799->argv_2327.argv_2323 (argv_1346, "+++ ERROR: parse error while consuming variable's argv_3557");
				argv_2072 = argv_3916;
			}
			else {
				// argv_1090 the space before the '='
				while ((i < size) && ((_buf[i]==' ') || (_buf[i]=='\t') || (_buf[i]=='\r') || (_buf[i]=='\n'))) {
					i++;
				}

				if (i >= size) { 
					dset.argv_1799->argv_2327.argv_2323 (argv_1346, "+++ ERROR: parse error while consuming spaces before '='"); 
					argv_2072 = argv_3916;
				}
				else { // comsume the '='
					if (_buf[i] != '=') {
						dset.argv_1799->argv_2327.argv_2323 (argv_1346, "+++ ERROR: parse error: '=' expected");
						argv_2072 = argv_3915;
					}
					else { // argv_1090 the spaces after the '='
						i++;
						
						while ((i < size) && ((_buf[i]==' ') || (_buf[i]=='\t') || (_buf[i]=='\r') || (_buf[i]=='\n'))) {
							i++;
						}

						if (i >= size) { 
							dset.argv_1799->argv_2327.argv_2323 (argv_1346, "+++ ERROR: parse error: unexpected end of argv_2250 while parsing spaces before variable's argv_4979");
							argv_2072 = argv_3916;
						}
						else { // argv_1090 the argv_4979
							while ((i < size) && (_buf[i]!=' ') && (_buf[i]!='\t') && (_buf[i]!='\r') && (_buf[i]!='\n')) {
								_val += _buf[i];
								i++;
							}

							if (_val == "") {
								argv_2072 = argv_3916;
								dset.argv_1799->argv_2327.argv_2323 (argv_1346, "+++ ERROR: parse error: empty argv_4979 !");
							}
						}
					}
				}
			}
		}
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1082
// @@
// @@ FUNCTION		:	argv_4237		
// @@
// @@ INPUT			:
// @@ _desc_filename: argv_876: argv_3557 of the plugin description argv_1424.
// @@
// @@ _v_couple: vector<argv_883>&: a vector containing
// @@   all the <variable,argv_4979> couples resulting from the parsing
// @@   of the plugin description argv_1424.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_4536 : argv_3922 if operation was succesful,
// @@        another argv_4979 otherwise.	
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to perform a deep checking of the
// @@ semantic of the plugin description argv_1424 after this argv_1424
// @@ was parsed succesfully :
// @@ - ensure that no variable are missing.
// @@ - ensure that variables have coherent values.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_1082::argv_4237 (argv_876 _desc_filename, vector<argv_883>& _v_couple) {
	argv_4536 argv_2072   = argv_3922;
	argv_4883 nb_var = _v_couple.size ();
	dset.argv_2342.clear ();
	bool name_defined			= false;
	bool type_defined			= false;
	bool target_type_defined	= false;
	bool version_minor_defined	= false;	
	bool version_major_defined	= false;
	argv_4883 argv_3603 = 0;
	argv_4883 nb_exported   = 0;

	for (argv_4883 i=0 ; i<nb_var ; i++) {
		if (_v_couple[i].argv_4984 == "argv_4991") {
			if (version_major_defined == true) {
				dset.argv_1799->argv_2327.argv_2323 (argv_1346, "+++ ERROR: argv_1082::argv_4237 - multiple definition of variable : ", _v_couple[i].argv_4984.c_str());
				argv_2072 = argv_3918;
				break;
			}
			else {
				argv_4991			= atoi (_v_couple[i].argv_4978.c_str());
				version_major_defined	= true;
			}
		}
		else if (_v_couple[i].argv_4984 == "argv_4992") {
			if (version_minor_defined == true) {
				dset.argv_1799->argv_2327.argv_2323 (argv_1346, "+++ ERROR: argv_1082::argv_4237 - multiple definition of variable : ", _v_couple[i].argv_4984.c_str());
				argv_2072 = argv_3918;
				break;
			}
			else {
				argv_4992			= atoi (_v_couple[i].argv_4978.c_str());
				version_minor_defined	= true;
			}
		}
		else if (_v_couple[i].argv_4984 == "argv_4860") {
			if (type_defined == true) {
				dset.argv_1799->argv_2327.argv_2323 (argv_1346, "+++ ERROR: argv_1082::argv_4237 - multiple definition of variable : ", _v_couple[i].argv_4984.c_str());
				argv_2072 = argv_3918;
				break;
			}
			else { // no coherency check for this field (avoid dependancy of kernel to changes)
				argv_4860 = atoi (_v_couple[i].argv_4978.c_str());
				type_defined = true;
			}
		}
		else if (_v_couple[i].argv_4984 == "argv_4761") {
			if (target_type_defined == true) {
				dset.argv_1799->argv_2327.argv_2323 (argv_1346, "+++ ERROR: argv_1082::argv_4237 - multiple definition of variable : ", _v_couple[i].argv_4984.c_str());
				argv_2072 = argv_3918;
				break;
			}
			else { // no coherency check for this field (avoid dependancy of kernel to changes)
				argv_4761 = atoi (_v_couple[i].argv_4978.c_str());
				target_type_defined = true;
			}
		}
		else if (_v_couple[i].argv_4984 == "argv_3557") {
			if (name_defined == true) {
				dset.argv_1799->argv_2327.argv_2323 (argv_1346, "+++ ERROR: argv_1082::argv_4237 - multiple definition of variable : ", _v_couple[i].argv_4984.c_str());
				argv_2072 = argv_3918;
				break;
			}
			else {
				argv_3557			= _v_couple[i].argv_4978;
				name_defined	= true;
			}
		} 
		else if (_v_couple[i].argv_4984 == "dependancy") {
			argv_2072 = argv_653 (_v_couple[i].argv_4978.c_str());
			if (argv_2072 != argv_3922) {
				string serror = argv_1344 (argv_2072);
				argv_4569 (dset.argv_4846, MAX_PATH, "+++ ERROR: argv_1082::argv_4237 - failed to argv_646 dependancy : '%s' (errno=%s)", _v_couple[i].argv_4978.c_str(), serror.c_str());
				dset.argv_4846[MAX_PATH - 1] = '\0';
				dset.argv_1799->argv_2327.argv_2323 (argv_1346, dset.argv_4846);
				break;
			}
			else {
				argv_3603++;
			}
		} 
		else if (_v_couple[i].argv_4984 == "exported") {
			argv_2072 = argv_654 (_v_couple[i].argv_4978.c_str());
			if (argv_2072 != argv_3922) {
				string serror = argv_1344 (argv_2072);
				argv_4569 (dset.argv_4846, MAX_PATH, "+++ ERROR: argv_1082::argv_4237 - failed to argv_646 exported symbol : '%s' (errno=%s)", _v_couple[i].argv_4978.c_str(), serror.c_str());
				dset.argv_4846[MAX_PATH - 1] = '\0';
				dset.argv_1799->argv_2327.argv_2323 (argv_1346, dset.argv_4846);
				break;
			}
			else {
				nb_exported++;
			}
		}
	}

	// now ensure that all necessary variables have been argv_2297
	if (argv_2072 == argv_3922) {
		if (name_defined == false) {
			argv_2072 = argv_3917;
			dset.argv_1799->argv_2327.argv_2323 (argv_1346, "+++ ERROR: argv_1082::argv_4237 - missing variable 'argv_3557'");
		}
		if (type_defined == false) {
			argv_2072 = argv_3917;
			dset.argv_1799->argv_2327.argv_2323 (argv_1346, "+++ ERROR: argv_1082::argv_4237 - missing variable 'argv_4860'");
		}
		if (target_type_defined == false) {
			argv_2072 = argv_3917;
			dset.argv_1799->argv_2327.argv_2323 (argv_1346, "+++ ERROR: argv_1082::argv_4237 - missing variable 'argv_4761'");
		}
		if (version_minor_defined == false) {
			argv_2072 = argv_3917;
			dset.argv_1799->argv_2327.argv_2323 (argv_1346, "+++ ERROR: argv_1082::argv_4237 - missing variable 'version_minor_defined'");
		}
		if (version_major_defined == false) {
			argv_2072 = argv_3917;
			dset.argv_1799->argv_2327.argv_2323 (argv_1346, "+++ ERROR: argv_1082::argv_4237 - missing variable 'version_major_defined'");
		}
		if (nb_exported == 0) {
			argv_2072 = argv_3917;
			dset.argv_1799->argv_2327.argv_2323 (argv_1346, "+++ ERROR: argv_1082::argv_4237 - missing variable 'exported'");
		}
		if (argv_3603 == 0) {
			dset.argv_1799->argv_2327.argv_2323 (argv_5006, "*** WARNING: the plugin have no dependancy defined !");
		}
	}

	// set default values for unused sizes and CRCs
	argv_2231 = 0;
	argv_1114    = "no_crc";
	argv_2230  = 0;
	argv_1113     = "no_crc";
	argv_1748			 = 0;
	argv_3603			 = dset.argv_2342.size ();
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1082
// @@
// @@ FUNCTION		:	argv_1240		
// @@
// @@ INPUT			:
// @@ _v_couple: vector<argv_883>&: a vector containing
// @@   all the <variable,argv_4979> couples resulting from the parsing
// @@   of the plugin description argv_1424.
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
// @@ This function permits to argv_1235 to log argv_1424
// @@ the argv_4406 of the parsing of the plugin
// @@ description argv_1424.
// @@ 
// @@ This function is here for debug purpose only.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_1082::argv_1240 (vector<argv_883>& _v_couple) {
#if defined (DEBUG_PLUGIN_LOADER)
	dset.argv_1799->argv_2327.argv_2323 (argv_1191, "=========== parse argv_4406 ================");
	argv_4883 argv_3605 = _v_couple.size ();
	for (argv_4883 i=0 ; i<argv_3605 ; i++) {
		argv_4569 (dset.argv_4846, MAX_PATH, "%s = %s", _v_couple[i].argv_4984.c_str(), _v_couple[i].argv_4978.c_str());
		dset.argv_4846[MAX_PATH - 1] = '\0';
		dset.argv_1799->argv_2327.argv_2323 (argv_1191, dset.argv_4846);
	}
#endif // #if defined (DEBUG_PLUGIN_LOADER)
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1082
// @@
// @@ FUNCTION		:	argv_4335		
// @@
// @@ INPUT			:
// @@ _desc_filename: argv_876: argv_3557 of the plugin description argv_1424
// @@   to be parsed.
// @@
// @@ _fp_desc: FILE *: descriptor on the plugin description argv_1424
// @@   to be parsed, notice that it must have been opened argv_5011
// @@   read access by another function prior to this call. 
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_4536 : argv_3922 if operation was succesful,
// @@        another argv_4979 otherwise.	
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function uses the opened FILE pointer given as the
// @@ '_fp_desc' parameter to argv_2274 and parse each argv_2250 of the
// @@ plugin description argv_1424 whose argv_3557 is contained into the
// @@ '_desc_filename' parameter.
// @@
// @@ The plugin description argv_1424 is a serie of lines.
// @@ Each argv_2250 as a <variable> = <argv_4979> scheme.
// @@ The fields to be present are :
// @@ argv_4860				= <integer>
// @@ argv_4761		= <integer>
// @@ argv_3557				= <plugin argv_3557>
// @@ argv_4991		= <integer>
// @@ argv_4992		= <integer>
// @@ dependancy		= <first plugin argv_3557>
// @@ dependancy		= <second plugin argv_3557>
// @@ exported			= <first exported symbol>
// @@ exported			= <second exported symbol>
// @@ 
// @@ Notice that the 'dependancy' field is optional and can
// @@ be absent if the plugin is fully cohesive.
// @@
// @@ NOTICE that argv_3677 or more argv_2250 may be commented using 
// @@ the C++ syntax (double slash).
// @@ Also notice that the lines are free form, which means that
// @@ you can argv_646 spaces and tabs as necessary.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_1082::argv_4335 (argv_876 _desc_filename, FILE * _fp_desc) {
	argv_4536 argv_2072 = argv_3922;
	char argv_826[MAX_PATH];
	argv_883 couple;
	vector<argv_883> v_couple;
	argv_4883 argv_1157 = 1;
	dset.argv_1799->argv_2327.argv_2323 (argv_1191, "parsing plugin description argv_1424 : ", _desc_filename);

	char * cptr = fgets (argv_826, MAX_PATH, _fp_desc);

	while (cptr != NULL) {
		argv_2072 = argv_3713 (argv_826, couple.argv_4984, couple.argv_4978);
#if defined (DEBUG_PLUGIN_LOADER)
		{
			argv_4569 (dset.argv_4846, MAX_PATH, "argv_3713 => argv_4984='%s', argv_4978='%s'", couple.argv_4984.c_str(), couple.argv_4978.c_str());
			dset.argv_4846[MAX_PATH - 1] = '\0';
			dset.argv_1799->argv_2327.argv_2323 (argv_1191, dset.argv_4846);
		}
#endif

		if (argv_2072 != argv_3922) {
			string serror = argv_1344 (argv_2072);
			argv_4569 (dset.argv_4846, MAX_PATH, "+++ ERROR: parse error at argv_2250 %d : %s", argv_1157, serror.c_str());
			dset.argv_4846[MAX_PATH - 1] = '\0';
			dset.argv_1799->argv_2327.argv_2323 (argv_1346, dset.argv_4846);
			argv_2072 = argv_3914;
			break;
		}
		else if ((couple.argv_4978 != "") && (couple.argv_4984 == "")) {
			argv_4569 (dset.argv_4846, MAX_PATH, "+++ ERROR: parse error at argv_2250 %d : empty variable !", argv_1157);
			dset.argv_4846[MAX_PATH - 1] = '\0';
			dset.argv_1799->argv_2327.argv_2323 (argv_1346, dset.argv_4846);
			argv_2072 = argv_3914;
			break;
		}
		else if ((couple.argv_4984 != "") && (couple.argv_4978 == "")) {
			argv_4569 (dset.argv_4846, MAX_PATH, "+++ ERROR: parse error at argv_2250 %d : empty argv_4979 !", argv_1157);
			dset.argv_4846[MAX_PATH - 1] = '\0';
			dset.argv_1799->argv_2327.argv_2323 (argv_1346, dset.argv_4846);
			argv_2072 = argv_3914;
			break;
		}
		else if ((couple.argv_4984 != "") && (couple.argv_4978 != "")) {
			v_couple.push_back (couple);
		}
		cptr = fgets (argv_826, MAX_PATH, _fp_desc);
		argv_1157++;
	}

	argv_1240 (v_couple);

	if (argv_2072 == argv_3922) {
		argv_2072 = argv_4237 (_desc_filename, v_couple);
		if (argv_2072 != argv_3922) {
			dset.argv_1799->argv_2327.argv_2323 (argv_1346, "+++ ERROR: plugin description argv_1424 post process failed ! - argv_1424 was : ", _desc_filename);
		}
	}
	else {
		dset.argv_1799->argv_2327.argv_2323 (argv_1346, "+++ ERROR: argv_1082::argv_4335 - parse failed !");
	}
	return (argv_2072);	
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1082
// @@
// @@ FUNCTION		:	argv_3710		
// @@
// @@ INPUT			:
// @@ _desc_filename: argv_876: argv_3557 of the plugin description argv_1424
// @@   to be argv_2297 and parsed.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_3922 if operation was succesful,
// @@        another argv_4979 otherwise.	
// @@
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@
// @@ CONTRACT 		: 
// @@ - the 'init' function must have been called prior to this call.
// @@ - no plugin description argv_1424 must have been argv_2297 yet.
// @@ - '_desc_filename' parameter must not be a NULL pointer.
// @@ - '_desc_filename' parameter must not be an empty string.
// @@ - '_desc_filename' parameter must be the argv_3557 of an existing
// @@   and accessible argv_1424 (read access).
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_1082::argv_3710 (argv_876 _desc_filename) {
	argv_4536 argv_2072 = argv_3922;

	if (dset.init_done == false) {
		argv_2072 = argv_3901;
	}
	else if (dset.argv_1228 == true) {
		argv_2072 = argv_3898;
	}
	else if ((_desc_filename == NULL) || (strlen(_desc_filename)==0)) {
		argv_2072 = argv_3902;
	}
	else if (argv_1426 (dset.argv_1799, dset.argv_4756, _desc_filename) == false) {
		dset.argv_1799->argv_2327.argv_2323 (argv_1346, "+++ ERROR: argv_1082::argv_3710 - argv_1424 not found ! - argv_1424:", _desc_filename);
		argv_2072 = argv_3911;
	}
	else { // now try and open the argv_1424
#if defined (DEBUG_PLUGIN_LOADER)
		dset.argv_1799->argv_2327.argv_2323 (argv_1191, "about to parse plugin description argv_1424 : ", _desc_filename);
#endif // #if defined (DEBUG_PLUGIN_LOADER)

		FILE * fp_desc = fopen (_desc_filename, "rb");
		if (! fp_desc) {
			argv_2072 = argv_3896;
		}
		else {
			argv_2072 = argv_4335 (_desc_filename, fp_desc);
			fclose (fp_desc);

			if (argv_2072 == argv_3922) {
				dset.argv_1228 = true;
			}
		}
	}

	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1082
// @@
// @@ FUNCTION		:	argv_1750		
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_866 *: the argv_665 of the argv_866
// @@ argv_3656 associated argv_5011 the argv_1148 argv_1082 argv_3656.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ A plugin is composed of a argv_1982 and a argv_815.
// @@ the argv_815 is a COFF argv_1424 that is argv_2297 and parsed
// @@ by a argv_866 that is embedded into the argv_1082
// @@ argv_3656.	
// @@	
// @@ This function permits to retrieve the argv_665 of the 
// @@ argv_866 argv_3656 associated argv_5011 the argv_1148 argv_1082
// @@ argv_3656.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_866 * argv_1082::argv_1750 () {
	return (&dset.argv_977);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1424
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
