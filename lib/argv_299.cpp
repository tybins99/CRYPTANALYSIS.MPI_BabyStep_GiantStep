// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_299.cpp
// @@ 
// @@ DESCRIPTION:
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ included files
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_358.hpp"

argv_862::argv_862 () {
	reset ();
}

void argv_862::reset () {
	argv_4388 ();
}

argv_862::~argv_862 () {
	;
}

// when a destination client is unreacheable, we notify the unit
// by adding the client's index to a vector.
void argv_862::argv_4519 (argv_4883 _index) {
	argv_780.argv_2305 ();
		if (argv_4938 == false) {
			argv_4939				= _index;
			argv_4938	= true;
		}
	argv_780.argv_4937 ();
}

void argv_862::argv_4356 () {
	argv_780.argv_2305 ();
		argv_4630	= true;
		interrupt_flag		= true;
	argv_780.argv_4937 ();
}

void argv_862::argv_846 (argv_4883 _src_index, argv_4883 _src_generation) {
	argv_780.argv_2305 ();
		if (argv_845 == false) {
			if ((_src_index == argv_1159) && (_src_generation == argv_1158)) {
				argv_845		= true;	
				interrupt_flag	= true;
			}
		}
	argv_780.argv_4937 ();
}

// argv_1481 are reseted by this function (if it was set of course)
void argv_862::argv_1766 (bool& _cancel_flag, bool& _stop_service_flag, bool& _dest_unreach_flag, argv_4883& _unreach_index) {
	argv_780.argv_2305 ();
		if (argv_845 == true) { 
			_cancel_flag		= true;
			argv_845			= false; // reset the flag
		}

		if (argv_4630 == true) { 
			_stop_service_flag	= true;
			argv_4630	= false; // reset the flag
		}

		if (argv_4938 == true) { // reset the flag
			_dest_unreach_flag				= true;
			_unreach_index					= argv_4939;
			argv_4938	= false;
		}
		interrupt_flag = false;
	argv_780.argv_4937 ();
}

void argv_862::argv_4388 () {
	argv_780.argv_2305 ();
		argv_845						= false;
		argv_4630				= false;
		interrupt_flag					= false;
		argv_4938	= false;
		argv_4939				= 0;
	argv_780.argv_4937 ();
}

//-----------------------------------
argv_929::argv_929 () {
	reset ();
}

argv_929::~argv_929 () {
}

void argv_929::reset () {
	argv_2316						= NULL;
	argv_1159			= 0;
	argv_1158		= 0;
	argv_1151			= 0;
	argv_1150		= 0;
	argv_4257					= false;
	inner_port.reset ();
	argv_862::reset ();
}


void argv_929::argv_1254 (argv_4536 _success_result, argv_4536 _result, argv_876 _opa) {
	char argv_4846[MAX_PATH];
	if (_result == _success_result) {
#if defined (__DEBUG_INNER_CLIENT__)
		argv_4569 (argv_4846, MAX_PATH, "%s...[SUCCESS]", _opa);
		argv_4846[MAX_PATH - 1] = '\0';
		argv_2316->argv_2323 (argv_1191, argv_4846);
#endif // #if defined (__DEBUG_INNER_CLIENT__)
	}
	else {
		string serror = argv_1344 (_result);
		argv_4569 (argv_4846, MAX_PATH, "+++ ERROR: %s...[FAILED] - argv_1343=%s", _opa, serror.c_str());
		argv_4846[MAX_PATH - 1] = '\0';
		argv_2316->argv_2323 (argv_1191, argv_4846);
	}
}

argv_4536 argv_929::argv_4277 (argv_4881 _user_type) {
	// should never be called (base class function is meaningless)
	argv_4536 argv_2072 = argv_2055;
	return (argv_2072);	
}

argv_4536 argv_929::argv_1280 () {
	// should never be called (base class function is meaningless)
	argv_4536 argv_2072 = argv_2055;
	return (argv_2072);
}

argv_4536 argv_929::argv_4496 () {
	argv_4536 argv_2072 = argv_2060;
	argv_2072 = inner_port.argv_4496 ();

	if (argv_2072 == argv_2067) { // remap error argv_976
		argv_2072 = argv_2060;
	}
	return (argv_2072);
}

// when an operation is cancelled, the argv_1148 client must be sent a specific 
// argv_2457.
argv_4536 argv_929::argv_4267 (bool _cancel_flag, bool _stop_service_flag, argv_4881 _outer_type, argv_876 _from) {
	argv_4536 argv_2072 = argv_2060;
	vector<argv_875> v_atom;
	argv_4883 unused_UI32 = 0;

	// argv_646 a unused argv_4979 to the packet (empty packets are illegal).
	argv_647 (unused_UI32, v_atom);
	argv_4881 inner_type;
	if (_cancel_flag == true) {
#if defined (__DEBUG_INNER_CLIENT__)
		argv_2316->argv_2323 (argv_1191, "*** <interrupt> received an argv_3690 to CANCEL argv_1148 operation");	
#endif // #if defined (__DEBUG_INNER_CLIENT__)
		inner_type = argv_3799;	
	}
	else if (_stop_service_flag == true) {
#if defined (__DEBUG_INNER_CLIENT__)
		argv_2316->argv_2323 (argv_1191, "*** <interrupt> received an argv_3690 to STOP service");	
#endif // #if defined (__DEBUG_INNER_CLIENT__)
		inner_type = argv_3800;
	}

#if defined (__DEBUG_INNER_CLIENT__)
	char argv_4846[MAX_PATH];
	string inner_type_str = argv_4967 (inner_type);
	string outer_type_str = argv_4967 (_outer_type);
	argv_4569 (argv_4846, MAX_PATH, "processing cancellation from '%s' [argv_845=%u|argv_4630=%u|inner_type=%s|outer_type=%s]", _from, _cancel_flag, _stop_service_flag, inner_type_str.c_str(), outer_type_str.c_str());
	argv_4846[MAX_PATH - 1] = '\0';
	argv_2316->argv_2323 (argv_1191, argv_4846);
	argv_2316->argv_2323 (argv_1191, "sending a cancellation argv_2457 to argv_1148 client");
#endif // #if defined (__DEBUG_INNER_CLIENT__)

	argv_2072 = argv_1492 (inner_type, v_atom, _from, _outer_type);
	if (argv_2072 != argv_2060) { // remap error argv_976
		argv_1254 (argv_2060, argv_2072, "argv_929::argv_4267 - argv_1492");
	}
	return (argv_2072);
}


argv_4536 argv_929::insert_atom_vector (vector<argv_875>& _v_atom) {
	argv_4536 argv_2072 = argv_2060;
	argv_4883 nb_atom = _v_atom.size ();
	if (nb_atom == 0) {
		argv_2316->argv_2323 (argv_1346, "+++ ERROR: argv_929::insert_atom_vector - atom vector is empty !");
		argv_2072 = argv_2054;
	}
	else {
		for (argv_4883 i=0 ; i<nb_atom ; i++) {
			switch (_v_atom[i].argv_4860) {
				case argv_1094:
					argv_2072 = argv_4497.insert (_v_atom[i].argv_4982);
					if (argv_2072 != argv_3778) {
						argv_1254 (argv_3778, argv_2072, "argv_929::insert_atom_vector - insert argv_4881");
					}
					break;

				case argv_1095:
					argv_2072 = argv_4497.insert (_v_atom[i].argv_4983);
					if (argv_2072 != argv_3778) {
						argv_1254 (argv_3778, argv_2072, "argv_929::insert_atom_vector - insert argv_4883");
					}
					break;

				case argv_1093:
					argv_2072 = argv_4497.insert (_v_atom[i].argv_4981);
					if (argv_2072 != argv_3778) {
						argv_1254 (argv_3778, argv_2072, "argv_929::insert_atom_vector - insert string");
					}
					break;

				default:
					argv_2072 = argv_2061;
					argv_2316->argv_2323 (argv_1346, "+++ ERROR: argv_929::insert_atom_vector - unknown atom argv_4860 : ", (argv_4883) _v_atom[i].argv_4860);
			}
		}
	}

	if (argv_2072 == argv_3778) {
		argv_2072 = argv_2060;
	}
	return (argv_2072);
}

// the rich packet is composed of 
// - src, src_generation
// - dest, dest_generation
// then a fake packet as a payload is present :
// - payload's argv_4860
// - payload's content
argv_4536 argv_929::argv_1492 (argv_4881 _payload_type, vector<argv_875>& _v_atom, argv_876 _source_name, argv_4881 _outer_pck_type) {
	argv_4536 argv_2072 = argv_2060;
	argv_4497.reset ();
	argv_2072 = argv_4497.argv_4518 (_outer_pck_type);
	if (argv_2072 != argv_3778) {
		argv_1254 (argv_3778, argv_2072, "argv_1492 - forge_payload");
		argv_2316->argv_2323 (argv_1346, "+++ ERROR: argv_929::argv_1492 - argv_4518 failed !");
	}
	else { 
		argv_2072 = argv_4497.insert (argv_1151);
		if (argv_2072 != argv_3778) { // <revert> and insert source argv_1747
			argv_1254 (argv_3778, argv_2072, "format_and_send_result: insert #1");
		}
		else {
			argv_2072 = argv_4497.insert (argv_1150);	
			if (argv_2072 != argv_3778) { 
				argv_1254 (argv_3778, argv_2072, "format_and_send_result: insert #2");	
			}
			else {
				argv_2072 = argv_4497.insert (argv_1159);
				if (argv_2072 != argv_3778) { // <revert> and insert destination argv_1747
					argv_1254 (argv_3778, argv_2072, "format_and_send_result: insert #3");
				}
				else {
					argv_2072 = argv_4497.insert (argv_1158);
					if (argv_2072 != argv_3778) { 
						argv_1254 (argv_3778, argv_2072, "format_and_send_result: insert #4");
					}
					else {
						argv_2072 = argv_4497.insert (_payload_type);
						if (argv_2072 != argv_3778) { 
							argv_1254 (argv_3778, argv_2072, "format_and_send_result: insert #5");
						}
						else { // beware: here the source and dest are inverted on purpose !
#if defined (__DEBUG_INNER_CLIENT__)
							char argv_4846[MAX_PATH];
							string payload_type_str = argv_4967 (_payload_type);
							argv_4569 (argv_4846, MAX_PATH, "forging payload : [src_index=%u|src_gen=%u|dest_index=%u|dest_gen=%u|payload_type=%s]", argv_1151, argv_1150, argv_1159, argv_1158, payload_type_str.c_str());
							argv_4846[MAX_PATH - 1] = '\0';
							argv_2316->argv_2323 (argv_1191, argv_4846);
#endif // #if defined (__DEBUG_INNER_CLIENT__)
							argv_2072 = insert_atom_vector (_v_atom);
							if (argv_2072 != argv_2060) {
								argv_1254 (argv_2060, argv_2072, "format_and_send_result: insert_atom_vector");
							}
							else {
								argv_2072 = argv_4497.argv_3698 ();
								if (argv_2072 !=  argv_3778) {
									argv_1254 (argv_3778, argv_2072, "format_and_send_result: argv_3698");
								}
								else { // argv_4490 the packet to the COM manager
									argv_2072 = argv_4496 ();
									if (argv_2072 != argv_2060) {
										char argv_4846[MAX_PATH];
										argv_4569 (argv_4846, MAX_PATH, "from:%s (argv_4490)", _source_name);
										argv_4846[MAX_PATH - 1] = '\0';
										argv_1254 (argv_2060, argv_2072, argv_4846);	
									}
									else {
#if defined (__DEBUG_INNER_CLIENT__)
										argv_2316->argv_2323 (argv_1191, "packet succesfully sent to the COM manager");
#endif // #if defined (__DEBUG_INNER_CLIENT__)
									}
								}
							}
						} 
					}
				}
			}
		}
	}
	return (argv_2072);
}

void argv_929::argv_1256 () {
	char argv_4846[MAX_PATH];
	string inner_type_str = argv_4967 (inner_type);
	string outer_type_str = argv_4967 (outer_type);
	argv_4569 (argv_4846, MAX_PATH, "received a rich packet (argv_3694:%s) [inner_type=%s|outer_type=%s|src_index=%d|src_gen=%u|dest_index=%u|dest_gen=%d]", argv_3694.c_str(), inner_type_str.c_str(), outer_type_str.c_str(), argv_1159, argv_1158, argv_1151, argv_1150);
	argv_4846[MAX_PATH - 1] = '\0';
	argv_2316->argv_2323 (argv_1191, argv_4846);
}

argv_4536 argv_929::argv_1403 () {
	argv_4536 argv_2072 = argv_2060;

	// argv_1397 the packet argv_4860
	argv_4342.argv_1795 (outer_type); 

	// argv_1397 the source index
	argv_2072 = argv_4342.argv_1397 (argv_1159);
	if (argv_2072 != argv_3778) {
		argv_1254 (argv_3778, argv_2072, "argv_1403: argv_1397 #1");	
	}
	else { // argv_1397 the source argv_1747
		argv_2072 = argv_4342.argv_1397 (argv_1158);
		if (argv_2072 != argv_3778) {
			argv_1254 (argv_3778, argv_2072, "argv_1403: argv_1397 #2");	
		}
		else { // argv_1397 the destination index
			argv_2072 = argv_4342.argv_1397 (argv_1151);
			if (argv_2072 != argv_3778) {
				argv_1254 (argv_3778, argv_2072, "argv_1403: argv_1397 #3");	
			}
			else { // argv_1397 the destination argv_1747
				argv_2072 = argv_4342.argv_1397 (argv_1150);
				if (argv_2072 != argv_3778) {
					argv_1254 (argv_3778, argv_2072, "argv_1403: argv_1397 #4");
				}
				else { // argv_1397 the payload's argv_4860
					argv_2072 = argv_4342.argv_1397 (inner_type);
					if (argv_2072 != argv_3778) {
						argv_1254 (argv_3778, argv_2072, "argv_1403: argv_1397 #5");
					}
				}
			}
		}
	}

	if (argv_2072 == argv_3778) { // remap error argv_976
#if defined (__DEBUG_INNER_CLIENT__)
		argv_1256 ();
#endif // #if defined (__DEBUG_INNER_CLIENT__)
		argv_2072 = argv_2060;
	}
	return (argv_2072);
}

argv_4536 argv_929::argv_4332 () {
	argv_4536 argv_2072 = argv_2060;
	// read a packet
	argv_2072 = inner_port.argv_4334 ();	
	if (argv_2072 != argv_2067) {
		argv_1254 (argv_2067, argv_2072, "argv_4334");
	}
	else { 
		// all inner packets are supposed to be "rich" => argv_1397 src/dest + payload argv_665	
		argv_2072 = argv_1403 ();
		if (argv_2072 != argv_2060) {
			string serror = argv_1344 (argv_2072);
			argv_2316->argv_2323 (argv_5006, "*** WARNING: argv_929::argv_4332 - argv_1403 failed ! - argv_1343 = ", serror.c_str());
		}
	}
	return (argv_2072);
}

argv_4536 argv_929::argv_4336 () {
	argv_4536	argv_2072 = argv_2060;
	char	argv_4846[MAX_PATH];

	for ( ; ; ) {
		argv_2072 = argv_4332 ();
		if (argv_2072 != argv_2060) {
			argv_1254 (argv_2060, argv_2072, "argv_4332");
		}

		if (inner_type == argv_3815) { 
			argv_4569 (argv_4846, MAX_PATH, "<<< RECEIVED ORDER TO STOP (from inner_client owned by %s) >>>", argv_3694.c_str());
			argv_4846[MAX_PATH - 1] = '\0';
			argv_2316->argv_2323 (argv_5006, argv_4846);
			argv_2072 = argv_2059;
			break;
		}
		else if (inner_type == argv_3818) {
			argv_4569 (argv_4846, MAX_PATH, "*** received argv_3690 to update (from inner_client owned by %s)", argv_3694.c_str());
			argv_4846[MAX_PATH - 1] = '\0';
			argv_2316->argv_2323 (argv_690, argv_4846);

			argv_2072 = argv_1280 ();
			if (argv_2072 != argv_2060) {
				argv_1254 (argv_2060, argv_2072, "argv_1280");
			}
		}
		else { // child class dependant packet => leave it to the child
			argv_2072 = argv_4277 (inner_type);
			if (argv_2072 != argv_2060) {
				argv_1254 (argv_2060, argv_2072, "argv_4277");
			}
		}
	}
	return (argv_2072);
}

argv_4536 argv_929::argv_4243 (argv_876 _owner, argv_4883 _port, argv_963 * _log_ptr) {
	argv_4536 argv_2072 = argv_2060;
	if (_log_ptr == NULL) {
		argv_2072 = argv_2057;
	}
	else if (argv_4257 == true) {
		argv_2072 = argv_2056;
	}
	else {
		argv_3694	= _owner;
		argv_2316	= _log_ptr;
#if defined (__DEBUG_INNER_CLIENT__)
		argv_2316->argv_2323 (argv_1191, "preparing inner client for argv_3694 : ", argv_3694.c_str());
#endif // #if defined (__DEBUG_INNER_CLIENT__)
		argv_2072 = inner_port.argv_4243 (_owner, _port, _log_ptr, &argv_4342, &argv_4497);
	}
	if (argv_2072 == argv_2067) { // remap error argv_976
		argv_4257 = true;
		argv_2072 = argv_2060;
	}
	return (argv_2072);
}

argv_4536 argv_929::argv_4424 (argv_876 _owner, argv_4883 _port, argv_963 * _log_ptr) {
	argv_4536 argv_2072 = argv_2060;
	argv_2072 = argv_4243 (_owner, _port, _log_ptr);
	if (argv_2072 == argv_2060) {
		argv_2072 = argv_4336 ();
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1424
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
