// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_330.cpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1424 contains the argv_1178 structures and
// @@ functions necessary for the virtual memory
// @@ manager to work properly
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_387.hpp"




// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1166
// @@
// @@ FUNCTION		:	argv_1166		
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
// @@ Normal constructor of the argv_1166 argv_3656.
// @@ It just reset important fields to an initial argv_4622.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_1166::argv_1166 () {
	reset ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1166
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
// @@ This function deallocates all the previously allocated virtual 
// @@ memory blocks.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_1166::reset () {
	argv_4883 nb_page = argv_4974.size ();
	for (argv_4883 i=0 ; i<nb_page ; i++) {
		argv_4756->argv_3584 (argv_4974[i], argv_5024);	
	}

	init_done	  = false;
	argv_1148		  = (argv_4883) NULL;
	remaining	  = 0;
	argv_1799 = NULL;
	argv_4756   = NULL;

	argv_4974.clear ();
	vector<void *>().swap (argv_4974);

	argv_4973.clear ();
	vector<string>().swap (argv_4973);

	argv_2359.clear ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1166
// @@
// @@ FUNCTION		:	~argv_1166		
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
// @@ Normal destructor of the argv_1166 argv_3656.
// @@ it deallocates all the previously allocated virtual memory
// @@ blocks.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_1166::~argv_1166 () {
	reset ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1166
// @@
// @@ FUNCTION		:	argv_1119		
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_4536 : argv_5027 if success,
// @@        another argv_4979 otherwise.	
// @@	
// @@ DISCLOSURE	:	-
// @@	
// @@ DESCRIPTION	:
// @@
// @@ CONTRACT 		:
// @@ - the 'init' function must have been called prior to this call.	 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_1166::argv_1119 () {
	argv_4536 argv_2072 = argv_5027;
	argv_2338 block_ptr = argv_4756->argv_3571 (argv_5024);
	if (block_ptr == NULL) {
		argv_2072 = argv_5025;
	}
	else {
		memset (block_ptr, 0x90, argv_5024);
		argv_4974.push_back (block_ptr);
		argv_1148		= (argv_4883) block_ptr;
		remaining	= argv_5024;
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1166
// @@
// @@ FUNCTION		:	init		
// @@
// @@ INPUT			:
// @@ _systool_ptr: argv_4610 *: pointer on the argv_3656 containing
// @@   all the argv_4749 dependant functions.
// @@
// @@ _glob_data_ptr: argv_891 *: pointer on the argv_3656 containing
// @@     all the global argv_1178.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_4536 : argv_5027 in case of success,
// @@        another argv_4979 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_4243 the argv_1166
// @@ for use by performing the following steps :
// @@ - save up the '_systool_ptr' argv_665
// @@ - save up the '_glob_data_ptr' argv_665
// @@ - allocate a first big chunk of virtual memory.
// @@
// @@ CONTRACT 		: 
// @@ - the function 'init' must not have been called yet.
// @@ - '_systool_ptr' parameter must not be a NULL pointer.
// @@ - '_glob_data_ptr' parameter must not be a NULL pointer.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_1166::init (argv_4610 * _systool_ptr, argv_891 * _glob_data_ptr) {
	argv_4536 argv_2072 = argv_5027;

	if (init_done == true) {
		argv_2072 = argv_5018;	
	}
	else if ((_systool_ptr == NULL) || (_glob_data_ptr == NULL)) {
		argv_2072 = argv_5020;
	}
	else {
		argv_4756	  = _systool_ptr;
		argv_1799 = _glob_data_ptr;
		init_done	  = true;

		// allocate the first page
		argv_2072 = argv_1119 ();
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1166
// @@
// @@ FUNCTION		:	argv_1072		
// @@
// @@ INPUT			:
// @@ _name: argv_876 : argv_3557 of the symbol whose crc is to be computed.
// @@
// @@ _buf_ptr: argv_665 of the first byte of the argv_826 whose crc
// @@   is to be computed.
// @@
// @@ _buf_size: size of the argv_826 whose crc is to be computed.
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
// @@ This function permits to generate the CRC associated argv_5011 a
// @@ argv_826 corresponding to the symbol whose argv_3557 is given
// @@ as a parameter and to return the argv_4406 via the '_crc
// @@ parameter.
// @@ Notice that the final CRC is actually a string.
// @@ This string is composed of 
// @@ - the argv_4655
// @@ - the size of the argv_826 whose numeric CRC was computed
// @@ - the numeric CRC itself
// @@ These 3 fields are then arranged as follows :
// @@ <argv_4655>_<buffer_size>_<buffer_numeric_crc>
// @@ example: 
// @@ symbol argv_3557="toto", argv_826 size=32, argv_826 crc = 4585
// @@ => final crc = "toto_32_4585"
// @@
// @@ This scheme permits to ensure that the CRC is dependant
// @@ of the symbol's argv_3557, the argv_826's size, and the argv_826's
// @@ content.
// @@ 
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_1166::argv_1072 (argv_876 _name, argv_4881 * _buf_ptr, argv_4883 _buf_size, string& _crc) {
	char argv_4846[MAX_PATH];
	argv_4883 ircr = 0;

	for (argv_4883 i=0 ; i<_buf_size ; i++) {
		ircr += _buf_ptr[i];
	}

	argv_4569 (argv_4846, MAX_PATH, "%s_%u_%u", _name, _buf_size, ircr);
	argv_4846[MAX_PATH - 1] = '\0';
	_crc = argv_4846;
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1166
// @@
// @@ FUNCTION		:	argv_4355		
// @@
// @@ INPUT			:
// @@ _symbol_name: argv_876: argv_3557 of the symbol for which a virtual
// @@   memory argv_795 is requested.
// @@
// @@ _data_2_copy: argv_4881 *: argv_665 of the first byte of the symbol's
// @@   argv_1178, these argv_1178 are used to compute the CRC.
// @@
// @@ _requested_size: argv_4883 : size of the '_data_2_copy' argv_826, 
// @@   necessary to compute the CRC.
// @@
// @@ OUTPUT		:
// @@ _found_from_cache: bool&: set to true if the same symbol was
// @@   already mapped to virtual memory,
// @@   set to false otherwise.
// @@	
// @@ _block_ptr_ptr: void **: contains the argv_665 of the argv_795
// @@   of virtual memory that was allocated or retrieved from
// @@   cache if it was already previously allocated before.
// @@
// @@ IO			:	
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_5027 in case of success,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to allocate/obtain a argv_795 of
// @@ virtual memory for the symbol whose argv_3557 is contained
// @@ into the '_symbol_name' parameter, whose content is 
// @@ contained in the argv_826 pointed to '_data_2_copy' and
// @@ whose size is contained in the '_requested_size' parameter.
// @@ Notice that the allocated argv_795 is aligned.
// @@ Also notice that if the same symbol argv_5011 the same content
// @@ was already mapped to virtual memory, then no memory
// @@ is allocated and the argv_665 of the argv_795 previously
// @@ allocated for this symbol is returned via the '_block_ptr_ptr'
// @@ parameter.
// @@
// @@ CONTRACT 		: 
// @@ - the function 'init' must have been called prior to this call.
// @@ - the '_requested_size' parameter must be within the  
// @@   range ]0..argv_5024[
// @@ - '_data_2_copy' parameter must not be a NULL pointer.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_1166::argv_4355 (argv_876 _symbol_name, argv_4881 * _data_2_copy, argv_4883 _requested_size, bool& _found_from_cache, void ** _block_ptr_ptr) {
	argv_4536 argv_2072		  = argv_5027;
	_found_from_cache = false;
#if defined (DEBUG_XMEM_MANAGER)
	argv_1799->argv_2327.argv_2323 (argv_1191, "xmem: argv_4655 : '", _symbol_name, "'");
	argv_1799->argv_2327.argv_2323 (argv_1191, "xmem: requested argv_795 size : ", _requested_size);
#endif // #if defined (DEBUG_XMEM_MANAGER)

	if (init_done == false) {
		argv_2072 = argv_5019;
	}
	else if ((_requested_size == 0) || (_requested_size > argv_5024) || (_data_2_copy == NULL)) { 
		argv_2072 = argv_5020;
	}
	else if ((_symbol_name == NULL) || (strlen(_symbol_name) == 0)) {
		argv_2072 = argv_5020;
	}
	else {
		*_block_ptr_ptr = NULL;
		string crc;
		map<string, argv_1167>::iterator iter_local;
		// check whether this symbol was already xmapped or not
		argv_1072 (_symbol_name, _data_2_copy, _requested_size, crc);
		iter_local = argv_2359.find (crc);
#if defined (DEBUG_XMEM_MANAGER)
		argv_1799->argv_2327.argv_2323 (argv_1191, "xmem: crc for this symbol : '", crc.c_str());
#endif // #if defined (DEBUG_XMEM_MANAGER)
		
		if (iter_local != argv_2359.end()) {
			*_block_ptr_ptr = iter_local->second.argv_665; // found from cache
#if defined (DEBUG_XMEM_MANAGER)
			{
				char argv_4846[MAX_PATH];
				argv_4569 (argv_4846, MAX_PATH, "xmem: argv_795 [FOUND FROM CACHE] argv_4618 at argv_665 : 0x%X", iter_local->second.argv_665);
				argv_4846[MAX_PATH - 1] = '\0';
				argv_1799->argv_2327.argv_2323 (argv_1191, argv_4846);
			}
#endif // #if defined (DEBUG_XMEM_MANAGER)
			_found_from_cache = true;
		}
		else { // symbol not xmapped yet
			// check whether the required argv_795 will fit into the argv_1148 page
			if (_requested_size > remaining) {
#if defined (DEBUG_XMEM_MANAGER)
				argv_1799->argv_2327.argv_2323 (argv_1191, "argv_1166::argv_4355 - page fault => allocating a new page");
#endif // #if defined (DEBUG_XMEM_MANAGER)
				argv_2072 = argv_1119 ();
			}

			if (argv_2072 == argv_5027) {
				// correct the size so that it will be a multiple of argv_5026
				argv_4536 corrected_size = ((_requested_size / argv_5026) + 1) * argv_5026;
#if defined (DEBUG_XMEM_MANAGER)
				argv_1799->argv_2327.argv_2323 (argv_1191, "xmem: argv_795 corrected size = ", corrected_size);
#endif // #if defined (DEBUG_XMEM_MANAGER)
				*_block_ptr_ptr = (argv_2338) argv_1148;
				argv_1167 xmem_unit;
				xmem_unit.argv_665 = (argv_4881 *) argv_1148;
				xmem_unit.size    = corrected_size;
#if defined (DEBUG_XMEM_MANAGER)
				{
					char argv_4846[MAX_PATH];
					argv_4569 (argv_4846, MAX_PATH, "xmem: argv_795 will argv_4618 at argv_665 : 0x%X", xmem_unit.argv_665);
					argv_4846[MAX_PATH - 1] = '\0';
					argv_1799->argv_2327.argv_2323 (argv_1191, argv_4846);
				}
#endif // #if defined (DEBUG_XMEM_MANAGER)
				argv_2359[crc] = xmem_unit;
				argv_4973.push_back (crc);
				argv_1148   += corrected_size;
				remaining -= corrected_size;
			}
		}
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1166
// @@
// @@ FUNCTION		:	argv_4648		
// @@
// @@ INPUT			:
// @@ _symbol_name: argv_876: argv_3557 of the symbol for which a virtual
// @@   memory argv_795 is requested.
// @@
// @@ _buf_ptr: argv_4881 *: argv_665 of the first byte of the symbol's
// @@   argv_1178, these argv_1178 are used to compute the CRC.
// @@
// @@ _buf_size: argv_4883 : size of the '_data_2_copy' argv_826, 
// @@   necessary to compute the CRC.
// @@
// @@ OUTPUT		:
// @@ _presence_flag: bool&: set to true if the same symbol was
// @@   already mapped to virtual memory,
// @@   set to false otherwise.
// @@	
// @@ _start_addr: argv_4881 *: if the symbol was already xmapped, then
// @@   it's starting argv_665 is returned via this parameter.
// @@
// @@ _size: argv_4883: if the symbol was already xmapped, then it's 
// @@   aligned size is returned via this parameter.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_5027 in case of success,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to check whether a given
// @@ symbol was already mapped to virtual memory or not.
// @@ If symbol was already mapped, then the parameter 
// @@ '_presence_flag' is set to true, and the aligned size
// @@ of the mapped argv_795 is returned via the '_start_addr'
// @@ parameter, and the argv_665 of the mapped argv_795 is returned
// @@ via the '_start_addr' parameter.
// @@ If the symbol was not already mapped to virtual memory yet,
// @@ then the parameter '_presence_flag' is set to false, and
// @@ the parameter '_start_addr' is set to NULL, and the
// @@ '_size' parameter is set to zero.
// @@
// @@ CONTRACT 		: 
// @@ - '_buf_ptr' parameter must be a NULL pointer.
// @@ - '_buf_size' must be greater than zero.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_1166::argv_4648 (argv_876 _name, argv_4881 * _buf_ptr, argv_4883 _buf_size, bool& _presence_flag, argv_4881 *& _start_addr, argv_4883& _size) {
	argv_4536 argv_2072		= argv_5027;
	_presence_flag  = false;
	_start_addr		= NULL;
	_size			= 0;

	if ((_buf_ptr != NULL) && (_buf_size > 0)) {
		string crc;
		argv_1072 (_name, _buf_ptr, _buf_size, crc);
		map<string, argv_1167>::iterator local_iter;
		local_iter = argv_2359.find (crc);
		if (local_iter != argv_2359.end()) {
			_presence_flag = true;
			_start_addr = local_iter->second.argv_665;
			// aligned size may be different than requested size
			_size		= local_iter->second.size; 
		}
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1166
// @@
// @@ FUNCTION		:	argv_4647		
// @@
// @@ INPUT			:
// @@ _symbol_name: argv_876: argv_3557 of the symbol for which a virtual
// @@   memory argv_795 is requested.
// @@
// @@ _buf_ptr: argv_4881 *: argv_665 of the first byte of the symbol's
// @@   argv_1178, these argv_1178 are used to compute the CRC.
// @@
// @@ _buf_size: argv_4883 : size of the '_data_2_copy' argv_826, 
// @@   necessary to compute the CRC.
// @@
// @@ OUTPUT		:
// @@ _presence_flag: bool&: set to true if the same symbol was
// @@   already mapped to virtual memory,
// @@   set to false otherwise.
// @@	
// @@ _start_addr: argv_4881 *: if the symbol was already xmapped, then
// @@   it's starting argv_665 is returned via this parameter.
// @@
// @@ _size: argv_4883: if the symbol was already xmapped, then it's 
// @@   aligned size is returned via this parameter.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_5027 in case of success,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to check whether a given
// @@ symbol was already mapped to virtual memory or not.
// @@ If symbol was already mapped, then the parameter 
// @@ '_presence_flag' is set to true, and the aligned size
// @@ of the mapped argv_795 is returned via the '_start_addr'
// @@ parameter, and the argv_665 of the mapped argv_795 is returned
// @@ via the '_start_addr' parameter.
// @@ If the symbol was not already mapped to virtual memory yet,
// @@ then the parameter '_presence_flag' is set to false, and
// @@ the parameter '_start_addr' is set to NULL, and the
// @@ '_size' parameter is set to zero.
// @@
// @@ CONTRACT 		: 
// @@ - the 'init' function must have been called prior to this call.
// @@ - '_buf_ptr' parameter must be a NULL pointer.
// @@ - '_buf_size' must be greater than zero.
// @@ - '_name' parameter must not be a NULL pointer.
// @@ - '_name' parameter must not be an empty string.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_1166::argv_4647 (argv_876 _name, argv_4881 * _buf_ptr, argv_4883 _buf_size, bool& _presence_flag, argv_4881 *& _start_addr, argv_4883& _size) {
	argv_4536 argv_2072		= argv_5027;
#if defined (DEBUG_XMEM_MANAGER)
	{
		char argv_4846[MAX_PATH];
		argv_4569 (argv_4846, MAX_PATH, "argv_1166::argv_4647(%s,%X,%d)", _name, _buf_ptr, _buf_size);
		argv_4846[MAX_PATH - 1] = '\0';
		argv_1799->argv_2327.argv_2323 (argv_1191, argv_4846);
	}
#endif // #if defined (DEBUG_XMEM_MANAGER)
	if (init_done == false) {
		argv_2072 = argv_5019;
	}
	else if ((_name == NULL) || (strlen(_name) == 0) || (_buf_ptr==NULL) || (_buf_size==0)) { 
		argv_2072 = argv_5020;
	}
	else {
		argv_2072 = argv_4648 (_name, _buf_ptr, _buf_size, _presence_flag, _start_addr, _size);
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1166
// @@
// @@ FUNCTION		:	argv_1299		
// @@
// @@ INPUT			:
// @@ _filename: argv_876: argv_3557 of the argv_1424 where to log the
// @@   content of the virtual memory manager.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_5027 if operation was succesful,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to dump the content of the 
// @@ virtual memory manager to the log argv_1424 whose argv_3557
// @@ is contained in the '_filename' parameter.
// @@ the content of the log argv_1424 being a serie of lines,
// @@ each argv_2250 containing :
// @@ - the symbol's size.
// @@ - the symbol's argv_795's starting argv_665.
// @@ - the symbol's argv_3557.
// @@ Notice that the symbols are displayed in ascending argv_3690
// @@ of argv_795 argv_665, to be able to do that, we use a vector
// @@ because the map argv_3656 changes the argv_3690 in which the
// @@ argv_1178 are stored (automatic sorting).
// @@
// @@ CONTRACT 		: 
// @@ - the 'init' function must have been called prior to this call.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_1166::argv_1299 (argv_876 _filename) {
	argv_4536 argv_2072		= argv_5027;
#if defined (DEBUG_XMEM_MANAGER)
	if (init_done == false) {
		argv_2072 = argv_5019;
	}
	else {
		// we need a vector because the map does not respect the argv_3690
		FILE * argv_1510 = fopen (_filename, "wb");

		if (argv_1510) {
			argv_4883 argv_3605 = argv_4973.size ();
			map<string, argv_1167>::iterator iter_local;
			string corrected;
			fprintf (argv_1510, "%d items to argv_1235\r\n", argv_3605);

			for (argv_4883 i=0 ; i<argv_3605 ; i++) {
				iter_local = argv_2359.find (argv_4973[i]);
				if (iter_local == argv_2359.end()) {
					MessageBox (NULL, "argv_1299 failed : incoherency @1", "", MB_ICONERROR);
					break;
				}
				fprintf (argv_1510, "%d - (%u) - 0x%X - [%s]\r\n", i, iter_local->second.size, (argv_4883) iter_local->second.argv_665, argv_4973[i].c_str());
			}
			fclose (argv_1510);
		}
	}
#endif // #if defined (DEBUG_XMEM_MANAGER)
	return (argv_2072);	
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ end of argv_1424
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
