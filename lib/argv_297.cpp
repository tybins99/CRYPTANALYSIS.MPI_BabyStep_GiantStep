// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_297.cpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1424 contains all the constants
// @@ and functions, argv_1178 structures that are
// @@ common to each possible test.
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ included files
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_356.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ global argv_3656 that contains all test related global variables
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_892  argv_1800;


argv_892::argv_892 () {
	argv_2316					= NULL;
	argv_760					= NULL;
	argv_759					= 0;
	argv_2073	= argv_4792;
	argv_2074	= argv_4792;
	argv_3604					= 0;
	argv_789				= 0;
}


argv_1143::argv_1143 () {
	argv_2313	= "";
	argv_4503		= "";
	argv_4504		= 0;	
	argv_1707	= NULL;
	argv_2072			= argv_4792;
	argv_2317		= NULL;
}

argv_1143::~argv_1143 () {
	argv_2327.argv_970 (); // ok if it fails
}

argv_1142::argv_1142 () {
	reset ();
}

void argv_1142::reset () {
	argv_2345.clear ();
}

void argv_2322 (FILE * _fp, argv_876 _msg, bool _echo_on, bool _add_eol) {
	fprintf (_fp, "%s", _msg);
	if (_add_eol == true) {
		fprintf (_fp, "\r\n");
	}
	fflush (_fp);
	if (_echo_on == true) {
		cerr << _msg;
		if (_add_eol == true) {
			cerr << endl;
		}
	}
}

void argv_2321 (FILE * _fp, argv_4536 _iret, argv_4883 _errno, bool _echo_on, bool _add_eol) {
	string serror = argv_1344 (_iret);
	fprintf (_fp, "+++ ERROR: error argv_976 = %s (errno=%u)", serror.c_str(), _errno);
	if (_add_eol == true) {
		fprintf (_fp, "\r\n");
	}
	fflush (_fp);
	if (_echo_on == true) {
		cerr << "+++ ERROR: error argv_976 = " << serror << " (errno=" << _errno << ")";
		if (_add_eol == true) {
			cerr << endl;
		}
	}
}

void argv_2318 (FILE * _fp, argv_4536 _iret, argv_876 _msg, bool _add_eol) {
	string serror = argv_1344 (_iret);
	fprintf (_fp, "%s - argv_1343=%s", _msg, serror.c_str());
	if (_add_eol == true) {
		fprintf (_fp, "\r\n");
	}
	fflush (_fp);
}

argv_4536 argv_1142::argv_662 (argv_4883 _test_id, argv_1641 _fptr_one_test) {
	argv_4536 argv_2072 = argv_4783;
	argv_2099 = argv_2345.find (_test_id);
	if (argv_2099 != argv_2345.end()) {
		argv_2072 = argv_4782;
	}
	else { // this test ID was not added yet
		argv_2345[_test_id] = _fptr_one_test;	 
	}
	return (argv_2072);
}


// param 0 : argv_3557 of the EXE
// param 1 : argv_3557 of the log argv_1424 to open for the test
// param 2 : test argv_1994
argv_4536 argv_1142::argv_4424 (int _argc, char ** _argv) {
	argv_4536 argv_2072 = argv_4792;
	cerr << "nb param = " << _argc << endl;
	if (_argc < 3) {
		cerr << "Usage : ./a.out <argv_2313> <test_id> {test specific parameters}" << endl;
		argv_2072 = argv_4774;
	}
	else { // number of parameters is OK
		// argv_4243 the log argv_1474
		char argv_1474[MAX_PATH];
		argv_4569 (argv_1474, MAX_PATH, "%s", _argv[1]);
		argv_1474[MAX_PATH - 1] = '\0';

		// open the log argv_1474
		argv_963 argv_2327;
		bool bret = argv_2327.argv_3686 (argv_1474, NULL, "");
		if (bret == false) {
			argv_2072 = argv_4777;
		}
		else { // log argv_1424 opened succesfully
			argv_4883 test_id = atoi (_argv[2]);
			argv_4883 nb_test = argv_2345.size ();
			map<argv_4883, argv_1641>::iterator argv_2099;

			argv_2099 = argv_2345.find (test_id);
			if (argv_2099 == argv_2345.end()) { // test ID is out of range
				argv_2072 = argv_4781;
			}
			else { // ok, the ID of the test is in range => let's launch it
				argv_1641 argv_1707 = argv_2099->second;
				argv_2072 = argv_1707 (&argv_2327, _argc, _argv);
			}

			argv_2327.argv_970 ();
		}
	}
	return (argv_2072);
}

DWORD WINAPI argv_2225 (argv_2338 lParam) {
	argv_4536 argv_2072 = argv_4792;
	argv_1143 * param_ptr = (argv_1143 *) lParam;
	param_ptr->argv_2072 = param_ptr->argv_1707 (&param_ptr->argv_2327, param_ptr->argv_759, param_ptr->argv_760);
	/*
	char argv_4846[MAX_PATH];
	argv_4569 (argv_4846, MAX_PATH, "argv_2225 : return argv_4979 = %u", param_ptr->argv_2072);
	argv_4846[MAX_PATH - 1] = '\0';
	MessageBox (NULL, argv_4846, "", MB_OK);*/
	return (param_ptr->argv_2072);
}


// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-
// @@
// @@ FUNCTION		:	argv_1425		
// @@
// @@ INPUT			:
// @@ _filename_1: argv_876 : argv_3557 of the argv_1424 whose existence is to
// @@   be checked.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	
// @@ _result: bool&: true if the content of both argv_1424 are identical,
// @@       false otherwise.
// @@	
// @@ RETURN VALUE	:
// @@ argv_4536 : 0 if function succeeded.
// @@        1 if the first argv_1424 can't be opened.
// @@        2 if the second argv_1424 can't be opened.
// @@	
// @@ DISCLOSURE	:	-
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to compare the content of 2 files
// @@ to determine if they are equal or not.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_1425 (argv_963 * _log_ptr, argv_876 _filename_1, argv_876 _filename_2, bool& _result) {
	argv_4536 argv_2072		= 0;
	_result			= false;

	_log_ptr->argv_2323 (argv_3634, "computing md5sum for argv_1424 : ", _filename_1);
	string hash_1 = argv_1077 (_filename_1);
	_log_ptr->argv_2323 (argv_3634, "md5sum for argv_1424 1 = ", hash_1.c_str());

	_log_ptr->argv_2323 (argv_3634, "computing md5sum for argv_1424 : ", _filename_2);
	string hash_2 = argv_1077 (_filename_2);
	_log_ptr->argv_2323 (argv_3634, "md5sum for argv_1424 2 = ", hash_2.c_str());

	if (hash_1 == hash_2) {
		_result = true;	
	}
	/*
	argv_888 map_1;
	argv_888 map_2;
	argv_4881 *	buf_1	= NULL;
	argv_4881 *	buf_2	= NULL;
	argv_4883	size_1	= 0;
	argv_4883	size_2	= 0;

	if (map_1.argv_2532 (_filename_1, argv_2534, buf_1, size_1) == true) {
		if (map_2.argv_2532 (_filename_2, argv_2534, buf_2, size_2) == true) {
			if (size_1 == size_2) {
				bool different = false;
				for (argv_4883 i=0 ; i<size_1 ; i++) {
					if (buf_1[i] != buf_2[i]) {
						different = true;
						break;
					}
				}

				if (different == false) {
					_result = true;
				}
			}
			map_2.argv_971 ();	
		}
		else {
			argv_2072 = 2;
		}
		map_1.argv_971 ();
	}
	else {
		argv_2072 = 1;
		argv_4883 argv_1343, argv_1351;
		map_1.argv_1769 (argv_1343, argv_1351);
		char argv_4846[MAX_PATH];
		argv_4569 (argv_4846, MAX_PATH, "argv_1343=%d, argv_1351=%d", argv_1343, argv_1351);
		argv_4846[MAX_PATH - 1] = '\0';
		MessageBox (NULL, argv_4846, "", MB_OK);
	}*/
	return (argv_2072);
}

void argv_1238 (argv_876 _msg, argv_4883 _amount) {
	char argv_4846[MAX_PATH];
	argv_4569 (argv_4846, MAX_PATH, "%s : %u", _msg, _amount);
	argv_4846[MAX_PATH - 1] = '\0';
	MessageBox (NULL, argv_4846, "", MB_OK);
}


void argv_1261 (argv_963 * _log_ptr) {
	_log_ptr->argv_2323 (argv_3634, " ");
	_log_ptr->argv_2323 (argv_3634, "Test 0 : Usage : ");	
	_log_ptr->argv_2323 (argv_3634, "- param 0 : argv_3557 of the EXE");
	_log_ptr->argv_2323 (argv_3634, "- param 1 : argv_3557 of the log argv_1424 to open for the test");
	_log_ptr->argv_2323 (argv_3634, "- param 2 : test argv_1994");
	_log_ptr->argv_2323 (argv_3634, "- param 3 : server's IP argv_665");
	_log_ptr->argv_2323 (argv_3634, "- param 4 : server's argv_4228");
}

void argv_1262 (argv_963 * _log_ptr) {
	_log_ptr->argv_2323 (argv_3634, " ");
	_log_ptr->argv_2323 (argv_3634, "Test 1 : Usage : ");	
	_log_ptr->argv_2323 (argv_3634, "- param 0 : argv_3557 of the EXE");
	_log_ptr->argv_2323 (argv_3634, "- param 1 : argv_3557 of the log argv_1424 to open for the test");
	_log_ptr->argv_2323 (argv_3634, "- param 2 : test argv_1994");
	_log_ptr->argv_2323 (argv_3634, "- param 3 : server's IP argv_665");
	_log_ptr->argv_2323 (argv_3634, "- param 4 : server's argv_4228");
}

void argv_1265 (argv_963 * _log_ptr) {
	_log_ptr->argv_2323 (argv_3634, " ");
	_log_ptr->argv_2323 (argv_3634, "Test 2 : Usage : ");	
	_log_ptr->argv_2323 (argv_3634, "- param 0 : argv_3557 of the EXE");
	_log_ptr->argv_2323 (argv_3634, "- param 1 : argv_3557 of the log argv_1424 to open for the test");
	_log_ptr->argv_2323 (argv_3634, "- param 2 : test argv_1994");
	_log_ptr->argv_2323 (argv_3634, "- param 3 : server's IP argv_665");
	_log_ptr->argv_2323 (argv_3634, "- param 4 : server's argv_4228");
	_log_ptr->argv_2323 (argv_3634, "- param 5 : number of packets to be echoed.");
}

void argv_1266 (argv_963 * _log_ptr) {
	_log_ptr->argv_2323 (argv_3634, " ");
	_log_ptr->argv_2323 (argv_3634, "Test 3 : Usage : ");	
	_log_ptr->argv_2323 (argv_3634, "- param 0 : argv_3557 of the EXE");
	_log_ptr->argv_2323 (argv_3634, "- param 1 : argv_3557 of the log argv_1424 to open for the test");
	_log_ptr->argv_2323 (argv_3634, "- param 2 : test argv_1994");
	_log_ptr->argv_2323 (argv_3634, "- param 3 : server's IP argv_665");
	_log_ptr->argv_2323 (argv_3634, "- param 4 : server's argv_4228");
}

void argv_1267 (argv_963 * _log_ptr) {
	_log_ptr->argv_2323 (argv_3634, " ");
	_log_ptr->argv_2323 (argv_3634, "Test 4 : Usage : ");	
	_log_ptr->argv_2323 (argv_3634, "- param 0 : argv_3557 of the EXE");
	_log_ptr->argv_2323 (argv_3634, "- param 1 : argv_3557 of the log argv_1424 to open for the test");
	_log_ptr->argv_2323 (argv_3634, "- param 2 : test argv_1994");
	_log_ptr->argv_2323 (argv_3634, "- param 3 : server's IP argv_665");
	_log_ptr->argv_2323 (argv_3634, "- param 4 : server's argv_4228");
	_log_ptr->argv_2323 (argv_3634, "- param 5 : original argv_1474");
}

void argv_1268 (argv_963 * _log_ptr) {
	_log_ptr->argv_2323 (argv_3634, " ");
	_log_ptr->argv_2323 (argv_3634, "Test 5 : Usage : ");	
	_log_ptr->argv_2323 (argv_3634, "- param 0 : argv_3557 of the EXE");
	_log_ptr->argv_2323 (argv_3634, "- param 1 : argv_3557 of the log argv_1424 to open for the test");
	_log_ptr->argv_2323 (argv_3634, "- param 2 : test argv_1994");
	_log_ptr->argv_2323 (argv_3634, "- param 3 : server's IP argv_665");
	_log_ptr->argv_2323 (argv_3634, "- param 4 : server's argv_4228");
	_log_ptr->argv_2323 (argv_3634, "- param 5 : number of packets to be echoed.");
}

void argv_1269 (argv_963 * _log_ptr) {
	_log_ptr->argv_2323 (argv_3634, " ");
	_log_ptr->argv_2323 (argv_3634, "Test 6 : Usage : ");	
	_log_ptr->argv_2323 (argv_3634, "- param 0 : argv_3557 of the EXE");
	_log_ptr->argv_2323 (argv_3634, "- param 1 : argv_3557 of the log argv_1424 to open for the test");
	_log_ptr->argv_2323 (argv_3634, "- param 2 : test argv_1994");
	_log_ptr->argv_2323 (argv_3634, "- param 3 : server's IP argv_665");
	_log_ptr->argv_2323 (argv_3634, "- param 4 : server's argv_4228");
	_log_ptr->argv_2323 (argv_3634, "- param 5 : original argv_1474");
}

void argv_1270 (argv_963 * _log_ptr) {
	_log_ptr->argv_2323 (argv_3634, " ");
	_log_ptr->argv_2323 (argv_3634, "Test 7 : Usage : ");	
	_log_ptr->argv_2323 (argv_3634, "- param 0 : argv_3557 of the EXE");
	_log_ptr->argv_2323 (argv_3634, "- param 1 : argv_3557 of the log argv_1424 to open for the test");
	_log_ptr->argv_2323 (argv_3634, "- param 2 : test argv_1994");
	_log_ptr->argv_2323 (argv_3634, "- param 3 : server's IP argv_665");
	_log_ptr->argv_2323 (argv_3634, "- param 4 : server's argv_4228");
	_log_ptr->argv_2323 (argv_3634, "- param 5 : number of packets to be echoed.");
	_log_ptr->argv_2323 (argv_3634, "- param 6 : number of loop laps.");
}

void argv_1271 (argv_963 * _log_ptr) {
	_log_ptr->argv_2323 (argv_3634, " ");
	_log_ptr->argv_2323 (argv_3634, "Test 8 : Usage : ");	
	_log_ptr->argv_2323 (argv_3634, "- param 0 : argv_3557 of the EXE");
	_log_ptr->argv_2323 (argv_3634, "- param 1 : argv_3557 of the log argv_1424 to open for the test");
	_log_ptr->argv_2323 (argv_3634, "- param 2 : test argv_1994");
	_log_ptr->argv_2323 (argv_3634, "- param 3 : server's IP argv_665");
	_log_ptr->argv_2323 (argv_3634, "- param 4 : server's argv_4228");
}

void argv_1272 (argv_963 * _log_ptr) {
	_log_ptr->argv_2323 (argv_3634, " ");
	_log_ptr->argv_2323 (argv_3634, "Test 9 : Usage : ");	
	_log_ptr->argv_2323 (argv_3634, "- param 0 : argv_3557 of the EXE");
	_log_ptr->argv_2323 (argv_3634, "- param 1 : argv_3557 of the log argv_1424 to open for the test");
	_log_ptr->argv_2323 (argv_3634, "- param 2 : test argv_1994");
	_log_ptr->argv_2323 (argv_3634, "- param 3 : server's IP argv_665");
	_log_ptr->argv_2323 (argv_3634, "- param 4 : server's argv_4228");
	_log_ptr->argv_2323 (argv_3634, "- param 5 : number of packets to be echoed.");
	_log_ptr->argv_2323 (argv_3634, "- param 6 : number of clients to create.");
}

void argv_1263 (argv_963 * _log_ptr) {
	_log_ptr->argv_2323 (argv_3634, " ");
	_log_ptr->argv_2323 (argv_3634, "Test 9 : Usage : ");	
	_log_ptr->argv_2323 (argv_3634, "- param 0 : argv_3557 of the EXE");
	_log_ptr->argv_2323 (argv_3634, "- param 1 : argv_3557 of the log argv_1424 to open for the test");
	_log_ptr->argv_2323 (argv_3634, "- param 2 : test argv_1994");
	_log_ptr->argv_2323 (argv_3634, "- param 3 : server's IP argv_665");
	_log_ptr->argv_2323 (argv_3634, "- param 4 : server's argv_4228");
	_log_ptr->argv_2323 (argv_3634, "- param 5 : number of packets to be echoed.");
	_log_ptr->argv_2323 (argv_3634, "- param 6 : number of clients to create.");
	_log_ptr->argv_2323 (argv_3634, "- param 7 : size of the duplication beam.");
}

void argv_1264 (argv_963 * _log_ptr) {
	_log_ptr->argv_2323 (argv_3634, " ");
	_log_ptr->argv_2323 (argv_3634, "Test 11 : Usage : ");	
	_log_ptr->argv_2323 (argv_3634, "- param 0 : argv_3557 of the EXE");
	_log_ptr->argv_2323 (argv_3634, "- param 1 : argv_3557 of the log argv_1424 to open for the test");
	_log_ptr->argv_2323 (argv_3634, "- param 2 : test argv_1994");
	_log_ptr->argv_2323 (argv_3634, "- param 3 : server's IP argv_665");
	_log_ptr->argv_2323 (argv_3634, "- param 4 : server's argv_4228");
	_log_ptr->argv_2323 (argv_3634, "- param 5 : original argv_1474");
}


// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1424
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

