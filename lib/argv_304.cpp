#include "../LIB/argv_363.hpp"

void argv_1124::set (argv_4883 _type, argv_4883 _target, argv_876 _symbol_name, argv_2338 _symbol_addr) {
	argv_4860			= _type;
	argv_4761		= _target;
	argv_4655		= _symbol_name;
	argv_4646	= _symbol_addr;
}

// --------------------------------
argv_1123::argv_1123 () {
	reset ();
}

void argv_1123::reset () {
	argv_2361			= 0;	
	argv_2343		= false;
	argv_2365.clear ();
	argv_2341			= argv_2365.begin ();
}

void argv_1123::init (argv_4883 _plugin_type, bool _duplicate_allowed) {
	argv_2361			= _plugin_type;
	argv_2343		= _duplicate_allowed;
}

bool argv_1123::argv_661 (argv_876 _symbol) {
	bool bret = true;
	map<string, bool>::iterator argv_2099;
	argv_2099 = argv_2365.find (_symbol);
	if (argv_2099 != argv_2365.end()) {
		bret = false;
	}
	else {
		argv_2365[_symbol] = true;	
	}
	return (bret);
}	

void argv_1123::argv_1791 (argv_4883& _plugin_type, bool& _duplicate_allowed) {
	_plugin_type			= argv_2361;
	_duplicate_allowed		= argv_2343;
}	

bool argv_1123::argv_1765 (string& _symbol) {
	bool bret = true;
	argv_2341 = argv_2365.begin ();
	if (argv_2341 == argv_2365.end()) {
		bret = false;
	}
	else {
		_symbol = argv_2341->first;
	}
	return (bret);
}

bool argv_1123::argv_1783 (string& _symbol) {
	bool bret = true;
	++argv_2341;
	if (argv_2341 == argv_2365.end()) {
		bret = false;
	}
	else {
		_symbol = argv_2341->first;
	}
	return (bret);
}
//-------------------------------------
argv_1125::argv_1125 () {
	reset ();
}

void argv_1125::reset () {
	argv_2356.clear ();
	argv_2355.clear ();
	argv_2348			= argv_2355.end ();
}

// in this case, the target argv_4860 is not relevant, and we only use the argv_4860
// to differenciate.
argv_4536 argv_1125::argv_658 (argv_891 * _glob_data_ptr, argv_4883 _type, argv_4883 _target, argv_876 _symbol_name, argv_2338 _symbol_addr) {
	argv_4536 argv_2072 = argv_4404;
	// create a new entry
	argv_1124 entry;
	entry.set (_type, _target, _symbol_name, _symbol_addr);
	map<argv_4883, map<string, argv_1124> >::iterator iter_local_out;
	iter_local_out = argv_2356.find (_type); // indexed by argv_4860
	if (iter_local_out == argv_2356.end()) { // this plugin argv_4860 has no symbol yet
		map<string, argv_1124> local_map;
		local_map[_symbol_name] = entry;
		argv_2356[_type] = local_map;
	}
	else { // this plugin argv_4860 has already some symbols defined
		map<string, argv_1124>::iterator iter_local_in;
		iter_local_in = iter_local_out->second.find (_symbol_name);
		if (iter_local_in != iter_local_out->second.end()) { // duplicate found
			argv_2072 = argv_4398;
		}
		else { // ok to argv_646 this symbol for this argv_4860
			iter_local_out->second[_symbol_name] = entry;
		}
	}
	return (argv_2072);
}

argv_4536 argv_1125::argv_657 (argv_891 * _glob_data_ptr, argv_4883 _type, argv_4883 _target, argv_876 _symbol_name, argv_2338 _symbol_addr) {
	argv_4536 argv_2072 = argv_4404;
#if defined (DEBUG_KERNEL)
	char argv_4846[MAX_PATH];
#endif // #if defined (DEBUG_KERNEL)
	// create a new entry
	argv_1124 entry;
	entry.set (_type, _target, _symbol_name, _symbol_addr);
	map<argv_4883, map<string, argv_1124> >::iterator iter_local_out;
	iter_local_out = argv_2355.find (_target); // indexed by target
	if (iter_local_out == argv_2355.end()) { // this target argv_4860 has no symbol yet
#if defined (DEBUG_KERNEL)
		argv_4569 (argv_4846, MAX_PATH, "[new_target] argv_657: argv_4655:%s, argv_4860:%d, argv_4761:%d, argv_4646=0x%X", _symbol_name, _type, _target, _symbol_addr);
		argv_4846[MAX_PATH - 1] = '\0';
		_glob_data_ptr->argv_2327.argv_2323 (argv_1191, argv_4846);
#endif // #if defined (DEBUG_KERNEL)

		map<string, argv_1124> local_map;
		local_map[_symbol_name] = entry;
		argv_2355[_target] = local_map;
	}
	else { // this target argv_4860 has already some symbols defined
		map<string, argv_1124>::iterator iter_local_in;
		iter_local_in = iter_local_out->second.find (_symbol_name);
		if (iter_local_in != iter_local_out->second.end()) { // duplicate found
			argv_2072 = argv_4398;
		}
		else { // ok to argv_646 this symbol for this target argv_4860
			iter_local_out->second[_symbol_name] = entry;
#if defined (DEBUG_KERNEL)
			argv_4569 (argv_4846, MAX_PATH, "[existing target] argv_657: argv_4655:%s, argv_4860:%d, argv_4761:%d, argv_4646=0x%X", _symbol_name, _type, _target, _symbol_addr);
			argv_4846[MAX_PATH - 1] = '\0';
			_glob_data_ptr->argv_2327.argv_2323 (argv_1191, argv_4846);
#endif // #if defined (DEBUG_KERNEL)
		}
	}
	return (argv_2072);
}

// - single symbols are indexed by argv_4860
// - multiple symbols are indexed by target
argv_4536 argv_1125::argv_656 (argv_891 * _glob_data_ptr, argv_4883 _type, argv_4883 _target, argv_876 _symbol_name, argv_2338 _symbol_addr, bool _duplicate_allowed) {
	argv_4536 argv_2072 = argv_4404;
	if ((_symbol_name == NULL) || (_symbol_addr == NULL) || (strlen(_symbol_name) == 0)) {
		argv_2072 = argv_4401;
	}
	else { // parameters are correct
		
		if (_duplicate_allowed == false) {
			argv_2072 = argv_658 (_glob_data_ptr, _type, _target, _symbol_name, _symbol_addr);
		}
		else {
			argv_2072 = argv_657 (_glob_data_ptr, _type, _target, _symbol_name, _symbol_addr);
		}
	}
	return (argv_2072);	
}

// the internal iterator is changed, thus we don't need any parameter
argv_4536 argv_1125::argv_2558 () {
	argv_4536 argv_2072	= argv_4404;
	argv_2348	= argv_2355.begin ();
	if (argv_2348 == argv_2355.end()) {
		argv_2072 = argv_4399;	
	}
	return (argv_2072);
}

// the internal iterator is changed, thus we don't need any parameter
argv_4536 argv_1125::argv_2559 () {
	argv_4536 argv_2072 = argv_4404;
	++argv_2348;
	if (argv_2348 == argv_2355.end()) {
		argv_2072 = argv_4399;	
	}
	return (argv_2072);
}

// we just ask for the argv_3623 resolved symbol of the argv_1148 group until exhaustion
// of the argv_1148 group, then we ask for the 
argv_4536 argv_1125::argv_1763 (argv_1124& _entry) {
	argv_4536 argv_2072 = argv_4404;
	argv_2347 = argv_2348->second.begin ();
	if (argv_2347 == argv_2348->second.end()) {
		argv_2072 = argv_4399;	
	}
	else {
		_entry.argv_4646	= argv_2347->second.argv_4646;
		_entry.argv_4655		= argv_2347->second.argv_4655;
		_entry.argv_4860				= argv_2347->second.argv_4860;
		_entry.argv_4761		= argv_2347->second.argv_4761;
	}
	return (argv_2072);
}

argv_4536 argv_1125::argv_1781 (argv_1124& _entry) {
	argv_4536 argv_2072 = argv_4404;
	++argv_2347;
	if (argv_2347 == argv_2348->second.end()) {
		argv_2072 = argv_4399;	
	}
	else {
		_entry.argv_4646	= argv_2347->second.argv_4646;
		_entry.argv_4655		= argv_2347->second.argv_4655;
		_entry.argv_4860				= argv_2347->second.argv_4860;
		_entry.argv_4761		= argv_2347->second.argv_4761;
	}
	return (argv_2072);
}

argv_4536 argv_1125::argv_2332 (argv_4883 _type, argv_876 _symbol_name, argv_2338& _symbol_addr) {
	argv_4536 argv_2072 = argv_4404;
	map<argv_4883, map<string, argv_1124> >::iterator iter_local_out;
	iter_local_out = argv_2356.find (_type);
	if (iter_local_out == argv_2356.end()) {
		argv_2072 = argv_4403;
	}
	else { // symbol argv_4860 exists
		map<string, argv_1124>::iterator iter_local_in;
		iter_local_in = iter_local_out->second.find (_symbol_name);
		if (iter_local_in == iter_local_out->second.end()) {
			argv_2072 = argv_4402;
		}
		else { // found the argv_665 of the symbol
			_symbol_addr = iter_local_in->second.argv_4646;
		}
	}
	return (argv_2072);
}

//-------------------------------------
/*
argv_1125::argv_1125 () {
	reset ();
}

void argv_1125::reset () {
	m_v_resolved_entry.clear ();
	m_v_by_type.clear ();
	m_v_by_target.clear ();
	argv_2356.clear ();

	m_iter_by_type		= m_v_by_type.begin ();
	m_iter_by_target	= m_v_by_target.begin ();
}

argv_4536 argv_1125::get_first_group_by_type (vector<argv_4883>& _v_result) {
	argv_4536 argv_2072 = argv_4404;
	_v_result.clear ();
	m_iter_by_type = m_v_by_type.begin();
	if (m_iter_by_type == m_v_by_type.end()) {
		argv_2072 = argv_4399;
	}
	else {
		_v_result = m_iter_by_type->second;		
	}
	return (argv_2072);
}

argv_4536 argv_1125::get_next_group_by_type (vector<argv_4883>& _v_result) {
	argv_4536 argv_2072 = argv_4404;
	_v_result.clear ();
	++m_iter_by_type;
	if (m_iter_by_type == m_v_by_type.end()) {
		argv_2072 = argv_4399;
	}
	else {
		_v_result = m_iter_by_type->second;		
	}
	return (argv_2072);
}

argv_4536 argv_1125::get_first_group_by_target (vector<argv_4883>& _v_result) {
	argv_4536 argv_2072 = argv_4404;
	_v_result.clear ();
	m_iter_by_target = m_v_by_target.begin();
	if (m_iter_by_target == m_v_by_target.end()) {
		argv_2072 = argv_4399;
	}
	else {
		_v_result = m_iter_by_target->second;		
	}
	return (argv_2072);
}

argv_4536 argv_1125::get_next_group_by_target (vector<argv_4883>& _v_result) {
	argv_4536 argv_2072 = argv_4404;
	_v_result.clear ();
	++m_iter_by_target;
	if (m_iter_by_target == m_v_by_target.end()) {
		argv_2072 = argv_4399;
	}
	else {
		_v_result = m_iter_by_target->second;		
	}
	return (argv_2072);
}

argv_4536 argv_1125::lookup_one_grouped_symbol (argv_4883 _index, argv_4883& _type, argv_4883& _target, string& _symbol_name, argv_2338& _symbol_addr) {
	argv_4536 argv_2072 = argv_4404;
	argv_4883 argv_3605 = m_v_resolved_entry.size ();
	if (_index >= argv_3605) {
		argv_2072 = argv_4400;
	}
	else { // index parameter is correct
		_type			= m_v_resolved_entry[_index].argv_4860;
		_target			= m_v_resolved_entry[_index].argv_4761;
		_symbol_name	= m_v_resolved_entry[_index].argv_4655;
		_symbol_addr	= m_v_resolved_entry[_index].argv_4646;
	}
	return (argv_2072);
}

argv_4536 argv_1125::argv_2332 (argv_4883 _type, argv_876 _symbol_name, argv_2338& _symbol_addr) {
	argv_4536 argv_2072 = argv_4404;
	map<argv_4883, map<string, argv_1124> >::iterator iter_local_out;
	iter_local_out = argv_2356.find (_type);
	if (iter_local_out == argv_2356.end()) {
		argv_2072 = argv_4403;
	}
	else { // symbol argv_4860 exists
		map<string, argv_1124>::iterator iter_local_in;
		iter_local_in = iter_local_out->second.find (_symbol_name);
		if (iter_local_in == iter_local_out->second.end()) {
			argv_2072 = argv_4402;
		}
		else { // found the argv_665 of the symbol
			_symbol_addr = iter_local_in->second.argv_4646;
		}
	}
	return (argv_2072);
}

// - single symbols are indexed by argv_4860
// - multiple symbols are indexed by target
argv_4536 argv_1125::argv_656 (argv_4883 _type, argv_4883 _target, argv_876 _symbol_name, argv_2338 _symbol_addr, bool _duplicate_allowed) {
	argv_4536 argv_2072 = argv_4404;
	if ((_symbol_name == NULL) || (_symbol_addr == NULL) || (strlen(_symbol_name) == 0)) {
		argv_2072 = argv_4401;
	}
	else { // parameters are correct
		
		if (_duplicate_allowed == false) {
			argv_2072 = argv_658 (_type, _target, _symbol_name, _symbol_addr);
		}
		else {
			argv_2072 = argv_657 (_type, _target, _symbol_name, _symbol_addr);
		}
	}
	return (argv_2072);	
}

// in this case, the target argv_4860 is not relevant, and we only use the argv_4860
// to differenciate.
argv_4536 argv_1125::argv_658 (argv_4883 _type, argv_4883 _target, argv_876 _symbol_name, argv_2338 _symbol_addr) {
	argv_4536 argv_2072 = argv_4404;
	// create a new entry
	argv_1124 entry;
	entry.set (_type, _target, _symbol_name, _symbol_addr);
	map<argv_4883, map<string, argv_1124> >::iterator iter_local_out;
	iter_local_out = argv_2356.find (_type);
	if (iter_local_out == argv_2356.end()) { // this plugin argv_4860 has no symbol yet
		map<string, argv_1124> local_map;
		local_map[_symbol_name] = entry;
		argv_2356[_type] = local_map;
	}
	else { // this plugin argv_4860 has already some symbols defined
		map<string, argv_1124>::iterator iter_local_in;
		iter_local_in = iter_local_out->second.find (_symbol_name);
		if (iter_local_in != iter_local_out->second.end()) { // duplicate found
			argv_2072 = argv_4398;
		}
		else { // ok to argv_646 this symbol for this argv_4860
			iter_local_out->second[_symbol_name] = entry;
		}
	}
	return (argv_2072);
}

argv_4536 argv_1125::argv_657 (argv_4883 _type, argv_4883 _target, argv_876 _symbol_name, argv_2338 _symbol_addr) {
	argv_4536 argv_2072 = argv_4404;
	// create a new entry
	argv_1124 entry;
	entry.set (_type, _target, _symbol_name, _symbol_addr);
	// argv_646 this new entry to the vector that contains ALL MULTIPLE resolved symbols
	m_v_resolved_entry.push_back (entry);
	argv_4883 new_index = m_v_resolved_entry.size () - 1;

	// argv_646 this entry to the groups by argv_4860
	map<argv_4883, vector<argv_4883> >::iterator iter_local_type;
	iter_local_type = m_v_by_type.find (_type); 
	if (iter_local_type == m_v_by_type.end()) {
		vector<argv_4883> v_tmp;
		v_tmp.push_back (new_index);
		m_v_by_type[_type] = v_tmp;
	}
	else { // this argv_4860's set already exists => just argv_646 to it
		iter_local_type->second.push_back (new_index);	
	}

	// argv_646 this entry to the groups by target
	map<argv_4883, vector<argv_4883> >::iterator iter_local_target;
	iter_local_target = m_v_by_target.find (_target);
	if (iter_local_target == m_v_by_target.end()) {
		vector<argv_4883> v_tmp;
		v_tmp.push_back (new_index);
		m_v_by_target[_target] = v_tmp;
	}
	else { // this target's set already exists => just argv_646 to it
		iter_local_target->second.push_back (new_index);
	}
	return (argv_2072);
}
*/