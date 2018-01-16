// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_360.hpp"


argv_935::argv_935 () {
	reset ();
}

void argv_935::reset () {
	argv_3574		= false;
	argv_4911	= false;
	argv_1169		= false;
	argv_821					= false;
	argv_4665			= false;
	argv_4327			= false;
	argv_1843				= false;

	argv_3572	= "";
	argv_1064	= "";
	argv_931	= "";
	argv_3895		= "";

	argv_4757		= NULL;

	argv_4751.reset ();
	argv_1068.reset ();
	argv_1174.reset ();
	argv_5021.reset ();

//	m_resolve_query.clear ();
//	m_unique_resolve_query.clear ();
	argv_4976.clear ();
	vector<string>().swap (argv_4976); // force vector to free it's memory	
	argv_4975.clear ();
	vector<string>().swap (argv_4975); // force vector to free it's memory	

	argv_2379.clear ();
	argv_4397.reset ();
	argv_1883.reset ();
	argv_4422.reset ();
	// the public argv_2188 can't be reseted as simply, see 'argv_4900'
}

// @@===========================================@@
argv_934::argv_934 () {
	reset ();
}

void argv_934::reset () {
	argv_1993.reset ();
}

argv_934::~argv_934 () {
	;
}
/*
void argv_934::remove_remaining_tmp_files (argv_876 _dll_directory, argv_876 _plugin_root_dir, argv_876 _log_directory) {
*/
argv_4536 argv_934::argv_820 (argv_876 _conf_filename, argv_876 _log_directory, argv_876 _dll_directory, argv_876 _plugin_root_dir, argv_2338& _kernel_data_ptr) {
	argv_4536 argv_2072 = argv_2182;

	argv_1243 ("argv_934::argv_820 - STARTING", argv_2182, argv_2072);

	remove_remaining_tmp_files (_dll_directory, _plugin_root_dir, _log_directory);
	argv_2072 = argv_3684 (_conf_filename, _log_directory);

	if (argv_2072 == argv_2182) { 
		argv_1243 ("log files open", argv_2182, argv_2072);
		argv_2072 = argv_1746 (_dll_directory, _plugin_root_dir);
		argv_1243 ("temporary files argv_1747", argv_2182, argv_2072);
	}
	
	if (argv_2072 == argv_2182) {
		argv_2072 = argv_2285 (_dll_directory);
		argv_1243 ("native API argv_2274", argv_2182, argv_2072);
	}

	if (argv_2072 == argv_2182) {
		argv_2072 = argv_1993.argv_5021.init (argv_1993.argv_4757, &argv_1993.argv_1798);
		argv_1243 ("xmem manager init", argv_5027, argv_2072);
	}

	if (argv_2072 == argv_5027) {
		argv_2072 = argv_2296 (_dll_directory);
		argv_1243 ("argv_1063 API argv_2274", argv_2182, argv_2072);
	}

	if (argv_2072 == argv_2182) {
		argv_2072 = argv_2276 (_dll_directory);
		argv_1243 ("cipher API argv_2274", argv_2182, argv_2072);
	}
	
	if (argv_2072 == argv_2182) {
		argv_2072 = argv_2280 (_dll_directory);
		argv_1243 ("GMP library argv_2274", argv_2182, argv_2072);
	}

	if (argv_2072 == argv_2182) {
		argv_2072 = argv_2293 (_dll_directory);
		argv_1243 ("public argv_2188 argv_2274", argv_2182, argv_2072);
	}

	if (argv_2072 == argv_2182) {
		argv_1993.argv_1798.argv_2327.argv_2323 (argv_3634, "all APIs argv_2297...[SUCCESS]");	
		argv_2072 = argv_2292 (_plugin_root_dir);
		argv_1243 ("plugin list argv_2274", argv_2182, argv_2072);
	}
	return (argv_2072);
}

argv_4536 argv_934::argv_4891 () {
	argv_4536 argv_2072 = argv_2182;

	argv_2072 = argv_4890 ();
	argv_1243 ("argv_4890", argv_2182, argv_2072);

	if (argv_2072 == argv_2182) {
		argv_2072 = argv_4904 ();
		argv_1243 ("argv_4904", argv_2182, argv_2072);
	}

	if (argv_2072 == argv_2182) {
		argv_2072 = argv_4908 ();
		argv_1243 ("argv_4908", argv_2182, argv_2072);
	}
/*
	if (argv_2072 == argv_2182) {
		argv_2072 =  un_prepare_symbols_2_resolve ();
		argv_1243 ("un_prepare_symbols_2_resolve", argv_2182, argv_2072);
	}
*/
	if (argv_2072 == argv_2182) {
		argv_2072 =  argv_4905 ();
		argv_1243 ("argv_4905", argv_2182, argv_2072);
	}

	if (argv_2072 == argv_2182) {
	}
	return (argv_2072);
}

argv_4536 argv_934::argv_823 (argv_876 _conf_filename, argv_876 _log_directory, argv_876 _dll_directory, argv_876 _plugin_root_dir, argv_2338& _kernel_data_ptr) {
	argv_4536 argv_2072 = argv_2182;

	argv_2072 = argv_2275 ();
	argv_1243 ("argv_2274 all plugins", argv_2182, argv_2072);

	if (argv_2072 == argv_2182) {
		argv_2072 = argv_4247 ();
		argv_1243 ("argv_4243 dependancies", argv_2182, argv_2072);
	}
/*
	if (argv_2072 == argv_2182) { // argv_4243 symbols that require resolution
		argv_2072 = prepare_symbols_2_resolve ();
		argv_1243 ("preparation of symbols to argv_4389", argv_2182, argv_2072);
	}
*/
	if (argv_2072 == argv_2182) { // for each plugin argv_4860, argv_4389 all their symbols
		argv_2072 = argv_4396 ();
		argv_1243 ("symbols resolution", argv_2182, argv_2072);
	}

	if (argv_2072 == argv_2182) { // for each plugin argv_4860, argv_4389 all their symbols
		argv_2072 = argv_4238 ();
		argv_1243 ("post process symbols resolution", argv_2182, argv_2072);
	}

	if (argv_2072 == argv_2182) { // argv_818 the application dependant kernel
		argv_2072 = argv_819 (_conf_filename, _log_directory, _dll_directory, _plugin_root_dir, _kernel_data_ptr);
		argv_1243 ("argv_818 derivated kernel", argv_2182, argv_2072);
	}


	if (argv_2072 == argv_2272) {
		argv_2072 = argv_2182; // remap error argv_976 
	}
	return (argv_2072);
}

argv_4536 argv_934::argv_4892 () {
	argv_4536 argv_2072 = argv_2182;

	argv_2072 = argv_4894 ();
	argv_1243 ("un_load all plugins", argv_2182, argv_2072);

	if (argv_2072 == argv_2182) { 
		argv_2072 = argv_4899 ();
		argv_1243 ("argv_4899", argv_2182, argv_2072);
	}

	if (argv_2072 == argv_2182) { 
		argv_2072 = argv_4900 ();
		argv_1243 ("argv_4900", argv_2182, argv_2072);
	}

	if (argv_2072 == argv_2182) { 
		argv_2072 = argv_4896 ();
		argv_1243 ("argv_4896", argv_2182, argv_2072);
	}

	if (argv_2072 == argv_2182) { 
		argv_2072 = argv_4895 ();
		argv_1243 ("argv_4895", argv_2182, argv_2072);
	}

	if (argv_2072 == argv_2182) { 
		argv_2072 = argv_4901 ();
		argv_1243 ("argv_4901", argv_2182, argv_2072);
	}

	if (argv_2072 == argv_2182) {
		argv_1993.argv_5021.reset ();
		argv_1243 ("xmem manager", argv_2182, argv_2072);
	} 

	if (argv_2072 == argv_2182) {
		argv_2072 = argv_4897 ();
		argv_1243 ("argv_4897", argv_2182, argv_2072);
	}

	if (argv_2072 == argv_2182) {
		argv_2072 = argv_4893 ();
		argv_1243 ("argv_4893", argv_2182, argv_2072);
	}

	if (argv_2072 == argv_2182) {
		argv_2072 = argv_4902 ();
		argv_1243 ("argv_4902", argv_2182, argv_2072);
	}
	return (argv_2072);
}

argv_4536 argv_934::argv_818 (argv_876 _conf_filename, argv_876 _log_directory, argv_876 _dll_directory, argv_876 _plugin_root_dir, argv_2338& _kernel_data_ptr) {
	argv_4536 argv_2072 = argv_2182;

	if (argv_1993.argv_821 == true) {
		argv_2072 = argv_2130;		
	}
	else { // argv_4622 is OK for the operation
		argv_2072 = argv_820 (_conf_filename, _log_directory, _dll_directory, _plugin_root_dir, _kernel_data_ptr);
		argv_1243 ("argv_818 (first half)", argv_2182, argv_2072);

		if (argv_2072 == argv_2182) {
			argv_2072 = argv_823 (_conf_filename, _log_directory, _dll_directory, _plugin_root_dir, _kernel_data_ptr);
			argv_1243 ("argv_818 (second half)", argv_2182, argv_2072);
		}
	} 
	argv_1243 ("argv_818", argv_2182, argv_2072);

	if (argv_2072 == argv_2182) {
		argv_1993.argv_821 = true;
	}
	return (argv_2072);
}

argv_4536 argv_934::argv_4531 () {
	argv_4536 argv_2072 = argv_2182;
	if (argv_1993.argv_821 == false) {
		argv_1993.argv_1798.argv_2327.argv_2323 (argv_1346, "+++ ERROR: argv_934::argv_4531 : argv_2132");
		argv_2072 = argv_2132;
	}
	else { // argv_4622 is OK for the operation
		argv_2072 = argv_4891 ();
		argv_1243 ("argv_4531 (first half)", argv_2182, argv_2072);

		if (argv_2072 == argv_2182) {
			argv_2072 = argv_4892 ();
			argv_1243 ("argv_4531 (second half)", argv_2182, argv_2072);
		}
	}
	argv_1243 ("argv_4531", argv_2182, argv_2072);
	return (argv_2072);
}

argv_4536 argv_934::argv_1796 (argv_4883& _major, argv_4883& _minor) {
	argv_4536 argv_2072 = argv_2182;
	if (argv_1993.argv_821 == true) {
		_major = 20;
		_minor = 12;
	}
	else {
		argv_1993.argv_1798.argv_2327.argv_2323 (argv_1346, "+++ ERROR: argv_934::argv_1796 : argv_2132");
		argv_2072 = argv_2132;
	}
	return (argv_2072);
}

argv_4536 argv_934::argv_1767 (argv_4883&, argv_4883&) {
	argv_4536 argv_2072 = argv_2182;
	if (argv_1993.argv_821 == true) {

	}
	else {
		argv_1993.argv_1798.argv_2327.argv_2323 (argv_1346, "+++ ERROR: argv_934::argv_1767 : argv_2132");
		argv_2072 = argv_2132;
	}
	return (argv_2072);
}

argv_4536 argv_934::argv_1784 (argv_876 _symbol_name, argv_2338& _retrieved_address) {
	argv_4536 argv_2072 = argv_2182;
	argv_2072 = argv_1993.argv_4397.argv_2332 (argv_3927, _symbol_name, _retrieved_address);
	if (argv_2072 != argv_4404) {
		char argv_4846[MAX_PATH];
		string serror = argv_1344 (argv_2072);
		argv_4569 (argv_4846, MAX_PATH, "+++ ERROR: argv_934::argv_1784 - argv_2332 failed for symbol '%s' (argv_1343=%s)", _symbol_name, serror.c_str());
		argv_4846[MAX_PATH - 1] = '\0';
		argv_1993.argv_1798.argv_2327.argv_2323 (argv_1346, argv_4846);
	}

	if (argv_2072 == argv_4404) {
		argv_2072 = argv_2182; // remap error argv_976
	}
	return (argv_2072);
}

argv_4536 argv_934::argv_2285 (argv_876 _dll_directory) {
	argv_4536 argv_2072 = argv_2182;
#if defined (__DEBUG_KERNEL__)
	argv_1993.argv_1798.argv_2327.argv_2323 (argv_1191, "argv_934::argv_2285 - dll argv_3557 : ", argv_1993.argv_3572.c_str());
#endif // #if defined (__DEBUG_KERNEL__)

	if (argv_1993.argv_3574 == false) {
		argv_2072 = argv_1993.argv_4751.init (&argv_1993.argv_1798, argv_1993.argv_3572.c_str());
		if (argv_2072 != argv_2246) {
			string serror = argv_1344 (argv_2072);
			argv_1993.argv_1798.argv_2327.argv_2323 (argv_1346, "+++ ERROR: argv_934::argv_2285 - argv_4751::init failed ! - errno = ", serror.c_str());
		}
		else {
			argv_1993.argv_4757 = &argv_1993.argv_4751.toolset;
		}
	}
	else {
		argv_1993.argv_1798.argv_2327.argv_2323 (argv_1346, "+++ ERROR: argv_934::argv_2285 - argv_2136");
		argv_2072 = argv_2136;
	}

	// remap error argv_976
	if (argv_2072 == argv_2246) {
		argv_2072						= argv_2182;
		argv_1993.argv_3574	= true;
	}
	return (argv_2072);
}

argv_4536 argv_934::argv_4897 () {
	argv_4536 argv_2072	= argv_2182;
	argv_2072		= argv_1993.argv_4751.reset ();
	if (argv_2072 == argv_2246) {
		argv_2072 = argv_2182; // remap error argv_976
	}
	argv_1993.argv_3574 = false;
	return (argv_2072);
}

argv_4536 argv_934::argv_2296 (argv_876 _dll_directory) {
	argv_4536 argv_2072 = argv_2182;
#if defined (__DEBUG_KERNEL__)
	argv_1993.argv_1798.argv_2327.argv_2323 (argv_1191, "argv_934::argv_2296 - dll argv_3557 : ", argv_1993.argv_1064.c_str());
#endif // #if defined (__DEBUG_KERNEL__)

	if (argv_1993.argv_4911 == false) {
		argv_2072 = argv_1993.argv_1068.init (&argv_1993.argv_1798, argv_1993.argv_1064.c_str());
		if (argv_2072 != argv_2246) {
			string serror = argv_1344 (argv_2072);
			argv_1993.argv_1798.argv_2327.argv_2323 (argv_1346, "+++ ERROR: argv_934::argv_2296 - argv_1068::init failed ! - errno = ", serror.c_str());
		}
		else {
			argv_2072							= argv_2182;
			argv_1993.argv_4911	= true;	
		}
	}
	else {
		argv_1993.argv_1798.argv_2327.argv_2323 (argv_1346, "+++ ERROR: argv_934::argv_2296 - argv_2136");
		argv_2072 = argv_2136;
	}
	return (argv_2072);
}

argv_4536 argv_934::argv_4901 () {
	argv_4536 argv_2072	= argv_2182;
	argv_2072		= argv_1993.argv_1068.reset ();
	if (argv_2072 == argv_2246) {
		argv_2072 = argv_2182; // remap error argv_976
	}
	argv_1993.argv_4911 = false;
	return (argv_2072);
}

argv_4536 argv_934::argv_2276 (argv_876 _dll_directory) {
	argv_4536 argv_2072 = argv_2182;
#if defined (__DEBUG_KERNEL__)
	argv_1993.argv_1798.argv_2327.argv_2323 (argv_1191, "argv_934::argv_2285 - dll argv_3557 : ", argv_1993.argv_931.c_str());
#endif // #if defined (__DEBUG_KERNEL__)

	if (argv_1993.argv_1169 == false) {
		argv_2072 = argv_1993.argv_1174.init (&argv_1993.argv_1798, argv_1993.argv_931.c_str());
		if (argv_2072 != argv_2246) {
			string serror = argv_1344 (argv_2072);
			argv_1993.argv_1798.argv_2327.argv_2323 (argv_1346, "+++ ERROR: argv_934::argv_2276 - argv_1174::init failed ! - errno=", serror.c_str());
		}
		else {
			argv_2072						= argv_2182;
			argv_1993.argv_1169	= true;
		}
	}
	else {
		argv_1993.argv_1798.argv_2327.argv_2323 (argv_1346, "+++ ERROR: argv_934::argv_2276 - argv_2136");
		argv_2072 = argv_2136;
	}
	return (argv_2072);
}

argv_4536 argv_934::argv_4895 () {
	argv_4536 argv_2072	= argv_2182;
	argv_2072		= argv_1993.argv_1174.reset ();
	if (argv_2072 == argv_2246) {
		argv_2072 = argv_2182; // remap error argv_976
	}
	argv_1993.argv_1169 = false;
	return (argv_2072);
}

argv_4536 argv_934::argv_2280 (argv_876 _dll_directory) {
	argv_4536 argv_2072 = argv_2182;

	if (argv_1993.argv_1843 == false) {
		string gmp_dll_name = _dll_directory;
#if defined (__WIN32_OS__)
		gmp_dll_name		= gmp_dll_name + argv_1993.argv_1798.argv_3728 + "gmp.dll";
#endif // #if defined (__WIN32_OS__)
#if defined (__LINUX_OS__)
		gmp_dll_name		= gmp_dll_name + argv_1993.argv_1798.argv_3728 + "libgmp.so";
#endif // #if defined (__LINUX_OS__)
		argv_2072 = argv_1993.argv_1883.argv_2284 (gmp_dll_name.c_str());

		if (argv_2072 == argv_1857) { // remap error argv_976
			argv_1993.argv_4422.init (&argv_1993.argv_1883);
			argv_1993.argv_1843	= true;
			argv_2072					= argv_2182;	
		}
		else {
			argv_1993.argv_1798.argv_2327.argv_2323 (argv_1346, "+++ ERROR: failed to argv_2274 dll : ", gmp_dll_name.c_str());
		}
	}
	else {
		argv_1993.argv_1798.argv_2327.argv_2323 (argv_1346, "+++ ERROR: argv_934::argv_2280 - argv_2136");
		argv_2072 = argv_2136;
	}
	return (argv_2072);
}

argv_4536 argv_934::argv_4896 () {
	argv_4536 argv_2072 = argv_2182;
	argv_1993.argv_1883.argv_4935 ();
	return (argv_2072);
}

argv_4536 argv_934::argv_2293 (argv_876 _dll_directory) {
	argv_4536 argv_2072 = argv_2182;

	if (argv_1993.argv_4327 == false) {
		string pub_key_filename = _dll_directory;
		pub_key_filename = pub_key_filename + argv_1993.argv_1798.argv_3728 + "rsa_pub_key.txt";
		argv_1993.argv_4326.construct (argv_1993.argv_1883);

		// generate the symmetric argv_2188
		string symetric_key = argv_1743 ();

		// argv_2274 the public argv_2188 using the symmetric argv_2188
		argv_2072 = argv_1993.argv_4422.argv_2283 (pub_key_filename.c_str(), symetric_key.c_str(), argv_1993.argv_4326);

		// erase the symmetric argv_2188
		symetric_key = "AABBCCDDEEFF";

		argv_1993.argv_4327 = true;
	}
	else {
		argv_1993.argv_1798.argv_2327.argv_2323 (argv_1346, "+++ ERROR: argv_934::argv_2293 - argv_2136");
		argv_2072 = argv_2136;
	}

	if (argv_2072 == argv_1857) { // remap error argv_976
		argv_2072 = argv_2182;	
	}
	return (argv_2072);
}

argv_4536 argv_934::argv_4900 () {
	argv_4536 argv_2072 = argv_2182;
	if (argv_1993.argv_4327 == false) {
		argv_2072 = argv_2137;
	}
	else {
		argv_1993.argv_4326.argv_1232 (argv_1993.argv_1883);
		argv_1993.argv_4327 = false;
	}
	return (argv_2072);
}

argv_4536 argv_934::argv_2292 (argv_876 _plugin_directory) {
	argv_4536 argv_2072 = argv_2182;
	string full_filename = _plugin_directory + argv_1993.argv_1798.argv_3728 + argv_1993.argv_1798.argv_3903;
	if (argv_1426 (&argv_1993.argv_1798, argv_1993.argv_4757, full_filename.c_str()) == false) {

		argv_1993.argv_1798.argv_2327.argv_2323 (argv_1346, "+++ ERROR: could not find plugin list argv_1424 ! - argv_1424 was : ", full_filename.c_str());
		argv_2072 = argv_2167;		
	}
	else { // the plugin list argv_1424 exists
		argv_1993.argv_1798.argv_2327.argv_2323 (argv_1191, "loading plugin list argv_1424 : ", full_filename.c_str());

		// mmap the plugin list argv_1424
		argv_888 mapper_tmp;
		argv_4881 * ciphered_ptr		= NULL;
		argv_4883 deciphered_ptr		= (argv_4883) NULL;
		argv_4883 ciphered_size		= 0;
		argv_4883 deciphered_size	= 0;

		bool bret = mapper_tmp.argv_2532 (full_filename.c_str(), argv_2534, ciphered_ptr, ciphered_size);
		if (bret == false) {
			argv_1993.argv_1798.argv_2327.argv_2323 (argv_1346, "+++ ERROR: argv_934::argv_2292 - mmap failed for argv_1424 : ", full_filename.c_str());
			argv_2072 = argv_2170;
		}
		else { // plugin list argv_1424 mmapped succesfully
			// decipher the plugin list argv_1424 using the public argv_2188
			argv_2072 = argv_1993.argv_1174.argv_1206 (argv_1993.argv_4757, &argv_1993.argv_1883, argv_1993.argv_4326, (argv_4883) ciphered_ptr, ciphered_size, deciphered_ptr, deciphered_size);
			if (argv_2072 != argv_1173) {
				char argv_4846[MAX_PATH];
				string serror = argv_1344 (argv_2072);
				argv_4569 (argv_4846, MAX_PATH, "+++ ERROR: argv_934::argv_2292: decypher_file failed for argv_1424 : %s (errno: %s)", full_filename.c_str(), serror.c_str());
				argv_4846[MAX_PATH - 1] = '\0';
				argv_1993.argv_1798.argv_2327.argv_2323 (argv_1346, argv_4846);
			}
			else { // argv_1424 deciphered succesfully
				// parse the deciphered plugin list
				argv_2072 = argv_3716 ((argv_4881 *) deciphered_ptr, deciphered_size, _plugin_directory);

				// free the argv_826 associated argv_5011 the deciphered plugin list argv_1424
				argv_1993.argv_4757->argv_3584 ((argv_2338) deciphered_ptr, deciphered_size);
			}

			// argv_967 the mmapped ciphered plugin list argv_1424.
			mapper_tmp.argv_971 ();
		}
	}
	return (argv_2072);
}

argv_4536 argv_934::argv_4899 () {
	argv_4536 argv_2072	= argv_2182;
	
	argv_1993.argv_4975.clear ();
	vector<string>().swap (argv_1993.argv_4975);

	argv_1993.argv_4976.clear ();
	vector<string>().swap (argv_1993.argv_4976);
	return (argv_2072);
}
/*
argv_4536 argv_934::argv_4395 (map<string, argv_1082 *>::iterator& _iter_loaded, argv_876 _symbol_name, bool _duplicate_allowed) {
	argv_4536 argv_2072 = argv_2182;
	if (strlen(_symbol_name) == 0) {
		argv_2072 = argv_2115;
	}
	else { // parameters are ok
		argv_4883 plugin_type = _iter_loaded->second->argv_4860;
		argv_4883 argv_4761 = _iter_loaded->second->argv_4761;
		argv_866 *	loader_ptr		= NULL;
		argv_4881 *			solved_address	= NULL;

		// retrieve the COFF loader associated argv_5011 the argv_1148 plugin
		loader_ptr = _iter_loaded->second->argv_1750 ();
		// argv_4389 this symbol using the argv_3547 (dependancy list)
		map<string, argv_866 *> dependancy_list_ptr = _iter_loaded->second->argv_3547;
		argv_2072 = loader_ptr->argv_4389 (_iter_loaded->first.c_str(), _iter_loaded->first.c_str(), _symbol_name, dependancy_list_ptr, solved_address);
		if (argv_2072 != argv_993) {
			char argv_4846[MAX_PATH];
			string serror = argv_1344 (argv_2072);
			argv_4569 (argv_4846, MAX_PATH, "+++ ERROR: argv_934::argv_4395 - argv_4389 failed for symbol '%s' of plugin '%s' [plugin_type=%u|argv_4761=%u] (argv_1343=%s)", _symbol_name, _iter_loaded->first.c_str(), plugin_type, argv_4761, serror.c_str());
			argv_4846[MAX_PATH - 1] = '\0';
			argv_1993.argv_1798.argv_2327.argv_2323 (argv_1346, argv_4846);
		}
		else { // symbol resolved succesfully
			// argv_646 this resolved symbol to the shelf
#if defined (__DEBUG_KERNEL__)
			char argv_4846[MAX_PATH];
			argv_4569 (argv_4846, MAX_PATH, "argv_656: plugin_type=%d, argv_4761=%d, _symbol_name=%s, solved_address=0x%X, duplicate_allowed=%d", plugin_type, argv_4761, _symbol_name, solved_address, _duplicate_allowed);
			argv_4846[MAX_PATH - 1] = '\0';
			argv_1993.argv_1798.argv_2327.argv_2323 (argv_1191, argv_4846);
#endif // #if defined (__DEBUG_KERNEL__)
			argv_2072 = argv_1993.argv_4397.argv_656 (&argv_1993.argv_1798, plugin_type, argv_4761, _symbol_name, solved_address, _duplicate_allowed);
			if (argv_2072 != argv_4404) {
				char argv_4846[MAX_PATH];
				string serror = argv_1344 (argv_2072);
				argv_4569 (argv_4846, MAX_PATH, "+++ ERROR: argv_934::argv_4395 - argv_656 failed for symbol '%s' of plugin '%s' [plugin_type=%u|argv_4761=%u] (argv_1343=%s)", _symbol_name, _iter_loaded->first.c_str(), plugin_type, argv_4761, serror.c_str());
				argv_4846[MAX_PATH - 1] = '\0';
				argv_1993.argv_1798.argv_2327.argv_2323 (argv_1346, argv_4846);
			}
		}
	}

	if ((argv_2072 == argv_993) || (argv_2072 == argv_4404)) {
		argv_2072 = argv_2182; // remap error argv_976
	}
	return (argv_2072);
}

argv_4536 argv_934::argv_4907 () {
	argv_4536 argv_2072 = argv_2182;
	return (argv_2072);
}
*/

/*
argv_4536 argv_934::resolve_all_symbols_of_profile (map<string, argv_1082 *>::iterator& _iter_loaded, argv_1123& _resolve_query) {
	argv_4536 argv_2072 = argv_2182;
	bool duplicate_allowed;
	argv_4883 unused;	
	_resolve_query.argv_1791 (unused, duplicate_allowed);
	// iterate through all symbols that are to be resolved for this plugin
	string symbol_2_resolve;
	bool bret = _resolve_query.argv_1765 (symbol_2_resolve);
	while (bret == true) { // argv_4389 argv_3677 symbol for this plugin
		argv_2072 = argv_4395 (_iter_loaded, symbol_2_resolve.c_str(), duplicate_allowed);
		if (argv_2072 != argv_2182) {
			char argv_4846[MAX_PATH];
			string serror = argv_1344 (argv_2072);
			argv_4569 (argv_4846, MAX_PATH, "+++ ERROR: argv_934::resolve_all_symbols_of_profile - argv_4395 failed for plugin '%s' and symbol '%s' [plugin_type=%u|argv_4761=%u] (argv_1343=%s)", _iter_loaded->first.c_str(), symbol_2_resolve.c_str(), _iter_loaded->second->argv_4860, _iter_loaded->second->argv_4761, serror.c_str());
			argv_4846[MAX_PATH - 1] = '\0';
			argv_1993.argv_1798.argv_2327.argv_2323 (argv_1346, argv_4846);
			break;
		}
#if defined (__DEBUG_KERNEL__)
		else {
			char argv_4846[MAX_PATH];
			argv_4569 (argv_4846, MAX_PATH, "resolved symbol '%s' for plugin '%s'", symbol_2_resolve.c_str(), _iter_loaded->first.c_str());
			argv_4846[MAX_PATH - 1] = '\0';
			argv_1993.argv_1798.argv_2327.argv_2323 (argv_1191, "");
		}
#endif // #if defined (__DEBUG_KERNEL__)
		bret = _resolve_query.argv_1783 (symbol_2_resolve);
	}
	return (argv_2072);
}*/

// NOTICE: we lookup the profile "by argv_3557" for unique plugins.
/*
argv_4536 argv_934::resolve_one_unique_plugin_symbols (map<string, argv_1082 *>::iterator& _iter_loaded) {
	argv_4536 argv_2072 = argv_2182;
	map<string, argv_1123>::iterator query_iter;
	query_iter = argv_1993.m_unique_resolve_query.find (_iter_loaded->first); // lookup by argv_3557
	if (query_iter == argv_1993.m_unique_resolve_query.end()) {
		char argv_4846[MAX_PATH]; 
		argv_4569 (argv_4846, MAX_PATH, "+++ ERROR: argv_934::resolve_one_unique_plugin_symbols - lookup argv_4389 profile failed for plugin '%s' (plugin argv_4860: %u, argv_4761: %u)", _iter_loaded->first.c_str(), _iter_loaded->second->argv_4860, _iter_loaded->second->argv_4761);
		argv_4846[MAX_PATH - 1] = '\0';
		argv_1993.argv_1798.argv_2327.argv_2323 (argv_1346, argv_4846);
		argv_2072 = argv_2176;
	}
	else {
		argv_2072 = resolve_all_symbols_of_profile (_iter_loaded, query_iter->second);
	}
	return (argv_2072);
}*/

/*
argv_4536 argv_934::resolve_one_multiple_plugin_symbols (map<string, argv_1082 *>::iterator& _iter_loaded) {
	argv_4536 argv_2072 = argv_2182;
	map<argv_4883, argv_1123>::iterator query_iter;
	// lookup the argv_4389 profile associated argv_5011 this plugin argv_4860
	query_iter = argv_1993.m_resolve_query.find (_iter_loaded->second->argv_4860); // lookup by argv_4860
	if (query_iter == argv_1993.m_resolve_query.end()) {
		char argv_4846[MAX_PATH]; 
		argv_4569 (argv_4846, MAX_PATH, "+++ ERROR: argv_934::resolve_one_multiple_plugin_symbols - lookup argv_4389 profile failed for plugin '%s' (plugin argv_4860: %u, argv_4761: %u)", _iter_loaded->first.c_str(), _iter_loaded->second->argv_4860, _iter_loaded->second->argv_4761);
		argv_4846[MAX_PATH - 1] = '\0';
		argv_1993.argv_1798.argv_2327.argv_2323 (argv_1346, argv_4846);
		argv_2072 = argv_2176;
	} 
	else { // found the corresponding argv_4389 profile
		argv_2072 = resolve_all_symbols_of_profile (_iter_loaded, query_iter->second);
	}
	return (argv_2072);
}*/

// we use 2 different structures :
// - argv_3677 used only when loading : it is a structure that permits to locate rapidly
//   the plugin by target argv_4860 because the argv_2274 needs to fill in different fields
//   asynchronously.
// - argv_3677 used by the kernel plugin : it is a simple linked list that is generated
//   after all symbols are resolved.
/*
	argv_3927=0,
	argv_3929,
	argv_3926,	
	argv_3925,
	argv_3928, // just to know how many plugin types we have	
	argv_3930, 
*/
/*
argv_4536 argv_934::argv_4394 (map<string, argv_1082 *>::iterator& _iter_loaded) {
	argv_4536 argv_2072 = argv_2182;
	argv_4883 argv_4860 = _iter_loaded->second->argv_4860;
	if ((argv_4860==argv_3926) || 
		(argv_4860==argv_3925)) { 
		argv_2072 = resolve_one_multiple_plugin_symbols (_iter_loaded);
	}
	else {
		argv_2072 = resolve_one_unique_plugin_symbols (_iter_loaded);
	}
	return (argv_2072);
}*/

argv_4536 argv_934::argv_4395 (map<string, argv_1082 *>::iterator& _iter_loaded, argv_876 _symbol_name, bool _duplicate_allowed) {
	argv_4536 argv_2072 = argv_2182;
	if (strlen(_symbol_name) == 0) {
		argv_2072 = argv_2115;
	}
	else { // parameters are ok
		argv_4883 plugin_type = _iter_loaded->second->argv_4860;
		argv_4883 argv_4761 = _iter_loaded->second->argv_4761;
		argv_866 *	loader_ptr		= NULL;
		argv_4881 *			solved_address	= NULL;

		// retrieve the COFF loader associated argv_5011 the argv_1148 plugin
		loader_ptr = _iter_loaded->second->argv_1750 ();
		// argv_4389 this symbol using the argv_3547 (dependancy list)
		map<string, argv_866 *> dependancy_list_ptr = _iter_loaded->second->argv_3547;
		argv_2072 = loader_ptr->argv_4389 (_iter_loaded->first.c_str(), _iter_loaded->first.c_str(), _symbol_name, dependancy_list_ptr, solved_address);
		if (argv_2072 != argv_993) {
			char argv_4846[MAX_PATH];
			string serror = argv_1344 (argv_2072);
			argv_4569 (argv_4846, MAX_PATH, "+++ ERROR: argv_934::argv_4395 - argv_4389 failed for symbol '%s' of plugin '%s' [plugin_type=%u|argv_4761=%u] (argv_1343=%s)", _symbol_name, _iter_loaded->first.c_str(), plugin_type, argv_4761, serror.c_str());
			argv_4846[MAX_PATH - 1] = '\0';
			argv_1993.argv_1798.argv_2327.argv_2323 (argv_1346, argv_4846);
		}
		else { // symbol resolved succesfully
			// argv_646 this resolved symbol to the shelf
#if defined (__DEBUG_KERNEL__)
			char argv_4846[MAX_PATH];
			argv_4569 (argv_4846, MAX_PATH, "argv_656: plugin_type=%d, argv_4761=%d, _symbol_name=%s, solved_address=0x%X, duplicate_allowed=%d", plugin_type, argv_4761, _symbol_name, solved_address, _duplicate_allowed);
			argv_4846[MAX_PATH - 1] = '\0';
			argv_1993.argv_1798.argv_2327.argv_2323 (argv_1191, argv_4846);
#endif // #if defined (__DEBUG_KERNEL__)
			argv_2072 = argv_1993.argv_4397.argv_656 (&argv_1993.argv_1798, plugin_type, argv_4761, _symbol_name, solved_address, _duplicate_allowed);
			if (argv_2072 != argv_4404) {
				char argv_4846[MAX_PATH];
				string serror = argv_1344 (argv_2072);
				argv_4569 (argv_4846, MAX_PATH, "+++ ERROR: argv_934::argv_4395 - argv_656 failed for symbol '%s' of plugin '%s' [plugin_type=%u|argv_4761=%u] (argv_1343=%s)", _symbol_name, _iter_loaded->first.c_str(), plugin_type, argv_4761, serror.c_str());
				argv_4846[MAX_PATH - 1] = '\0';
				argv_1993.argv_1798.argv_2327.argv_2323 (argv_1346, argv_4846);
			}
		}
	}

	if ((argv_2072 == argv_993) || (argv_2072 == argv_4404)) {
		argv_2072 = argv_2182; // remap error argv_976
	}
	return (argv_2072);
}

argv_4536 argv_934::argv_4907 () {
	argv_4536 argv_2072 = argv_2182;
	return (argv_2072);
}

argv_4536 argv_934::argv_4394 (map<string, argv_1082 *>::iterator& _iter_loaded) {
	argv_4536 argv_2072 = argv_2182;
	string exported_symbol;
	argv_4883 argv_4860 = _iter_loaded->second->argv_4860;
	bool duplicate_allowed	= false;
	if ((argv_4860 == argv_3926) || (argv_4860 == argv_3925)) {
		duplicate_allowed = true;
	}

	bool bret = _iter_loaded->second->argv_1762 (exported_symbol);
	while (bret == true) {
		argv_2072 = argv_4395 (_iter_loaded, exported_symbol.c_str(), duplicate_allowed);
		if (argv_2072 != argv_2182) {
			string serror = argv_1344 (argv_2072);
			char argv_4846[MAX_PATH];
			argv_4569 (argv_4846, MAX_PATH, "+++ ERROR: failed to argv_4389 symbol '%s' for plugin '%s' ! - argv_1343 = %s", exported_symbol.c_str(), _iter_loaded->first.c_str(), serror.c_str());
			argv_4846[MAX_PATH - 1] = '\0';
			argv_1993.argv_1798.argv_2327.argv_2323 (argv_1346, argv_4846);
			break;
		}
		bret = _iter_loaded->second->argv_1780 (exported_symbol);
	}
	return (argv_2072);
}

// iterate through all exported symbols for argv_1148 plugin and argv_4389 them
argv_4536 argv_934::argv_4906 () {
	argv_4536 argv_2072 = argv_2182;
	return (argv_2072);
}

argv_4536 argv_934::argv_4396 () {
	argv_4536 argv_2072 = argv_2182;
	map<string, argv_1082 *>::iterator iter_loaded;
#if defined (__DEBUG_KERNEL__)
	argv_1993.argv_1798.argv_2327.argv_2323 (argv_3634, "resolving symbols : number of argv_2297 plugins : ", argv_1993.argv_2379.size ());
#endif // #if defined (__DEBUG_KERNEL__)

	// iterate through all possible plugins and solve their respective symbols
	for (iter_loaded=argv_1993.argv_2379.begin() ; iter_loaded != argv_1993.argv_2379.end() ; ++iter_loaded) {
#if defined (__DEBUG_KERNEL__)
		argv_1993.argv_1798.argv_2327.argv_2323 (argv_3634, "resolving symbols for plugin : ", iter_loaded->first.c_str());
#endif // #if defined (__DEBUG_KERNEL__)

		argv_2072 = argv_4394 (iter_loaded);
		if (argv_2072 != argv_2182) {
			char argv_4846[MAX_PATH];
			string serror = argv_1344 (argv_2072);
			argv_4569 (argv_4846, MAX_PATH, "+++ ERROR: argv_934::argv_4396 - argv_4394 failed for plugin '%s' (argv_1343=%s)", iter_loaded->first.c_str(), serror.c_str());
			argv_4846[MAX_PATH - 1] = '\0';
			argv_1993.argv_1798.argv_2327.argv_2323 (argv_1346, argv_4846);
			break;
		}
	}
	return (argv_2072);
}

argv_4536 argv_934::argv_4908 () {
	argv_4536 argv_2072 = argv_2182;
	return (argv_2072);
}

/*
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ Plugin list example
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
general_plugin.plugin
argv_2117.plugin
fake_detect.plugin
fake_detect_2.plugin
fake_scan.plugin
fake_scan_2.plugin
file_type_result.plugin
*/
argv_4536 argv_934::argv_3716 (argv_4881 * _buf_ptr, argv_4883 _size, argv_876 _plugin_directory) {
	argv_4536 argv_2072 = argv_2182;
	if ((_buf_ptr == NULL) || (_size == 0) || (_plugin_directory == NULL)) {
		argv_2072 = argv_2139;
	}
	else { // parameters are OK
		string argv_1474;
		argv_4883 i			= 0;
		bool commented	= false;

		while (i < _size) {
			commented = false;

			// argv_1090 white spaces
			while ((i< _size) && ((_buf_ptr[i]==' ') || (_buf_ptr[i]=='\n') || (_buf_ptr[i]=='\t') || (_buf_ptr[i]=='\r') || (_buf_ptr[i]=='\n'))) {
				i++;
			}

			if (i >=_size) {
				break;
			}

			// check whether the argv_2250 was commented
			if (((i+1) < _size) && (_buf_ptr[i]=='/') && (_buf_ptr[i+1]=='/')) {
				commented = true;
			}

			argv_1474 = "";
			// argv_1090 the rest of the argv_2250
			while ((i< _size) && (_buf_ptr[i] != '\r') && (_buf_ptr[i] != '\n')) {
				argv_1474 += _buf_ptr[i];
				i++;
			}

			if (argv_1474.size() > 0) {
				if (commented == true) {
					argv_1993.argv_1798.argv_2327.argv_2323 (argv_1191, "ignoring commented plugin : ", argv_1474.c_str());	
				}
				else {
					argv_1993.argv_1798.argv_2327.argv_2323 (argv_1191, "==>", argv_1474.c_str(), "<==");
					// build and save the absolute argv_1474 from relative argv_1474
					string full_filename = _plugin_directory;
					full_filename = full_filename + argv_1993.argv_1798.argv_3728 + argv_1474;
					argv_1993.argv_4975.push_back (full_filename);

					// also save the relative argv_3557 as it is necessary for argv_1726 use
					argv_1993.argv_4976.push_back (argv_1474);
				}
			}
		}
	}
	return (argv_2072);
}

argv_4536 argv_4903 () {
	argv_4536 argv_2072 = argv_2182;
	return (argv_2072);
}

argv_4536 argv_934::argv_2290 (argv_876 _relat_name, argv_876 _abs_name, argv_1082 * _plugin_ptr) {
	argv_4536 argv_2072 = argv_2182;
	char argv_4846[MAX_PATH];

	// ensure that this plugin was not already argv_2297
	map<string, argv_1082 *>::iterator iter_local;
	iter_local = argv_1993.argv_2379.find (_relat_name);
	if (iter_local != argv_1993.argv_2379.end()) {
		argv_1993.argv_1798.argv_2327.argv_2323 (argv_1346, "+++ ERROR: argv_934::argv_2290: plugin already argv_2297 ! - argv_3557 : ", _relat_name);
		argv_2072 = argv_2173;
	}
	else { // the plugin was not argv_2297 yet
		argv_2072 = _plugin_ptr->init (&argv_1993.argv_1798, argv_1993.argv_4757, &argv_1993.argv_1068, &argv_1993.argv_1174, &argv_1993.argv_5021);
		if (argv_2072 != argv_3922) {
			string erstring = argv_1344 (argv_2072);
			argv_4569 (argv_4846, MAX_PATH, "+++ ERROR: argv_934::argv_2290 - plugin init failed for plugin '%s' - argv_1343=%s", _relat_name, erstring.c_str());
			argv_4846[MAX_PATH - 1] = '\0';
			argv_1993.argv_1798.argv_2327.argv_2323 (argv_1346, argv_4846);
			argv_2072 = argv_2171;
		}
		else { // plugin was succesfully initialized
			argv_2072 = _plugin_ptr->argv_2278 (&argv_1993.argv_1883, argv_1993.argv_4326, _abs_name);
			if (argv_2072 != argv_3922) {
				string erstring = argv_1344 (argv_2072);
				argv_4569 (argv_4846, MAX_PATH, "+++ ERROR: argv_934::argv_2290 - plugin argv_2274 from argv_1424 failed for plugin '%s' - argv_1343=%s", _relat_name, erstring.c_str());
				argv_4846[MAX_PATH - 1] = '\0';
				argv_1993.argv_1798.argv_2327.argv_2323 (argv_1346, argv_4846);
				argv_2072 = argv_2171;
			}
			else { // plugin was succesfully argv_2297 from it's corresponding argv_1424
				argv_2072 = argv_2182;
#if defined (__DEBUG_KERNEL__)
				argv_1993.argv_1798.argv_2327.argv_2323 (argv_3634, "plugin argv_2297 successfully : ", _abs_name);
#endif // #if defined (__DEBUG_KERNEL__)
				// save up the coff loader into the map for the "argv_4389 symbol" step
				argv_1993.argv_2379[_relat_name] = _plugin_ptr;
			}
		}
	}
	return (argv_2072);
}

argv_4536 argv_934::argv_4898 () {
	argv_4536 argv_2072 = argv_2182;
	return (argv_2072);
}

argv_4536 argv_934::argv_2275 () {
	argv_4536 argv_2072 = argv_2182;
	argv_4883 nb_plugin = argv_1993.argv_4975.size ();
	argv_1082 * plugin_ptr = NULL;

	for (argv_4883 i=0 ; i<nb_plugin ; i++) {
		// allocate a new plugin
		plugin_ptr = new (std::nothrow) argv_1082;
		if (plugin_ptr == NULL) {
			argv_1993.argv_1798.argv_2327.argv_2323 (argv_1346, "+++ ERROR: argv_934::argv_2275 - memory allocation failed !");
			argv_2072 = argv_2144;
			break;
		}

		argv_2072 = argv_2290 (argv_1993.argv_4976[i].c_str(), argv_1993.argv_4975[i].c_str(), plugin_ptr);
		if (argv_2072 != argv_2182) {
			string serror = argv_1344 (argv_2072);
			char argv_4846[MAX_PATH];
			argv_4569 (argv_4846, MAX_PATH, "argv_934::argv_2275 - failed to argv_2274 plugin '%s' - errno = %s", argv_1993.argv_4975[i].c_str(), serror.c_str());
			argv_4846[MAX_PATH - 1] = '\0';
			argv_1993.argv_1798.argv_2327.argv_2323 (argv_1346, argv_4846);
			break;
		}
	}
	return (argv_2072);
}

argv_4536 argv_934::argv_4894 () {
	argv_4536 argv_2072 = argv_2182;
	return (argv_2072);
}

void argv_934::argv_1243 (argv_876 _msg, argv_4536 _success_code, argv_4536 _actual_code) {
	if (_actual_code != _success_code) {
		char argv_4846[MAX_PATH];
		string serror = argv_1344 (_actual_code);
		argv_4569 (argv_4846, MAX_PATH, "%s...[FAILED] - errno = %s", _msg, serror.c_str());
		argv_4846[MAX_PATH - 1] = '\0';
		argv_1993.argv_1798.argv_2327.argv_2323 (argv_1346, argv_4846);
		//log_stat (argv_4846, argv_1993.nb_kb_debug, argv_1993.nb_handle_debug);
	}
	else { // operation succeeded 
#if defined (__DEBUG_KERNEL__)
		argv_1993.argv_1798.argv_2327.argv_2323 (argv_1191, _msg, "...[SUCCESS]");
		{
			char argv_4846[MAX_PATH];
			argv_4569 (argv_4846, MAX_PATH, "%s...[SUCCESS]", _msg);
			argv_4846[MAX_PATH - 1] = '\0';
			//log_stat (argv_4846, argv_1993.nb_kb_debug, argv_1993.nb_handle_debug);
		}
#endif // #if defined (__DEBUG_KERNEL__)
	}
}


argv_4536 argv_934::argv_3684 (argv_876 _conf_filename, argv_876 _log_directory) {
	argv_4536 argv_2072 = argv_2182;

	if (argv_1993.argv_821 == false) {
		// open the log argv_1424 that contains general messages
		string full_filename;
		argv_1744 (_log_directory, "", "log", "txt", full_filename, false);
		#if defined (__LINUX_OS__)
		cerr << "opening log : " << full_filename.c_str() << endl;
		#endif // #if defined (__LINUX_OS__)
		argv_1993.argv_1798.argv_2327.argv_3686 (full_filename.c_str(), &argv_1993.argv_1798.argv_2327, "[log] ");
		argv_1993.argv_1798.argv_2327.argv_2323 (argv_3634, "booting kernel");
	}
	else {
		argv_1993.argv_1798.argv_2327.argv_2323 (argv_1346, "+++ ERROR: argv_934::argv_3684 : argv_2130");
		argv_2072 = argv_2130;
	}
	return (argv_2072);
}

argv_4536 argv_934::argv_4902 () {
	argv_4536 argv_2072	= argv_2182;
#if defined (__DEBUG_KERNEL__)
	argv_1993.argv_1798.argv_2327.argv_2323 (argv_1191, "closing all log files");
#endif // #if defined (__DEBUG_KERNEL__)
	argv_1993.argv_1798.argv_2327.argv_2323			(argv_690, "<<< SHUTDOWN KERNEL >>>");

	// delete all log files (DEBUG PURPOSE ONLY)
	string file_2_delete;
	file_2_delete = argv_1993.argv_1798.argv_2327.argv_1760 ();
	argv_1993.argv_1798.argv_2327.argv_970 ();
	argv_1221 (file_2_delete.c_str());

	return (argv_2072);
}


void argv_934::remove_remaining_tmp_files (argv_876 _dll_directory, argv_876 _plugin_root_dir, argv_876 _log_directory) {
	argv_1220 (_dll_directory,		"*.delme");
	argv_1220 (_plugin_root_dir,	"*.delme");
	argv_1220 (_log_directory,		"*.txt");
} 


// because we are not allowed to use original files (hot update)
argv_4536 argv_934::argv_1746 (argv_876 _dll_directory, argv_876 _plugin_root_dir) {
	argv_4536 argv_2072							= argv_2182;
	string dll_name						= _dll_directory;
	string argv_1275				= _dll_directory;
	string native_api_dll_orig_name		= argv_1275 + argv_1993.argv_1798.argv_3728 + argv_1993.argv_1798.argv_3573;
	string compress_api_dll_orig_name	= argv_1275 + argv_1993.argv_1798.argv_3728 + argv_1993.argv_1798.argv_1065;
	string cipher_api_dll_orig_name		= argv_1275 + argv_1993.argv_1798.argv_3728 + argv_1993.argv_1798.argv_932;
#if defined (__WIN32_OS__)
	string suffix						= "dll.delme";
#endif
#if defined (__LINUX_OS__)
	string suffix						= "so.delme";
#endif // #if defined (__LINUX_OS__)

	// generate the NATIVE API's temp DLL argv_3557
	argv_2072 = argv_1744 (_dll_directory, native_api_dll_orig_name.c_str(), "native_api", suffix.c_str(), argv_1993.argv_3572);
	if (argv_2072 != 0) {
		argv_1993.argv_1798.argv_2327.argv_2323 (argv_1346, "+++ ERROR: argv_934::argv_1746 - failed to generate NATIVE API DLL argv_4846 argv_1424 : ", native_api_dll_orig_name.c_str());
		argv_2072 = argv_2126;
	}
	else {
		argv_2072 = argv_2182;
#if defined (__DEBUG_KERNEL__)
		argv_1993.argv_1798.argv_2327.argv_2323 (argv_1191, "native_api_dll_orig_name = ", native_api_dll_orig_name.c_str());
		argv_1993.argv_1798.argv_2327.argv_2323 (argv_1191, "argv_3572 = ", argv_1993.argv_3572.c_str());
#endif // #if defined (__DEBUG_KERNEL__)
		if (argv_903 (argv_1993.argv_3572.c_str()) == false) {
			argv_2072 = argv_2127;
			argv_1993.argv_1798.argv_2327.argv_2323 (argv_1346, "+++ ERROR: argv_934::argv_1746 - native API argv_1424 not found after creation !");
		}
	}

	// generate the COMPRESS API's temp DLL argv_3557
	if (argv_2072 == argv_2182) {
		argv_2072 = argv_1744 (_dll_directory, compress_api_dll_orig_name.c_str(), "compress_api", suffix.c_str(), argv_1993.argv_1064);
		if (argv_2072 != 0) {
			argv_1993.argv_1798.argv_2327.argv_2323 (argv_1346, "+++ ERROR: argv_934::argv_1746 - failed to generate COMPRESS API DLL argv_4846 argv_1424 : ", compress_api_dll_orig_name.c_str());
			argv_2072 = argv_2126;
		}
		else {
			argv_2072 = argv_2182;
#if defined (__DEBUG_KERNEL__)
			argv_1993.argv_1798.argv_2327.argv_2323 (argv_1191, "compress_api_dll_orig_name = ", compress_api_dll_orig_name.c_str());
			argv_1993.argv_1798.argv_2327.argv_2323 (argv_1191, "argv_1064 = ", argv_1993.argv_1064.c_str());
#endif // #if defined (__DEBUG_KERNEL__)
			if (argv_903 (argv_1993.argv_1064.c_str()) == false) {
				argv_2072 = argv_2127;
				argv_1993.argv_1798.argv_2327.argv_2323 (argv_1346, "+++ ERROR: argv_934::argv_1746 - argv_1063 API argv_1424 not found after creation !");
			}
		}
	}

	// generate the CIPHER API's temp DLL argv_3557
	if (argv_2072 == argv_2182) {
		argv_2072 = argv_1744 (_dll_directory, cipher_api_dll_orig_name.c_str(), "cipher_api", suffix.c_str(), argv_1993.argv_931);
		if (argv_2072 != 0) {
			argv_1993.argv_1798.argv_2327.argv_2323 (argv_1346, "+++ ERROR: argv_934::argv_1746 - failed to generate CIPHER API DLL argv_4846 argv_1424 : ", cipher_api_dll_orig_name.c_str());
			argv_2072 = argv_2126;
		}
		else {
			argv_2072 = argv_2182;
#if defined (__DEBUG_KERNEL__)
			argv_1993.argv_1798.argv_2327.argv_2323 (argv_1191, "cipher_api_dll_orig_name = ", cipher_api_dll_orig_name.c_str());
			argv_1993.argv_1798.argv_2327.argv_2323 (argv_1191, "argv_931 = ", argv_1993.argv_931.c_str());
#endif // #if defined (__DEBUG_KERNEL__)
			if (argv_903 (argv_1993.argv_931.c_str()) == false) {
				argv_2072 = argv_2127;
				argv_1993.argv_1798.argv_2327.argv_2323 (argv_1346, "+++ ERROR: argv_934::argv_1746 - cipher API argv_1424 not found after creation !");
			}
		}
	}
	return (argv_2072);
}

argv_4536 argv_934::argv_4893 () {
	argv_4536 argv_2072	= argv_2182;
#if defined (__DEBUG_KERNEL__)
	argv_1993.argv_1798.argv_2327.argv_2323 (argv_1191, "deleting temp files");
#endif // #if defined (__DEBUG_KERNEL__)

	bool bret1 = argv_1221 (argv_1993.argv_3572.c_str());
	if (bret1 == true) {
#if defined (__DEBUG_KERNEL__)
		argv_1993.argv_1798.argv_2327.argv_2323 (argv_1191, "deletion of temp argv_1424 : ", argv_1993.argv_3572.c_str(), "...[SUCCESS]");
#endif // #if defined (__DEBUG_KERNEL__)
	}
	else {
		argv_1993.argv_1798.argv_2327.argv_2323 (argv_1346, "+++ ERROR: deletion of temp argv_1424 : ", argv_1993.argv_3572.c_str(), "...[FAILED]");
	}

	bool bret2 = argv_1221 (argv_1993.argv_1064.c_str());
	if (bret2 == true) {
#if defined (__DEBUG_KERNEL__)
		argv_1993.argv_1798.argv_2327.argv_2323 (argv_1191, "deletion of temp argv_1424 : ", argv_1993.argv_1064.c_str(), "...[SUCCESS]");
#endif // #if defined (__DEBUG_KERNEL__)
	}
	else {
		argv_1993.argv_1798.argv_2327.argv_2323 (argv_1346, "+++ ERROR: deletion of temp argv_1424 : ", argv_1993.argv_1064.c_str(), "...[FAILED]");
	}
	
	bool bret3 = argv_1221 (argv_1993.argv_931.c_str());
	if (bret3 == true) {
#if defined (__DEBUG_KERNEL__)
		argv_1993.argv_1798.argv_2327.argv_2323 (argv_1191, "deletion of temp argv_1424 : ", argv_1993.argv_931.c_str(), "...[SUCCESS]");
#endif // #if defined (__DEBUG_KERNEL__)
	}
	else {
		argv_1993.argv_1798.argv_2327.argv_2323 (argv_1346, "+++ ERROR: deletion of temp argv_1424 : ", argv_1993.argv_931.c_str(), "...[FAILED]");
	}

	if ((bret1 == false) || (bret2 == false) || (bret3 == false)) {
		argv_2072 = argv_2184;
	}
	return (argv_2072);
}

argv_4536 argv_934::argv_4247 () {
	argv_4536 argv_2072 = argv_2182;
	map<string, argv_1082 *>::iterator it_loc;

	for (it_loc=argv_1993.argv_2379.begin() ; it_loc != argv_1993.argv_2379.end() ; ++it_loc) {
		argv_2072 = it_loc->second->argv_1736 (argv_1993.argv_2379);
		if (argv_2072 != argv_3922) {
			argv_1993.argv_1798.argv_2327.argv_2323 (argv_1346, "+++ ERROR: argv_934::argv_4247 failed argv_5011 plugin : ", it_loc->first.c_str());
			break;
		}
	}

	if (argv_2072 == argv_3922) {
		argv_2072 = argv_2182;
	}
	return (argv_2072);
}

argv_4536 argv_934::argv_4905 () {
	argv_4536 argv_2072 = argv_2182;
	return (argv_2072);
}
/*
argv_4536 argv_934::prepare_symbols_2_resolve () {
	// should never be called (base class function is meaningless)
	argv_4536 argv_2072 = argv_2135;
	return (argv_2072);	
}

argv_4536 argv_934::un_prepare_symbols_2_resolve () {
	// should never be called (base class function is meaningless)
	argv_4536 argv_2072 = argv_2135;
	return (argv_2072);	
}*/

argv_4536 argv_934::argv_4238 () {
	// should never be called (base class function is meaningless)
	argv_4536 argv_2072 = argv_2135;
	return (argv_2072);	
}

argv_4536 argv_934::argv_4904 () {
	// should never be called (base class function is meaningless)
	argv_4536 argv_2072 = argv_2135;
	return (argv_2072);	
}

argv_4536 argv_934::argv_819 (argv_876 _conf_filename, argv_876 _log_directory, argv_876 _dll_directory, argv_876 _plugin_root_dir, argv_2338& _kernel_data_ptr) {
	// should never be called (base class function is meaningless)
	argv_4536 argv_2072 = argv_2135;
	return (argv_2072);	
}

argv_4536 argv_934::argv_4890 () {
	// should never be called (base class function is meaningless)
	argv_4536 argv_2072 = argv_2135;
	return (argv_2072);	
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ end of argv_1424
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
