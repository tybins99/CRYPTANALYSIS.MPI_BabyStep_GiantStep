// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_286.cpp
// @@ 
// @@ DESCRIPTION:
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@




// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_345.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ global variable
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_868 * argv_1033 = NULL;



argv_4536 argv_3621 (argv_864 * _cli_tab, argv_4883 _index, bool& _trigger_write) {
	argv_4536 argv_2072 = argv_1033->argv_3620 (_cli_tab, _index, _trigger_write);
	return (argv_2072);
}

argv_4536 argv_3764 (argv_864 * _cli_tab, argv_4883 _index, vector<argv_4883>& _v_index_2_trigger_write) {
	argv_4536 argv_2072 = argv_1033->argv_3763 (_cli_tab, _index, _v_index_2_trigger_write);
	return (argv_2072);
}

argv_4536 argv_3768 (argv_864 * _cli_tab, argv_4883 _index, bool& _trigger_write) {
	argv_4536 argv_2072 = argv_1033->argv_3767 (_cli_tab, _index, _trigger_write);
	return (argv_2072);
}


argv_4536 argv_2429 (argv_864 * _cli_tab, argv_4883 _index, bool& _trigger_write) {
	argv_4536 argv_2072 = argv_1033->argv_2428 (_cli_tab, _index, _trigger_write);
	return (argv_2072);
}

argv_868::argv_868 () {
	argv_938 = NULL;
	reset ();
}

void argv_868::argv_1254 (argv_4536 _success_result, argv_4536 _result, argv_876 _opa) {
	char argv_4846[MAX_PATH];
	if (_result == _success_result) {
#if defined (__DEBUG_COM_MANAGER__)
		argv_4569 (argv_4846, MAX_PATH, "%s...[SUCCESS]", _opa);
		argv_4846[MAX_PATH - 1] = '\0';
		argv_2316->argv_2323 (argv_1191, argv_4846);
#endif // #if defined (__DEBUG_COM_MANAGER__)
	}
	else {
		if (_result == argv_1367) {
			argv_4569 (argv_4846, MAX_PATH, "*** WARNING : %s...[received argv_3690 to argv_4626]", _opa);
			argv_4846[MAX_PATH - 1] = '\0';
			argv_2316->argv_2323 (argv_5006, argv_4846);
		}
		else {
			string serror = argv_1344 (_result);
			argv_4569 (argv_4846, MAX_PATH, "+++ ERROR: %s...[FAILED] - argv_1343=%s", _opa, serror.c_str());
			argv_4846[MAX_PATH - 1] = '\0';
			argv_2316->argv_2323 (argv_1346, argv_4846);
		}
	}
}


void argv_868::reset () {
	argv_1372.reset ();
	argv_939						= 0;
	argv_2316								= NULL;

	argv_723					= NULL;
	argv_738				= NULL;
	argv_4579					= NULL;

	argv_1373.argv_1706	= argv_3621;
	argv_1373.argv_1708	= argv_3764;
	argv_1373.argv_1709		= argv_3768;
	argv_1373.argv_1651		= argv_2429;

	index_inner_archive_creator			= -1;	
	index_inner_archive_extractor		= -1;	
	index_inner_spyware_manager			= -1;	
	index_inner_scan_gateway			= -1;
	index_inner_update					= -1;
	index_inner_admin					= -1;

	if (argv_938 != NULL) {
		delete [] argv_938;
		argv_938 = NULL;
	}
}

// save the index of the concerned client to avoid lookup at runtime.
argv_4536 argv_868::argv_4512 (argv_864 * _cli_tab, argv_4536 _index, argv_4536& _cache, argv_876 _name) {
	argv_4536 argv_2072 = argv_1037;
	if (_cache >= 0) {
		char argv_4846[MAX_PATH];
		argv_4569 (argv_4846, MAX_PATH, "+++ ERROR: argv_868::argv_4512 - for inner client '%s': illegal when connection established (new_index=%d,previous_index=%d)", _name, _index, _cache);
		argv_4846[MAX_PATH - 1] = '\0';
		argv_2316->argv_2323 (argv_1346, argv_4846);
		argv_2072 = argv_1028;
	}
	else { // the cache is virgin => ok to set it
		_cache = _index;
	}
	return (argv_2072);
}

argv_4536 argv_868::argv_3620 (argv_864 * _cli_tab, argv_4883 _index, bool& _trigger_write) {
	argv_4536 argv_2072 = argv_1037;
#if defined (__DEBUG_COM_MANAGER__)
	char argv_4846[MAX_PATH];
	argv_4569 (argv_4846, MAX_PATH, "argv_868::argv_3620 - new client at box %u (sockfd=%u)", _index, _cli_tab[_index].argv_4570);
	argv_4846[MAX_PATH - 1] = '\0';
	argv_2316->argv_2323 (argv_3634, argv_4846);
#endif // #if defined (__DEBUG_COM_MANAGER__)

	// update the cache if necessary
	if (_cli_tab[_index].argv_947 == argv_952) {
		argv_2072 = argv_4512 (_cli_tab, _index, index_inner_archive_extractor, "argv_952");
	}
	else if (_cli_tab[_index].argv_947 == argv_951) {
		argv_2072 = argv_4512 (_cli_tab, _index, index_inner_archive_creator, "argv_951");
	}
	else if (_cli_tab[_index].argv_947 == argv_954) {
		argv_2072 = argv_4512 (_cli_tab, _index, index_inner_spyware_manager, "argv_954");
	}
	else if (_cli_tab[_index].argv_947 == argv_953) {
		argv_2072 = argv_4512 (_cli_tab, _index, index_inner_scan_gateway, "argv_953");
	}
	else if (_cli_tab[_index].argv_947 == argv_950) {
		argv_2072 = argv_4512 (_cli_tab, _index, index_inner_admin, "argv_950");
	} 
	else if (_cli_tab[_index].argv_947 == argv_955) {
		argv_2072 = argv_4512 (_cli_tab, _index, index_inner_update, "argv_955");
	}

	if (argv_2072 == argv_1037) { // remap error argv_976
		argv_2072 = argv_1368;
	}
	return (argv_2072);
}

argv_4536 argv_868::argv_2428 (argv_864 * _cli_tab, argv_4883 _index, bool& _trigger_write) {
	argv_4536 argv_2072 = argv_1037;
	if (argv_2072 == argv_1037) { // remap argv_1343 for the caller
		argv_2072 = argv_1368;
	}
	return (argv_2072);
}

argv_4536 argv_868::argv_3767 (argv_864 * _cli_tab, argv_4883 _index, bool& _trigger_write) {
	argv_4536 argv_2072 = argv_1037;
	if (argv_2072 == argv_1037) { // remap argv_1343 for the caller
		argv_2072 = argv_1368;
	}
	return (argv_2072);
}

bool argv_868::argv_944 (argv_864 * _cli_tab, argv_4883 _index) {
	bool bret = false;
	if ((_cli_tab[_index].argv_947 == argv_957) ||
		(_cli_tab[_index].argv_947 == argv_958) ||
		(_cli_tab[_index].argv_947 == argv_949)) {
		bret = true;
	}
	return (bret);
}

argv_4536 argv_868::argv_1208 (argv_864 * _cli_tab, argv_4883 _index, argv_4881& _outer_type) {
	argv_4536 argv_2072 = argv_1037;
	switch (_cli_tab[_index].argv_947) {
		case argv_957: 
			_outer_type = argv_3794;
			break;

		case argv_958:
			_outer_type = argv_3795;
			break;

		case argv_949:
			_outer_type = argv_3791;
			break;

		default:
			argv_2072 = argv_1032;
	}
	return (argv_2072);	
}

argv_4536 argv_868::argv_1507 (argv_864 * _cli_tab, argv_4883 _src_index, argv_4883 _dest_index, vector<argv_4883>& _v_index_2_trigger_write) {
	argv_4536 argv_2072 = argv_1037;
	argv_1106 * argv_4498 = new (std::nothrow) argv_1106;
	if (argv_4498 == NULL) { // allocate a new packet for the destination's argv_4490 argv_4329
		argv_2316->argv_2323 (argv_1346, "+++ ERROR: argv_868::argv_1507 - memory allocation failed !");
		argv_2072 = argv_1031;
	}
	else {
		argv_4881 outer_type;
		argv_2072 = argv_1208 (_cli_tab, _src_index, outer_type);
		if (argv_2072 != argv_1037) {
			string serror = argv_1344 (argv_2072);	
			argv_2316->argv_2323 (argv_1346, "+++ ERROR: argv_868::argv_1507 - argv_1208 failed ! - argv_1343 = ", serror.c_str());
		}
		else { 
#if defined (__DEBUG_COM_MANAGER__)
			string client_type_str = argv_948 (_cli_tab[_src_index].argv_947);
			string outer_type_str = argv_4967 (outer_type);
			char argv_4846[MAX_PATH];
			argv_4569 (argv_4846, MAX_PATH, "received a naked packet from client argv_4860 %s => outer packet argv_4860 will be %s", client_type_str.c_str(), outer_type_str.c_str ());
			argv_4846[MAX_PATH - 1] = '\0';
			argv_2316->argv_2323 (argv_1191, argv_4846);
			argv_4569 (argv_4846, MAX_PATH, "forging a rich packet [src_index=%d|src_gen=%u|dest_index=%d|dest_gen=%u]", _src_index, _cli_tab[_src_index].argv_1747, _dest_index, _cli_tab[_dest_index].argv_1747);
			argv_4846[MAX_PATH - 1] = '\0';
			argv_2316->argv_2323 (argv_1191, argv_4846);
#endif // #if defined (__DEBUG_COM_MANAGER__)
			argv_2072 = _cli_tab[_src_index].argv_3762.argv_1493 (argv_4498, outer_type, _src_index, _cli_tab[_src_index].argv_1747, _dest_index, _cli_tab[_dest_index].argv_1747);
			if (argv_2072 != argv_3778) {
				string serror = argv_1344 (argv_2072);	
				argv_2316->argv_2323 (argv_1346, "+++ ERROR: argv_868::argv_1507 - argv_1493 failed ! - argv_1343 = ", serror.c_str());
			}
			else { // argv_646 the outer packet to the destination argv_4490 argv_4329
				argv_2072 = _cli_tab[_dest_index].push_back (argv_4498); 
				if (argv_2072 != argv_943) { // the addition to the argv_4490 argv_4329 failed
					string serror = argv_1344 (argv_2072);
					argv_2316->argv_2323 (argv_1346, "+++ ERROR: argv_868::argv_1507 - push_back failed ! - errno = ", serror.c_str());
				}
				else { // schedule a write event for the target client 
					_v_index_2_trigger_write.push_back (_dest_index);
				}
			}
		}
	}
	return (argv_2072);
}

argv_4536 argv_868::argv_1503 (argv_864 * _cli_tab, argv_4883 _src_index, vector<argv_4883>& _v_index_2_trigger_write) {
	argv_4536 argv_2072 = argv_1037;

	// check whether the argv_1148 operation should be stopped or not
	argv_4881 packet_type;
	_cli_tab[_src_index].argv_3762.argv_1795 (packet_type);
	argv_905 (_cli_tab, _src_index, index_inner_archive_creator, packet_type);

	// the packet is forwarded anyway
#if defined (__DEBUG_COM_MANAGER__)
	argv_2316->argv_2323 (argv_1191, "forwarding packet to archive creator");
#endif // #if defined (__DEBUG_COM_MANAGER__)
	argv_2072 = argv_1507 (_cli_tab, _src_index, index_inner_archive_creator, _v_index_2_trigger_write);
	return (argv_2072);
}

argv_4536 argv_868::argv_1504 (argv_864 * _cli_tab, argv_4883 _src_index, vector<argv_4883>& _v_index_2_trigger_write) {
	argv_4536 argv_2072 = argv_1037;

	// check whether the argv_1148 operation should be stopped or not
	argv_4881 packet_type;
	_cli_tab[_src_index].argv_3762.argv_1795 (packet_type);
	argv_905 (_cli_tab, _src_index, index_inner_archive_extractor, packet_type);

#if defined (__DEBUG_COM_MANAGER__)
	argv_2316->argv_2323 (argv_1191, "forwarding packet to archive extractor");
#endif // #if defined (__DEBUG_COM_MANAGER__)

	argv_2072 = argv_1507 (_cli_tab, _src_index, index_inner_archive_extractor, _v_index_2_trigger_write);
	return (argv_2072);
}

argv_4536 argv_868::argv_1506 (argv_864 * _cli_tab, argv_4883 _src_index, vector<argv_4883>& _v_index_2_trigger_write) {
	argv_4536 argv_2072 = argv_1037;

	// check whether the argv_1148 operation should be stopped or not
	argv_4881 packet_type;
	_cli_tab[_src_index].argv_3762.argv_1795 (packet_type);
	argv_905 (_cli_tab, _src_index, index_inner_spyware_manager, packet_type);

#if defined (__DEBUG_COM_MANAGER__)
	argv_2316->argv_2323 (argv_1191, "forwarding packet to spyware manager");
#endif // #if defined (__DEBUG_COM_MANAGER__)
	argv_2072 = argv_1507 (_cli_tab, _src_index, index_inner_spyware_manager, _v_index_2_trigger_write);
	return (argv_2072);
}

argv_4536 argv_868::argv_1505 (argv_864 * _cli_tab, argv_4883 _src_index, vector<argv_4883>& _v_index_2_trigger_write) {
	argv_4536 argv_2072 = argv_1037;
#if defined (__DEBUG_COM_MANAGER__)
	argv_2316->argv_2323 (argv_1191, "forwarding packet to scan gateway");
#endif // #if defined (__DEBUG_COM_MANAGER__)
	argv_2072 = argv_1507 (_cli_tab, _src_index, index_inner_scan_gateway, _v_index_2_trigger_write);
	return (argv_2072);
}

bool argv_868::argv_2082 (argv_4881 _payload_type) {
	bool bret = false;
	if ((_payload_type == argv_3785) ||
		(_payload_type == argv_3783)) {
		bret = true;
	}
	return (bret);
}

bool argv_868::argv_2083 (argv_4881 _payload_type) {
	bool bret = false;
	if ((_payload_type == argv_3788) ||
		(_payload_type == argv_3784)) {
		bret = true;
	}
	return (bret);
}

bool argv_868::argv_2085 (argv_4881 _payload_type) {
	bool bret = false;
	if ((_payload_type == argv_3812) ||
		(_payload_type == argv_3814)) {
		bret = true;
	}
	return (bret);
}

bool argv_868::argv_2084 (argv_4881 _payload_type) {
	bool bret = false;
	if ((_payload_type == argv_3805) ||
		(_payload_type == argv_3801) ||
		(_payload_type == argv_3807) ||
		(_payload_type == argv_3803)) {
		bret = true;
	}
	return (bret);
}

// argv_5011 a naked packet, we have to use the packet argv_4860 for routing
// but for rich packet, we don't need to use the packet argv_4860, instead
// we use the src/dest information, and the destination client's argv_4860
// to determine which shape to choose for the destination packet.
argv_4536 argv_868::argv_4271 (argv_864 * _cli_tab, argv_4883 _src_index, vector<argv_4883>& _v_index_2_trigger_write) {
	argv_4536 argv_2072 = argv_1037;

	// argv_1397 the packet argv_4860 to determine where to route it
	argv_4881 argv_4966 = argv_3817;
	_cli_tab[_src_index].argv_3762.argv_1795 (argv_4966);
#if defined (__DEBUG_COM_MANAGER__)
	char argv_4846[MAX_PATH];
	string user_type_str = argv_4967 (argv_4966);
	argv_4569 (argv_4846, MAX_PATH, "received naked packet argv_4860 '%s'", user_type_str.c_str());
	argv_4846[MAX_PATH - 1] = '\0';
	argv_2316->argv_2323 (argv_1191, argv_4846);
#endif // #if defined (__DEBUG_COM_MANAGER__)

	if (argv_2082 (argv_4966) == true) {
		argv_2072 = argv_1503 (_cli_tab, _src_index, _v_index_2_trigger_write);
	}
	else if (argv_2083 (argv_4966) == true) {
		argv_2072 = argv_1504 (_cli_tab, _src_index, _v_index_2_trigger_write);
	}
	else if (argv_2085 (argv_4966) == true) {
		argv_2072 = argv_1506 (_cli_tab, _src_index, _v_index_2_trigger_write);
	}
	else if (argv_2084 (argv_4966) == true) {
		argv_2072 = argv_1505 (_cli_tab, _src_index, _v_index_2_trigger_write);
	}
	else { // unhandled naked packet received
		argv_2316->argv_2323 (argv_1346, "+++ ERROR: argv_868::argv_4271 - received unhandled packet : argv_4860 was : ", (argv_4883) argv_4966);
		argv_2072 = argv_1039;
	}

	if (argv_2072 == argv_943) { // remap error argv_976
		argv_2072 = argv_1037;
	}
	return (argv_2072); 
}

argv_4536 argv_868::argv_914 (argv_864 * _cli_tab, argv_4883 _src_index, argv_4883 _src_generation, argv_4883 _dest_index, argv_4883 _dest_generation) {
	argv_4536 argv_2072 = argv_1037;
	if (_src_index >= argv_939) {
		argv_2072 = argv_1036;
	}
	else if (_dest_index >= argv_939) {
		argv_2072 = argv_1027;
	}
	else if (_cli_tab[_src_index].argv_4995 == true) {
		argv_2072 = argv_1034;
	}
	else if (_cli_tab[_dest_index].argv_4995 == true) {
		argv_2072 = argv_1025;
	}
	else if (_src_generation != _cli_tab[_src_index].argv_1747) {
		argv_2072 = argv_1035;	
	}
	else if (_dest_generation != _cli_tab[_dest_index].argv_1747) {
		argv_2072 = argv_1026;
	}
	return (argv_2072);
}

argv_4536 argv_868::argv_1402 (argv_864 * _cli_tab, argv_4883 _index, argv_4881& _outer_type, argv_4883& _src_index, argv_4883& _src_generation, argv_4883& _dest_index, argv_4883& _dest_generation, argv_4881& _payload_type) {
	argv_4536 argv_2072 = argv_1037;

	// read the outer packet argv_4860.
	_cli_tab[_index].argv_3762.argv_1795 (_outer_type);

	// argv_1397 the source index
	argv_2072 = _cli_tab[_index].argv_3762.argv_1397 (_src_index);
	if (argv_2072 != argv_3778) {	
		string serror = argv_1344 (argv_2072);
		argv_2316->argv_2323 (argv_1346, "+++ ERROR: argv_868::argv_1402 - field 1 extraction failed ! - argv_1343 = ", serror.c_str());	
	}
	else { // argv_1397 the source argv_1747
		argv_2072 = _cli_tab[_index].argv_3762.argv_1397 (_src_generation);
		if (argv_2072 != argv_3778) {	
			string serror = argv_1344 (argv_2072);
			argv_2316->argv_2323 (argv_1346, "+++ ERROR: argv_868::argv_1402 - field 2 extraction failed ! - argv_1343 = ", serror.c_str());	
		}
		else { // argv_1397 the dest index
			argv_2072 = _cli_tab[_index].argv_3762.argv_1397 (_dest_index);
			if (argv_2072 != argv_3778) {	
				string serror = argv_1344 (argv_2072);
				argv_2316->argv_2323 (argv_1346, "+++ ERROR: argv_868::argv_1402 - field 3 extraction failed ! - argv_1343 = ", serror.c_str());
			}
			else { // argv_1397 the dest argv_1747
				argv_2072 = _cli_tab[_index].argv_3762.argv_1397 (_dest_generation);
				if (argv_2072 != argv_3778) {	
					string serror = argv_1344 (argv_2072);
					argv_2316->argv_2323 (argv_1346, "+++ ERROR: argv_868::argv_1402 - field 3 extraction failed ! - argv_1343 = ", serror.c_str());
				}
				else { // argv_1397 the payload argv_665
					argv_2072 = _cli_tab[_index].argv_3762.argv_1397 (_payload_type);
					if (argv_2072 != argv_3778) {	
						string serror = argv_1344 (argv_2072);
						argv_2316->argv_2323 (argv_1346, "+++ ERROR: argv_868::argv_1402 - field 4 extraction failed ! - argv_1343 = ", serror.c_str());
					}
				}
			}
		}
	}

	if (argv_2072 == argv_3778) { // remap error argv_976
#if defined (__DEBUG_COM_MANAGER__)
		string outer_type_str	= argv_4967 (_outer_type);
		string payload_type_str	= argv_4967 (_payload_type);
		char argv_4846[MAX_PATH];
		argv_4569 (argv_4846, MAX_PATH, "parsed rich packet : [outer_type=%s|src_index=%u|src_gen:%u|dest_index=%u|dest_gen=%u|payload_type=%s]", outer_type_str.c_str(), _src_index, _src_generation, _dest_index, _dest_generation, payload_type_str.c_str());
		argv_4846[MAX_PATH - 1] = '\0';
		argv_2316->argv_2323 (argv_1191, argv_4846);
#endif // #if defined (__DEBUG_COM_MANAGER__)
		argv_2072 = argv_1037;
	}
	return (argv_2072);
}

argv_4536 argv_868::argv_1508 (argv_864 * _cli_tab, argv_4883 _src_index, argv_4883 _dest_index, argv_4881 _payload_type, vector<argv_4883>& _v_index_2_trigger_write) {
	argv_4536 argv_2072 = argv_1037;
#if defined (__DEBUG_COM_MANAGER__)
	char argv_4846[MAX_PATH];
	string payload_type_str = argv_4967 (_payload_type);
	string src_cli_type     = argv_948 (_cli_tab[_src_index].argv_947);
	string dest_cli_type    = argv_948 (_cli_tab[_dest_index].argv_947);
	argv_4569 (argv_4846, MAX_PATH, "forwarding rich packet received : from index %d (argv_947=%s) to index %d (argv_947=%s) (payload_type=%s)", _src_index, src_cli_type.c_str(), _dest_index, dest_cli_type.c_str(), payload_type_str.c_str());
	argv_4846[MAX_PATH - 1] = '\0';
	argv_2316->argv_2323 (argv_1191, argv_4846);
#endif // #if defined (__DEBUG_COM_MANAGER__)
	argv_1106 * naked_pck_ptr = new (std::nothrow) argv_1106;
	if (naked_pck_ptr == NULL) {
		argv_2316->argv_2323 (argv_1346, "+++ ERROR: argv_868::argv_1508 - memory allocation failed !");
		argv_2072 = argv_1031;
	}
	else { // argv_965 the payload packet 
		argv_2072 = _cli_tab[_src_index].argv_3762.argv_1495 (naked_pck_ptr, _payload_type);
		if (argv_2072 != argv_3778) {
			string serror = argv_1344 (argv_2072);
			argv_2316->argv_2323 (argv_1346, "+++ ERROR: argv_868::argv_1508 - argv_1495 failed ! - errno = ", serror.c_str());
		}
		else { // argv_646 the naked packet to the destination argv_4490 argv_4329
#if defined (__DEBUG_COM_MANAGER__)
			argv_2316->argv_2323 (argv_1191, "forged naked packet from rich packet");
#endif // #if defined (__DEBUG_COM_MANAGER__)
			argv_2072 = _cli_tab[_dest_index].push_back (naked_pck_ptr); // deallocated by the event loop  
			if (argv_2072 != argv_943) { // the addition to the argv_4490 argv_4329 failed
				string serror = argv_1344 (argv_2072);
				argv_2316->argv_2323 (argv_1346, "+++ ERROR: argv_868::argv_1508 - push_back failed ! - errno = ", serror.c_str());
			}
			else { // schedule a write event for the target client 
				_v_index_2_trigger_write.push_back (_dest_index);
			}
		}
	}

	if (argv_2072 == argv_943) {
		argv_2072 = argv_1037; // remap error argv_976
	}
	return (argv_2072);
}

argv_4536 argv_868::argv_1509 (argv_864 * _cli_tab, argv_4881 _outer_type, argv_4883 _src_index, argv_4883 _dest_index, argv_4881 _payload_type, vector<argv_4883>& _v_index_2_trigger_write, bool _is_broadcast) {
	argv_4536 argv_2072 = argv_1037;
#if defined (__DEBUG_COM_MANAGER__)
	char argv_4846[MAX_PATH];
	string payload_type_str = argv_4967 (_payload_type);
	string outer_type_str	= argv_4967 (_outer_type);
	string is_broadcast_str	= "false";
	if (_is_broadcast == true) {
		is_broadcast_str = "true";		
	}
	argv_4569 (argv_4846, MAX_PATH, "forward rich packet to internal destination : [src_index=%d|_dest_index=%d|outer_type=%s|payload_type=%s|is_broadcast=%s]", _src_index, _dest_index, outer_type_str.c_str(), payload_type_str.c_str(), is_broadcast_str.c_str());
	argv_4846[MAX_PATH - 1] = '\0';
	argv_2316->argv_2323 (argv_1191, argv_4846);
#endif // #if defined (__DEBUG_COM_MANAGER__)

	// trigger an interrupt if necessary
	argv_905 (_cli_tab, _src_index, _dest_index, _payload_type);

	// allocate a new rich packet for the target destination
	argv_1106 * rich_pck_ptr = new (std::nothrow) argv_1106;
	if (rich_pck_ptr == NULL) {
		argv_2316->argv_2323 (argv_1346, "+++ ERROR: argv_868::argv_1509 - memory allocation failed !");
		argv_2072 = argv_1031;
	}
	else { // argv_965 the received rich packet and mute it's argv_4622
		if (_is_broadcast == false) { // src and dest are contained in the packet 
			_cli_tab[_src_index].argv_3762.argv_965 ((*rich_pck_ptr), (argv_4881) argv_3769);
		}
		else { // src,dest must be inserted by hand
			argv_2072 = _cli_tab[_src_index].argv_3762.argv_1494 (rich_pck_ptr, _outer_type, _payload_type, _src_index, _cli_tab[_src_index].argv_1747, _dest_index, _cli_tab[_dest_index].argv_1747);
			if (argv_2072 != argv_3778) {
				argv_1254 (argv_3778, argv_2072, "argv_868::argv_1509 - argv_1494");
			}
			else { // remap error argv_976
				argv_2072 = argv_1037;
			}
		}

		if (argv_2072 == argv_1037) {
			// argv_646 the argv_965 packet to the destination argv_4490 argv_4329
			argv_2072 = _cli_tab[_dest_index].push_back (rich_pck_ptr); // deallocated by the event loop  
			if (argv_2072 != argv_943) { // the addition to the argv_4490 argv_4329 failed
				argv_1254 (argv_943, argv_2072, "argv_868::argv_1509 - push_back");
			}
			else { // schedule a write event for the target client 
				_v_index_2_trigger_write.push_back (_dest_index);
#if defined (__DEBUG_COM_MANAGER__)
				argv_2316->argv_2323 (argv_1191, "rich packet added to argv_4490 argv_4329 of client located at index ", _dest_index);
				string type_str = argv_948 (_cli_tab[_dest_index].argv_947);
				argv_4569 (argv_4846, MAX_PATH, "schedule a write event for client at index %u (argv_947: %s)", _dest_index, type_str.c_str());
				argv_4846[MAX_PATH - 1] = '\0';
				argv_2316->argv_2323 (argv_1191, argv_4846);
#endif // #if defined (__DEBUG_COM_MANAGER__)
			}
		}
	}

	if (argv_2072 == argv_943) {
		argv_2072 = argv_1037;
	}
	return (argv_2072);
}


bool argv_868::argv_2077 (argv_864 * _cli_tab, argv_4883 _src_index) {
	bool bret = false;
	if ((_cli_tab[_src_index].argv_947 == argv_955) ||
		(_cli_tab[_src_index].argv_947 == argv_950)) {
		bret = true;
	}

#if defined (__DEBUG_COM_MANAGER__)
	char argv_4846[MAX_PATH];
	string client_type_str = argv_948 (_cli_tab[_src_index].argv_947);
	
	if (bret == true) {
		argv_4569 (argv_4846, MAX_PATH, "client located at index %u is a broadcast inner client (argv_4860=%s)", _src_index, client_type_str.c_str());
	}
	else {
		argv_4569 (argv_4846, MAX_PATH, "client located at index %u is NOT a broadcast inner client (argv_4860=%s)", _src_index, client_type_str.c_str());
	}
	argv_4846[MAX_PATH - 1] = '\0';
	argv_2316->argv_2323 (argv_1191, argv_4846);
#endif // #if defined (__DEBUG_COM_MANAGER__)
	return (bret);
}

void argv_868::argv_1246 (argv_876 _msg) {
#if defined (__DEBUG_COM_MANAGER__)
	char argv_4846[MAX_PATH];
	argv_2316->argv_2323 (argv_1191, "=== argv_868: inner_cache (%s) ===", _msg);
	argv_4569 (argv_4846, MAX_PATH, "index_inner_archive_creator    = %d", index_inner_archive_creator);    argv_4846[MAX_PATH - 1] = '\0';  argv_2316->argv_2323 (argv_1191, argv_4846);
	argv_4569 (argv_4846, MAX_PATH, "index_inner_archive_extractor  = %d", index_inner_archive_extractor);  argv_4846[MAX_PATH - 1] = '\0';  argv_2316->argv_2323 (argv_1191, argv_4846);
	argv_4569 (argv_4846, MAX_PATH, "index_inner_spyware_manager    = %d", index_inner_spyware_manager);    argv_4846[MAX_PATH - 1] = '\0';  argv_2316->argv_2323 (argv_1191, argv_4846);
	argv_4569 (argv_4846, MAX_PATH, "index_inner_scan_gateway       = %d", index_inner_scan_gateway);       argv_4846[MAX_PATH - 1] = '\0';  argv_2316->argv_2323 (argv_1191, argv_4846);
	argv_4569 (argv_4846, MAX_PATH, "index_inner_admin              = %d", index_inner_admin);              argv_4846[MAX_PATH - 1] = '\0';  argv_2316->argv_2323 (argv_1191, argv_4846);
	argv_4569 (argv_4846, MAX_PATH, "index_inner_update             = %d", index_inner_update);             argv_4846[MAX_PATH - 1] = '\0';  argv_2316->argv_2323 (argv_1191, argv_4846);
#endif // #if defined (__DEBUG_COM_MANAGER__)
}

// BEWARE: there is an exception for the admin part : the admin part is able to
// emit broadcast requests, but we should never forward broadcast requests
// to admin part.
argv_4536 argv_868::argv_824 (argv_864 * _cli_tab, argv_4883 _src_index, argv_4881 _outer_type, argv_4881 _payload_type, vector<argv_4883>& _v_index_2_trigger_write) {
	argv_4536 argv_2072		= argv_1037;
	argv_4536 iret1		= argv_1037;
	argv_4536 iret2		= argv_1037;
	argv_4536 iret3		= argv_1037;
	argv_4536 iret4		= argv_1037;
	argv_4536 iret5		= argv_1037;
	argv_4883 argv_3604	= 0;
	argv_4883 nb_failed	= 0;

#if defined (__DEBUG_COM_MANAGER__)
	char argv_4846[MAX_PATH];
	argv_2316->argv_2323 (argv_1191, "=== argv_868::argv_824 ===");
	argv_4569 (argv_4846, MAX_PATH, "_src_index=%u, index_inner_archive_creator    = %d", _src_index, index_inner_archive_creator);	argv_4846[MAX_PATH - 1] = '\0'; argv_2316->argv_2323 (argv_1191, argv_4846);
	argv_4569 (argv_4846, MAX_PATH, "_src_index=%u, index_inner_archive_extractor  = %d", _src_index, index_inner_archive_extractor);	argv_4846[MAX_PATH - 1] = '\0'; argv_2316->argv_2323 (argv_1191, argv_4846);
	argv_4569 (argv_4846, MAX_PATH, "_src_index=%u, index_inner_spyware_manager    = %d", _src_index, index_inner_spyware_manager);	argv_4846[MAX_PATH - 1] = '\0'; argv_2316->argv_2323 (argv_1191, argv_4846);
	argv_4569 (argv_4846, MAX_PATH, "_src_index=%u, index_inner_scan_gateway       = %d", _src_index, index_inner_scan_gateway);		argv_4846[MAX_PATH - 1] = '\0'; argv_2316->argv_2323 (argv_1191, argv_4846);
	argv_4569 (argv_4846, MAX_PATH, "_src_index=%u, index_inner_update             = %d", _src_index, index_inner_update);				argv_4846[MAX_PATH - 1] = '\0'; argv_2316->argv_2323 (argv_1191, argv_4846);
#endif // #if defined (__DEBUG_COM_MANAGER__)

	if ((_src_index != index_inner_archive_creator) && (index_inner_archive_creator >= 0)) {
		iret1 = argv_1509 (_cli_tab, _outer_type, _src_index, index_inner_archive_creator, _payload_type, _v_index_2_trigger_write, true);
		if (iret1 != argv_1037) {
			nb_failed++;
			argv_1254 (argv_1037, iret1, "argv_868::argv_824 - forward to argv_715");
		}
		argv_3604++;
	}
	if ((_src_index != index_inner_archive_extractor) && (index_inner_archive_extractor >= 0)) {
		iret2 = argv_1509 (_cli_tab, _outer_type, _src_index, index_inner_archive_extractor, _payload_type, _v_index_2_trigger_write, true);
		if (iret2 != argv_1037) {
			nb_failed++;
			argv_1254 (argv_1037, iret2, "argv_868::argv_824 - forward to argv_728");
		}
		argv_3604++;
	}
	if ((_src_index != index_inner_spyware_manager) && (index_inner_spyware_manager >= 0)) {
		iret3 = argv_1509 (_cli_tab, _outer_type, _src_index, index_inner_spyware_manager, _payload_type, _v_index_2_trigger_write, true);
		if (iret3 != argv_1037) {
			nb_failed++;
			argv_1254 (argv_1037, iret3, "argv_868::argv_824 - forward to argv_4578");
		}
		argv_3604++;
	}
	if ((_src_index != index_inner_scan_gateway) && (index_inner_scan_gateway >= 0)) {
		iret4 = argv_1509 (_cli_tab, _outer_type, _src_index, index_inner_scan_gateway, _payload_type, _v_index_2_trigger_write, true);
		if (iret4 != argv_1037) {
			nb_failed++;
			argv_1254 (argv_1037, iret4, "argv_868::argv_824 - forward to argv_4459");
		}
		argv_3604++;
	}
	if ((_src_index != index_inner_update) && (index_inner_update >= 0)) {
		iret5 = argv_1509 (_cli_tab, _outer_type, _src_index, index_inner_update, _payload_type, _v_index_2_trigger_write, true);
		if (iret5 != argv_1037) {
			nb_failed++;
			argv_1254 (argv_1037, argv_2072, "argv_868::argv_824 - forward to argv_4941");
		}
		argv_3604++;
	}

#if defined (__DEBUG_COM_MANAGER__)
	argv_4569 (argv_4846, MAX_PATH, "broadcasted the argv_2457 to %u inner entities (%u failed)", argv_3604, nb_failed);
	argv_4846[MAX_PATH - 1] = '\0';
	argv_2316->argv_2323 (argv_1191, argv_4846);
#endif // #if defined (__DEBUG_COM_MANAGER__)
	if ((iret1 != argv_1037) || 
		(iret2 != argv_1037) || 
		(iret3 != argv_1037) || 
		(iret4 != argv_1037) || 
		(iret5 != argv_1037)) {
		argv_2072 = argv_1024;	
	}	
	return (argv_2072);
}

argv_4536 argv_868::argv_4236 (argv_4881 _payload_type) {
	argv_4536 argv_2072 = argv_1037;
	// argv_1397 the inner argv_4860 of the payload
#if defined (__DEBUG_COM_MANAGER__)
	char argv_4846[MAX_PATH];
	string payload_type_str = argv_4967 (_payload_type);
	argv_4569 (argv_4846, MAX_PATH, "received a '%s' request from admin part", payload_type_str.c_str());
	argv_4846[MAX_PATH - 1] = '\0';
	argv_2316->argv_2323 (argv_1191, argv_4846);
#endif // #if defined (__DEBUG_COM_MANAGER__)
	if (_payload_type == argv_3816) {
		argv_2316->argv_2323 (argv_690, "*** argv_868: << RECEIVED A STOP REQUEST (FINALIZE) FROM ADMIN PART >>");
		// we ask the event loop to argv_4626 so that we can return from the infinite loop
		argv_2072 = argv_1367; 
	}
	return (argv_2072);
}

// This function warns the concerned argv_795 by accessing specific argv_3656 functions
// (out of band chanel) because we can't rely on the argv_4570 chanel for the
// interrupts.
// this function permits to interrupt a given argv_795.
// Notice that the packet must be forwarded however so that the argv_795 can
// process this argv_2457 after being interrupted.
void argv_868::argv_4858 (argv_876 _from, argv_864 * _cli_tab, argv_4883 _src_index, argv_4881 _packet_type, argv_862 * _unit) {
#if defined (__DEBUG_COM_MANAGER__)
	char argv_4846[MAX_PATH];
	string pck_type_str = argv_4967 (_packet_type);
#endif // #if defined (__DEBUG_COM_MANAGER__)

	if ((_packet_type == argv_3784) || 
		(_packet_type == argv_3783)) {
#if defined (__DEBUG_COM_MANAGER__)
		argv_4569 (argv_4846, MAX_PATH, "triggering interrupt argv_4860 'argv_846' for unit '%s' (packet argv_4860 was %s)", _from, pck_type_str.c_str());	
		argv_4846[MAX_PATH - 1] = '\0';
		argv_2316->argv_2323 (argv_1191, argv_4846);
#endif // #if defined (__DEBUG_COM_MANAGER__)
		_unit->argv_846 (_src_index, _cli_tab[_src_index].argv_1747);
	}
	else if (_packet_type == argv_3815) {
#if defined (__DEBUG_COM_MANAGER__)
		argv_4569 (argv_4846, MAX_PATH, "triggering interrupt argv_4860 'stop_service' for unit '%s' (packet argv_4860 was %s)", _from, pck_type_str.c_str());	
		argv_4846[MAX_PATH - 1] = '\0';
		argv_2316->argv_2323 (argv_1191, argv_4846);
#endif // #if defined (__DEBUG_COM_MANAGER__)
		_unit->argv_4356 ();
	}
	else {
#if defined (__DEBUG_COM_MANAGER__)
		argv_4569 (argv_4846, MAX_PATH, "no need to trigger interrupt (packet argv_4860 was %s)", pck_type_str.c_str());	
		argv_4846[MAX_PATH - 1] = '\0';
		argv_2316->argv_2323 (argv_1191, argv_4846);
#endif // #if defined (__DEBUG_COM_MANAGER__)
	}
}

argv_4536 argv_868::argv_905 (argv_864 * _cli_tab, argv_4883 _src_index, argv_4883 _dest_index, argv_4881 _packet_type) {
	argv_4536 argv_2072 = argv_1037;

#if defined (__DEBUG_COM_MANAGER__)
	char argv_4846[MAX_PATH];	
	string pck_type_str = argv_4967 (_packet_type);
#endif // #if defined (__DEBUG_COM_MANAGER__)

	// only interruptible units are concerned about the interrupts
	if (_cli_tab[_dest_index].argv_947 == argv_952) {
		argv_4858 ("argv_728", _cli_tab, _src_index, _packet_type, argv_738);
	}
	else if (_cli_tab[_dest_index].argv_947 == argv_951) {
		argv_4858 ("argv_715", _cli_tab, _src_index, _packet_type, argv_723);
	}
	else if (_cli_tab[_dest_index].argv_947 == argv_954) {
		argv_4858 ("argv_4578", _cli_tab, _src_index, _packet_type, argv_4579);
	}
	else {
#if defined (__DEBUG_COM_MANAGER__)
		argv_4569 (argv_4846, MAX_PATH, "argv_905 : packet_type=%s => no need to warn any interruptible unit [src_index=%u|dest_index=%u]", pck_type_str.c_str(), _src_index, _dest_index);
		argv_4846[MAX_PATH - 1] = '\0';
		argv_2316->argv_2323 (argv_1191, argv_4846);
#endif // #if defined (__DEBUG_COM_MANAGER__)
	}
	return (argv_2072);
}

// use the interrupt mechanism to warn the concerned inner source argv_795 
// that the destination was unreacheable.
argv_4536 argv_868::argv_5005 (argv_864 * _cli_tab, argv_4883 _src_index, argv_4883 _dest_index) {
	argv_4536 argv_2072 = argv_1037;
	char argv_4846[MAX_PATH];

#if defined (__DEBUG_COM_MANAGER__)
	string dest_type_str = argv_948 (_cli_tab[_src_index].argv_947);
	argv_4569 (argv_4846, MAX_PATH, "warn inner argv_795 '%s' about unreacheable client at index=%u", dest_type_str.c_str(), _dest_index);
	argv_4846[MAX_PATH - 1] = '\0';
	argv_2316->argv_2323 (argv_1191, argv_4846);
#endif // #if defined (__DEBUG_COM_MANAGER__)

	if (_cli_tab[_src_index].argv_947 == argv_952) {
		argv_738->argv_4519 (_dest_index);
	}
	else if (_cli_tab[_src_index].argv_947 == argv_951) {
		argv_723->argv_4519 (_dest_index);
	}
	else if (_cli_tab[_src_index].argv_947 == argv_954) {
		argv_4579->argv_4519 (_dest_index);
	}
	else {
		string dest_type_str = argv_948 (_cli_tab[_src_index].argv_947);
		argv_4569 (argv_4846, MAX_PATH, "+++ ERROR: failed to warn inner argv_795 '%s' about unreacheable client at index=%u (not an interruptible unit)", dest_type_str.c_str(), _dest_index);
		argv_4846[MAX_PATH - 1] = '\0';
		argv_2316->argv_2323 (argv_1346, argv_4846);
	}
	return (argv_2072);
}

// argv_5011 a naked packet, we have to use the packet argv_4860 for routing
// but for rich packet, we don't need to use the packet argv_4860, instead
// we use the src/dest information, and the destination client's argv_4860
// to determine which shape to choose for the destination packet.
argv_4536 argv_868::argv_4279 (argv_864 * _cli_tab, argv_4883 _src_index, vector<argv_4883>& _v_index_2_trigger_write) {
	argv_4536 argv_2072 = argv_1037;
	argv_4883 source_index;
	argv_4883 source_generation;
	argv_4883 dest_index;
	argv_4883 dest_generation;
	argv_4881 outer_type;
	argv_4881 payload_type;

	// argv_1397 the source/dest and payload pointer from the received packet
	argv_2072 = argv_1402 (_cli_tab, _src_index, outer_type, source_index, source_generation, dest_index, dest_generation, payload_type);
	if (argv_2072 != argv_1037) {
		string serror = argv_1344 (argv_2072);
		argv_2316->argv_2323 (argv_1346, "+++ ERROR: argv_868::argv_4279 - argv_1402 failed ! - argv_1343 = ", serror.c_str());
	}
	else { // in case of ADMIN, or UPDATE, destination is irrelevant (broadcast)
		if (argv_2077 (_cli_tab, _src_index) == true) {
			// retrieve the payload argv_4860 (because some types are not broadcasted).
			if (payload_type != argv_3816) {
				argv_2072 = argv_824 (_cli_tab, _src_index, outer_type, payload_type, _v_index_2_trigger_write);
				if (argv_2072 != argv_1037) {
					argv_1254 (argv_1037, argv_2072, "argv_868::argv_4279 - argv_824");
				}
			}
			else {
				argv_2072 = argv_4236 (payload_type);
			}
		}
		else { // ensure that generations are coherent
			argv_2072 = argv_914 (_cli_tab, source_index, source_generation, dest_index, dest_generation);	
			if (argv_2072 != argv_1037) {
				string serror = argv_1344 (argv_2072);
				argv_2316->argv_2323 (argv_1346, "+++ ERROR: argv_868::argv_4279 - argv_914 failed ! - argv_1343 = ", serror.c_str());
				// destination is unreacheable
				argv_2072 = argv_5005 (_cli_tab, source_index, dest_index);
			}
			else if (argv_944 (_cli_tab, dest_index) == true) {
				argv_2072 = argv_1508 (_cli_tab, source_index, dest_index, payload_type, _v_index_2_trigger_write);
			}
			else { // destination is an internal client
				argv_2072 = argv_1509 (_cli_tab, outer_type, source_index, dest_index, payload_type, _v_index_2_trigger_write, false);
			}
		}
	}

	if (argv_2072 == argv_3778) { // remap error argv_976
		argv_2072 = argv_1037; 
	}
	return (argv_2072);
}

// the received packet is either "naked" or "rich" :
// - if client is external, then the packet is naked
// - if client is internal, then the packet is rich
// a naked packet contains directly the payload.
// a rich packet contains the following things in it's argv_815 :
//   - source index
//   - source argv_1747
//   - dest index
//   - dest argv_1747
//   - argv_665 of the payload packet (4 argv_837 as argv_4883).
argv_4536 argv_868::argv_3763 (argv_864 * _cli_tab, argv_4883 _index, vector<argv_4883>& _v_index_2_trigger_write) {
	argv_4536 argv_2072 = argv_1037;
	char argv_4846[MAX_PATH];

	if (argv_944 (_cli_tab, _index) == true) {
#if defined (__DEBUG_COM_MANAGER__)
		argv_4569 (argv_4846, MAX_PATH, "argv_868::argv_3763 - received a packet from external client located at index %u", _index);
		argv_4846[MAX_PATH - 1] = '\0';
		argv_2316->argv_2323 (argv_1191, argv_4846);
#endif // #if defined (__DEBUG_COM_MANAGER__)
		
		argv_2072 = argv_4271 (_cli_tab, _index, _v_index_2_trigger_write);
		if (argv_2072 != argv_1037) {
			argv_1254 (argv_1037, argv_2072, "argv_868::argv_3763 - argv_4271");
		}
	}
	else {
#if defined (__DEBUG_COM_MANAGER__)
		string client_type_str = argv_948 (_cli_tab[_index].argv_947);
		argv_4569 (argv_4846, MAX_PATH, "received a packet from internal client located at index %u (argv_947=%s)", _index, client_type_str.c_str());
		argv_4846[MAX_PATH - 1] = '\0';
		argv_2316->argv_2323 (argv_1191, argv_4846);
#endif // #if defined (__DEBUG_COM_MANAGER__)
		argv_2072 = argv_4279 (_cli_tab, _index, _v_index_2_trigger_write);
		if (argv_2072 != argv_1037) {
			argv_1254 (argv_1037, argv_2072, "argv_868::argv_3763 - argv_4279");
		}
	}

	// reset the receive packet for this client so that it can be reused
	if (argv_2072 == argv_1037) {
		argv_2072 = _cli_tab[_index].argv_3762.reset ();
	}

	if (argv_2072 == argv_3778) {
		argv_2072 = argv_1368; // remap error argv_976
	}
	return (argv_2072);
}

argv_4536 argv_868::argv_4424 (argv_963 * _log_ptr, argv_4883 _max_nb_client, vector<argv_962>& _v_listener, argv_862 * _archive_creator_ptr, argv_862 * _archive_extractor_ptr, argv_862 * _spyware_manager_ptr) {
	argv_4536 argv_2072 = argv_1037;

	if ((_log_ptr == NULL) || (_max_nb_client == 0) || (_archive_creator_ptr==NULL) || (_archive_extractor_ptr==NULL) || (_spyware_manager_ptr==NULL)) {
		argv_2072 = argv_1030;
	}
	else {
		argv_939			= _max_nb_client;
		argv_1033			= this; // will permit C functions to call C++ argv_3656
		argv_2316					= _log_ptr;
		argv_723		= _archive_creator_ptr;		// necessary for operation cancel
		argv_738	= _archive_extractor_ptr;	// necessary for operation cancel
		argv_4579		= _spyware_manager_ptr;		// necessary for operation cancel
#if defined (__DEBUG_COM_MANAGER__)
		argv_2316->argv_2323 (argv_1191, "argv_1023...[STARTING]");
#endif // #if defined (__DEBUG_COM_MANAGER__)
		// argv_4243 the client array
		argv_938 = new (std::nothrow) argv_864[_max_nb_client];
		if (argv_938 == NULL) {
			argv_2316->argv_2323 (argv_1346, "+++ ERROR: argv_1023 : failed to allocate client argv_4759 !");
			argv_2072 = argv_1031;
		}
		else { // memory allocation succeeded
#if defined (__DEBUG_COM_MANAGER__)
			argv_2316->argv_2323 (argv_3634, "argv_1023 - launching event loop");
#endif // #if defined (__DEBUG_COM_MANAGER__)
			argv_2072 = argv_1372.argv_4424 (argv_2316, _v_listener, &argv_938[0], _max_nb_client, argv_1373);
			if (argv_2072 == argv_1368) {
				argv_2072 = argv_1037; // remap error argv_976
			}
			else { // event loop returned.
				if (argv_2072 == argv_1367) {
					argv_2316->argv_2323 (argv_690, "*** WARNING : argv_868::argv_4424 - << RECEIVED ORDER TO STOP >>");
				}
				else { // real error occured
					string serror = argv_1344 (argv_2072);
					argv_2316->argv_2323 (argv_1346, "+++ ERROR: argv_868::argv_4424 - event loop argv_4424 failed ! - errno = ", serror.c_str());
				}
			}
		}
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1424
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

