// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: complex_list.cpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1424 contains the declaration of the
// @@ functions related to the complex list argv_3656.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_375.hpp"




// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1163		
// @@
// @@ FUNCTION		:	argv_1163	
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
// @@ Normal constructor of the 'argv_1163' argv_3656.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_1163::argv_1163 () {
	reset ();
}	



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1163		
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
// @@ This function brings the 'argv_1163' argv_3656 to
// @@ it's original argv_4622.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_1163::reset () {
	// free all allocated horizontal lists
	for (argv_2346=argv_2354.begin() ; argv_2346 != argv_2354.end() ; ++argv_2346) {	 
		delete argv_2346->second;
	}
	argv_2354.clear ();
	argv_2346		= argv_2354.end();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1163		
// @@
// @@ FUNCTION		:	argv_1777	
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	
// @@ _nb_elem: argv_4883&: the size of the vertical list. 
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_4536 : argv_1061 if operation was succesful,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to determine the number of symbols
// @@ contained in the argv_1163 argv_3656.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_1163::argv_1777 (argv_4883& _nb_elem) {
	argv_4536 argv_2072 = argv_1061;
	_nb_elem = argv_2354.size ();
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1163		
// @@
// @@ FUNCTION		:	argv_2303	
// @@
// @@ INPUT			:
// @@ _symbol_name: argv_876: the argv_3557 of the symbol to lookup.
// @@
// @@ OUTPUT		:
// @@ _cell_ptr: argv_2338&: the argv_665 of the cell corresponding to
// @@   the parameter '_symbol_name' if found.	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_4536 : argv_1061 if operation was succesful,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to lookup the cell associated argv_5011 the
// @@ symbol whose argv_3557 is given as the '_symbol_name' parameter.
// @@
// @@ It is unsafe because it does not check for parameters validity.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_1163::argv_2303 (argv_876 _symbol_name, argv_2338& _cell_ptr) {
	argv_4536 argv_2072 = argv_1061;
	argv_2346 = argv_2354.find (_symbol_name);
	if (argv_2346 == argv_2354.end()) {
		argv_2072 = argv_1060;
	}
	else { // symbol was found from map => save it's corresponding iterator.
		_cell_ptr = (argv_2338&) argv_2346;
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1163		
// @@
// @@ FUNCTION		:	argv_1776	
// @@
// @@ INPUT			:
// @@ _symbol: argv_876: the argv_3557 of the symbol whose number of 
// @@   resolution is to be found.
// @@
// @@ OUTPUT		:
// @@ _size: argv_4883&: the number of solved symbols for the symbol
// @@ whose argv_3557 is given as the '_symbol' parameter.	
// @@
// @@ IO			:	
// @@ _prev_iter: if a lookup already succeeded before, the caller
// @@   may provide this parameter in argv_3690 to avoid lookup, thus
// @@   increasing performances.
// @@	
// @@ RETURN VALUE	:
// @@ argv_4536: argv_1061 if operation was succesful,
// @@       another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to determine the number of instances
// @@ of the symbol '_symbol' that were solved.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_1163::argv_1776 (argv_876 _symbol, argv_2338& _prev_iter, argv_4883& _size) {
	argv_4536 argv_2072 = argv_1061;
	if (_symbol==NULL) {
		argv_2072 = argv_1058;
	}
	else { // if an iterator is given, then use it, otherwise perform a lookup
		if (_prev_iter == NULL) {
			argv_2072 = argv_2303 (_symbol, _prev_iter);
		}

		if (argv_2072 == argv_1061) {
			argv_4859 * iter_ptr = (argv_4859 *)  &_prev_iter;
			argv_2346 = (*iter_ptr);
			_size = argv_2346->second->argv_1790 ();
		}
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1163		
// @@
// @@ FUNCTION		:	argv_1764	
// @@
// @@ INPUT			:
// @@ _symbol: argv_876: the argv_3557 of the symbol whose first instance
// @@   is to be retrieved.
// @@
// @@ OUTPUT		:
// @@ _extracted_resolved: argv_2338 *: the argv_665 of the first
// @@   resolved instance of the symbol whose argv_3557 is given as
// @@   the '_symbol' parameter.	
// @@
// @@ IO			:	
// @@ _prev_iter: if a lookup already succeeded before, the caller
// @@   may provide this parameter in argv_3690 to avoid lookup, thus
// @@   increasing performances.
// @@	
// @@ RETURN VALUE	:
// @@ argv_4536: argv_1061 if operation was succesful,
// @@       another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to retrieve the first instance
// @@ of the symbol whose argv_3557 is given as the '_symbol'
// @@ parameter.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_1163::argv_1764 (argv_876 _symbol, argv_2338& _prev_iter, argv_2338 * _extracted_resolved) {
	argv_4536 argv_2072 = argv_1061;

	if (_prev_iter == NULL) {
		argv_2072 = argv_2303 (_symbol, _prev_iter);
	}
	
	if (argv_2072 == argv_1061) {
		argv_4859 * iter_ptr = (argv_4859 *)  &_prev_iter;
		argv_2346 = (*iter_ptr);
		argv_2072 = argv_2346->second->argv_1761 (_extracted_resolved);
	}

	// remap error codes
	if (argv_2072 == argv_2263) {
		argv_2072 = argv_1055;
	}
	if (argv_2072 == argv_2272) {
		argv_2072 = argv_1061;
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1163		
// @@
// @@ FUNCTION		:	argv_1782	
// @@
// @@ INPUT			:
// @@ _symbol: argv_876: the argv_3557 of the symbol whose first instance
// @@   is to be retrieved.
// @@
// @@ OUTPUT		:
// @@ _extracted_resolved: argv_2338 *: the argv_665 of the argv_3623
// @@   resolved instance of the symbol whose argv_3557 is given as
// @@   the '_symbol' parameter.	
// @@
// @@ IO			:	
// @@ _prev_iter: if a lookup already succeeded before, the caller
// @@   may provide this parameter in argv_3690 to avoid lookup, thus
// @@   increasing performances.
// @@	
// @@ RETURN VALUE	:
// @@ argv_4536: argv_1061 if operation was succesful,
// @@       another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to retrieve the argv_3623 instance
// @@ of the symbol whose argv_3557 is given as the '_symbol'
// @@ parameter.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_1163::argv_1782 (argv_876 _symbol, argv_2338& _prev_iter, argv_2338 * _extracted_resolved) {
	argv_4536 argv_2072 = argv_1061;

	if (_prev_iter == NULL) {
		argv_2072 = argv_2303 (_symbol, _prev_iter);
	}
	
	if (argv_2072 == argv_1061) {
		argv_4859 * iter_ptr = (argv_4859 *)  &_prev_iter;
		argv_2346 = (*iter_ptr);
		argv_2072 = argv_2346->second->argv_1778 (_extracted_resolved);
	}

	// remap error codes
	if (argv_2072 == argv_2263) {
		argv_2072 = argv_1055;
	}
	if (argv_2072 == argv_2272) {
		argv_2072 = argv_1061;
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1163		
// @@
// @@ FUNCTION		:	argv_660	
// @@
// @@ INPUT			:
// @@ _symbol_name: argv_876: argv_3557 of the symbol to argv_646.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_4536: argv_1061 if operation was succesful,
// @@       another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_646 a new symbol to the
// @@ vertical list. Notice that after insertion, there
// @@ is no instance of this symbol yet.
// @@
// @@ CONTRACT		:	
// @@ - '_symbol_name' parameter must not be a NULL pointer.	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_1163::argv_660 (argv_876 _symbol_name) {
	argv_4536 argv_2072 = argv_1061;
	if (_symbol_name==NULL) {
		argv_2072 = argv_1058;		
	}
	else { // parameters are OK
		argv_2338 cell_ptr_tmp = NULL;
		argv_2072 = argv_2303 (_symbol_name, cell_ptr_tmp);

		if (argv_2072 == argv_1061) { 
			argv_2072 = argv_1054;
		}
		else if (argv_2072 == argv_1060) {
			argv_2072 = argv_1061;
			argv_927 * hlist_ptr = new (std::nothrow) argv_927;
			argv_2354[_symbol_name] = hlist_ptr;
		}
	}

	argv_2346 = argv_2354.find (_symbol_name);
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1163		
// @@
// @@ FUNCTION		:	argv_659	
// @@
// @@ INPUT			:
// @@ _symbol_name: argv_876: argv_3557 of the symbol whose instance is to
// @@   be added.
// @@
// @@ _resolved_symbol: argv_2338: the argv_665 of the instance of the
// @@   symbol to be added.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	
// @@ _prev_iter: if a lookup already succeeded before, the caller
// @@   may provide this parameter in argv_3690 to avoid lookup, thus
// @@   increasing performances.
// @@	
// @@ RETURN VALUE	:
// @@ argv_4536: argv_1061 if operation was succesful,
// @@       another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_646 an instance of the symbol 
// @@ whose argv_3557 is given as the '_symbol_name' parameter.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_1163::argv_659 (argv_2338& _prev_iter, argv_876 _symbol_name, argv_2338 _resolved_symbol) {
	argv_4536 argv_2072 = argv_1061;
	if (_symbol_name==NULL) {
		argv_2072 = argv_1058;
	}
	else { // parameters are OK
		// if user gave a valid iterator, then use it
		if (_prev_iter == NULL) {
			argv_2072 = argv_2303 (_symbol_name, _prev_iter);
		}

		if (argv_2072 == argv_1061) { // if entry was found
			// insert this resolved symbol
			argv_4859 * iter_ptr = (argv_4859 *)  &_prev_iter;
			argv_2346 = (*iter_ptr);
			argv_2072 = argv_2346->second->argv_646 (_resolved_symbol, true);
		}
	}
	
	// remap error codes
	if (argv_2072 == argv_2272) {
		argv_2072 = argv_1061;
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_869		
// @@
// @@ FUNCTION		:	argv_869	
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
// @@ Normal constructor of the 'argv_869' argv_3656.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_869::argv_869 () {
	argv_2349 = NULL;
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_869		
// @@
// @@ FUNCTION		:	init	
// @@
// @@ INPUT			:
// @@ _size: argv_4883: the number of vertical lists to argv_4243.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_4536 : argv_1061 if operation was succesful,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_4243 the argv_869 argv_3656
// @@ prior to first use by giving the size of the vertical list.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_869::init (argv_4883 _size) {
	argv_4536 argv_2072 = argv_1061;
	if (_size == 0) {
		argv_2072 = argv_1058;
	}
	else { // parameters are OK
		// allocate the array of vertical list
		argv_2349 = new (std::nothrow) argv_1163[argv_3928];
		if (argv_2349 == NULL) {
			argv_2072 = argv_1059;
		}
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_869		
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
// @@ This function permits to reset the argv_869 argv_3656
// @@ to it's initial argv_4622.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_869::reset () {
	if (argv_2349 != NULL) {
		// free all boxes
		for (argv_4883 i=0 ; i<argv_3928 ; i++) {
			argv_2349[i].reset ();	
		}

		// free the array of vertical lists
		delete [] argv_2349;
		argv_2349 =  NULL;
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_869		
// @@
// @@ FUNCTION		:	argv_2303	
// @@
// @@ INPUT			:
// @@ argv_4883: _plugin_type: the argv_4860 of plugin for which the symbol
// @@   is to be retrieved.
// @@
// @@ _symbol_name: argv_876: argv_3557 of the symbol whose location is to
// @@   be determined.
// @@
// @@ OUTPUT		:
// @@ _cell_ptr: argv_2338&: the argv_665 of the symbol '_symbol_name' 
// @@ of the plugin	'_plugin_type' 
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_4536: argv_1061 if operation was succesful,
// @@       another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to find the location (the argv_665) of
// @@ the symbol '_symbol_name' of the plugin '_plugin_type' in
// @@ the complex list.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_869::argv_2303 (argv_4883 _plugin_type, argv_876 _symbol_name, argv_2338& _cell_ptr) {
	argv_4536 argv_2072 = argv_1061;
	if (argv_2349 == NULL) {
		argv_2072 = argv_1057;
	}
	else if (_plugin_type >= argv_3928) {
		argv_2072 = argv_1058;	
	}
	else { // parameters are OK
		argv_2072 = argv_2349[_plugin_type].argv_2303 (_symbol_name, _cell_ptr);
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_869		
// @@
// @@ FUNCTION		:	argv_1777	
// @@
// @@ INPUT			:
// @@ _plugin_type: argv_4883: the argv_4860 of plugin whose number of symbol
// @@   is to be determined.
// @@
// @@ OUTPUT		:
// @@ _nb_elem: argv_4883&: the retrieved number of symbols for this
// @@   plugin argv_4860.	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_4536 : argv_1061 if operation was succesful,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to retrieve the number of symbols
// @@ associated argv_5011 the plugin whose argv_4860 is given as the
// @@ '_plugin_type' parameter.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_869::argv_1777 (argv_4883 _plugin_type, argv_4883& _nb_elem) {
	argv_4536 argv_2072 = argv_1061;
	if (argv_2349 == NULL) {
		argv_2072 = argv_1057;
	}
	else if (_plugin_type >= argv_3928) {
		argv_2072 = argv_1058;	
	}
	else { // parameters are OK
		argv_2072 = argv_2349[_plugin_type].argv_1777 (_nb_elem);
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_869		
// @@
// @@ FUNCTION		:	argv_1776			
// @@
// @@ INPUT			:
// @@ _plugin_type: argv_4883: the plugin argv_4860 concerned.
// @@
// @@ _symbol: argv_876: the symbol whose number of resolution is to
// @@    be retrieved.
// @@
// @@ OUTPUT		:
// @@ _size: argv_4883&: the number of instances for the symbol 
// @@   corresponding to the plugin argv_4860 '_plugin_type' whose
// @@   argv_3557 is given as the '_symbol' parameter.
// @@
// @@ IO			:	
// @@ _cell_ptr: argv_2338&: the argv_665 of this symbol's cell if
// @@   a previous call was performed (cache).	
// @@	
// @@ RETURN VALUE	:
// @@ argv_4536 : argv_1061 if operation was succesful,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to retrieve the number of resolved
// @@ instances of the symbol of the plugin argv_4860 '_plugin_type'
// @@ whose argv_3557 is given as the '_symbol' parameter.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_869::argv_1776 (argv_4883 _plugin_type, argv_876 _symbol, argv_2338& _cell_ptr, argv_4883& _size) {
	argv_4536 argv_2072 = argv_1061;
	if (argv_2349 == NULL) {
		argv_2072 = argv_1057;
	}
	else if (_plugin_type >= argv_3928) {
		argv_2072 = argv_1058;	
	}
	else { // parameters are OK
		argv_2072 = argv_2349[_plugin_type].argv_1776 (_symbol, _cell_ptr, _size);
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_869		
// @@
// @@ FUNCTION		:	argv_1764		
// @@
// @@ INPUT			:
// @@ _plugin_type: argv_4883: the plugin argv_4860 concerned.
// @@
// @@ _symbol: argv_876: the symbol whose resolved instance is to
// @@   be retrieved.
// @@
// @@ OUTPUT		:
// @@ _extracted_resolved: argv_2338 *: argv_665 of the first resolved
// @@   symbol for the plugin whose argv_4860 is _plugin_type, and whose
// @@   argv_3557 is _symbol.
// @@
// @@ IO			:	
// @@ _cell_ptr: argv_2338&: may be furnished by the caller to
// @@    boost performances.
// @@	
// @@ RETURN VALUE	:
// @@ argv_4536 : argv_1061 if operation was succesful,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to retrieve the argv_665 of the first
// @@ instance of the symbol _symbol of the plugin _plugin_type.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_869::argv_1764 (argv_4883 _plugin_type, argv_876 _symbol, argv_2338& _cell_ptr, argv_2338 * _extracted_resolved) {
	argv_4536 argv_2072 = argv_1061;
	if (argv_2349 == NULL) {
		argv_2072 = argv_1057;
	}
	else if (_plugin_type >= argv_3928) {
		argv_2072 = argv_1058;	
	}
	else { // parameters are OK
		argv_2072 = argv_2349[_plugin_type].argv_1764 (_symbol, _cell_ptr, _extracted_resolved);
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_869		
// @@
// @@ FUNCTION		:	argv_1782		
// @@
// @@ INPUT			:
// @@ _plugin_type: argv_4883: the plugin argv_4860 concerned.
// @@
// @@ _symbol: argv_876: the symbol whose resolved instance is to
// @@   be retrieved.
// @@
// @@ OUTPUT		:
// @@ _extracted_resolved: argv_2338 *: argv_665 of the argv_3623 resolved
// @@   symbol for the plugin whose argv_4860 is _plugin_type, and whose
// @@   argv_3557 is _symbol.
// @@
// @@ IO			:	
// @@ _cell_ptr: argv_2338&: may be furnished by the caller to
// @@    boost performances.
// @@	
// @@ RETURN VALUE	:
// @@ argv_4536 : argv_1061 if operation was succesful,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to retrieve the argv_665 of the argv_3623
// @@ instance of the symbol _symbol of the plugin _plugin_type.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_869::argv_1782 (argv_4883 _plugin_type, argv_876 _symbol, argv_2338& _cell_ptr, argv_2338 * _extracted_resolved) {
	argv_4536 argv_2072 = argv_1061;
	if (argv_2349 == NULL) {
		argv_2072 = argv_1057;
	}
	else if (_plugin_type >= argv_3928) {
		argv_2072 = argv_1058;	
	}
	else { // parameters are OK
		argv_2072 = argv_2349[_plugin_type].argv_1782 (_symbol, _cell_ptr, _extracted_resolved);
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_869		
// @@
// @@ FUNCTION		:	argv_660		
// @@
// @@ INPUT			:
// @@ _plugin_type: argv_4883: the plugin argv_4860 concerned.
// @@
// @@ _symbol_name: argv_876: argv_3557 of the symbol to argv_646.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ argv_4536 : argv_1061 if operation was succesful,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_646 a new symbol associated argv_5011
// @@ the plugin whose argv_4860 is given by the '_plugin_type' parameter.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_869::argv_660 (argv_4883 _plugin_type, argv_876 _symbol_name) {
	argv_4536 argv_2072 = argv_1061;
	if (argv_2349 == NULL) {
		argv_2072 = argv_1057;
	}
	else if (_plugin_type >= argv_3928) {
		argv_2072 = argv_1058;	
	}
	else { // parameters are OK
		argv_2072 = argv_2349[_plugin_type].argv_660 (_symbol_name);
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_869		
// @@
// @@ FUNCTION		:	argv_659		
// @@
// @@ INPUT			:
// @@ _plugin_type: argv_4883: the plugin argv_4860 concerned.
// @@
// @@ _symbol_name: argv_876: argv_3557 of the symbol whose solved
// @@   instance is to be added.
// @@
// @@ OUTPUT		:
// @@
// @@ IO			:	
// @@ _prev_iter: argv_2338&: the cache iterator to provide if 
// @@    performance is to be improved.
// @@	
// @@ RETURN VALUE	:
// @@ argv_4536 : argv_1061 if operation was succesful,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_646 the instance of the symbol
// @@ whose argv_3557 is given as the '_symbol_name' parameter, 
// @@ pertaining to the plugin argv_4860 '_plugin_type', the instance
// @@ argv_665 being given by the '_resolved_symbol' parameter.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_869::argv_659 (argv_2338& _prev_iter, argv_4883 _plugin_type, argv_876 _symbol_name, argv_2338 _resolved_symbol) {
	argv_4536 argv_2072 = argv_1061;
	if (argv_2349 == NULL) {
		argv_2072 = argv_1057;
	}
	else if (_plugin_type >= argv_3928) {
		argv_2072 = argv_1058;	
	}
	else { // parameters are OK
		argv_2072 = argv_2349[_plugin_type].argv_659 (_prev_iter, _symbol_name, _resolved_symbol);
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1424
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
