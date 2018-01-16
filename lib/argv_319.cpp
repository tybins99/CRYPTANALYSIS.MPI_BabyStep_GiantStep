// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_319.cpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1424 contains all argv_1178 structure and
// @@ functions necessary for the coff loader
// @@ argv_3656 to work properly.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/obj_loader_OLD.hpp"




// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_880
// @@
// @@ FUNCTION		:	argv_880		
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
// @@ Normal constructor of the 'argv_880' argv_3656.
// @@ It resets the argv_880 argv_3656 to it's original argv_4622.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_880::argv_880 () {
	reset ();
}


// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_880
// @@
// @@ FUNCTION		:	~argv_880		
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
// @@ destructor of the 'argv_880' argv_3656.
// @@ It resets the argv_880 argv_3656 to it's original argv_4622.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_880::~argv_880 () {
	reset ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_880
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
// @@ This function permits to bring the argv_880
// @@ argv_3656 back to it's original argv_4622.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_880::reset () {
	section_index			= 0;
	argv_4560			= 0;
	argv_4225		= 0;
	argv_4226	= 0;
	argv_3646		= 0;
	real_start_addr			= 0;
	argv_4860					= 0;
	argv_4979					= 0;
	storage_class			= 0;

	v_relocation.clear ();
	// force the vector to free it's memory
	vector<Crich_reloc_unit>().swap (v_relocation);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_867
// @@
// @@ FUNCTION		:	argv_867		
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
// @@ Normal constructor of the 'argv_867' argv_3656.
// @@ It resets the argv_867 argv_3656 to it's original argv_4622.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_867::argv_867 () {
	reset ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_867
// @@
// @@ FUNCTION		:	~argv_867		
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
// @@ destructor of the 'argv_867' argv_3656.
// @@ It resets the argv_867 argv_3656 to it's original argv_4622.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_867::~argv_867 () {
	reset ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_867
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
// @@ This function permits to bring the argv_867
// @@ argv_3656 back to it's original argv_4622.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_867::reset () {
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

	map<string, argv_880>::iterator iter_local;
	for (iter_local=m_name_data.begin() ; iter_local != m_name_data.end() ; ++iter_local) {
		iter_local->second.reset ();	
	}
	m_name_data.clear ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_867
// @@
// @@ FUNCTION		:	argv_1247		
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
// @@ This function permits to argv_1235 to log argv_1424 all the 
// @@ important argv_1178 contained into the argv_867 argv_3656.
// @@ It is useful for debug purpose only.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_867::argv_1247 () {
#if defined (DEBUG_COFF_LOADER)
	char argv_4846[MAX_PATH];
	argv_4569 (argv_4846, MAX_PATH, "argv_1445 = %X", argv_1445);
	argv_4846[MAX_PATH - 1] = '\0';
	argv_1799->argv_2327.argv_2323 (argv_1191, argv_4846);

	argv_4569 (argv_4846, MAX_PATH, "argv_4480 = %X (%X)", argv_4480, argv_4480 - argv_1445);
	argv_4846[MAX_PATH - 1] = '\0';
	argv_1799->argv_2327.argv_2323 (argv_1191, argv_4846);

	argv_4569 (argv_4846, MAX_PATH, "argv_4482 = %X (%X)", argv_4482, argv_4482 - argv_1445);
	argv_4846[MAX_PATH - 1] = '\0';
	argv_1799->argv_2327.argv_2323 (argv_1191, argv_4846);

	argv_4569 (argv_4846, MAX_PATH, "argv_4636 = %X (%X)", argv_4636, argv_4636 - argv_1445);
	argv_4846[MAX_PATH - 1] = '\0';
	argv_1799->argv_2327.argv_2323 (argv_1191, argv_4846);

	argv_4569 (argv_4846, MAX_PATH, "argv_4656 = %X (%X)", argv_4656, argv_4656 - argv_1445);
	argv_4846[MAX_PATH - 1] = '\0';
	argv_1799->argv_2327.argv_2323 (argv_1191, argv_4846);
	
	argv_4569 (argv_4846, MAX_PATH, "argv_1339 = %X (%X)", argv_1339, argv_1339 - argv_1445);
	argv_4846[MAX_PATH - 1] = '\0';
	argv_1799->argv_2327.argv_2323 (argv_1191, argv_4846);
#endif // #if defined (DEBUG_COFF_LOADER)
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_867
// @@
// @@ FUNCTION		:	argv_1251		
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
// @@ This function permits to argv_1235 to log argv_1424 all
// @@ the symbols that are defined into the argv_1148 module. 
// @@ It is useful for debug purpose only.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_867::argv_1251 () {
	map<string, argv_880>::iterator iter_local;	
	argv_1799->argv_2327.argv_2323 (argv_1191, "=== symbols defined in this argv_3547 module ===");
	for (iter_local=m_name_data.begin() ; iter_local != m_name_data.end() ; ++iter_local) {
		argv_1799->argv_2327.argv_2323 (argv_1191, "=> ", iter_local->first.c_str());
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_867
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
// @@ _file_start_addr: argv_4881 *: argv_665 of the first byte in 
// @@    virtual memory of the COFF argv_1424 that was mmapped for loading.
// @@
// @@ _file_size: argv_4883: size of the mmapped COFF argv_1424 in virtual memory.
// @@
// @@ _xmem_mgr_ptr: argv_1166 *:  pointer on an argv_3656 that permits
// @@ to obtain an aligned argv_795 of virtual memory and release it.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_4536 : argv_993 if success,
// @@        another argv_4979 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_4243 the argv_867
// @@ argv_3656 by giving it the argv_665 of all necessary
// @@ objects.
// @@
// @@ CONTRACT 		: 
// @@ - '_systool_ptr' parameter must not be a NULL pointer.
// @@ - '_glob_data_ptr' parameter must not be a NULL pointer.
// @@ - '_compress_tool_ptr' parameter must not be a NULL pointer.
// @@ - '_cypher_tool_ptr' parameter must not be a NULL pointer.
// @@ - '_file_start_addr' parameter must not be a NULL pointer.
// @@ - '_xmem_mgr_ptr' parameter must not be a NULL pointer.
// @@ - init must not have been called prior to this call.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_867::init (argv_891 * _glob_data_ptr, argv_4610 * _systool_ptr, argv_870 * _compress_tool_ptr, argv_877 * _cypher_tool_ptr, argv_4881 * _file_start_addr, argv_4883 _file_size, argv_1166 * _xmem_mgr_ptr) {
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
// @@ CLASS			:	argv_867
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
bool argv_867::argv_3565 (argv_4881 * _cptr) {
	bool bret = false;
	if ((_cptr[0] != 0) || (_cptr[1] != 0) || (_cptr[2] != 0) || (_cptr[3] != 0)) {
		bret = true;
	}
	return (bret);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_867
// @@
// @@ FUNCTION		:	argv_709		
// @@
// @@ INPUT			:
// @@ _cptr: argv_4881 *: argv_665 of the 'argv_3557' field of the
// @@   argv_1148 entry of the symbol table of the argv_1148 COFF
// @@   argv_1424.
// @@
// @@ OUTPUT		:	
// @@ _offset: argv_4883&: if the 'argv_3557' field is actually a long argv_3557, 
// @@   this field contains the offset where the actual argv_3557 of the 
// @@   symbol can be found from the string table of the COFF argv_1424.
// @@    Notice that in that case, the parameter '_name' is undefined.
// @@ 
// @@ _name: string&: if the 'argv_3557' field is actually a short argv_3557,
// @@    this field contains the extracted argv_3557 of the symbol.
// @@    Notice that in that case, the parameter '_offset' is undefined.
// @@
// @@ IO			:	none	
// @@	
// @@ RETURN VALUE	:
// @@ argv_4536: SYMBOL_OFFSET_IN_STRING_TABLE if the 'argv_3557' field does
// @@   not contain a argv_3557, but contains an offset in the string table
// @@   instead.
// @@       SYMBOL_SHORT_NAME if the 'argv_3557' field contains directly a 
// @@       argv_3557, not an offset. 
// @@       SYMBOL_UNKNOWN_NAME_TYPE in case of failure.	
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
// @@ This function permits to determine the argv_3557 argv_4860 
// @@ (either short argv_3557, or offset) :
// @@ - if argv_3557 is a short argv_3557, then the argv_3557 is returned 
// @@   to the caller via the '_name' parameter, in that case
// @@   the '_offset' parameter is undefined.
// @@ - if the argv_3557 is an offset in the string table, then
// @@   this offset is returned to the caller via the '_offset'
// @@   parameter, and the '_name' parameter is undefined. 
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_867::argv_709 (argv_4881 * _cptr, argv_4883& _offset, string& _name) {
	argv_4536 argv_2072 = SYMBOL_UNKNOWN_NAME_TYPE;
	if ((_cptr[0]==0) && (_cptr[1]==0) && (_cptr[2]==0) && (_cptr[3]==0)) { // long argv_3557 => index in the string table
		argv_2072 = SYMBOL_OFFSET_IN_STRING_TABLE;
		argv_767 atyp;
		atyp.argv_764[0]	= _cptr[4];
		atyp.argv_764[1]	= _cptr[5];
		atyp.argv_764[2]	= _cptr[6];
		atyp.argv_764[3]	= _cptr[7];
		_offset			= atyp.argv_770;
	}
	else { // short argv_3557
		argv_2072			= SYMBOL_SHORT_NAME;
		_name			= "";
		for (argv_4883 i=0 ; i<8 ; i++) {
			if (_cptr[i] != 0) {
				_name += _cptr[i];	
			}
		}
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_867
// @@
// @@ FUNCTION		:	internal_2_real_name		
// @@
// @@ INPUT			:
// @@ _internal_name_ptr: argv_4881 *: pointer on the argv_3557 to convert
// @@   from it's internal shape to it's real shape.
// @@
// @@ OUTPUT		:	
// @@ _real_name: string&: the real argv_3557 associated argv_5011 the
// @@   '_internal_name_ptr' parameter obtained after lookup.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_4536 : argv_993 if success,
// @@        another argv_4979 otherwise.	
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_1397 the real argv_3557 of a given
// @@ entry of the symbol table of the argv_1148 COFF argv_1424.
// @@ 
// @@ In the COFF format, an important part is the symbol table.
// @@ Each entry of this symbol table has a 'argv_3557' field
// @@ This field has a fixed size of 8 argv_837 and may
// @@ contain either a argv_3557 (if it can be contained within 8 argv_837)
// @@ or it contains an offset in the string table.
// @@
// @@ This function retrieves the symbol argv_3557, whatever it is a short
// @@ easily retrieveable from the 'argv_3557' field itself, or whether
// @@ it is a argv_3557 that can be found using the offset contained in the
// @@ 'argv_3557' field.
// @@ 
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_867::internal_2_real_name (argv_4881 * _internal_name_ptr, string& _real_name) {
	argv_4536 argv_2072	= argv_993;
	_real_name	= "";
	argv_4883 his_offset;

	argv_4536 name_type = argv_709 (&_internal_name_ptr[0], his_offset, _real_name);

	if (name_type == SYMBOL_UNKNOWN_NAME_TYPE) {
		argv_2072 = argv_994;
	}
	else if (name_type == SYMBOL_OFFSET_IN_STRING_TABLE) {
		his_offset = his_offset + (argv_4883) argv_4636;
		argv_4881 * cptr = (argv_4881 *) his_offset;

		his_offset = 0;
		while (cptr[his_offset] != '\0') {
			_real_name += cptr[his_offset];
			his_offset++;	
		}	

#if defined (DEBUG_COFF_LOADER)
		argv_1799->argv_2327.argv_2323 (argv_1191, "long argv_3557 extracted : ", _real_name.c_str());	
#endif // #if defined (DEBUG_COFF_LOADER)
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_867
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
// @@ bool argv_867::argv_4651 (argv_876 _symb) {
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
bool argv_867::argv_4651 (argv_876 _s) {
	argv_4883 size = strlen (_s);
	argv_4883 i=0;
	bool bret = false;
	bool eaten_digit = false;
	// smallest size is 9, so let's ensure that the supposed string is not too short
	if (size >= 9) {
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
			while ((i < size) && (_s[i] >= 'A') && (_s[i]<='P')) {
				i++;
			}

			if ((i < size) && (_s[i]=='@')) {
				// jump the '@'
				i++;
				// eat all except '@'
				argv_4883 k=0;
				while ((i < size) && (_s[i] != '@')) {
					k++;
					i++;
				}

				// if second digit consumed => argv_815 may be empty
				if (i < size) {
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
// @@ CLASS			:	argv_867
// @@
// @@ FUNCTION		:	argv_1741		
// @@
// @@ INPUT			:	
// @@ _name: argv_876: argv_3557 to convert to simple argv_3557.
// @@
// @@ OUTPUT		:	
// @@ _simple_name: string&: generated simplified argv_3557
// @@    using the '_name' parameter.
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
bool argv_867::argv_1741 (argv_876 _name, string& _simple_name) {
	bool bret = false;
	_simple_name = "";
	if (argv_4651 (_name) == false) {
		argv_4883 size = strlen (_name);
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
#if defined (DEBUG_COFF_LOADER)
		{
			char argv_4846[65536];
			argv_4569 (argv_4846, 65536, "generated simple argv_3557 from '%s' => '%s'", _name, _simple_name.c_str());
			argv_4846[65536 - 1] = '\0';
			argv_1799->argv_2327.argv_2323 (argv_1191, argv_4846);
		}
#endif // #if defined (DEBUG_COFF_LOADER)
		bret = true;
	}
	return (bret);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_867
// @@
// @@ FUNCTION		:	insert_symbol_in_map		
// @@
// @@ INPUT			:
// @@ _name: string: argv_3557 of the symbol to insert into the map.
// @@ 
// @@ _data: argv_880: argv_1178 to be associated argv_5011 the symbol whose
// @@   argv_3557 is contained into the '_name' parameter. 
// @@
// @@ _index: argv_4883: the argv_3690 of the symbol in the symbol table.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_4536 : argv_993 if success,
// @@        another argv_4979 otherwise.	
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to save up the association between
// @@ a given symbol argv_3557 and it's associated argv_1178 into a map
// @@ that has a log(n) retrieval speed.
// @@
// @@ Notice that the symbol argv_3557 is converted into a simple
// @@ argv_3557 (if the symbol is not a string argv_3656) and it is
// @@ this simple symbol argv_3557 that is saved and associated to
// @@ the argv_1178 contained in the '_data' parameter.
// @@
// @@ There exists 2 different symbol mangling scheme :
// @@ ?argv_4655@@.....
// @@ _symbol_name
// @@ that would be both transformed into :
// @@ argv_4655
// @@
// @@ The reason why the mangled named are not used is that 
// @@ it would then be too complicated, and also the plugins
// @@ are not allowed to export C++ symbols, thus we don't
// @@ need to deal argv_5011 the mangled names in general. 
// @@
// @@ CONTRACT 		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_867::insert_symbol_in_map (string& _name, argv_880& _data, argv_4883 _index) {
	argv_4536 argv_2072 = argv_993;

	if (_name.size () > 0) {
		map<string, argv_880>::iterator local_iter;
		local_iter = m_name_data.find (_name);
		if (local_iter == m_name_data.end()) {
			m_name_data[_name] = _data;

			string second_name;
			bool bret = argv_1741 (_name.c_str(), second_name);
			if (bret == true) {
				m_name_data[second_name] = _data;	
			}
#if defined (DEBUG_COFF_LOADER)
			/*
			// log the demangled argv_3557 (just for info)
			{
				char argv_4846[argv_1992];
				char szUndName[argv_1992];
				if (UnDecorateSymbolName (_name.c_str(), szUndName, 
					sizeof(szUndName), argv_4917))
				{
					// UnDecorateSymbolName returned success
					argv_4569 (argv_4846, argv_1992, "mangled argv_3557: '%s', demangled argv_3557 : '%s'", _name.c_str(), szUndName);
				}
				else {// failed to demangle the argv_3557
					argv_4569 (argv_4846, argv_1992, "mangled argv_3557: '%s', demangled argv_3557 : (FAILED)", _name.c_str());
				}
				argv_4846[argv_1992 - 1] = '\0';
				argv_1799->argv_2327.argv_2323 (argv_1191, argv_4846);
			}*/
#endif // #if defined (DEBUG_COFF_LOADER)
		}
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_867
// @@
// @@ FUNCTION		:	argv_2295		
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	none
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
// @@ This function permits to go to the symbol table of the
// @@ argv_1148 COFF argv_1424 and to argv_2274 all symbols of this table.
// @@ By loading we mean argv_1397 all relevant argv_1178 so that
// @@ all argv_1178 concerning a given symbol can be accessed in 
// @@ O(1) argv_4843 complexity.
// @@
// @@ An association between the simple version of the symbol
// @@ argv_3557 and it's associated argv_1178 is created.
// @@
// @@ The reason why the mangled named are not used is that 
// @@ it would then be too complicated, and also the plugins
// @@ are not allowed to export C++ symbols, thus we don't
// @@ need to deal argv_5011 the mangled names in general. 
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_867::argv_2295 () {
	argv_4536 argv_2072 =			argv_993;
	argv_4657	entry;
	argv_4883				local_offset = 0;
	string				his_name;
	argv_4881 *				his_start;
	argv_880				argv_1178;

	for (argv_4883 i=0 ; i<argv_1999.argv_3650 ; ) {
		argv_1178.reset ();
#if defined (DEBUG_COFF_LOADER)
		argv_1799->argv_2327.argv_2323 (argv_1191, "--> loading symbol : ", i);
#endif // #if defined (DEBUG_COFF_LOADER)

		if ((&argv_4656[local_offset + argv_4658]) >= argv_1339) {
			argv_1799->argv_2327.argv_2323 (argv_1346, "+++ ERROR: argv_867::argv_2295 - overflow @1");
			argv_2072 = argv_990;
			break;
		}

		memcpy (&entry, &argv_4656[local_offset], argv_4658);

#if defined (DEBUG_COFF_LOADER)
		{
		char argv_4846[MAX_PATH];
		argv_4569 (argv_4846, MAX_PATH, "argv_663=%X, entry.argv_3638=%d, entry.argv_4484=%d", &argv_4656[local_offset], entry.argv_3638, entry.argv_4484, entry);
		argv_4846[MAX_PATH - 1] = '\0';
		argv_1799->argv_2327.argv_2323 (argv_1191, argv_4846);
		}
#endif // #if defined (DEBUG_COFF_LOADER)

		argv_2072 = internal_2_real_name (&entry.argv_3558[0], his_name);
		
		if (argv_2072 != argv_993) {
			break;
		}
	
		// retrieve the meaningful fields for this symbol
		if (entry.argv_4484 > 0) {
			his_start = argv_4480 + ((entry.argv_4484 - 1) * sizeof(argv_2009));	
			argv_2009 section_hdr;

			if ((his_start + sizeof(argv_2009)) >= argv_1339) {
				argv_1799->argv_2327.argv_2323 (argv_1346, "+++ ERROR: argv_867::argv_2295 - overflow @2");
				argv_2072 = argv_990;
				break;
			}

			
			memcpy (&section_hdr, his_start, sizeof(argv_2009));

			argv_1178.argv_4225		= section_hdr.argv_4225 + (argv_4883) argv_1445;
			argv_1178.argv_4560			= section_hdr.argv_4560;
			argv_1178.argv_3646	= section_hdr.argv_3646;
			argv_1178.argv_4226	= section_hdr.argv_4226 + (argv_4883) argv_1445;

			if ((argv_1178.argv_4860 != argv_1296) && (argv_1178.argv_4860 != argv_1295)) {
				argv_1799->argv_2327.argv_2323 (argv_1346, "+++ ERROR: argv_867::argv_2295 - unknown symbol argv_4860 : ", (argv_4883) argv_1178.argv_4860);
				argv_2072 = argv_997;
				break;
			}
		}

		argv_1178.section_index			= entry.argv_4484;
		argv_1178.argv_4860					= entry.argv_4861; // to know whether it's a function or not
		argv_1178.argv_4979					= entry.argv_4980;
		argv_1178.storage_class			= entry.argv_4632; // for the LABEL argv_4860 (switch)
		// if it is a label, then the relocations are the parent's relocations, thus
		// they must be ignored (the label is not an actual argv_795)
		if (argv_1178.storage_class == argv_2012) {
#if defined (DEBUG_COFF_LOADER)
			char argv_4846[MAX_PATH];
			argv_4569 (argv_4846, MAX_PATH, "symbol '%s' is a label (reset it's number of relocations to zero)", his_name.c_str());
			argv_4846[MAX_PATH - 1] = '\0';
			argv_1799->argv_2327.argv_2323 (argv_1191, argv_4846);
#endif // #if defined (DEBUG_COFF_LOADER)
			argv_1178.argv_3646 = 0;		
		}

		// try to argv_646 this new symbol and it's associated argv_1178
		insert_symbol_in_map (his_name, argv_1178, i);

		// always argv_1090 what we have read
		local_offset += argv_4658;
		i++;

		// then we may have to argv_1090 auxiliaries as well
		if (entry.argv_3638 > 0) {
			i += entry.argv_3638;
			local_offset += (entry.argv_3638 * argv_4658);
#if defined (DEBUG_COFF_LOADER)
			argv_1799->argv_2327.argv_2323 (argv_1191, "jumping n entries : ", entry.argv_3638);
#endif // #if defined (DEBUG_COFF_LOADER)
		}
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_867
// @@
// @@ FUNCTION		:	argv_2281		
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	none
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
// @@ This function seek toward the COFF argv_1982 and retrieve
// @@ the important and relevant argv_1178 about it and save it into
// @@ argv_867 argv_3656 for argv_1726 use. 
// @@
// @@ CONTRACT 		: 
// @@ - the function 'init' should have been called prior to this call
// @@ - the function 'argv_2281' should not have already been called.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_867::argv_2281 () {
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
/*		{
			char argv_4846[MAX_PATH];
			argv_4569 (argv_4846, MAX_PATH, "number of sections = %X (%u)", argv_1999.argv_3648, argv_1999.argv_3648);
			MessageBox (NULL, argv_4846, "", MB_OK);
		}*/
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
// @@ CLASS			:	argv_867
// @@
// @@ FUNCTION		:	argv_2291		
// @@
// @@ INPUT			:
// @@ _iter: map<string, argv_880>::iterator&: the iterator
// @@   containing both the argv_1148 symbol and it's associated argv_1178.
// @@
// @@ _index: argv_4883: the index of the argv_1148 relocation, if we are 
// @@   processing the nth relocation, then '_index' will be equal to n.
// @@
// @@ OUTPUT		:	none
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
// @@ This function permits to argv_2274 argv_3677 relocation associated argv_5011 
// @@ the argv_1148 symbol, the argv_1148 symbol's argv_3557 and associated
// @@ argv_1178 being available via the '_iter' parameter.
// @@ the steps performed are then :
// @@ - goto the relocation whose index is given by the '_index'
// @@   parameter.
// @@ - argv_2274 this relocation (a fixed size argv_1178 structure)
// @@ - convert the table index into an offset
// @@ - argv_2274 the associated symbol table entry
// @@ - argv_1397 the argv_3557 associated argv_5011 this symbol table entry
// @@ - ensure that this symbol exists (all symbols have been
// @@   collected by another function prior to this call).
// @@ - argv_646 this argv_3557 to the relocation list for this symbol
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_867::argv_2291 (map<string, argv_880>::iterator& _iter, argv_4883 _index) {
	argv_4536 argv_2072 = argv_993;

	// goto this relocation
	argv_4881 * his_start = (argv_4881 *) _iter->second.argv_4226 + (_index * argv_2002);
	if ((his_start + argv_2002) >= argv_1339) {
		argv_2072 = argv_990;
	}
	else {
		// argv_2274 this relocation
		Crich_reloc_unit rich_reloc_unit;
		memcpy (&rich_reloc_unit.reloc, his_start, argv_2002);
		
		// convert the table index into an offset
		his_start = argv_4656 + (rich_reloc_unit.reloc.argv_4666 * argv_4658);

		// argv_2274 the associated symbol table entry
		argv_4657	entry;
		if ((his_start + argv_4658) >= argv_1339) {
			argv_2072 = argv_990;
		}
		else {
			memcpy (&entry, his_start, argv_4658);

			// argv_1397 the argv_3557 associated argv_5011 this symbol table entry
			argv_2072 = internal_2_real_name (&entry.argv_3558[0], rich_reloc_unit.argv_3557);
			if (argv_2072 == argv_993) {
				// ensure that this symbol exists
				map<string, argv_880>::iterator iter_2;
				iter_2 = m_name_data.find (rich_reloc_unit.argv_3557);
				if (iter_2 == m_name_data.end()) {
					argv_2072 = argv_985;
				}
				else {
					// argv_646 this argv_3557 to the relocation list for this symbol
					_iter->second.v_relocation.push_back (rich_reloc_unit);
#if defined (DEBUG_COFF_LOADER)
					{
						char argv_4846[65536];
						argv_4569 (argv_4846, 65536, "   argv_646 reloc '%s'", rich_reloc_unit.argv_3557.c_str());
						argv_4846[65536 - 1] = '\0';
						argv_1799->argv_2327.argv_2323 (argv_1191, argv_4846);
					}
#endif
				}
			}
		}
	}
	return (argv_2072);	
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_867
// @@
// @@ FUNCTION		:	argv_2294		
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	none
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
// @@ This function is called after all symbols are argv_2297 and
// @@ contained into a map that associates each symbol's names
// @@ argv_5011 it's argv_1178.
// @@ This function considers all possible symbol and loads 
// @@ all relocations for each of these symbols.
// @@ Notice that by loading we mean that each relocation
// @@ is actually a symbol, whose argv_3557 is retrieved, and saved
// @@ into a list of symbols that are related to the argv_1148 symbol.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_867::argv_2294 () {
	argv_4536 argv_2072 = argv_993;
	map<string, argv_880>::iterator argv_2099; 
	argv_4883 nb_reloc;

#if defined (DEBUG_COFF_LOADER)
	argv_1799->argv_2327.argv_2323 (argv_1191, "--------- LOADING RELOCATIONS -----------");
#endif // #if defined (DEBUG_COFF_LOADER)
	for (argv_2099=m_name_data.begin() ; argv_2099 != m_name_data.end() ; ++argv_2099) {
		nb_reloc = argv_2099->second.argv_3646;
#if defined (DEBUG_COFF_LOADER)
		{
			char argv_4846[65536];
			argv_4569 (argv_4846, 65536, "%d relocations for symbol '%s'", nb_reloc, argv_2099->first.c_str());
			argv_4846[65536 - 1] = '\0';
			argv_1799->argv_2327.argv_2323 (argv_1191, argv_4846);
		}
#endif // #if defined (DEBUG_COFF_LOADER)
		for (argv_4883 i=0 ; i<nb_reloc ; i++) {
			argv_2291 (argv_2099, i);
		}
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_867
// @@
// @@ FUNCTION		:	argv_2274		
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	none
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
// @@ This function permits to argv_2274 a given COFF argv_1424.
// @@ The necessary steps are then :
// @@ - argv_2274 the COFF argv_1982
// @@ - argv_2274 the symbol table of this COFF argv_1424.
// @@ - argv_2274 the relocations for all symbols.
// @@
// @@ CONTRACT 		: 
// @@ - the function 'init' must have been called prior to this call.
// @@ - the 'argv_2274' function must not have been called yet.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_867::argv_2274 () {
	argv_4536 argv_2072 = argv_993;
	if (init_done == false) {
		argv_1799->argv_2327.argv_2323 (argv_1346, "+++ ERROR: argv_867::argv_2274 - argv_983");
		argv_2072 = argv_983;
	}
	else if (argv_2297 == true) {
		argv_1799->argv_2327.argv_2323 (argv_1346, "+++ ERROR: argv_867::argv_2274 - argv_984");
		argv_2072 = argv_984;
	}
	else {
#if defined (DEBUG_COFF_LOADER)
		argv_1799->argv_2327.argv_2323 (argv_1191, "loading COFF argv_1982...");
#endif // #if defined (DEBUG_COFF_LOADER)
		argv_2072 = argv_2281 ();
		if (argv_2072 != argv_993) {
			string serror = argv_1344 (argv_2072);
			argv_1799->argv_2327.argv_2323 (argv_1346, "+++ ERROR: argv_867::argv_2274 - error while loading argv_1982 : ", serror.c_str());
		}
		else {
#if defined (DEBUG_COFF_LOADER)
			argv_1799->argv_2327.argv_2323 (argv_1191, "COFF argv_1982 argv_2297 succesfully");
			argv_1799->argv_2327.argv_2323 (argv_1191, "loading COFF symbol table...");
#endif // #if defined (DEBUG_COFF_LOADER)
			argv_2072 = argv_2295 ();

			if (argv_2072 != argv_993) {
				string serror = argv_1344 (argv_2072);
				argv_1799->argv_2327.argv_2323 (argv_1346, "+++ ERROR: argv_867::argv_2274 - error while loading symbol table : ", serror.c_str());
			}
			else {
#if defined (DEBUG_COFF_LOADER)
				argv_1799->argv_2327.argv_2323 (argv_1191, "COFF symbol table argv_2297 succesfully");
#endif // #if defined (DEBUG_COFF_LOADER)
				argv_2072 = argv_2294 ();
				if (argv_2072 != argv_993) {
					string serror = argv_1344 (argv_2072);
					argv_1799->argv_2327.argv_2323 (argv_1346, "+++ ERROR: argv_867::argv_2274 - error while loading relocations : ", serror.c_str());
				}
				else {
#if defined (DEBUG_COFF_LOADER)
					argv_1799->argv_2327.argv_2323 (argv_1191,  "COFF relocations argv_2297 succesfully");
#endif // #if defined (DEBUG_COFF_LOADER)					
				}
			}
		}
	}
	
	if (argv_2072 == argv_993) {
#if defined (DEBUG_COFF_LOADER)
		argv_1799->argv_2327.argv_2323 (argv_1191, "COFF argv_1424 argv_2297 succesfully");
#endif // #if defined (DEBUG_COFF_LOADER)					
	}
	else {
		argv_1799->argv_2327.argv_2323 (argv_1346, "+++ ERROR: COFF argv_1424 argv_2274 failed !");
	}
	argv_1247 ();
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_867
// @@
// @@ FUNCTION		:	argv_4654		
// @@
// @@ INPUT			:
// @@ _symbol_name: argv_876: symbol whose presence must be checked.
// @@
// @@ OUTPUT		:	
// @@ _presence_flag: bool&: set to true if the symbol contained in
// @@   '_symbol_name' is present into the map,
// @@   set to false otherwise.
// @@
// @@ _iter: map<string, argv_880>::iterator&: iterator containing the 
// @@   argv_1178 concerning the symbol '_symbol_name', to be more precise,
// @@   the first part of the iterator contains the symbol's argv_3557, and
// @@   the second part contains the argv_1178 associated argv_5011 this symbol.
// @@   Notice that it is undefined if the '_presence_flag' is false.
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
// @@ This function permits to check whether a given symbol is present
// @@ in the map that associates a symbol's argv_3557 to it's associated argv_1178.
// @@ If the symbol is present, then the parameter '_presence_flag' is 
// @@ set to true, otherwise it set to false.
// @@ If symbol is present in map, then an iterator pointing on the
// @@ corresponding entry from the map is returned to the caller via
// @@ the '_iter' parameter.  
// @@
// @@ CONTRACT 		: 
// @@ - '_symbol_name' parameter must not be a NULL pointer.
// @@ - '_symbol_name' parameter must not be an empty string. 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_867::argv_4654 (argv_876 _symbol_name, bool& _presence_flag, map<string, argv_880>::iterator& _iter) {
	argv_4536 argv_2072		= argv_993;
	_presence_flag	= false;

	if ((_symbol_name == NULL) || (strlen(_symbol_name) == 0)) {
		argv_2072 = argv_986;		
	}
	else {
		_iter = m_name_data.find (_symbol_name);
		if (_iter != m_name_data.end()) {
			_presence_flag = true;
		}
	}
	return (argv_2072);	
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_867
// @@
// @@ FUNCTION		:	argv_4653		
// @@
// @@ INPUT			:
// @@ _iter: map<string, argv_880>::iterator: iterator that points to
// @@ the symbol to check and it's associated argv_1178. 
// @@
// @@ OUTPUT		:
// @@ _answer_flag: bool&: set to true if the symbol is local, 
// @@                      set to false otherwise.	
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
argv_4536 argv_867::argv_4653 (map<string, argv_880>::iterator& _iter, bool& _answer_flag) {
	argv_4536 argv_2072 = argv_993;
	if (_iter->second.section_index > 0) {
		_answer_flag = true;	
	}
	else {
		_answer_flag = false;
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_867
// @@
// @@ FUNCTION		:	argv_4652		
// @@
// @@ INPUT			:
// @@ _iter: map<string, argv_880>::iterator: iterator that points to
// @@ the symbol to check and it's associated argv_1178. 
// @@
// @@ OUTPUT		:
// @@ _answer_flag: bool&: set to true if the symbol is external, 
// @@                      set to false otherwise.	
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
argv_4536 argv_867::argv_4652 (map<string, argv_880>::iterator& _iter, bool& _answer_flag) {
	argv_4536 argv_2072 = argv_993;
	if (_iter->second.section_index == 0) {
		_answer_flag = true;	
	}
	else {
		_answer_flag = false;
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_867
// @@
// @@ FUNCTION		:	argv_2381		
// @@
// @@ INPUT			:
// @@ _iter: map<string, argv_880>::iterator: iterator that points to
// @@ the symbol to check and it's associated argv_1178. 
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
argv_4536 argv_867::argv_2381 (map<string, argv_880>::iterator& _iter, argv_876 _symbol_name, argv_4881 *& _xmapped_addr) {
	argv_4536 argv_2072              = argv_993;
	void * symbol_ptr      = NULL;
	bool found_from_cache  = false;
	char argv_4846[MAX_PATH];

	// create a xmemory argv_795 for this symbol
	argv_2072 = argv_5023->argv_4355 (_symbol_name, (argv_4881 *) _iter->second.argv_4225, _iter->second.argv_4560, found_from_cache, &symbol_ptr);
	if (argv_2072 != argv_5027) {
		argv_1799->argv_2327.argv_2323 (argv_1346, "+++ ERROR: argv_867::argv_2381: xmem alloc failed !");
		argv_2072 = argv_3673;
	}
	else if (found_from_cache == true) {
		_xmapped_addr = (argv_4881 *) symbol_ptr;
		argv_4569 (argv_4846, MAX_PATH, "argv_2381: symbol '%s' found from cache at argv_665 0x%X", _symbol_name, (argv_4883) _xmapped_addr);
		argv_4846[MAX_PATH - 1] = '\0';
		argv_1799->argv_2327.argv_2323 (argv_1191, argv_4846);
	}
	else { // argv_795 not found from xmem cache
		// now copy the content of the function to xmemory
#if defined (DEBUG_COFF_LOADER)
		argv_1799->argv_2327.argv_2323 (argv_1191, "argv_867::argv_2381...[xmemory argv_795 allocated]");
#endif // #if defined (DEBUG_COFF_LOADER)
		_iter->second.real_start_addr = _iter->second.argv_4225;
#if defined (DEBUG_COFF_LOADER)
		argv_1799->argv_2327.argv_2323 (argv_1191, "argv_867::argv_2381...[copying symbol argv_1178]");
		argv_4569 (argv_4846, MAX_PATH, "argv_1445=0x%X, argv_4225=0x%X, real_start_addr=0x%X, xmem argv_795 :0x%X", argv_1445, _iter->second.argv_4225, _iter->second.real_start_addr, symbol_ptr);
		argv_4846[MAX_PATH - 1] = '\0';
		argv_1799->argv_2327.argv_2323 (argv_1191, argv_4846);

		argv_4569 (argv_4846, MAX_PATH, "memcpy (%X, %X, %u)", symbol_ptr, _iter->second.real_start_addr, _iter->second.argv_4560);
		argv_4846[MAX_PATH - 1] = '\0';
		argv_1799->argv_2327.argv_2323 (argv_1191, argv_4846);
		argv_4569 (argv_4846, MAX_PATH, "argv_2381: symbol '%s' xmapped at argv_665 0x%X", _symbol_name, symbol_ptr);
		argv_4846[MAX_PATH - 1] = '\0';
		argv_1799->argv_2327.argv_2323 (argv_1191, argv_4846);
#endif // #if defined (DEBUG_COFF_LOADER)

		argv_4756->argv_3593 (symbol_ptr, (argv_2338) _iter->second.real_start_addr, _iter->second.argv_4560);
		if (strcmp (_symbol_name, "?argv_1447@@YAXIPAD@Z") == 0) {
#if defined (DEBUG_COFF_LOADER)
			argv_1799->argv_2327.argv_2309 (argv_1191, (argv_4881 *) symbol_ptr, _iter->second.argv_4560, "file_type_2_string_VIRGIN");
#endif // #if defined (DEBUG_COFF_LOADER)
		}

#if defined (DEBUG_COFF_LOADER)
		argv_1799->argv_2327.argv_2323 (argv_1191, "argv_867::argv_2381...[symbol argv_1178 copied]");
#endif // #if defined (DEBUG_COFF_LOADER)
		argv_4756->argv_3580();
		_xmapped_addr = (argv_4881 *) symbol_ptr;

		// beware: relocations are not solved at this point
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_867
// @@
// @@ FUNCTION		:	argv_2381		
// @@
// @@ INPUT			:
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
// @@ in the '_symbol_name' parameter.
// @@ In case of success, the argv_665 of the first byte of the allocated
// @@ argv_795 is returned to the caller via the '_xmapped_addr' parameter.
// @@
// @@ Notice that if the symbol has already been mapped to xmemory 
// @@ before, then no allocation occurs and the argv_665 of the argv_795
// @@ of virtual memory that was allocated the first argv_4843 the symbol
// @@ was mapped is returned via the '_xmapped_addr' parameter.
// @@
// @@ CONTRACT 		:	
// @@ - the symbol '_symbol_name' must exists in the argv_1148 COFF argv_1424.
// @@ - the symbol '_symbol_name' must not be an external symbol.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_867::argv_2381 (argv_876 _symbol_name, argv_4881 *& _xmapped_addr) {
	argv_4536 argv_2072		= argv_993;

	bool presence_flag = false;
	map<string, argv_880>::iterator iter_local;
	argv_2072 = argv_4654 (_symbol_name, presence_flag, iter_local);
	if (argv_2072 != argv_993) {
		argv_2072 = argv_995;
	}
	else if (presence_flag == false) {
		argv_2072 = argv_985;
	}
	else if (iter_local->second.section_index == 0) { // external symbol
		argv_2072 = argv_979;
	}
	else {
		argv_2072 = argv_2381 (iter_local, _symbol_name, _xmapped_addr);
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_867
// @@
// @@ FUNCTION		:	argv_3720		
// @@
// @@ INPUT			:
// @@ _reloc_unit: Crich_reloc_unit: the argv_1178 structure containing
// @@ information about the relocation to be performed.
// @@
// @@ _local_base_addr: argv_4881 *: The argv_665 of the first byte of the
// @@  argv_795 in which relocation must be performed (base argv_665).
// @@
// @@ _solved_adress: argv_4881 *: argv_665 of the first byte of the solved
// @@   symbol to use for patching. In other words it is where we 
// @@   can find the argv_665 to use for patch.
// @@
// @@ OUTPUT		:	none	
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
// @@ A COFF argv_1424 contains a symbol table which is a list
// @@ of symbols.
// @@ Each symbol may have zero to n relocations associated argv_5011 it.
// @@ you can see each relocation as a 4 argv_837 hole where the argv_665
// @@ of the missing symbol must be filled in in argv_3690 for the symbol
// @@ to be completed and useable.
// @@ Notice that there is a argv_4860 field associated argv_5011 each relocation.
// @@ This argv_4860 determines how the relocation should be patched.
// @@ Notice that the only admitted types are :
// @@ - argv_2008: to patch, we must compute the 32 bit
// @@   relative displacement to the target.
// @@ - argv_2006: to patch, we just have to use the argv_4979 as
// @@   a virtual argv_665 (kind of absolute addressing).
// @@ The argv_2007 argv_4860 is not supported for the argv_4843 being.
// @@
// @@ This function uses the argv_1178 related to the relocation '_reloc_unit'
// @@ and the base argv_665 '_local_base_addr', and also the resolved
// @@ argv_665 '_solved_adress' to perform the relocation patch using also
// @@ the relocation argv_4860 which is a field of the _reloc_unit argv_1178 
// @@ structure.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_867::argv_3720 (Crich_reloc_unit& _reloc_unit, argv_4881 * _local_base_addr, argv_4881 * _solved_adress) {
	argv_4536 argv_2072 = argv_993;
#if defined (DEBUG_COFF_LOADER)
	char argv_4846[MAX_PATH];
	argv_4569 (argv_4846, MAX_PATH, "patching the following relocation : '%s'", _reloc_unit.argv_3557.c_str());
	argv_4846[MAX_PATH - 1] = '\0';
	argv_1799->argv_2327.argv_2323 (argv_1191, argv_4846);
#endif // #if defined (DEBUG_COFF_LOADER)

	argv_4883 his_size	  = argv_1724;
	argv_767 atyp;
	argv_4881 * from_addr  = NULL;
	argv_4881 * to_addr    = NULL;

	// ensure that the symbol argv_4860 is coherent
	argv_4883 argv_4860 = _reloc_unit.reloc.argv_4861;
	if ((argv_4860 != argv_2008) && (argv_4860 != argv_2006) && (argv_4860 != argv_2007)) {
		argv_1799->argv_2327.argv_2323 (argv_1346, "+++ ERROR: argv_867::argv_3720 - unknown argv_1178 argv_4860 : ", argv_4860);
		argv_2072 = argv_997;
	}
	else if (argv_4860 == argv_2008) { // compute the delta and patch
		to_addr          = (argv_4881 *) _local_base_addr + _reloc_unit.reloc.argv_4997;
#if defined (DEBUG_COFF_LOADER)
		{
			argv_4569 (argv_4846, MAX_PATH, "BEFORE DELTA : _solved_adress = 0x%X, to_addr=0x%X, argv_1724=%d", _solved_adress, to_addr, argv_1724);
			argv_4846[MAX_PATH - 1] = '\0';
			argv_1799->argv_2327.argv_2323 (argv_1191, argv_4846);
		}
#endif // #if defined (DEBUG_COFF_LOADER)

		// compute delta between the argv_1178 to patch and it's location in xmem
		atyp.argv_763 = (argv_4883) _solved_adress - (argv_4883) (to_addr + argv_1724);
		from_addr  = &atyp.argv_764[0];
#if defined (DEBUG_COFF_LOADER)
		argv_4569 (argv_4846, MAX_PATH, "patching [FUNCTION] relocation : (delta=%d) from=%X, to=%X, size=%X", atyp.argv_763, from_addr, to_addr, his_size);
		argv_4846[MAX_PATH - 1] = '\0';
		argv_1799->argv_2327.argv_2323 (argv_1191, argv_4846);
#endif // #if defined (DEBUG_COFF_LOADER)
	}
	else if (argv_4860 == argv_2006) { // just use the argv_4426 + argv_795 argv_4618 and patch
		atyp.argv_770	 = (argv_4883) _solved_adress;
		to_addr      = (argv_4881 *) _local_base_addr + _reloc_unit.reloc.argv_4997;
#if defined (DEBUG_COFF_LOADER)
		argv_4569 (argv_4846, MAX_PATH, "patching [DATA] relocation : from=%X, to=%X, size=%X", from_addr, to_addr, his_size);
		argv_1799->argv_2327.argv_2323 (argv_1191, argv_4846);
#endif // #if defined (DEBUG_COFF_LOADER)
		from_addr    = &atyp.argv_764[0];
	}
	else if (argv_4860 == argv_2007) {
		argv_1799->argv_2327.argv_2323 (argv_1346, "+++ ERROR: argv_867::argv_3720 - relocation argv_4860 not supported : ", argv_4860);
		argv_2072 = argv_991;
	}

	if (argv_2072 == argv_993) {
		if (his_size == 0) {
			argv_2072 = argv_987;
		}
		else {
			argv_767 atyp_2;
			
			// read the argv_1178 contained at the destination argv_665
			memcpy (&atyp_2.argv_764[0], to_addr, argv_1724);
#if defined (DEBUG_COFF_LOADER)
			argv_4569 (argv_4846, MAX_PATH, "compiler prior argv_4979 was : %X (will be added to solved argv_665)", atyp_2.argv_770);
			argv_4846[MAX_PATH - 1] = '\0';
			argv_1799->argv_2327.argv_2323 (argv_1191, argv_4846);
#endif // #if defined (DEBUG_COFF_LOADER)

			// argv_646 the retrieved argv_1178 to the argv_665 to patch
			atyp.argv_770   = atyp_2.argv_770 + atyp.argv_770;
			
			// perform the actual patch
			// notice that we always patch an argv_665, nothing else => 4 argv_837
			memcpy (to_addr, from_addr, his_size);
		}
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_867
// @@
// @@ FUNCTION		:	argv_4392		
// @@
// @@ INPUT			:
// @@ _root_plugin_name: argv_876: argv_3557 of the argv_1148 argv_4419 plugin.
// @@
// @@ _plugin_name: argv_876: argv_3557 of the argv_1148 plugin.
// @@
// @@ _symbol_name: argv_876: argv_3557 of the symbol to argv_4389.
// @@
// @@ _iter: map<string, argv_880>::iterator&: 
// @@  iterator that associates the argv_1148 symbol's argv_3557
// @@  argv_5011 it's argv_1178. these argv_1178 have been collected during
// @@  the COFF loading process.
// @@
// @@ _msc: map<string, argv_867 *>& : the map containing the 
// @@   dependancy list for the argv_1148 coff loader.
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
argv_4536 argv_867::argv_4392 (argv_876 _root_plugin_name, argv_876 _plugin_name, argv_876 _symbol_name, map<string, argv_880>::iterator& _iter, map<string, argv_867 *>& _msc, argv_4881 *& _addr, argv_4881 * _father_addr) {
	argv_4536 argv_2072 = argv_993;
	char argv_4846[MAX_PATH];
#if defined (DEBUG_COFF_LOADER)
	argv_1799->argv_2327.argv_2323 (argv_1191, "argv_867::argv_4392...[IN]");
#endif // #if defined (DEBUG_COFF_LOADER)

	// if symbol is a label, then it's location is within it's father argv_795's argv_665 space
	if (_iter->second.storage_class == argv_2012) {
		_addr = _father_addr + _iter->second.argv_4979;
#if defined (DEBUG_COFF_LOADER)
		argv_4569 (argv_4846, MAX_PATH, "symbol '%s' is a label => it's location in father argv_795 (at offset 0x%X + father_addr: 0x%X = 0x%X)", _symbol_name, _iter->second.argv_4979, _father_addr, _addr);
		argv_4846[MAX_PATH - 1] = '\0';
		argv_1799->argv_2327.argv_2323 (argv_1346, argv_4846);
#endif // #if defined (DEBUG_COFF_LOADER)

		// the labels are supposed to have no relocations
		if (_iter->second.argv_3646 != 0) {
			argv_4569 (argv_4846, MAX_PATH, "+++ ERROR: argv_867::argv_4392 - symbol '%s' is a label but it has %d relocations (expected zero relocation) !", _symbol_name, _iter->second.argv_3646);
			argv_4846[MAX_PATH - 1] = '\0';
			argv_1799->argv_2327.argv_2323 (argv_1346, argv_4846);
			argv_2072 = argv_988;
		}
	}
	else { // the symbol is an actual symbol, not a label.
		// xmap the symbol as it is defined internally (size is contained in the iterator)
		argv_2072 = argv_2381 (_iter, _symbol_name, _addr);
		if (argv_2072 != argv_5027) {
			string serror = argv_1344 (argv_2072);
			argv_4569 (argv_4846, MAX_PATH, "+++ ERROR: argv_4389 : 'argv_4392' failed while looking for symbol '%s' - argv_2381 failed - %s", _symbol_name, serror.c_str());
			argv_4846[MAX_PATH - 1] = '\0';
			argv_1799->argv_2327.argv_2323 (argv_1346, argv_4846);
		}
		else { // symbol succesfully xmapped to memory
#if defined (DEBUG_COFF_LOADER)
			argv_1799->argv_2327.argv_2323 (argv_1191, "symbol succesfully xmapped to memory");
#endif // #if defined (DEBUG_COFF_LOADER)
			argv_2072 = argv_993;
			argv_4883 nb_relocation = _iter->second.v_relocation.size ();
			argv_4881 * solved_address = NULL;
			// solve all relocations for this symbol and patch their argv_665
#if defined (DEBUG_COFF_LOADER)
			argv_1799->argv_2327.argv_2323 (argv_1191, "Solve all relocations for this symbol");
			argv_1799->argv_2327.argv_2323 (argv_1191, "number of relocations : ", nb_relocation);
#endif // #if defined (DEBUG_COFF_LOADER)
			for (argv_4883 i=0 ; i<nb_relocation ; i++) {
#if defined (DEBUG_COFF_LOADER)
				{
					argv_4569 (argv_4846, MAX_PATH, "solving relocation (%d/%d) of '%s'", i+1, nb_relocation, _symbol_name);
					argv_4846[MAX_PATH - 1] = '\0';
					argv_1799->argv_2327.argv_2323 (argv_1191, argv_4846);
				}
#endif // #if defined (DEBUG_COFF_LOADER)

				argv_2072 = argv_4389 (_root_plugin_name, _plugin_name, _iter->second.v_relocation[i].argv_3557.c_str(), _msc, solved_address, _addr);
#if defined (DEBUG_COFF_LOADER)
				argv_1799->argv_2327.argv_2323 (argv_1191, "argv_867::argv_4392...[RESOLVE_RETURNED]");
#endif // #if defined (DEBUG_COFF_LOADER)
				if (argv_2072 != argv_993) {
					argv_4569 (argv_4846, MAX_PATH, "+++ ERROR: argv_4389 : failed while resolving relocation '%s' for symbol '%s'", _iter->second.v_relocation[i].argv_3557.c_str(), _symbol_name);
					argv_4846[MAX_PATH - 1] = '\0';
					argv_1799->argv_2327.argv_2323 (argv_1346, argv_4846);
					break;
				}
				else {
					argv_2072 = argv_3720 (_iter->second.v_relocation[i], _addr, solved_address);
					if (argv_2072 != argv_993) {
						argv_4569 (argv_4846, MAX_PATH, "+++ ERROR: argv_4389 : failed while patching relocation '%s' for symbol '%s'", _iter->second.v_relocation[i].argv_3557.c_str(), _symbol_name);
						argv_4846[MAX_PATH - 1] = '\0';
						argv_1799->argv_2327.argv_2323 (argv_1346, argv_4846);
						break;
					} 
				} 
			}
		}
	}
#if defined (DEBUG_COFF_LOADER)
	argv_1799->argv_2327.argv_2323 (argv_1191, "argv_867::argv_4392...[OUT]");
#endif // #if defined (DEBUG_COFF_LOADER)
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_867
// @@
// @@ FUNCTION		:	argv_4391		
// @@
// @@ INPUT			:
// @@ _root_plugin_name: argv_876: argv_3557 of the argv_1148 argv_4419 plugin.
// @@
// @@ _plugin_name: argv_876: argv_3557 of the argv_1148 plugin.
// @@
// @@ _symbol_name: argv_876: argv_3557 of the symbol to argv_4389.
// @@
// @@ _iter: map<string, argv_880>::iterator&:
// @@  iterator that associates the argv_1148 symbol's argv_3557
// @@  argv_5011 it's argv_1178. these argv_1178 have been collected during
// @@  the COFF loading process.
// @@
// @@ _msc: map<string, argv_867 *>& : the map containing the 
// @@   dependancy list for the argv_1148 coff loader.
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
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ A COFF argv_1424 contains a part that is called the symbol table.
// @@ This symbol table is a list of symbols.
// @@ Each symbol appearing in the symbol table may be defined
// @@ in the argv_1148 COFF argv_1424, or defined in another COFF argv_1424.
// @@ This function performs the resolution of a given symbol
// @@ that is located in another COFF argv_1424 (in another plugin).
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_867::argv_4391 (argv_876 _root_plugin_name, argv_876 _plugin_name, argv_876 _symbol_name, map<string, argv_880>::iterator& _iter, map<string, argv_867 *>& _msc, argv_4881 *& _addr, argv_4881 * _father_addr) {
	argv_4536 argv_2072 = argv_993;
	map<string, argv_867 *>::iterator msc_iter;
	map<string, argv_867 *>::iterator found_iter;
	map<string, argv_880>::iterator local_iter;
	char argv_4846[MAX_PATH];
#if defined (DEBUG_COFF_LOADER)
	argv_4569 (argv_4846, MAX_PATH, "argv_4391: must argv_4389 '%s'", _symbol_name);
	argv_4846[MAX_PATH - 1] = '\0';
	argv_1799->argv_2327.argv_2323 (argv_1191, argv_4846);
#endif // #if defined (DEBUG_COFF_LOADER)
	
	// try to locate the module where this external symbol is defined
	bool presence_flag = false;
	argv_4883 nb_found      = 0;

	for (msc_iter=_msc.begin() ; msc_iter != _msc.end() ; ++msc_iter) {
		argv_2072 = msc_iter->second->argv_4654 (_symbol_name, presence_flag, local_iter);
		if (argv_2072 != argv_993) {
			argv_4569 (argv_4846, MAX_PATH, "+++ ERROR: argv_4391 : 'argv_4391' failed while looking for symbol '%s'", _symbol_name);
			argv_4846[MAX_PATH - 1] = '\0';
			argv_1799->argv_2327.argv_2323 (argv_1346, argv_4846);
			break;
		}
		else if (presence_flag == true) { 
			argv_2072 = msc_iter->second->argv_4653 (local_iter, presence_flag);
			if (argv_2072 != argv_993) {
				argv_4569 (argv_4846, MAX_PATH, "+++ ERROR: argv_4391 : 'argv_4653' failed while looking for symbol '%s'", _symbol_name);
				argv_4846[MAX_PATH - 1] = '\0';
				argv_1799->argv_2327.argv_2323 (argv_1346, argv_4846);
				break;
			}
			else {
				if (presence_flag == true) { // symbol is present, and local to the module
#if defined (DEBUG_COFF_LOADER)
					argv_4569 (argv_4846, MAX_PATH, "=> external symbol '%s' located in module '%s'", _symbol_name, msc_iter->first.c_str());
					argv_4846[MAX_PATH - 1] = '\0';
					argv_1799->argv_2327.argv_2323 (argv_1191, argv_4846);
#endif // #if defined (DEBUG_COFF_LOADER)

					nb_found++; // go on however to check for duplicates
					if (nb_found == 1) {
						found_iter = msc_iter;
					}
				}
			}
		}
	}

	if (argv_2072 == argv_993) {
		// check whether it was found or not
		if (nb_found == 0) {
			argv_1799->argv_2327.argv_2323 (argv_1346, "+++ ERROR: 0 definition found for this symbol !");
			argv_2072 = argv_999;
		}
		else if (nb_found > 1) {
			argv_1799->argv_2327.argv_2323 (argv_1346, "+++ ERROR: this symbol is defined several times : ", nb_found);
			argv_2072 = argv_998;
		}
		else if (nb_found == 1) { // ok, we found the unique module where this symbol is defined
#if defined (DEBUG_COFF_LOADER)
			argv_1799->argv_2327.argv_2323 (argv_1191, "symbol definition found !");
#endif // #if defined (DEBUG_COFF_LOADER)
			argv_2072 = found_iter->second->argv_4389 (_plugin_name, found_iter->first.c_str(), _symbol_name, _msc, _addr, _father_addr);
#if defined (DEBUG_COFF_LOADER)
			argv_1799->argv_2327.argv_2323 (argv_1191, "argv_867::argv_4391...[RESOLVE_RETURNED]");
#endif // #if defined (DEBUG_COFF_LOADER)

			if (argv_2072 != argv_993) {
				argv_4569 (argv_4846, MAX_PATH, "+++ ERROR: argv_4389 failed for external symbol '%s' located in module '%s'", _symbol_name, found_iter->first.c_str());
				argv_4846[MAX_PATH - 1] = '\0';
				argv_1799->argv_2327.argv_2323 (argv_1346, argv_4846);
			}
			else {
#if defined (DEBUG_COFF_LOADER)
				argv_4569 (argv_4846, MAX_PATH, "resolved external symbol '%s' located in module '%s' at argv_665 %X", _symbol_name, found_iter->first.c_str(), _addr);
				argv_4846[MAX_PATH - 1] = '\0';
				argv_1799->argv_2327.argv_2323 (argv_1191, argv_4846);
#endif // #if defined (DEBUG_COFF_LOADER)
			}
		}
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_867
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
// @@ _msc: map<string, argv_867 *>& : the map containing the 
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
// @@ - the COFF argv_1424 associated argv_5011 the argv_1148 argv_867 argv_3656
// @@   must have been argv_2297 succesfully prior to this call.
// @@ - '_symbol_name' parameter must not be a NULL pointer.
// @@ - '_symbol_name' parameter must not be an empty string.
// @@ - the symbol whose argv_3557 is contained in the '_symbol_name'
// @@   variable must be present in the COFF argv_1424 associated argv_5011 
// @@   the argv_1148 argv_867 argv_3656.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_867::argv_4389 (argv_876 _root_plugin_name, argv_876 _plugin_name, argv_876 _symbol_name, map<string, argv_867 *>& _msc, argv_4881 *& _addr, argv_4881 * _father_addr) {
	argv_4536 argv_2072 = argv_993;
	char argv_4846[MAX_PATH];
#if defined (DEBUG_COFF_LOADER)
	argv_4569 (argv_4846, MAX_PATH, "must argv_4389 =====[ROOT_PLUGIN:%s]===[PLUGIN:%s]===[%s]==[father_addr=0x%X]=====", _root_plugin_name, _plugin_name, _symbol_name, _father_addr);
	argv_4846[MAX_PATH - 1] = '\0';
	argv_1799->argv_2327.argv_2323 (argv_1346, argv_4846);
#endif // #if defined (DEBUG_COFF_LOADER)

	if (init_done == false) {
		argv_2072 = argv_983;
	}
	else if (argv_2297 == false) {
		argv_2072 = argv_981;
	}
	else {
#if defined (DEBUG_COFF_LOADER)
		argv_1799->argv_2327.argv_2323 (argv_1346, "argv_867::argv_4389...[PRE-CONDITIONS OK]");
#endif // #if defined (DEBUG_COFF_LOADER)
		// check parameters validity
		if ((_symbol_name == NULL) || (strlen(_symbol_name) == 0)) {
			argv_2072 = argv_986;
		}
		else { // parameters are correct
			bool presence_flag = false;
#if defined (DEBUG_COFF_LOADER)
			argv_1799->argv_2327.argv_2323 (argv_1191, "argv_867::argv_4389...[PARAMETERS OK]");
#endif // #if defined (DEBUG_COFF_LOADER)
			map<string, argv_880>::iterator iter_local;

			// notice that even if symbol is external it should be present
#if defined (DEBUG_COFF_LOADER)
			argv_1799->argv_2327.argv_2323 (argv_1191, "argv_867::argv_4389...[CHECK SYMBOL PRESENCE]");
#endif // #if defined (DEBUG_COFF_LOADER)
			argv_2072 = argv_4654 (_symbol_name, presence_flag, iter_local); 
			if (argv_2072 != argv_993) {
				argv_4569 (argv_4846, MAX_PATH, "+++ ERROR: argv_4389 : 'argv_4654' failed while looking for symbol '%s'", _symbol_name);
				argv_4846[MAX_PATH - 1] = '\0';
				argv_1799->argv_2327.argv_2323 (argv_1346, argv_4846);
			}
			else if (presence_flag == false) { 
				argv_4569 (argv_4846, MAX_PATH, "+++ ERROR: argv_4389 : symbol not found in argv_1148 module : '%s'", _symbol_name);
				argv_4846[MAX_PATH - 1] = '\0';
				argv_1799->argv_2327.argv_2323 (argv_1346, argv_4846);
				argv_2072 = argv_989;
			}
			else { // symbol is present, it can be either external, internal, or none of them
#if defined (DEBUG_COFF_LOADER)
				argv_1799->argv_2327.argv_2323 (argv_1346, "argv_867::argv_4389...[SYMBOL PRESENT IN MODULE]");
#endif // #if defined (DEBUG_COFF_LOADER)
				// check whether symbol was already xmapped or not
				argv_4883 unused_size;
				argv_2072 = argv_5023->argv_4648 (_symbol_name, (argv_4881 *) iter_local->second.argv_4225, iter_local->second.argv_4560, presence_flag, _addr, unused_size);
				if (argv_2072 != argv_5027) {
					string serror = argv_1344 (argv_2072);
					argv_4569 (argv_4846, MAX_PATH, "+++ ERROR: argv_4647 failed while processing symbol '%s' (errno=%s)", _symbol_name, serror.c_str());
					argv_4846[MAX_PATH - 1] = '\0';
					argv_1799->argv_2327.argv_2323 (argv_1346, argv_4846);
				}
				else { 
					argv_2072 = argv_993;
					if (presence_flag == true) {
#if defined (DEBUG_COFF_LOADER)
						argv_4569 (argv_4846, MAX_PATH, "symbol '%s' was already xmapped at argv_665 0x%X", _symbol_name, _addr);
						argv_4846[MAX_PATH - 1] = '\0';
						argv_1799->argv_2327.argv_2323 (argv_1346, argv_4846);
#endif // #if defined (DEBUG_COFF_LOADER)
					}
					else {
#if defined (DEBUG_COFF_LOADER)
						argv_1799->argv_2327.argv_2323 (argv_1191, "symbol was not xmapped yet");
#endif // #if defined (DEBUG_COFF_LOADER)
						argv_2072 = argv_4653 (iter_local, presence_flag);
						if (argv_2072 != argv_993) {
							argv_4569 (argv_4846, MAX_PATH, "+++ ERROR: argv_4389 : 'argv_4653' failed while looking for symbol '%s'", _symbol_name);
							argv_4846[MAX_PATH - 1] = '\0';
							argv_1799->argv_2327.argv_2323 (argv_1346, argv_4846);
						}
						else if (presence_flag == true) { // symbol is locally defined
#if defined (DEBUG_COFF_LOADER)
							argv_1799->argv_2327.argv_2323 (argv_1346, "argv_867::argv_4389...[SYMBOL IS LOCALLY DEFINED]");
#endif // #if defined (DEBUG_COFF_LOADER)
							argv_2072 = argv_4392 (_root_plugin_name, _plugin_name, _symbol_name, iter_local, _msc, _addr, _father_addr);
							if (argv_2072 == argv_993) {
#if defined (DEBUG_COFF_LOADER)
								argv_1799->argv_2327.argv_2309 (argv_1191, _addr, iter_local->second.argv_4560, _symbol_name);
#endif // #if defined (DEBUG_COFF_LOADER)
							}
						}
						else { // symbol is either external, or none
#if defined (DEBUG_COFF_LOADER)
							argv_1799->argv_2327.argv_2323 (argv_1191, "argv_867::argv_4389...[SYMBOL IS EITHER EXTERNAL, OR UNKNOWN]");
#endif // #if defined (DEBUG_COFF_LOADER)
							argv_2072 = argv_4652 (iter_local, presence_flag);
							if (argv_2072 != argv_993) {
								argv_4569 (argv_4846, MAX_PATH, "+++ ERROR: argv_4389 : 'argv_4652' failed while looking for symbol '%s'", _symbol_name);
								argv_4846[MAX_PATH - 1] = '\0';
								argv_1799->argv_2327.argv_2323 (argv_1346, argv_4846);
							}
							else if (presence_flag == false) { // symbol exists, but it is meaningless
								argv_4569 (argv_4846, MAX_PATH, "+++ ERROR: argv_4389 : symbol '%s' is neither internal, nor external !", _symbol_name);
								argv_4846[MAX_PATH - 1] = '\0';
								argv_1799->argv_2327.argv_2323 (argv_1346, argv_4846);
								argv_2072 = argv_992;
							}
							else { // symbol exists, and it is defined externally
#if defined (DEBUG_COFF_LOADER)
								argv_1799->argv_2327.argv_2323 (argv_1191, "symbol is defined externally");
#endif // #if defined (DEBUG_COFF_LOADER)
								argv_2072 = argv_4391 (_root_plugin_name, _plugin_name, _symbol_name, iter_local, _msc, _addr, _father_addr);
							}
						}
					}
				}
			}
		}
	}
#if defined (DEBUG_COFF_LOADER)
	argv_1799->argv_2327.argv_2323 (argv_1191, "argv_867::argv_4389...[OUT]");
#endif // #if defined (DEBUG_COFF_LOADER)
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1424
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
