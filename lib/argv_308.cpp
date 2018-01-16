// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_308.cpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1424 contains the argv_1178 structures and
// @@ functions that permits the loader argv_4749
// @@ argv_3656 to work.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_367.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1141
// @@
// @@ FUNCTION		:	argv_1141		
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
// @@ Normal constructor of the 'argv_1141' argv_3656.
// @@ It merely prepares the argv_3656 for first use.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_1141::argv_1141 () {
	reset ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1141
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
// @@ This function permits to reset the 'argv_877'
// @@ argv_3656 to it's initial argv_4622.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_1141::reset () {
	argv_4536 argv_2072 = argv_2246;

	init_done								= false;
	toolset.argv_3589		= NULL;
	toolset.argv_3581					= NULL;
	toolset.argv_3578					= NULL;	
	toolset.argv_3585					= NULL;
	toolset.argv_3586					= NULL;
	toolset.argv_3582					= NULL;
	toolset.argv_3587					= NULL;
	toolset.argv_3595					= NULL;
	toolset.argv_3571		= NULL;
	toolset.argv_3584			= NULL;
	toolset.argv_3580				= NULL;
	toolset.argv_3579					= NULL;	
	toolset.argv_3599					= NULL;	
	toolset.argv_3597					= NULL;
	toolset.argv_3593					= NULL;
	toolset.NATIVE_memset					= NULL;
	toolset.argv_3592					= NULL;
	toolset.argv_3591					= NULL;
	toolset.argv_3583						= NULL;
	toolset.argv_3598					= NULL;
	toolset.argv_3596					= NULL;
	toolset.argv_3590					= NULL;
	toolset.argv_3575		= NULL;
	toolset.argv_3576				= NULL;
	toolset.argv_3588		= NULL;
	toolset.argv_3577				= NULL;
	toolset.argv_3594			= NULL;

	toolset.argv_2385					= NULL;	
	toolset.argv_2386					= NULL;
	toolset.argv_2388				= NULL;
	toolset.argv_2384		= NULL;	
	toolset.argv_2387		= NULL;

	toolset.argv_2203						= NULL;
	toolset.argv_2206						= NULL;
	toolset.argv_2201							= NULL;
	toolset.argv_2202							= NULL;
	toolset.argv_2205						= NULL;
	toolset.argv_2204					= NULL;			

	toolset.argv_2260					= NULL;
	toolset.argv_2262					= NULL;
	toolset.list_reset						= NULL;
	toolset.argv_2266					= NULL;	
	toolset.argv_2259						= NULL;
	toolset.argv_2264					= NULL;
	toolset.argv_2265					= NULL;

	toolset.kdbg_reset						= NULL;
	toolset.argv_2108					= NULL;
	toolset.argv_2107					= NULL;
	toolset.argv_2109					= NULL;
	
	toolset.argv_1117				= NULL;
	toolset.argv_1233			= NULL;
	toolset.argv_1062	= NULL;
	toolset.argv_1052			= NULL;	
	toolset.argv_1051	= NULL;
	toolset.argv_1050	= NULL;
	toolset.argv_1053		= NULL;
	toolset.argv_1049				= NULL;
	toolset.argv_1048		= NULL;

	// unload all argv_2297 libraries
	argv_2072 = argv_1168::reset ();
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1141
// @@
// @@ FUNCTION		:	init		
// @@
// @@ INPUT			:
// @@ _glob_data_ptr: argv_891 *: pointer on the argv_3656 containing
// @@     all the global argv_1178.
// @@
// @@ _dll_name: argv_876: argv_3557 of the DLL containing the argv_4749 dependant
// @@     routines.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_2246 if success,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to :
// @@ - argv_2274 the DLL containing the argv_4749 dependant routines.
// @@ - argv_2274 all the argv_4749 dependant routines exported by
// @@   the DLL.
// @@
// @@ CONTRACT 		: 
// @@ - 'init' must not have already been argv_1291.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_1141::init (argv_891 * _glob_data_ptr, const char * _dll_name) {
	argv_4536 argv_2072 = argv_2246;
	if (init_done == true) {
		_glob_data_ptr->argv_2327.argv_2323 (argv_1346, "+++ ERROR: argv_1141::init - illegal to call init twice or more !");
		argv_2072 = argv_2241;
	}
	else {
		argv_2072 = argv_2236.argv_2284 (_dll_name, argv_2235);
		if (argv_2072 != argv_2246) {
			_glob_data_ptr->argv_2327.argv_2323 (argv_1346, "+++ ERROR: argv_1141::init - argv_2284 failed !");
		}
		else {
			argv_2338 void_ptr = NULL;

			// registry related functions
			init_one_function (_glob_data_ptr, "argv_3589",		(argv_2338 *) &void_ptr,	argv_2072);
			toolset.argv_3589 = (argv_1630) void_ptr;

			init_one_function (_glob_data_ptr, "argv_3581",					(argv_2338 *) &void_ptr,	argv_2072);
			toolset.argv_3581 = (argv_1622) void_ptr;
			init_one_function (_glob_data_ptr, "argv_3578",					(argv_2338 *) &void_ptr,	argv_2072);
			toolset.argv_3578 = (argv_1619) void_ptr;
			init_one_function (_glob_data_ptr, "argv_3585",					(argv_2338 *) &void_ptr,	argv_2072);
			toolset.argv_3585 = (argv_1626) void_ptr;
			init_one_function (_glob_data_ptr, "argv_3586",					(argv_2338 *) &void_ptr,	argv_2072);
			toolset.argv_3586 = (argv_1627) void_ptr; 
			init_one_function (_glob_data_ptr, "argv_3582",					(argv_2338 *) &void_ptr,	argv_2072);
			toolset.argv_3582 = (argv_1623) void_ptr;
			init_one_function (_glob_data_ptr, "argv_3587",					(argv_2338 *) &void_ptr,  argv_2072);
			toolset.argv_3587 = (argv_1628) void_ptr;
			init_one_function (_glob_data_ptr, "argv_3595",					(argv_2338 *) &void_ptr,	argv_2072);
			toolset.argv_3595 = (argv_1636) void_ptr;
			init_one_function (_glob_data_ptr, "argv_3571",	(argv_2338 *) &void_ptr, argv_2072);
			toolset.argv_3571 = (argv_1615) void_ptr;
			init_one_function (_glob_data_ptr, "argv_3584",		(argv_2338 *) &void_ptr, argv_2072);
			toolset.argv_3584 = (argv_1625) void_ptr;
			init_one_function (_glob_data_ptr, "argv_3580",			(argv_2338 *) &void_ptr, argv_2072);
			toolset.argv_3580 = (argv_1621) void_ptr;
			init_one_function (_glob_data_ptr, "argv_3579",					(argv_2338 *) &void_ptr,   argv_2072);
			toolset.argv_3579 = (argv_1620) void_ptr;
			init_one_function (_glob_data_ptr, "argv_3599",					(argv_2338 *) &void_ptr,  argv_2072);
			toolset.argv_3599 = (argv_1640) void_ptr;
			init_one_function (_glob_data_ptr, "argv_3597",				(argv_2338 *) &void_ptr,  argv_2072);
			toolset.argv_3597 = (argv_1638) void_ptr;
			init_one_function (_glob_data_ptr, "argv_3593",					(argv_2338 *) &void_ptr,  argv_2072);
			toolset.argv_3593 = (argv_1634) void_ptr;
			init_one_function (_glob_data_ptr, "NATIVE_memset",					(argv_2338 *) &void_ptr,  argv_2072);
			toolset.NATIVE_memset = (fp_NATIVE_memset) void_ptr;
			init_one_function (_glob_data_ptr, "argv_3592",					(argv_2338 *) &void_ptr, argv_2072);
			toolset.argv_3592 = (argv_1633) void_ptr;
			init_one_function (_glob_data_ptr, "argv_3591",					(argv_2338 *) &void_ptr,  argv_2072);
			toolset.argv_3591 = (argv_1632) void_ptr;
			init_one_function (_glob_data_ptr, "argv_3583",					(argv_2338 *) &void_ptr,    argv_2072);
			toolset.argv_3583 = (argv_1624) void_ptr;
			init_one_function (_glob_data_ptr, "argv_3598",				(argv_2338 *) &void_ptr, argv_2072);
			toolset.argv_3598 = (argv_1639) void_ptr;
			init_one_function (_glob_data_ptr, "argv_3596",				(argv_2338 *) &void_ptr, argv_2072);
			toolset.argv_3596 = (argv_1637) void_ptr;
			init_one_function (_glob_data_ptr, "argv_3590",				(argv_2338 *) &void_ptr, argv_2072);
			toolset.argv_3590 = (argv_1631) void_ptr;

			init_one_function (_glob_data_ptr, "argv_3575",	(argv_2338 *) &void_ptr, argv_2072);
			toolset.argv_3575 = (argv_1616) void_ptr;
			init_one_function (_glob_data_ptr, "argv_3576",				(argv_2338 *) &void_ptr, argv_2072);
			toolset.argv_3576 = (argv_1617) void_ptr;
			init_one_function (_glob_data_ptr, "argv_3588",		(argv_2338 *) &void_ptr, argv_2072);
			toolset.argv_3588 = (argv_1629) void_ptr;
			init_one_function (_glob_data_ptr, "argv_3577",		(argv_2338 *) &void_ptr, argv_2072);
			toolset.argv_3577 = (argv_1618) void_ptr;
			init_one_function (_glob_data_ptr, "argv_3594",		(argv_2338 *) &void_ptr, argv_2072);
			toolset.argv_3594 = (argv_1635) void_ptr;

			init_one_function (_glob_data_ptr, "argv_2385",					(argv_2338 *) &void_ptr, argv_2072);
			toolset.argv_2385 = (argv_1541) void_ptr;
			init_one_function (_glob_data_ptr, "argv_2386",				(argv_2338 *) &void_ptr, argv_2072);
			toolset.argv_2386 = (argv_1542) void_ptr;
			init_one_function (_glob_data_ptr, "argv_2388",				(argv_2338 *) &void_ptr, argv_2072);
			toolset.argv_2388 = (argv_1544) void_ptr;
			init_one_function (_glob_data_ptr, "argv_2384",		(argv_2338 *) &void_ptr, argv_2072);
			toolset.argv_2384 = (argv_1540) void_ptr;
			init_one_function (_glob_data_ptr, "argv_2387",	(argv_2338 *) &void_ptr, argv_2072);
			toolset.argv_2387 = (argv_1543) void_ptr;

			init_one_function (_glob_data_ptr, "argv_2203",					(argv_2338 *) &void_ptr, argv_2072);
			toolset.argv_2203 = (argv_1566) void_ptr;
			init_one_function (_glob_data_ptr, "argv_2204",					(argv_2338 *) &void_ptr, argv_2072);
			toolset.argv_2204 = (argv_1567) void_ptr;
			init_one_function (_glob_data_ptr, "argv_2206",						(argv_2338 *) &void_ptr, argv_2072);
			toolset.argv_2206 = (argv_1569) void_ptr;
			init_one_function (_glob_data_ptr, "argv_2201",						(argv_2338 *) &void_ptr, argv_2072);
			toolset.argv_2201 = (argv_1564) void_ptr;
			init_one_function (_glob_data_ptr, "argv_2202",						(argv_2338 *) &void_ptr, argv_2072);
			toolset.argv_2202 = (argv_1565) void_ptr;
			init_one_function (_glob_data_ptr, "argv_2205",						(argv_2338 *) &void_ptr, argv_2072);
			toolset.argv_2205 = (argv_1568) void_ptr;

			// plugin debug facility
			init_one_function (_glob_data_ptr, "kdbg_reset",					(argv_2338 *) &void_ptr, argv_2072);
			toolset.kdbg_reset = (fp_kdbg_reset) void_ptr;
			init_one_function (_glob_data_ptr, "argv_2108",					(argv_2338 *) &void_ptr, argv_2072);
			toolset.argv_2108 = (argv_1555) void_ptr;
			init_one_function (_glob_data_ptr, "argv_2107",					(argv_2338 *) &void_ptr, argv_2072);
			toolset.argv_2107 = (argv_1554) void_ptr;
			init_one_function (_glob_data_ptr, "argv_2109",					(argv_2338 *) &void_ptr, argv_2072);
			toolset.argv_2109 = (argv_1556) void_ptr;

			// simple list
			init_one_function (_glob_data_ptr, "argv_2260",	(argv_2338 *) &void_ptr, argv_2072);
			toolset.argv_2260 = (argv_1571) void_ptr;
			init_one_function (_glob_data_ptr, "argv_2262",	(argv_2338 *) &void_ptr, argv_2072);
			toolset.argv_2262 = (argv_1572) void_ptr;
			init_one_function (_glob_data_ptr, "list_reset",	(argv_2338 *) &void_ptr, argv_2072);
			toolset.list_reset = (fp_list_reset) void_ptr;
			init_one_function (_glob_data_ptr, "argv_2266",	(argv_2338 *) &void_ptr, argv_2072);
			toolset.argv_2266 = (argv_1575) void_ptr;
			init_one_function (_glob_data_ptr, "argv_2259",	(argv_2338 *) &void_ptr, argv_2072);
			toolset.argv_2259 = (argv_1570) void_ptr;
			init_one_function (_glob_data_ptr, "argv_2264",	(argv_2338 *) &void_ptr, argv_2072);
			toolset.argv_2264 = (argv_1573) void_ptr;
			init_one_function (_glob_data_ptr, "argv_2265",	(argv_2338 *) &void_ptr, argv_2072);
			toolset.argv_2265 = (argv_1574) void_ptr;

			// complex list
			init_one_function (_glob_data_ptr, "argv_1117",	(argv_2338 *) &void_ptr, argv_2072);
			toolset.argv_1117 = (argv_1525) void_ptr;
			init_one_function (_glob_data_ptr, "argv_1233",	(argv_2338 *) &void_ptr, argv_2072);
			toolset.argv_1233 = (argv_1531) void_ptr;
			init_one_function (_glob_data_ptr, "argv_1062",	(argv_2338 *) &void_ptr, argv_2072);
			toolset.argv_1062 = (argv_1520) void_ptr;
			init_one_function (_glob_data_ptr, "argv_1052",	(argv_2338 *) &void_ptr, argv_2072);
			toolset.argv_1052 = (argv_1518) void_ptr;
			init_one_function (_glob_data_ptr, "argv_1051",	(argv_2338 *) &void_ptr, argv_2072);
			toolset.argv_1051 = (argv_1517) void_ptr;
			init_one_function (_glob_data_ptr, "argv_1050",	(argv_2338 *) &void_ptr, argv_2072);
			toolset.argv_1050 = (argv_1516) void_ptr;
			init_one_function (_glob_data_ptr, "argv_1053",	(argv_2338 *) &void_ptr, argv_2072);
			toolset.argv_1053 = (argv_1519) void_ptr;
			init_one_function (_glob_data_ptr, "argv_1049",	(argv_2338 *) &void_ptr, argv_2072);
			toolset.argv_1049 = (argv_1515) void_ptr;
			init_one_function (_glob_data_ptr, "argv_1048",	(argv_2338 *) &void_ptr, argv_2072);
			toolset.argv_1048 = (argv_1514) void_ptr;
		}
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1424
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
