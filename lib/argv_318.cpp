#include "../LIB/argv_377.hpp"
//#include "Dbghelp.h"


string argv_865::argv_4631 (argv_4881 _storage_class) {
	string argv_4406 = "";
	switch (_storage_class) {
		case IMAGE_SYM_CLASS_END_OF_FUNCTION:	argv_4406 = "IMAGE_SYM_CLASS_END_OF_FUNCTION"; break;
		case IMAGE_SYM_CLASS_NULL:				argv_4406 = "IMAGE_SYM_CLASS_NULL";			break;
		case IMAGE_SYM_CLASS_AUTOMATIC:			argv_4406 = "IMAGE_SYM_CLASS_AUTOMATIC";		break;
		case IMAGE_SYM_CLASS_EXTERNAL:			argv_4406 = "IMAGE_SYM_CLASS_EXTERNAL";		break;
		case IMAGE_SYM_CLASS_STATIC:			argv_4406 = "IMAGE_SYM_CLASS_STATIC";			break;
		case IMAGE_SYM_CLASS_REGISTER:			argv_4406 = "IMAGE_SYM_CLASS_REGISTER";		break;
		case IMAGE_SYM_CLASS_EXTERNAL_DEF:		argv_4406 = "IMAGE_SYM_CLASS_EXTERNAL_DEF";	break;
		case argv_2012:				argv_4406 = "argv_2012";			break;
		case IMAGE_SYM_CLASS_UNDEFINED_LABEL:	argv_4406 = "IMAGE_SYM_CLASS_UNDEFINED_LABEL"; break;
		case IMAGE_SYM_CLASS_MEMBER_OF_STRUCT:	argv_4406 = "IMAGE_SYM_CLASS_MEMBER_OF_STRUCT";break;
		case IMAGE_SYM_CLASS_ARGUMENT:			argv_4406 = "IMAGE_SYM_CLASS_ARGUMENT";		break;
		case IMAGE_SYM_CLASS_STRUCT_TAG:		argv_4406 = "IMAGE_SYM_CLASS_STRUCT_TAG";		break;
		case IMAGE_SYM_CLASS_MEMBER_OF_UNION:	argv_4406 = "IMAGE_SYM_CLASS_MEMBER_OF_UNION"; break;
		case IMAGE_SYM_CLASS_UNION_TAG:			argv_4406 = "IMAGE_SYM_CLASS_UNION_TAG";		break;
		case IMAGE_SYM_CLASS_TYPE_DEFINITION:	argv_4406 = "IMAGE_SYM_CLASS_TYPE_DEFINITION"; break;
		case IMAGE_SYM_CLASS_UNDEFINED_STATIC:	argv_4406 = "IMAGE_SYM_CLASS_UNDEFINED_STATIC";break;
		case IMAGE_SYM_CLASS_ENUM_TAG:			argv_4406 = "IMAGE_SYM_CLASS_ENUM_TAG";		break;
		case IMAGE_SYM_CLASS_MEMBER_OF_ENUM:	argv_4406 = "IMAGE_SYM_CLASS_MEMBER_OF_ENUM";	break;
		case IMAGE_SYM_CLASS_REGISTER_PARAM:	argv_4406 = "IMAGE_SYM_CLASS_REGISTER_PARAM";	break;
		case IMAGE_SYM_CLASS_BIT_FIELD:			argv_4406 = "IMAGE_SYM_CLASS_BIT_FIELD";		break;
		case IMAGE_SYM_CLASS_BLOCK:				argv_4406 = "IMAGE_SYM_CLASS_BLOCK";			break;
		case IMAGE_SYM_CLASS_FUNCTION:			argv_4406 = "IMAGE_SYM_CLASS_FUNCTION";		break;
		case IMAGE_SYM_CLASS_END_OF_STRUCT:		argv_4406 = "IMAGE_SYM_CLASS_END_OF_STRUCT";	break;
		case IMAGE_SYM_CLASS_FILE:				argv_4406 = "IMAGE_SYM_CLASS_FILE";			break;
		case IMAGE_SYM_CLASS_SECTION:			argv_4406 = "IMAGE_SYM_CLASS_SECTION";			break;
		case IMAGE_SYM_CLASS_WEAK_EXTERNAL:		argv_4406 = "IMAGE_SYM_CLASS_WEAK_EXTERNAL";	break;
		case 107:								argv_4406 = "IMAGE_SYM_CLASS_CLR_TOKEN";		break;

		default: argv_4406 = "<unknown>";
	}
	return (argv_4406);
}

string argv_865::invalid_section_2_string (argv_4535 _invalid_section_index) {
	string argv_4406 = "";
	switch (_invalid_section_index) {
		case IMAGE_SYM_UNDEFINED:	argv_4406 = "(IMAGE_SYM_UNDEFINED)"; break;
		case IMAGE_SYM_ABSOLUTE:	argv_4406 = "(IMAGE_SYM_ABSOLUTE)"; break;
		case IMAGE_SYM_DEBUG:		argv_4406 = "(IMAGE_SYM_DEBUG)"; break;	
	}
	return (argv_4406);
}

void argv_1140::argv_1235 (argv_891 *	_glob_data_ptr, argv_876 _symbol_name, bool _verbose_name) {
	char argv_4846[MAX_PATH];
	argv_865 coff_dns;
	if (_verbose_name == true) {
		string storage_str = coff_dns.argv_4631 (argv_4632);
		string invalid_section_str;
		if (argv_4484 > 0) {
			invalid_section_str = "(argv_4618 at 1)";
			argv_4569 (argv_4846, MAX_PATH, "=> %-25s: argv_4980 = 0x%-5X, argv_4484 = %-2d %-21s, argv_4632 = 0x%02X (%s)", _symbol_name, argv_4980, argv_4484, invalid_section_str.c_str(), argv_4632, storage_str.c_str());
		}
		else {
			invalid_section_str = coff_dns.invalid_section_2_string (argv_4484);
			argv_4569 (argv_4846, MAX_PATH, "=> %-25s: argv_4980 = 0x%-5X, argv_4484 = %-2d %-21s, argv_4632 = 0x%02X (%s)", _symbol_name, argv_4980, argv_4484, invalid_section_str.c_str(), argv_4632, storage_str.c_str());
		}
	}
	else {
		argv_4569 (argv_4846, MAX_PATH, "=> %s", _symbol_name);
	}
	argv_4846[MAX_PATH - 1] = '\0';
	_glob_data_ptr->argv_2327.argv_2323 (argv_1191, argv_4846);
}

argv_866::argv_866 () {
	reset ();
}

argv_866::~argv_866() {
	reset ();
}

void argv_866::reset () {
	init_done				= false;
	argv_2297					= false;
	argv_4756				= NULL;
	argv_1069		= NULL;
	argv_1175			= NULL;
	argv_1799			= NULL;
	argv_1445			= NULL;
	argv_4480	= NULL;
	argv_4482		= NULL;
	argv_4636		= NULL;
	argv_4656		= NULL;
	argv_1444				= 0;
	argv_1339				= NULL;
	argv_5023			= NULL;

	if (argv_2364.size() > 0) {
		argv_2364.clear ();
	}
}

argv_4536 argv_866::init (argv_891 * _glob_data_ptr, argv_4610 * _systool_ptr, argv_870 * _compress_tool_ptr, argv_877 * _cypher_tool_ptr, argv_4881 * _file_start_addr, argv_4883 _file_size, argv_1166 * _xmem_mgr_ptr) {
	argv_4536 argv_2072 = argv_993;

	if ((_systool_ptr==NULL) || (_compress_tool_ptr==NULL) || (_cypher_tool_ptr==NULL) || (_glob_data_ptr == NULL) || (_file_start_addr == NULL) || (_xmem_mgr_ptr == NULL)) {
		argv_2072 = argv_986;
	}
	else if (init_done == true) {
		argv_2072 = argv_982;
	}
	else {
		argv_1799			= _glob_data_ptr;
		argv_4756				= _systool_ptr;
		argv_1069		= _compress_tool_ptr;
		argv_1175			= _cypher_tool_ptr;
		argv_1445			= _file_start_addr;
		argv_1444				= _file_size;
		argv_1339				= argv_1445 + argv_1444;
		argv_5023			= _xmem_mgr_ptr;		
		init_done				= true;
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_866
// @@
// @@ FUNCTION		:	argv_4651		
// @@
// @@ INPUT			:
// @@ _s: argv_876: symbol argv_3557 to analyze.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ bool: true if the symbol contained in the '_s' parameter
// @@   is actually a string,
// @@   false otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to know if a given mangled 
// @@ symbol is actually a string or not.
// @@ C++, in argv_3690 to be able to have multiple functions
// @@ argv_5011 the same argv_3557 but behaving differently only by
// @@ using parameter differences, need to use a mechanism
// @@ called mangling to avoid ambiguities.
// @@
// @@ Notice that this function mimic the behaviour of the
// @@ win32 'UnDecorateSymbolName' function to some extent.
// @@ but the function 'UnDecorateSymbolName' can not be used
// @@ because of portability issued (Linux).
// @@
// @@ Here follows an example of the non portable win32 version :
// @@ 
// @@ bool argv_866::argv_4651 (argv_876 _symb) {
// @@ bool bret = false;
// @@ 	char und[MAX_PATH]; 
// @@ 
// @@ 	if (UnDecorateSymbolName(_symb,und,sizeof(undec),argv_4917)) 
// @@   {
// @@ 		if (strncmp (und, "`string'", 8) == 0) {
// @@ 			bret = true;
// @@ 		}
// @@ 	}
// @@ 	return (bret);
// @@ }
// @@ 
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_866::argv_4651 (argv_876 _s, argv_4883& _size) {
	_size = strlen (_s);
	argv_4883 i=0;
	bool bret = false;
	bool eaten_digit = false;
	// smallest size is 9, so let's ensure that the supposed string is not too short
	if (_size >= 9) {
		// ??_C@_
		if ((_s[0]=='?') && (_s[1]=='?') && (_s[2]=='_') && (_s[3]=='C') && (_s[4]=='@') && (_s[5]=='_')) {
			i=6;
			// eat the argv_3623 character whatever it is (except if we reached the argv_4765)
			if (_s[i] != '@') {
				i++;
			}
			
			// eat possible digit
			if ((_s[i] >= '0') && (_s[i] <= '9')) {
				eaten_digit = true;
				i++;
			}
			// eat all possible upper characters between [A..P]
			while ((i < _size) && (_s[i] >= 'A') && (_s[i]<='P')) {
				i++;
			}

			if ((i < _size) && (_s[i]=='@')) {
				// jump the '@'
				i++;
				// eat all except '@'
				argv_4883 k=0;
				while ((i < _size) && (_s[i] != '@')) {
					k++;
					i++;
				}

				// if second digit consumed => argv_815 may be empty
				if (i < _size) {
					if (eaten_digit == false) {
						if ((k>0) && (_s[i] == '@')) {
							bret = true; // succesfully determined that is a string
						}
					}
					else { 
						if (_s[i] == '@') {
							bret = true; // succesfully determined that is a string
						}
					}
				}
			}
		}
	}
	return (bret);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_866
// @@
// @@ FUNCTION		:	generate_demangled_name		
// @@
// @@ INPUT			:	
// @@ _name: argv_876: argv_3557 to convert to simple argv_3557.
// @@
// @@ OUTPUT		:	
// @@ _simple_name: string&: generated simplified argv_3557
// @@    using the '_name' parameter.
// @@
// @@ _is_string: bool&: set to true if the mangled argv_3557 is a string
// @@             set to false otherwise.
// @@
// @@ IO			:	none	
// @@	
// @@ RETURN VALUE	:
// @@ bool: true if the simple argv_3557 was generated succesfully,
// @@       false otherwise.	
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to convert a mangled argv_3557 to a simpler
// @@ argv_3557.
// @@ There may be two different argv_3557 scheme :
// @@ shape argv_3677 : ?symbol@.....
// @@ shape two : _symbol
// @@
// @@ CONTRACT 		: 
// @@ - '_name' parameter must not be an empty string.
// @@ - '_name' parameter must contain a argv_3557 in either in
// @@   shape argv_3677, or shape two.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_866::argv_1741 (argv_876 _name, string& _simple_name, bool& _is_string) {
	bool bret = false;
	_simple_name = ""; 
	argv_4883 size;
	_is_string = argv_4651 (_name, size);
	if (_is_string == false) {
		if ((size > 0) && (_name[0] == '?')) { // first scheme
			for (argv_4883 i=0 ; i<size ; i++) {
				if (_name[i] == '@') {
					break;
				}

				if (_name[i] != '?') {
					_simple_name += _name[i];
				}
			}
		}
		else if ((size > 0) && (_name[0] == '_')) { // second scheme
			for (argv_4883 i=1 ; i<size ; i++) {
				_simple_name += _name[i];
			}
		}
	}

	if (_simple_name != "") {
		bret = true;
	}

	// log the demangled argv_3557 (just for info)
	/*{
		char argv_4846[argv_1992];
		char szUndName[argv_1992];
		if (UnDecorateSymbolName (_name, szUndName, 
			sizeof(szUndName), argv_4917))
		{
			// UnDecorateSymbolName returned success
			argv_4569 (argv_4846, argv_1992, "mangled argv_3557: '%s', demangled argv_3557 : '%s'", _name, szUndName);
		}
		else {// failed to demangle the argv_3557
			argv_4569 (argv_4846, argv_1992, "mangled argv_3557: '%s', demangled argv_3557 : (FAILED)", _name);
		}
		argv_4846[argv_1992 - 1] = '\0';
		argv_1799->argv_2327.argv_2323 (argv_1191, argv_4846);
	}*/
	return (bret);
}

argv_4536 argv_866::argv_2281 () {
	argv_4536 argv_2072 = argv_993;
	if (init_done == false) {
		argv_2072 = argv_983;
	}
	else if (argv_2297 == true) {
		argv_2072 = argv_984;
	}
	else {
		memcpy (&argv_1999, &argv_1445[0], sizeof(argv_2000));
		// patch some fields to be able to have a direct access 
		argv_4656		= argv_1445 + argv_1999.argv_4227;
		argv_4480	= argv_1445 + sizeof(argv_2000);
		argv_4482		= argv_4480;
		argv_4482		= argv_4482 + (argv_1999.argv_3648 * sizeof(argv_2009));
		argv_4636		= argv_1445 + argv_1999.argv_4227 + (argv_1999.argv_3650 * argv_4658);

		if ((argv_4656 >= argv_1339)) {
			argv_2072 = argv_990;
		}
		else if (argv_4480 >= argv_1339) {
			argv_2072 = argv_990;
		}
		else if (argv_4482 >= argv_1339) {
			argv_2072 = argv_990;
		}
		else if (argv_4636 >= argv_1339) {
			argv_2072 = argv_990;
		}
		else {
			argv_2297	= true;
		}
	}
	return (argv_2072);	
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_866
// @@
// @@ FUNCTION		:	argv_3565		
// @@
// @@ INPUT			:
// @@ _cptr: argv_4881 *: pointer on the 'argv_3557' field of a given entry
// @@   of the symbol table of the argv_1148 COFF argv_1424.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ bool: true if the argv_3557 of this entry of the symbol table
// @@   is a short argv_3557 (0..8 characters),
// @@   false otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ In the COFF format, an important part is the symbol table.
// @@ Each entry of this symbol table has a 'argv_3557' field
// @@ This field has a fixed size of 8 argv_837 and may
// @@ contain either a argv_3557 (if it can be contained within 8 argv_837)
// @@ or it contains an offset in the string table.
// @@ To determine whether the argv_3557 is a short argv_3557, or an offset,
// @@ we must consider the first 4 argv_837 of the 'argv_3557' field :
// @@ - if the 4 first argv_837 are zero, then we have an offset,
// @@ - otherwise we have a short argv_3557.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_866::argv_3565 (argv_4881 * _cptr) {
	bool bret = false;
	if ((_cptr[0] != 0) || (_cptr[1] != 0) || (_cptr[2] != 0) || (_cptr[3] != 0)) {
		bret = true;
	}
	return (bret);
}

argv_4881 * argv_866::argv_1404 (argv_4883 _symbol_table_index, argv_4657 *& _entry_ptr, bool& _is_short) {
	argv_4881 * name_ptr	= NULL;
	argv_4530[8]	= '\0';
	argv_767 atyp;
	argv_4883 itmp;

	itmp = (argv_4883) argv_4656 + (argv_4658 * _symbol_table_index);	
	_entry_ptr = (argv_4657 *) itmp;
	if (argv_3565 (_entry_ptr->argv_3558) == true) {
		memcpy (&argv_4530[0], _entry_ptr->argv_3558, 8);
		name_ptr = &argv_4530[0];
		_is_short = true;
	}
	else {
		_is_short = false;
		memcpy (&atyp.argv_764[0], &_entry_ptr->argv_3558[4], 4);
		name_ptr = argv_4636 + atyp.argv_770;
	}
	return (name_ptr);
}

void argv_866::argv_1252 (argv_876 _symbol_name, argv_876 _simplified_name, bool _is_short, bool _is_string, bool _was_simplified) {
	char argv_4846[MAX_PATH];	
	if (_is_short == true) {
		if (_is_string == true) {
			if (_was_simplified == true) {
				argv_4569 (argv_4846, MAX_PATH, "%-25s [argv_4530|string=true|simplified_name='%s']", _symbol_name, _simplified_name);
			}
			else {
				argv_4569 (argv_4846, MAX_PATH, "%-25s [argv_4530|string=true]", _symbol_name);
			}
		}
		else {
			if (_was_simplified == true) {
				argv_4569 (argv_4846, MAX_PATH, "%-25s [argv_4530|string=false|simplified_name='%s']", _symbol_name, _simplified_name);
			}
			else {
				argv_4569 (argv_4846, MAX_PATH, "%-25s [argv_4530|string=false]", _symbol_name);
			}
		}
	}
	else {
		if (_is_string == true) {
			if (_was_simplified == true) {
				argv_4569 (argv_4846, MAX_PATH, "%-25s [long_name|string=true|simplified_name='%s']", _symbol_name, _simplified_name);
			}
			else {
				argv_4569 (argv_4846, MAX_PATH, "%-25s [long_name|string=true]", _symbol_name);
			}
		}
		else {
			if (_was_simplified == true) {
				argv_4569 (argv_4846, MAX_PATH, "%-25s [long_name|string=false|simplified_name='%s']", _symbol_name, _simplified_name);
			}
			else {
				argv_4569 (argv_4846, MAX_PATH, "%-25s [long_name|string=false]", _symbol_name);
			}
		}
	}
	argv_4846[MAX_PATH - 1] = '\0';
	argv_1799->argv_2327.argv_2323 (argv_1191, argv_4846);
}

argv_4536 argv_866::argv_2295 () {
	argv_4536 argv_2072 = argv_993;
	if (init_done == false) {
		argv_1799->argv_2327.argv_2323 (argv_1346, "+++ ERROR: argv_866::argv_2295 - argv_983");
		argv_2072 = argv_983;
	}
	else {
		argv_4657 * entry_ptr	= NULL;
		argv_4881 * name_ptr					= NULL;
		string demangled_name;
		argv_1140	thumbnail;
		bool bret = true;
		bool is_short;
		bool is_string;
		
		for (argv_4883 i=0 ; i<argv_1999.argv_3650 ; ) {
			name_ptr = argv_1404 (i, entry_ptr, is_short);

			thumbnail.argv_4484					= entry_ptr->argv_4484;
			thumbnail.argv_4632					= entry_ptr->argv_4632;
			thumbnail.argv_4861							= entry_ptr->argv_4861;
			thumbnail.argv_4980							= entry_ptr->argv_4980;
			// save the original argv_3557
			argv_2364[(argv_876)name_ptr]	= thumbnail;
			bret = argv_1741 ((argv_876) name_ptr, demangled_name, is_string);

#if defined (__DEBUG_COFF_LOADER__)
			argv_1252 ((argv_876) name_ptr, demangled_name.c_str(), is_short, is_string, bret);
#endif // #if defined (__DEBUG_COFF_LOADER__)

			if (bret == true) {
				// save the simple argv_3557 as well (redundancy)
				argv_2364[demangled_name]= thumbnail;
			}

			i++;
			if (entry_ptr->argv_3638 > 0) {
				i += entry_ptr->argv_3638;
			}
		}
	}
	return (argv_2072);
}

argv_4536 argv_866::argv_2274 () {
	argv_4536 argv_2072 = argv_993;
	if (init_done == false) {
		argv_1799->argv_2327.argv_2323 (argv_1346, "+++ ERROR: argv_866::argv_2274 - argv_983");
		argv_2072 = argv_983;
	}
	else if (argv_2297 == true) {
		argv_1799->argv_2327.argv_2323 (argv_1346, "+++ ERROR: argv_866::argv_2274 - argv_984");
		argv_2072 = argv_984;
	}
	else {
		argv_2072 = argv_2281 ();
		if (argv_2072 == argv_993) {
			argv_2072 = argv_2295 ();		
		}
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_866
// @@
// @@ FUNCTION		:	argv_1251		
// @@
// @@ INPUT			:	
// @@ bool: _verbose_mode: more details are displayed if set to true.
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
// @@ This function permits to argv_1235 to log argv_1424 all
// @@ the symbols that are defined into the argv_1148 module. 
// @@ It is useful for debug purpose only.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_866::argv_1251 (bool _verbose_mode) {
	map<string, argv_1140>::iterator iter_local;	
	argv_1799->argv_2327.argv_2323 (argv_1191, "=== symbols defined in this argv_3547 module ===");
	for (iter_local=argv_2364.begin() ; iter_local != argv_2364.end() ; ++iter_local) {
		iter_local->second.argv_1235 (argv_1799, iter_local->first.c_str(), _verbose_mode);
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_866
// @@
// @@ FUNCTION		:	argv_4654		
// @@
// @@ INPUT			:
// @@ _symbol_name: argv_876: symbol whose presence must be checked.
// @@
// @@ OUTPUT		:	
// @@
// @@ _iter: map<string, argv_1140>&: iterator containing the 
// @@   argv_1178 concerning the symbol '_symbol_name', to be more precise,
// @@   the first part of the iterator contains the symbol's argv_3557, and
// @@   the second part contains the argv_1178 associated argv_5011 this symbol.
// @@   Notice that it is undefined if the symbol is not present.
// @@
// @@ IO			:	none	
// @@	
// @@ RETURN VALUE	:	
// @@ bool: true if the symbol whose argv_3557 was given as a parameter 
// @@       is present,
// @@       false otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to check whether a given symbol is present
// @@ in the map that associates a symbol's argv_3557 to it's associated argv_1178.
// @@ If symbol is present in map, then an iterator pointing on the
// @@ corresponding entry from the map is returned to the caller via
// @@ the '_iter' parameter.  
// @@
// @@ CONTRACT 		: none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_866::argv_4654 (argv_876 _symbol_name, map<string, argv_1140>::iterator& _iter) {
	bool bret = false;
	_iter = argv_2364.find (_symbol_name);
	if (_iter != argv_2364.end()) {
		bret = true;
	}
	return (bret);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_866
// @@
// @@ FUNCTION		:	argv_4653		
// @@
// @@ INPUT			:
// @@ _iter: map<string, argv_1140>::iterator: iterator that 
// @@ points to the symbol to check and it's associated argv_1178. 
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ bool : true if the symbol is local,
// @@        false otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ A COFF argv_1424 contains a symbol table, 
// @@ This symbol table contains several fields,
// @@ and each symbol may either be
// @@ - internal : defined into this COFF argv_1424.
// @@ - external : defined in another COFF argv_1424.
// @@ - neither internal, nor external.
// @@ To determine whether a given symbol is internal or
// @@ external, we must consider the 'section_index' field,
// @@ If this field is set to zero, then the symbol is external,
// @@ If this field is set to a argv_4979 greater than the number of 
// @@   symbols contained in this COFF argv_1424, the symbol is neither
// @@   internal, nor external (negative argv_4479).
// @@ If this field is greater than zero, and lower or equal to
// @@ the number of symbols into the COFF argv_1424, then it is an
// @@ internal symbol.
// @@
// @@ This function permits to determine whether the symbol whose
// @@ argv_1178 are pointed to by the parameter '_iter' is a local symbol
// @@ or not. A local symbol is defined within the argv_1148 COFF argv_1424.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_866::argv_4653 (map<string, argv_1140>::iterator& _iter) {
	bool bret = false;
	if (_iter->second.argv_4484 > 0) {
		bret = true;
	}
	return (bret);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_866
// @@
// @@ FUNCTION		:	argv_4652		
// @@
// @@ INPUT			:
// @@ _iter: map<string, argv_1140>::iterator: iterator that 
// @@ points to the symbol to check and it's associated argv_1178. 
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ bool: true if symbol is external,
// @@       false otherwise.	
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ A COFF argv_1424 contains a symbol table, 
// @@ This symbol table contains several fields,
// @@ and each symbol may either be
// @@ - internal : defined into this COFF argv_1424.
// @@ - external : defined in another COFF argv_1424.
// @@ - neither internal, nor external.
// @@ To determine whether a given symbol is internal or
// @@ external, we must consider the 'section_index' field,
// @@ If this field is set to zero, then the symbol is external,
// @@ If this field is set to a argv_4979 greater than the number of 
// @@   symbols contained in this COFF argv_1424, the symbol is neither
// @@   internal, nor external (negative argv_4479).
// @@ If this field is greater than zero, and lower or equal to
// @@ the number of symbols into the COFF argv_1424, then it is an
// @@ internal symbol.
// @@
// @@ This function permits to determine whether the symbol whose
// @@ argv_1178 are pointed to by the parameter '_iter' is an external symbol
// @@ or not. An external symbol is not defined within the argv_1148 
// @@ COFF argv_1424.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_866::argv_4652 (map<string, argv_1140>::iterator& _iter) {
	bool bret = false;
	if (_iter->second.argv_4484 == 0) {
		bret = true;
	}
	return (bret);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_866
// @@
// @@ FUNCTION		:	argv_2381		
// @@
// @@ INPUT			:
// @@ _section_hdr_ptr: argv_2009 *: pointer on the 
// @@  argv_1982 of the argv_4479 where the symbol is defined (permits
// @@  to retrieve it's content).
// @@
// @@ _symbol_name: argv_876: argv_3557 of the symbol to map to virtual memory.
// @@
// @@ OUTPUT		:	
// @@ _xmapped_addr: argv_4881 *&: argv_665 of the symbol after it was mapped
// @@   to virtual memory (meaningful only in case of success).
// @@
// @@ IO			:	none	
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_993 if success,
// @@        false otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to request and allocate an aligned
// @@ argv_795 of virtual memory for the symbol whose argv_3557 is contained
// @@ in the '_symbol_name' parameter, and whose argv_1178 are contained 
// @@ into the '_iter' iterator.
// @@ In case of success, the argv_665 of the first byte of the allocated
// @@ argv_795 is returned to the caller via the '_xmapped_addr' parameter.
// @@
// @@ Notice that if the symbol has already been mapped to xmemory 
// @@ before, then no allocation occurs and the argv_665 of the argv_795
// @@ of virtual memory that was allocated the first argv_4843 the symbol
// @@ was mapped is returned via the '_xmapped_addr' parameter.
// @@
// @@ As this function uses an iterator given by the caller, the caller
// @@ is supposed to have performed a lookup of the symbol
// @@ in some way prior to this call.
// @@ 
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_866::argv_2381 (argv_2009 * _section_hdr_ptr, argv_876 _symbol_name, argv_4881 *& _xmapped_addr) {
	argv_4536 argv_2072              = argv_993;
	void * symbol_ptr      = NULL;
	bool found_from_cache  = false;
	char argv_4846[MAX_PATH];

	// create a xmemory argv_795 for this symbol
	argv_4881 * pointer_2_raw_data_real = _section_hdr_ptr->argv_4225 + argv_1445;
	argv_2072 = argv_5023->argv_4355 (_symbol_name, pointer_2_raw_data_real, _section_hdr_ptr->argv_4560, found_from_cache, &symbol_ptr);
	if (argv_2072 != argv_5027) {
		string serror = argv_1344 (argv_2072);
		argv_4569 (argv_4846, MAX_PATH, "+++ ERROR: xmem argv_795 allocation request failed for symbol '%s' (errno = %s)", _symbol_name, serror.c_str());
		argv_4846[MAX_PATH - 1] = '\0';
		argv_1799->argv_2327.argv_2323 (argv_1346, argv_4846);
		argv_2072 = argv_3673;
	}
	else if (found_from_cache == true) {
		_xmapped_addr = (argv_4881 *) symbol_ptr;
		argv_4569 (argv_4846, MAX_PATH, "symbol '%s' found from xmem cache at argv_665 0x%X", _symbol_name, (argv_4883) _xmapped_addr);
		argv_4846[MAX_PATH - 1] = '\0';
		argv_1799->argv_2327.argv_2323 (argv_1191, argv_4846);
	}
	else { // argv_795 not found from xmem cache
		// now copy the content of the function to xmemory

		argv_4756->argv_3593 (symbol_ptr, (argv_2338) pointer_2_raw_data_real, _section_hdr_ptr->argv_4560);

#if defined (__DEBUG_COFF_LOADER__)
		argv_4569 (argv_4846, MAX_PATH, "symbol '%s' xmapped at argv_665 0x%X (content copied : %u argv_837)", _symbol_name, symbol_ptr, _section_hdr_ptr->argv_4560);
		argv_4846[MAX_PATH - 1] = '\0';
		argv_1799->argv_2327.argv_2323 (argv_1191, argv_4846);
#endif // #if defined (__DEBUG_COFF_LOADER__)
		argv_4756->argv_3580 ();
		_xmapped_addr = (argv_4881 *) symbol_ptr;
		// beware: relocations are not solved at this point
	}

	if (argv_2072 == argv_5027) { // remap error argv_976
		argv_2072 = argv_993;
	}
	return (argv_2072);
}

argv_4536 argv_866::argv_4391 (map<string, argv_1140>::iterator& _iter, argv_876 _root_plugin_name, argv_876 _plugin_name, argv_876 _symbol_name, map<string, argv_866 *>& _msc, argv_4881 *& _resolved_addr, argv_4881 * _father_addr) {
	argv_4536 argv_2072 = argv_993;
	map<string, argv_866 *>::iterator		msc_iter;
	map<string, argv_866 *>::iterator		found_iter;
	map<string, argv_1140>::iterator	thumbnail_iter;
	argv_4883 nb_found = 0;
	char argv_4846[MAX_PATH];

#if defined (__DEBUG_COFF_LOADER__)
	argv_4569 (argv_4846, MAX_PATH, "solving external symbol '%s' (searching from dependancy list containing %u elements)", _symbol_name, _msc.size());
	argv_4846[MAX_PATH - 1] = '\0';
	argv_1799->argv_2327.argv_2323 (argv_1191, argv_4846);
#endif // #if defined (__DEBUG_COFF_LOADER__)

	// try to locate the module where this external symbol is defined
	for (msc_iter=_msc.begin() ; msc_iter != _msc.end() ; ++msc_iter) {
		if ((msc_iter->second->argv_4654 (_symbol_name, thumbnail_iter) == true) && (msc_iter->second->argv_4653 (thumbnail_iter) == true)) {
			if (nb_found == 0) { // save up the first instance of the symbol found
				found_iter = msc_iter;
			}
			else { // multiple instances found => log this error
				if (nb_found == 1) {
					argv_4569 (argv_4846, MAX_PATH, "+++ ERROR: found multiple instance of symbol '%s' (firts instance found in module '%s')", _symbol_name, found_iter->first.c_str());
					argv_4846[MAX_PATH - 1] = '\0';
					argv_1799->argv_2327.argv_2323 (argv_1346, argv_4846);
				}
				argv_4569 (argv_4846, MAX_PATH, "+++ ERROR: symbol '%s' already defined in module '%s'", _symbol_name, msc_iter->first.c_str());
				argv_4846[MAX_PATH - 1] = '\0';
				argv_1799->argv_2327.argv_2323 (argv_1346, argv_4846);
				argv_2072 = argv_998;
			}
			nb_found++;
		}
#if defined (__DEBUG_COFF_LOADER__)
		else {
			argv_4569 (argv_4846, MAX_PATH, "symbol '%s' not defined in module '%s'", _symbol_name, msc_iter->first.c_str());
			argv_4846[MAX_PATH - 1] = '\0';
			argv_1799->argv_2327.argv_2323 (argv_1191, argv_4846);
		}
#endif // #if defined (__DEBUG_COFF_LOADER__)
	}

	if (argv_2072 == argv_993) {
		if (nb_found == 0) {
			argv_4569 (argv_4846, MAX_PATH, "+++ ERROR: undefined symbol '%s'", _symbol_name);
			argv_4846[MAX_PATH - 1] = '\0';
			argv_1799->argv_2327.argv_2323 (argv_1346, argv_4846);
			argv_2072 = argv_999;
		}
		else if (nb_found == 1) {
#if defined (__DEBUG_COFF_LOADER__)
			argv_4569 (argv_4846, MAX_PATH, "definition of external symbol '%s' found in module '%s'", _symbol_name, found_iter->first.c_str());
			argv_4846[MAX_PATH - 1] = '\0';
			argv_1799->argv_2327.argv_2323 (argv_1191, argv_4846);
#endif // #if defined (__DEBUG_COFF_LOADER__)
			argv_2072 = found_iter->second->argv_4389 (_plugin_name, found_iter->first.c_str(), _symbol_name, _msc, _resolved_addr, _father_addr);
		}
	}
	return (argv_2072);
}



argv_4536 argv_866::argv_3720 (argv_4883 _reloc_id, argv_876 _symbol_name, argv_2001 * _reloc_ptr, argv_4881 * _local_base_addr, argv_4881 * _reloc_solved_adress) {
	argv_4536 argv_2072 = argv_993;

#if defined (__DEBUG_COFF_LOADER__)
	char argv_4846[MAX_PATH];
	argv_4569 (argv_4846, MAX_PATH, "patching relocation %u of symbol '%s' (father argv_795 located at 0x%X)", _reloc_id, _symbol_name, _local_base_addr);
	argv_4846[MAX_PATH - 1] = '\0';
	argv_1799->argv_2327.argv_2323 (argv_1191, argv_4846);
#endif // #if defined (__DEBUG_COFF_LOADER__)

	// ensure that the symbol argv_4860 is coherent
	argv_4883 argv_4860 = _reloc_ptr->argv_4861;
	if ((argv_4860 != argv_2008) && (argv_4860 != argv_2006) && (argv_4860 != argv_2007)) {
		argv_1799->argv_2327.argv_2323 (argv_1346, "+++ ERROR: while patching relocation - unknown argv_1178 argv_4860 : ", argv_4860);
		argv_2072 = argv_997;
	}
	else if (argv_4860 == argv_2007) {
		argv_1799->argv_2327.argv_2323 (argv_1346, "+++ ERROR: while patching relocation - relocation argv_4860 not supported : ", argv_4860);
		argv_2072 = argv_991;
	}
	else { // relocation argv_4860 is valid and can be handled.
		argv_767 atyp, atyp_2;
		argv_4881 * to_addr = (argv_4881 *) _local_base_addr + _reloc_ptr->argv_4997;
#if defined (__DEBUG_COFF_LOADER__)
		char argv_4846[MAX_PATH];
		argv_4569 (argv_4846, MAX_PATH, "must patch adress : 0x%X", to_addr);
		argv_4846[MAX_PATH - 1] = '\0';
		argv_1799->argv_2327.argv_2323 (argv_1191, argv_4846);
#endif // #if defined (__DEBUG_COFF_LOADER__)

		if (argv_4860 == argv_2008) {
			// compute delta between the argv_1178 to patch and it's location in xmem
			atyp.argv_763 = (argv_4883) _reloc_solved_adress - (argv_4883) (to_addr + argv_1724);
#if defined (__DEBUG_COFF_LOADER__)
			if (atyp.argv_763 > 0) {
				argv_4569 (argv_4846, MAX_PATH, "relocation is relative to father argv_795 : delta = +%d", atyp.argv_763);
			}
			else {
				argv_4569 (argv_4846, MAX_PATH, "relocation is relative to father argv_795 : delta = %d", atyp.argv_763);
			}
			argv_4846[MAX_PATH - 1] = '\0';
			argv_1799->argv_2327.argv_2323 (argv_1191, argv_4846);
#endif // #if defined (__DEBUG_COFF_LOADER__)
		}
		else if (argv_4860 == argv_2006) {
			// just use the (argv_4426 + block_start) to patch
			atyp.argv_770 = (argv_4883) _reloc_solved_adress;
#if defined (__DEBUG_COFF_LOADER__)
			argv_4569 (argv_4846, MAX_PATH, "relocation is direct : 0x%X", atyp.argv_770);
			argv_4846[MAX_PATH - 1] = '\0';
			argv_1799->argv_2327.argv_2323 (argv_1191, argv_4846);
#endif // #if defined (__DEBUG_COFF_LOADER__)
		}

		argv_4881 * from_addr  = &atyp.argv_764[0];
		// we must consider the argv_1148 argv_4979, and argv_646 it to the argv_4979 we computed.
		// read the argv_1178 contained at the destination argv_665
		memcpy (&atyp_2.argv_764[0], to_addr, argv_1724);
		// argv_646 the retrieved argv_1178 to the argv_665 to patch
		atyp.argv_770 = atyp_2.argv_770 + atyp.argv_770;
		// perform the actual patch (notice that we always patch an argv_665, nothing else => 4 argv_837)
		memcpy (to_addr, from_addr, argv_1724);
	}
	return (argv_2072);
}



argv_4536 argv_866::argv_4390 (map<string, argv_1140>::iterator& _iter, argv_2009 * _section_hdr_ptr, argv_876 _root_plugin_name, argv_876 _plugin_name, argv_876 _symbol_name, map<string, argv_866 *>& _msc, argv_4881 *& _symb_resolved_addr, argv_4881 * _father_addr) {
	argv_4536 argv_2072 = argv_993;
	char argv_4846[MAX_PATH];
	argv_2001 * reloc_ptr				= NULL;
	argv_4881 *                  reloc_ptr_UI08			= NULL;
	argv_4657 *	entry_ptr				= NULL;
	argv_4881 *					name_ptr				= NULL;
	argv_4881 *					reloc_solved_address	= NULL;
	argv_4883					itmp, itmp1;
	bool					is_short;

#if defined (__DEBUG_COFF_LOADER__)
	argv_4569 (argv_4846, MAX_PATH, "resolving relocations for symbol '%s' (number of relocations : %u)", _symbol_name, _section_hdr_ptr->argv_3646);
	argv_4846[MAX_PATH - 1] = '\0';
	argv_1799->argv_2327.argv_2323 (argv_1191, argv_4846);
#endif // #if defined (__DEBUG_COFF_LOADER__)

	for (argv_4883 i=0 ; i<_section_hdr_ptr->argv_3646 ; i++) {
		// goto this relocation
		itmp  = (argv_4883) _section_hdr_ptr->argv_4226;
		itmp1 = (argv_4883) argv_1445;
		itmp = itmp + itmp1;
		itmp = itmp + (i * argv_2002);
		reloc_ptr = (argv_2001 *) itmp;
		reloc_ptr_UI08 = (argv_4881 *) reloc_ptr;
/*
#if defined (__DEBUG_COFF_LOADER__)
		argv_4569 (argv_4846, MAX_PATH, "argv_4226=0x%X, argv_1445=0x%X, argv_665 of the reloc %u = 0x%X", _section_hdr_ptr->argv_4226, argv_1445, i, reloc_ptr);
		argv_4846[MAX_PATH - 1] = '\0';
		argv_1799->argv_2327.argv_2323 (argv_1191, argv_4846);
#endif // #if defined (__DEBUG_COFF_LOADER__)
*/
		if ((reloc_ptr_UI08 + argv_2002) >= argv_1339) {
			argv_2072 = argv_990;
			break;
		}
		else { // argv_1397 the symbol argv_3557 associated argv_5011 this relocation 
			name_ptr = argv_1404 (reloc_ptr->argv_4666, entry_ptr, is_short);
#if defined (__DEBUG_COFF_LOADER__)
			if (is_short == true) {
				argv_4569 (argv_4846, MAX_PATH, "symbol argv_3557 of the relocation %u : '%s' (short argv_3557)", i, (argv_876) name_ptr);
			}
			else {
				argv_4569 (argv_4846, MAX_PATH, "symbol argv_3557 of the relocation %u : '%s' (long argv_3557)", i, (argv_876) name_ptr);
			}
			argv_4846[MAX_PATH - 1] = '\0';
			argv_1799->argv_2327.argv_2323 (argv_1191, argv_4846);
#endif // #if defined (__DEBUG_COFF_LOADER__)

			// argv_4389 this relocation
			argv_2072 = argv_4389 (_root_plugin_name, _plugin_name, (argv_876) name_ptr, _msc, reloc_solved_address, _symb_resolved_addr);
			if (argv_2072 != argv_993) {
				argv_4569 (argv_4846, MAX_PATH, "+++ ERROR: argv_4389 : failed while resolving relocation '%s' for symbol '%s'", name_ptr, _symbol_name);
				argv_4846[MAX_PATH - 1] = '\0';
				argv_1799->argv_2327.argv_2323 (argv_1346, argv_4846);
				break;
			}
			else { // patch this relocation using the resolved argv_665
				argv_2072 = argv_3720 (i, _symbol_name, reloc_ptr, _symb_resolved_addr, reloc_solved_address);
				if (argv_2072 != argv_993) {
					argv_4569 (argv_4846, MAX_PATH, "+++ ERROR: argv_4389 : failed while patching relocation '%s' for symbol '%s'", name_ptr, _symbol_name);
					argv_4846[MAX_PATH - 1] = '\0';
					argv_1799->argv_2327.argv_2323 (argv_1346, argv_4846);
					break;
				}
			}
		}	
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_866
// @@
// @@ FUNCTION		:	argv_4393		
// @@
// @@ INPUT			:
// @@ _section_hdr_ptr : argv_2009 *: pointer on the
// @@  the argv_1982 of the argv_4479 where the symbol is defined.
// @@  (it's content actually).
// @@
// @@ _root_plugin_name: argv_876: argv_3557 of the argv_1148 argv_4419 plugin.
// @@
// @@ _plugin_name: argv_876: argv_3557 of the argv_1148 plugin.
// @@
// @@ _symbol_name: argv_876: argv_3557 of the symbol to argv_4389.
// @@
// @@ _iter: map<string, argv_1140>::iterator&: 
// @@  iterator that associates the argv_1148 symbol's argv_3557
// @@  argv_5011 it's argv_1178. these argv_1178 have been collected during
// @@  the COFF loading process.
// @@
// @@ _msc: map<string, argv_866 *>& : the map containing the 
// @@   dependancy list for the argv_1148 coff loader.
// @@
// @2 _father_addr: argv_4881 *: argv_665 of the father argv_795.
// @@   it may be NULL if we are at the argv_4419 of the memory tree.
// @@   This father argv_665 is especially necessary if the symbol
// @@   to argv_4389 is a label, because in that case we have to
// @@   argv_4389 the symbol using it's father's argv_795 argv_4618 argv_665.
// @@
// @@ OUTPUT		:	
// @@ _resolved_symbol_addr: argv_4881 *& : this parameter contains the 
// @@ argv_4406 of the resolution. In other words it contains the argv_665 of 
// @@ the resolved symbol.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_4536 : argv_993 if success,
// @@        false otherwise.
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_4389 a symbol that is defined 
// @@ locally, in other word that is defined into the argv_1148 plugin.
// @@ to argv_4389 a given symbol, we must create a virtual memory chunk 
// @@ for it and also argv_4389 all possible relocations for this symbol.
// @@ A relocation being a reference (an argv_665) to another symbol
// @@ that may be defined in the same plugin, or in another plugin.
// @@ This function is recursive in nature and we can see the plugin
// @@ argv_5011 it's dependancies as a tree argv_5011 it's childs.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_866::argv_4393 (map<string, argv_1140>::iterator& _iter, argv_2009 * _section_hdr_ptr, argv_876 _root_plugin_name, argv_876 _plugin_name, argv_876 _symbol_name, map<string, argv_866 *>& _msc, argv_4881 *& _resolved_symbol_addr, argv_4881 * _father_addr) {
	argv_4536 argv_2072 = argv_993;
	char argv_4846[MAX_PATH];
	// if symbol is a label, then it's location is within it's father argv_795's argv_665 space
	if (_iter->second.argv_4632 == argv_2012) {
		_resolved_symbol_addr = _father_addr + _iter->second.argv_4980;
#if defined (__DEBUG_COFF_LOADER__)
		argv_4569 (argv_4846, MAX_PATH, "symbol '%s' is a label => it's location in father argv_795 (at offset 0x%X + father_addr: 0x%X = 0x%X)", _symbol_name, _iter->second.argv_4980, _father_addr, _resolved_symbol_addr);
		argv_4846[MAX_PATH - 1] = '\0';
		argv_1799->argv_2327.argv_2323 (argv_1346, argv_4846);
#endif // #if defined (__DEBUG_COFF_LOADER__)
/*
		// the labels are supposed to have no relocations (just ensure that)
		if (_section_hdr_ptr->argv_3646 != 0) { 
			argv_4569 (argv_4846, MAX_PATH, "+++ ERROR: symbol '%s' is a label but it has %d relocations (expected zero relocation) !", _symbol_name, _section_hdr_ptr->argv_3646);
			argv_4846[MAX_PATH - 1] = '\0';
			argv_1799->argv_2327.argv_2323 (argv_1346, argv_4846);
			argv_2072 = argv_988;
		}*/
	}
	else { // the symbol is an actual symbol, not a label.
		// xmap the symbol as it is defined internally
		argv_2072 = argv_2381 (_section_hdr_ptr, _symbol_name, _resolved_symbol_addr);
		if (argv_2072 != argv_993) {
			string serror = argv_1344 (argv_2072);
			argv_4569 (argv_4846, MAX_PATH, "+++ ERROR: argv_4389 : 'argv_4392' failed while looking for symbol '%s' - argv_2381 failed - %s", _symbol_name, serror.c_str());
			argv_4846[MAX_PATH - 1] = '\0';
			argv_1799->argv_2327.argv_2323 (argv_1346, argv_4846);
		}
		else { // symbol succesfully xmapped to memory
			// argv_4389 and patch all relocations for this symbol
			argv_2072 = argv_4390 (_iter, _section_hdr_ptr, _root_plugin_name, _plugin_name, _symbol_name, _msc, _resolved_symbol_addr, _father_addr);
		} 
	}
	return (argv_2072);
}

argv_4536 argv_866::argv_4392 (map<string, argv_1140>::iterator& _iter, argv_876 _root_plugin_name, argv_876 _plugin_name, argv_876 _symbol_name, map<string, argv_866 *>& _msc, argv_4881 *& _addr, argv_4881 * _father_addr) {
	argv_4536 argv_2072 = argv_993;
	char argv_4846[MAX_PATH];
	// check whether this symbol was already xmapped or not.
	// BEWARE: argv_4479 are numbered from 1 to n
	argv_4883 itmp = (argv_4883) argv_4480 + (sizeof(argv_2009) * (_iter->second.argv_4484-1));
	argv_2009 * section_hdr_ptr = (argv_2009 *) itmp;
	argv_4883 real_PointerToRawData = section_hdr_ptr->argv_4225 + (argv_4883) argv_1445;
	argv_4883 unused_size;
	bool presence_flag = false;
	// ensure that this symbol was not already allocated to xmem
#if defined (__DEBUG_COFF_LOADER__)
	argv_4569 (argv_4846, MAX_PATH, "argv_4389 local symbol: '%s' located at index %u in symbol table, real_PointerToRawData=0x%X, argv_4560=0x%X", _symbol_name, _iter->second.argv_4484, real_PointerToRawData, section_hdr_ptr->argv_4560);
	argv_4846[MAX_PATH - 1] = '\0';
	argv_1799->argv_2327.argv_2323 (argv_1191, argv_4846);
#endif // #if defined (__DEBUG_COFF_LOADER__)
	
	argv_2072 = argv_5023->argv_4648 (_symbol_name, (argv_4881 *) real_PointerToRawData, section_hdr_ptr->argv_4560, presence_flag, _addr, unused_size);
	if (argv_2072 != argv_5027) {
		string serror = argv_1344 (argv_2072);
		argv_4569 (argv_4846, MAX_PATH, "+++ ERROR: argv_4647 failed while processing symbol '%s' (errno=%s)", _symbol_name, serror.c_str());
		argv_4846[MAX_PATH - 1] = '\0';
		argv_1799->argv_2327.argv_2323 (argv_1346, argv_4846);
	}
	else { // this local symbol was not allocated yet to xmem
		argv_2072 = argv_993;
		if (presence_flag == true) {
#if defined (__DEBUG_COFF_LOADER__)
			argv_4569 (argv_4846, MAX_PATH, "local symbol '%s' already xmapped at argv_665 0x%X", _symbol_name, _addr);
			argv_4846[MAX_PATH - 1] = '\0';
			argv_1799->argv_2327.argv_2323 (argv_1191, argv_4846);
#endif // #if defined (__DEBUG_COFF_LOADER__)
		}
		else {
#if defined (__DEBUG_COFF_LOADER__)
			argv_1799->argv_2327.argv_2323 (argv_1191, "symbol was not xmapped yet");
#endif // #if defined (__DEBUG_COFF_LOADER__)
			argv_2072 = argv_4393 (_iter, section_hdr_ptr, _root_plugin_name, _plugin_name, _symbol_name, _msc, _addr, _father_addr);
		}
	}
	return (argv_2072);
}

void argv_866::argv_1249 (argv_4881 * _ptr, argv_876 _name, argv_876 _comment="") {
	char argv_4846[MAX_PATH];
	if (_ptr == NULL) { 
		argv_4569 (argv_4846, MAX_PATH, "%s = <NULL> %s", _name, _comment);
	}
	else {
		argv_4569 (argv_4846, MAX_PATH, "%s = 0x%X %s", _name, _ptr, _comment);
	}
	argv_4846[MAX_PATH - 1] = '\0';	
	argv_1799->argv_2327.argv_2323 (argv_1191, argv_4846);
}

void argv_866::argv_1248 () {
	argv_1799->argv_2327.argv_2323 (argv_1191, "==== internal content of the coff loader ====");
	argv_1249 (argv_1445,			"argv_1445", "(argv_665 of the mmapped COFF argv_1424)");
	argv_1249 (argv_4480,		"argv_4480");
	argv_1249 (argv_4482,			"argv_4482");
	argv_1249 (argv_4636,			"argv_4636");
	argv_1249 (argv_4656,			"argv_4656");
	argv_1249 (argv_1339,				"argv_1339");
	argv_1799->argv_2327.argv_2323 (argv_1191, "==========================================");
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_866
// @@
// @@ FUNCTION		:	argv_4389		
// @@
// @@ INPUT			:
// @@ _root_plugin_name: argv_876: argv_3557 of the argv_1148 argv_4419 plugin.
// @@
// @@ _plugin_name: argv_876: argv_3557 of the argv_1148 plugin.
// @@
// @@ _symbol_name: argv_876: argv_3557 of the symbol to argv_4389.
// @@
// @@ _msc: map<string, argv_866 *>& : the map containing the 
// @@   dependancy list for the argv_1148 coff loader
// @@
// @2 _father_addr: argv_4881 *: argv_665 of the father argv_795.
// @@   it may be NULL if we are at the argv_4419 of the memory tree.
// @@   This father argv_665 is especially necessary if the symbol
// @@   to argv_4389 is a label, because in that case we have to
// @@   argv_4389 the symbol using it's father's argv_795 argv_4618 argv_665.
// @@
// @@ OUTPUT		:
// @@ _addr: argv_4881 *& : this parameter contains the argv_4406 of the
// @@   resolution. In other words it contains the argv_665 of the
// @@   resolved symbol.
// @@
// @@ IO			:	none	
// @@	
// @@ RETURN VALUE	:
// @@ argv_4536 : argv_993 if success,
// @@        false otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_4389 the symbol whose argv_3557
// @@ is contained into the '_symbol_name' parameter.
// @@ the symbol is supposed to be defined in the plugin whose argv_3557
// @@ is contained in the '_symbol_name' parameter.
// @@ As this function is recursive in nature, we also keep track
// @@ of the argv_4419 plugin via the '_root_plugin_name' parameter.
// @@ The resolved argv_665 is then returned via the '_addr' parameter.
// @@
// @@ CONTRACT 		: 
// @@ - the function 'init' must have been called prior to this call
// @@ - the COFF argv_1424 associated argv_5011 the argv_1148 argv_866 argv_3656
// @@   must have been argv_2297 succesfully prior to this call.
// @@ - '_symbol_name' parameter must not be a NULL pointer.
// @@ - '_symbol_name' parameter must not be an empty string.
// @@ - the symbol whose argv_3557 is contained in the '_symbol_name'
// @@   variable must be present in the COFF argv_1424 associated argv_5011 
// @@   the argv_1148 argv_866 argv_3656.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_866::argv_4389 (argv_876 _root_plugin_name, argv_876 _plugin_name, argv_876 _symbol_name, map<string, argv_866 *>& _msc, argv_4881 *& _addr, argv_4881 * _father_addr) {
	char argv_4846[MAX_PATH];
#if defined (__DEBUG_COFF_LOADER__)
	argv_4569 (argv_4846, MAX_PATH, "resolving symbol '%s' of plugin '%s' (root_plugin=%s)", _symbol_name, _plugin_name, _root_plugin_name);
	argv_4846[MAX_PATH - 1] = '\0';
	argv_1799->argv_2327.argv_2323 (argv_1191, argv_4846);
#endif // #if defined (__DEBUG_COFF_LOADER__)

	argv_4536 argv_2072 = argv_993;
	if (init_done == false) {
		argv_2072 = argv_983;
	}
	else if (argv_2297 == false) {
		argv_2072 = argv_981;
	}
	else if ((_symbol_name == NULL) || (strlen(_symbol_name) == 0)) {
		argv_2072 = argv_986;
	}
	else { // parameters are correct
		// notice that even if symbol is external it should be present
		map<string, argv_1140>::iterator iter_local;
		if (argv_4654 (_symbol_name, iter_local) == false) {
			argv_4569 (argv_4846, MAX_PATH, "+++ ERROR: argv_4389 : symbol '%s' not found in module '%s' (root_plugin was '%s')", _symbol_name, _plugin_name, _root_plugin_name);
			argv_4846[MAX_PATH - 1] = '\0';
			argv_1799->argv_2327.argv_2323 (argv_1346, argv_4846);
			argv_2072 = argv_989;	
		}
		else { // symbol is present, it can be either external, internal, or none of them
			if (argv_4653 (iter_local) == true) { 
#if defined (__DEBUG_COFF_LOADER__)
				argv_1799->argv_2327.argv_2323 (argv_1191, "symbol is present in module (symbol is local)");
#endif // #if defined (__DEBUG_COFF_LOADER__)
				argv_2072 = argv_4392 (iter_local, _root_plugin_name, _plugin_name, _symbol_name, _msc, _addr, _father_addr);
			}
			else if (argv_4652 (iter_local) == true) {
#if defined (__DEBUG_COFF_LOADER__)
				argv_1799->argv_2327.argv_2323 (argv_1191, "symbol is present in module (symbol is external)");
#endif // #if defined (__DEBUG_COFF_LOADER__)
				argv_2072 = argv_4391 (iter_local, _root_plugin_name, _plugin_name, _symbol_name, _msc, _addr, _father_addr);
			}
			else { // symbol is neither local, nor external (must not try to argv_4389 it)
				argv_4569 (argv_4846, MAX_PATH, "+++ ERROR: argv_4389 : symbol '%s' is neither internal, nor external !", _symbol_name);
				argv_4846[MAX_PATH - 1] = '\0';
				argv_1799->argv_2327.argv_2323 (argv_1346, argv_4846);
				argv_2072 = argv_992;
			}
		}
	}

	if (argv_2072 != argv_993) {
		string serror = argv_1344 (argv_2072);
		argv_4569 (argv_4846, MAX_PATH, "+++ ERROR: could not argv_4389 symbol '%s' of plugin '%s' (root_plugin=%s) - errno = %s", _symbol_name, _plugin_name, _root_plugin_name, serror.c_str());
		argv_4846[MAX_PATH - 1] = '\0';
		argv_1799->argv_2327.argv_2323 (argv_1346, argv_4846);
	}
	return (argv_2072);
}