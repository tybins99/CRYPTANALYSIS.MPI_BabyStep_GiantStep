#include "../LIB/argv_386.hpp"


Ccallback_set::Ccallback_set () {
	argv_1522					= NULL;
	argv_1530						= NULL;	
	argv_1526		= NULL;
	argv_1534	= NULL;
	argv_1579					= NULL;
	argv_1644					= NULL;
	argv_1549				= NULL;
	argv_1535					= NULL;
}

void Ccallback_set::argv_907 (argv_963 * _log_ptr, argv_2338 _fn_ptr, argv_876 _name, bool& _bret) {
	if (_fn_ptr == NULL) {
		_log_ptr->argv_2323 (argv_1346, "+++ ERROR: function pointer is NULL for callback : ", _name);
		_bret = false;
	}
}

bool Ccallback_set::argv_901 (argv_963 * _log_ptr) {
	bool bret = true;
	argv_907 (_log_ptr, argv_1522,					"argv_1522", bret);
	argv_907 (_log_ptr, argv_1530,						"argv_1530", bret);
	argv_907 (_log_ptr, argv_1526,		"argv_1526", bret);
	argv_907 (_log_ptr, argv_1534,	"argv_1534", bret);
	argv_907 (_log_ptr, argv_1579,					"argv_1579", bret);
	argv_907 (_log_ptr, argv_1644,					"argv_1644", bret);
	argv_907 (_log_ptr, argv_1549,				"argv_1549",bret);
	argv_907 (_log_ptr, argv_1535,					"argv_1535", bret);
	return (bret);
}

argv_1147::argv_1147 () {
	init_done = false;
}

bool argv_1147::init (argv_876 _native_dll_file, argv_876 _log_filename, argv_2338& _kernel_data) {
	bool bret = true;
	if (init_done == true) {
		fprintf (stderr, "+++ ERROR: illegal to call init twice or more !\n");
		bret = false;
	}
	else { // open the log argv_1424
		if (argv_1798.argv_2327.argv_3686 (_log_filename, NULL, "") == false) {
			fprintf (stderr, "+++ ERROR: failed to open log argv_1424 : '%s'\n", _log_filename);
			bret = false;
		}
		else {
			argv_4536 argv_2072 = argv_4751.init (&argv_1798, _native_dll_file);
			if (argv_2072 != argv_2246) {
				string serror = argv_1344 (argv_2072);
				fprintf (stderr, "native API init failed ! (%s)\n", serror.c_str());
				bret = false;
			}
			else {
				bret = argv_4253 ();
				if (bret == false) {
					fprintf (stderr, "+++ ERROR: argv_4253...[FAILED]\n");	
				}
				else {
					init_done = true;	
					fprintf (stderr, "(see log argv_1424 : %s)\n", _log_filename);
					argv_1798.argv_2327.argv_2323 (argv_1191, "native API argv_2297 : ", _native_dll_file);
				}
			}
		}
	}
	return (bret);
}

bool argv_1147::argv_4253 () {
	bool bret = true;
	argv_2117.argv_4752			= &argv_4751.toolset;
	argv_2117.argv_4876	= NULL;

	argv_4536 argv_2072 = type_matcher_create (&argv_2117.argv_4876, argv_2117.argv_4752);
	if (argv_2072 != argv_4875) {
		string serror = argv_1344 (argv_2072);
		argv_1798.argv_2327.argv_2323 (argv_1346, "+++ ERROR: type_matcher_create failed ! - argv_1343 = ", serror.c_str());
		bret = false;
	}
	else {
		argv_1798.argv_2327.argv_2323 (argv_1191, "type_matcher_create...[OK]");
	}
	return (bret);
}

argv_1147::~argv_1147 () {
	if (init_done == true) {
		argv_1798.argv_2327.argv_970 ();
		init_done = false;
	}
}

void argv_1147::init_callback__construct (argv_1652 _fp_construct) {
	callback_set.argv_1522 = _fp_construct;
}

void argv_1147::init_callback__destruct (argv_1655 _fp_destruct) {
	callback_set.argv_1530 = _fp_destruct;	
}

void argv_1147::init_callback__create_scan_result_atom (argv_1654 _fp_create_scan_result_atom) {
	callback_set.argv_1526 = _fp_create_scan_result_atom;
}

void argv_1147::init_callback__destruct_scan_result_atom (argv_1657 _fp_destruct_scan_result_atom) {
	callback_set.argv_1534 = _fp_destruct_scan_result_atom;
}

void argv_1147::init_callback__match_type (argv_1670 _fp_match_type) {
	callback_set.argv_1579 = _fp_match_type;
}

void argv_1147::init_callback__scan_buffer (argv_1710 _fp_scan_buffer) {
	callback_set.argv_1644 = _fp_scan_buffer;
}

void argv_1147::init_callback__get_scan_report (argv_1662 _fp_get_scan_report) {
	callback_set.argv_1549 = _fp_get_scan_report;
}

void argv_1147::init_callback__dysinfect (argv_1658 _fp_dysinfect) {
	callback_set.argv_1535 = _fp_dysinfect;
}

bool argv_1147::argv_4255 (argv_876 _signature_db_path, argv_876 _filename, argv_876 _plugin_log_filename) {
	bool bret = true;
	bret = callback_set.argv_901 (&argv_1798.argv_2327);
	if (bret == false) {
		fprintf (stderr, "+++ ERROR: Callbacks incoherency detected !\n");
	}
	else if (argv_903 (_filename) == false) {
		argv_1798.argv_2327.argv_2323 (argv_1346, "+++ ERROR: argv_1424 to scan does not exists !");
		fprintf (stderr, "+++ ERROR: argv_1424 to scan not found !\n");
		bret = false;
	}
	else {
		argv_2117.argv_4752->argv_2203 (&argv_2117.argv_2141, _plugin_log_filename);
		argv_1798.argv_2327.argv_2323 (argv_1191, "plugin log argv_1424 : ", _plugin_log_filename);

		argv_2117.argv_4468 = argv_2117.argv_4752->argv_3591 (argv_1462 * sizeof(argv_4589));
		argv_2338 mapper_addr						= NULL;
		argv_4589 * argv_4468	= NULL;
		argv_4589 * data_ptr			= NULL;

		for (argv_4883 i=argv_1463 ; i<argv_1462 ; i++) {
			mapper_addr = NULL;
			argv_2117.argv_4752->argv_2385 (&mapper_addr, (argv_2338) argv_2117.argv_4752->argv_3591, (argv_2338) argv_2117.argv_4752->argv_3583);
			argv_4468						= (argv_4589 *) argv_2117.argv_4468;
			data_ptr								= &argv_4468[i];
			data_ptr->argv_1428					= mapper_addr;
		}

		argv_2117.argv_1161 = argv_1467;
		argv_4536 argv_2072 = callback_set.argv_1522 ((argv_2338) &argv_2117, _signature_db_path);
		if (argv_2072 != argv_1441) {
			string serror = argv_1344 (argv_2072);
			argv_1798.argv_2327.argv_2323 (argv_1346, "+++ ERROR: 'construct' callback failed ! - argv_1343 = ", serror.c_str());
			bret = false;
		}
		else {
			if (argv_2117.argv_1161 == argv_1467) {
				argv_1798.argv_2327.argv_2323 (argv_1346, "+++ ERROR: 'construct' function did not fill his argv_4860 !");	
				bret = false;
			}
			else {
				argv_1798.argv_2327.argv_2323 (argv_1191, "construct...[SUCCESS]");
			}
		}
	}
	return (bret);
}

bool argv_1147::argv_4235 () {
	bool bret = true;
	argv_1798.argv_2327.argv_2323 (argv_1191, "calling 'argv_1232' callback");
	argv_4536 argv_2072 = callback_set.argv_1530 ((argv_2338) &argv_2117);
	if (argv_2072 != argv_1441) {
		string serror = argv_1344 (argv_2072);
		argv_1798.argv_2327.argv_2323 (argv_1346, "+++ ERROR: 'argv_1232' callback failed ! - argv_1343 = ", serror.c_str());
		bret = false;
	}
	else {
		argv_1798.argv_2327.argv_2323 (argv_1191, "argv_1232...[SUCCESS]");
	}
	return (bret);
}

bool argv_1147::argv_3840 (argv_876 _filename, argv_2338& _atom_ptr, bool _do_dysinfect) {
	bool bret = true;
	char argv_4846[MAX_PATH];
	bool infection_flag	= false;
	argv_1798.argv_2327.argv_2323 (argv_3634, "argv_1424 matches the argv_1148 argv_4860");
	argv_2117.argv_1161 = argv_1467;
	argv_4536 argv_2072 = callback_set.argv_1644 ((argv_2338) &argv_2117, argv_1429, argv_1444, infection_flag, _atom_ptr);
	if (argv_2072 != argv_1441) {
		string serror = argv_1344 (argv_2072);
		argv_1798.argv_2327.argv_2323 (argv_1346, "+++ ERROR: argv_1644 failed ! - argv_1343 = ", serror.c_str());
	}
	else if (argv_2117.argv_1161 == argv_1467) {
		argv_1798.argv_2327.argv_2323 (argv_1346, "+++ ERROR: 'scan_buffer' function did not fill his argv_4860 !");
		bret = false;
	}
	else if (infection_flag == false) {
		argv_4569 (argv_4846, MAX_PATH, "[not_infected|argv_1424=%s]", _filename);
		argv_4846[MAX_PATH - 1] = '\0';
		argv_1798.argv_2327.argv_2323 (argv_3634, argv_4846);
	}
	else { // argv_1424 is infected, let's get a scan report
		char * virus_name_ptr = NULL;
		argv_4883 dysinfection_flag;
		argv_2117.argv_1161 = argv_1467;
		argv_2072 = callback_set.argv_1549 ((argv_2338) &argv_2117, _atom_ptr, (char *&) virus_name_ptr, dysinfection_flag);
		if (argv_2072 != argv_1441) {
			string serror = argv_1344 (argv_2072);
			argv_1798.argv_2327.argv_2323 (argv_1346, "+++ ERROR: argv_1549 failed ! - argv_1343 = ", serror.c_str());
		}
		else if (argv_2117.argv_1161 == argv_1467) {
			bret = false;
			argv_1798.argv_2327.argv_2323 (argv_1346, "+++ ERROR: 'get_scan_report' function did not fill it's argv_4860 !");	
		}
		else { // scan report was retrieved succesfully
			string flag_str = dysinfection_possibility_2_string (dysinfection_flag);
			if (virus_name_ptr != NULL) {
				argv_4569 (argv_4846, MAX_PATH, "[infected|dysinfection_flag=%s|argv_4999=%s|argv_1424=%s]", flag_str.c_str(), virus_name_ptr, _filename);
			}
			else {
				argv_4569 (argv_4846, MAX_PATH, "[infected|dysinfection_flag=%s|argv_4999=<null>|argv_1424=%s]", flag_str.c_str(), _filename);
			}
			argv_4846[MAX_PATH - 1] = '\0';
			argv_1798.argv_2327.argv_2323 (argv_1191, argv_4846);
			if (_do_dysinfect == false) {
				argv_1798.argv_2327.argv_2323 (argv_1191, "*** skip dysinfection (dysinfection is disabled by the caller)");
			}
			else { // the caller wants us to try a dysinfection
				argv_1798.argv_2327.argv_2323 (argv_1191, "performing a desynfection");
				argv_4536 dys_success_code;
				argv_2117.argv_1161 = argv_1467;
				argv_4883 saved_file_size = argv_1444;
				argv_2072 = callback_set.argv_1535 ((argv_2338) &argv_2117, argv_1429, argv_1444, _atom_ptr, dys_success_code);
				if (argv_2072 != argv_1441) {
					string serror = argv_1344 (argv_2072);
					argv_1798.argv_2327.argv_2323 (argv_1346, "+++ ERROR: argv_1535 failed ! - argv_1343 = ", serror.c_str());
				}
				else if (argv_2117.argv_1161 == argv_1467) {
					argv_1798.argv_2327.argv_2323 (argv_1346, "+++ ERROR: 'dysinfect' function did not fill his argv_4860 !");
					bret = false;
				}
				else {
					argv_1428.argv_971 ();

					string dys_str = dysinfect_success_2_string (dys_success_code);	
					argv_1798.argv_2327.argv_2323 (argv_3634, "dysinfection argv_1291 - argv_4406 : ", dys_str.c_str());
					if (argv_1444 != saved_file_size) {
						if (argv_1444 == 0) {
							argv_1798.argv_2327.argv_2323 (argv_5006, "*** WARNING: 'dysinfect' function asked for argv_1424 deletion (delete not performed for test purpose)");	
						}
						else {
							argv_2072 = argv_2117.argv_4752->argv_3594 (_filename, argv_1444);
							if (argv_2072 != 0) {
								argv_4569 (argv_4846, MAX_PATH, "*** ERROR: failed to modified argv_1424 size : old size = %u, new_size = %u", saved_file_size, argv_1444);
								argv_4846[MAX_PATH - 1] = '\0';
								argv_1798.argv_2327.argv_2323 (argv_1346, argv_4846);
							}
							else {
								argv_4569 (argv_4846, MAX_PATH, "modified argv_1424 size : old size = %u, new_size = %u", saved_file_size, argv_1444);
								argv_4846[MAX_PATH - 1] = '\0';
								argv_1798.argv_2327.argv_2323 (argv_1191, argv_4846);
							}
						}
					}
				}
			}
		}
	}
	return (bret);
}

bool argv_1147::argv_4458 (argv_876 _signature_db_path, argv_876 _filename, argv_876 _plugin_log_filename, bool _do_dysinfect) {
	bool bret = true;
	char argv_4846[MAX_PATH];
	strncpy (argv_2117.argv_1153, _filename, MAX_PATH);
	argv_2117.argv_1153[MAX_PATH - 1] = '\0';

	argv_1798.argv_2327.argv_2323 (argv_1191, "argv_1424 to scan : ", _filename);

	bret = argv_4255 (_signature_db_path, _filename, _plugin_log_filename);
	if (bret == false) {
		argv_1798.argv_2327.argv_2323 (argv_1346, "+++ ERROR: scan preparation...[FAILED]");
	}
	else {
		if (argv_1427 (_filename) == true) {
			bret = argv_4353 (_filename);
			if (bret == false) {
				argv_1798.argv_2327.argv_2323 (argv_5006, "*** WARNING: failed to remove READ-ONLY flag for argv_1424");
				bret = true;
			}
			else {
				argv_1798.argv_2327.argv_2323 (argv_3634, "removed read-only protection for argv_1424 : ", _filename);
			}
		}

		// mmap the argv_1424 to scan
		bret = argv_1428.argv_2532 (_filename, argv_2535, argv_1429, argv_1444);
		if (bret == false) {
			argv_4883 argv_1343, argv_1351;
			argv_1428.argv_1769 (argv_1343, argv_1351);
			argv_4569 (argv_4846, MAX_PATH, "+++ ERROR: failed to mmap argv_1424 : '%s' (argv_1343=%u,argv_1351=%u)", _filename, argv_1343, argv_1351);
			argv_4846[MAX_PATH - 1] = '\0';
			argv_1798.argv_2327.argv_2323 (argv_1346, argv_4846);
		}
		else {
			argv_1798.argv_2327.argv_2323 (argv_1191, "mmapped the argv_1424 : argv_1424 size = ", argv_1444);	
			bool	match_flag = false;
			argv_2338	argv_765;
			// check whether the argv_1424 matches argv_1148 argv_4860 or not
			argv_4536 argv_2072 = callback_set.argv_1579 ((argv_2338) &argv_2117, argv_1429, argv_1444, match_flag, argv_765);
			if (argv_2072 != argv_4875) {
				string serror = argv_1344 (argv_2072);
				argv_1798.argv_2327.argv_2323 (argv_1346, "+++ ERROR: argv_1579 failed ! - argv_1343 = ", serror.c_str());
			}
			else if (match_flag == false) { 
				argv_1798.argv_2327.argv_2323 (argv_3634, "argv_1424 does not match the argv_1148 argv_4860");
			}
			else { // argv_1424 matches the argv_1148 argv_4860
				argv_2072 = type_matcher_link_atom (argv_2117.argv_4876, argv_1469, argv_765);
				if (argv_2072 != argv_4875) {
					string serror = argv_1344 (argv_2072);
					argv_1798.argv_2327.argv_2323 (argv_1346, "+++ ERROR: type_matcher_link_atom failed ! - argv_1343 = ", serror.c_str());
				}
				else { // perform a scan of the argv_1424
					bret = argv_3840 (_filename, argv_765, _do_dysinfect);
				}
			}
		}
	}

	if (bret == true) {
		argv_4235 ();
	}
	return (bret);
}

