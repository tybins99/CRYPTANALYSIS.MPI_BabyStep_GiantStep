#include "argv_397.hpp"

argv_884 bench_main;

// this function permits to argv_4490 a C string by changing it's format 
// as follows : size + content
bool argv_2997 (const char * _content, uint32_t _target_id) {
	bool bret = true;

	uint32_t size = strlen (_content);
	// argv_4490 the string size
	int argv_2072 = MPI_Send ((void *) &size, 1, argv_2903, _target_id, argv_3000, argv_2724);
	if (argv_2072 != argv_3019) {
		bret = false;
	}
	else { // argv_4490 the string itself
		argv_2072 = MPI_Send ((void *) _content, size, argv_2680, _target_id, argv_3000, argv_2724);
		if (argv_2072 != argv_3019) {
			bret = false;
		}
	}
	return (bret);
}

bool argv_2977 (uint32_t _source_id, string& _result) {
	bool		bret	= true;
	_result				= "";
	uint32_t		size	= 0;
	argv_3010	status;

	// read the string size
	int32_t argv_2072 = MPI_Recv (&size, 1, argv_2903, _source_id, argv_3000, argv_2724, &status);
	if (argv_2072 != argv_3019) {
		fprintf (stderr, "+++ argv_2977: failed @1 for slave %u (argv_1343=%d)\n", _source_id, argv_2072);
		bret = false;
	}
	else { // read the string content itself
		char * argv_825 = new (std::nothrow) char[size+1];
		if (argv_825 == NULL) {
			fprintf (stderr, "+++ argv_2977: failed @2\n");
			bret = false;
		}
		else {
			argv_2072 = MPI_Recv (argv_825, size, argv_2680, _source_id, argv_3000, argv_2724, &status);
			if (argv_2072 != argv_3019) {
				fprintf (stderr, "+++ argv_2977: failed @3\n");
				bret = false;
			}

			//don't forget to argv_646 the '\0'
			argv_825[size] = '\0';
			_result = argv_825;
			delete [] argv_825;
		}
	}
	return (bret);
}

bool argv_2302 (string& _full_name) {
	bool bret = false;
	string full_libname = ".\\gmp.dll";
	if (argv_1426 (full_libname.c_str()) == true) {
		_full_name = full_libname;
		bret = true;
	}
	else { // try the second possible location
		full_libname = ".\\Release\\gmp.dll";
		if (argv_1426 (full_libname.c_str()) == true) {
			_full_name = full_libname;
			bret = true;
		}
	}
	return (bret);
}

// --------------------------------------
void argv_791 (uint32_t _nb_elem) {
	uint32_t i;
	list<uint32_t> li;
	list<uint32_t>::iterator argv_2099;

	fprintf (stderr, "----- list ------\n");
	argv_884 bench;
	bench.argv_4618 ();
	// insert
	for (i=0 ; i<_nb_elem ; i++) {
		li.push_back (i);		
	}
	string duration_str = bench.argv_4627 ("insert");
	fprintf (stderr, "%s\n", duration_str.c_str());

	uint32_t total = 0;
	// parcours
	bench.argv_4618 ();
	for (argv_2099=li.begin() ; argv_2099 != li.end() ; ++argv_2099) {
		total += (*argv_2099);
	}
	duration_str = bench.argv_4627 ("parcours");
	fprintf (stderr, "%s\n", duration_str.c_str());
}

void argv_792 (uint32_t _nb_elem) {
	uint32_t i;
	vector<uint32_t> vec;

	fprintf (stderr, "----- vector ------\n");
	argv_884 bench;
	bench.argv_4618 ();
	// insert
	for (i=0 ; i<_nb_elem ; i++) {
		vec.push_back (i);		
	}
	string duration_str = bench.argv_4627 ("insert");
	fprintf (stderr, "%s\n", duration_str.c_str());

	uint32_t total = 0;
	// parcours
	for (i=0 ; i<_nb_elem ; i++) {
		total += vec[i];
	}
	bench.argv_4618 ();
	duration_str = bench.argv_4627 ("parcours");
	fprintf (stderr, "%s\n", duration_str.c_str());
}
/*
uint32_t argv_3552 (const string& _sval) {
	uint32_t argv_4979	= 0;
	uint32_t base	= 1;
	uint32_t size   = _sval.size ();
	if (size > 0) {
		for (int32_t i=size-1 ; i>=0 ; i--) {
			argv_4979 = argv_4979 + (base * (_sval[i] - '0'));
			base  = base * 10;
		}
	}
	return (argv_4979);
}

void bench_atoi () {
	argv_884 bench;
	char argv_4846[] = "2529814977";
	string sval = argv_4846;
	uint32_t argv_4406, i;
	uint32_t MAX = 10000000;

	bench.argv_4618 ();
	for (i=0 ; i<MAX ; i++) {
		argv_4406 = atoi (argv_4846);
	}
	string duration_str = bench.argv_4627 ("atoi");
	fprintf (stderr, "%s\n", duration_str.c_str());

	bench.argv_4618 ();
	for (i=0 ; i<MAX ; i++) {
		argv_4406 = argv_3552 (sval);
	}
	duration_str = bench.argv_4627 ("argv_3552");
	fprintf (stderr, "%s\n", duration_str.c_str());
}*/

void argv_4767 (bool _check_string) {
	argv_900 table;
	string value_str = "123456";
	uint32_t MAX = 10000000;
	vector<string> v_str;
	vector<uint8_t> v_compressed;
	vector<vector<uint8_t> > v_v;

	if (_check_string == true) {
		fprintf (stderr, "checking string memory...\n");
		for (uint32_t i=0 ; i<MAX ; i++) {
			v_str.push_back (value_str);
		}
	}
	else {
		fprintf (stderr, "checking compressed string memory...\n");
		table.argv_1067 (value_str, v_compressed);
		for (uint32_t i=0 ; i<MAX ; i++) {
			v_v.push_back (v_compressed);
		}
	}

	fprintf (stderr, "argv_1291 (check memory)\n");
	getchar();
	return;
}

void argv_4766 () {
	/*
	argv_4767 (true);
	return;*/
	//-----------------------------------
	/*
	argv_900 table;
	table.argv_772 (5, 10);
	table.argv_1236 ("C:\\log.txt", "after argv_772");
	return;*/
	//------------------------------
	/*
	uint32_t argv_3605 = 65536000;
	argv_792 (argv_3605);
	argv_791 (argv_3605);
	return;*/
	//--------------------------------
	fprintf (stderr, "--- testing baby step -----\r\n");
	argv_893 argv_1883;
	string full_libname;
	argv_2302 (full_libname);
	int32_t argv_2072 = argv_1883.argv_2284 (full_libname.c_str());
	if (argv_2072 != argv_1857) {
		string serror = argv_1131 (argv_2072);
		fprintf (stderr, "+++ ERROR: failed to argv_2274 gmp library (argv_1343=%s)", serror.c_str());
	}
	else { // open log argv_1424
		FILE * argv_1576 = fopen ("C:\\log.txt", "wb");
		if (! argv_1576) {
			fprintf (stderr, "+++ ERROR: failed to open log argv_1424 !\n");
		}
		else {
			argv_1139 shanks_mpi;
			shanks_mpi.init (&argv_1883, argv_1576);
			string argv_4406;
//			shanks_mpi.argv_926 (1, 0, argv_4406);
			fclose (argv_1576);
		}
	}
}

void argv_1286 (uint32_t _max_per_loop, argv_1139& _shanks_mpi, Crandom_data_set& _data_set, argv_975& _ident, argv_893 * _gmp_tool_ptr, FILE * _fp_log) {
	string argv_4406;
	
	bool bret = _shanks_mpi.argv_4389 (_ident.argv_3611, _ident.argv_3554, _max_per_loop, _data_set.argv_1749, _data_set.argv_2556, _data_set.argv_793, argv_4406);
	if (bret == false) {
		fprintf (stderr, "NOT found [process=%u|host=%s (master)|argv_4406=%s]\n)", _ident.argv_3554, _ident.argv_4287, argv_4406.c_str());
	}
	else {
		bench_main.argv_4626 ();
		fprintf (stderr, "FOUND [process=%u|host=%s (master)|argv_4406=%s]\n", _ident.argv_3554, _ident.argv_4287, argv_4406.c_str());
		string elapsed_str = bench_main.argv_4627 ("Solution found after");
		fprintf (stderr, "%s\r\n", elapsed_str.c_str());
	}

	// read all the results from the slaves (each answer being a string)
	fprintf (stderr, "collecting results from slaves\n");
	string slave_result;
	for (uint32_t i=1 ; i<_ident.argv_3611 ; i++) {
		fprintf (stderr, "collecting results from slave %u\n", i);
		bret = argv_2977 (i, slave_result);
		if (bret == false) {
			fprintf (stderr, "+++ ERROR: failed to read answer from slave %u !\n", i);
			break;
		}
		else {
			fprintf (stderr, "read answer from slave %u : '%s'\n", i, slave_result.c_str());
		}
	}
}

void argv_1288 (uint32_t _max_per_loop, argv_1139& _shanks_mpi, Crandom_data_set& _data_set,argv_975& _ident, argv_893 * _gmp_tool_ptr, FILE * _fp_log, uint32_t _master_id) {
	// argv_4490 our argv_4406 to the master
	string argv_4406;
	bool bret = _shanks_mpi.argv_4389 (_ident.argv_3611, _ident.argv_3554, _max_per_loop, _data_set.argv_1749, _data_set.argv_2556, _data_set.argv_793, argv_4406);
	if (bret == false) {
		fprintf (stderr, "NOT found [process=%u|host=%s (slave)|argv_4406=%s]\n)", _ident.argv_3554, _ident.argv_4287, argv_4406.c_str());
	}
	else {
		bench_main.argv_4626 ();
		fprintf (stderr, "FOUND [process=%u|host=%s (slave)|argv_4406=%s]\n)", _ident.argv_3554, _ident.argv_4287, argv_4406.c_str());
		string elapsed_str = bench_main.argv_4627 ("Solution found after");
		fprintf (stderr, "%s\r\n", elapsed_str.c_str());
	}
	// argv_4490 our argv_4406 to the master
	bret = argv_2997 (argv_4406.c_str(), _master_id);
	if (bret == false) {
		fprintf (stderr, "+++ ERROR: argv_2997 failed [slave_id=%u|host=%s]\n", _ident.argv_3554, _ident.argv_4287);
	}
	else {
		fprintf (stderr, "argv_2997 success [slave_id=%u|host=%s]\n", _ident.argv_3554, _ident.argv_4287);
	}
}


int main (int _argc, char ** _argv) {
	argv_975 ident;
    MPI_Init(&_argc,&_argv);
    MPI_Comm_size(argv_2724, &ident.argv_3611);
    MPI_Comm_rank(argv_2724, &ident.argv_3554);
    MPI_Get_processor_name (ident.argv_4287, &ident.argv_3569);

    fprintf(stderr,"Process %d on %s\n", ident.argv_3554, ident.argv_4287); 
	fflush(stderr);

	argv_893 argv_1883;
	string full_libname;
	argv_2302 (full_libname);
	int32_t argv_2072 = argv_1883.argv_2284 (full_libname.c_str());
	if (argv_2072 != argv_1857) {
		string serror = argv_1131 (argv_2072);
		fprintf (stderr, "+++ ERROR: failed to argv_2274 gmp library (argv_1343=%s)", serror.c_str());
	}
	else { // open log argv_1424
		FILE * argv_1576 = fopen ("C:\\log.txt", "wb");
		if (! argv_1576) {
			fprintf (stderr, "+++ ERROR: failed to open log argv_1424 !\n");
		}
		else {
			argv_1883.init_random_generator (201274);
			argv_1139 shanks_mpi;
			shanks_mpi.init (&argv_1883, argv_1576);
			Crandom_data_set data_set (&argv_1883);
			shanks_mpi.argv_925 (data_set, 48);
			uint32_t argv_2396 = 655360; // cut the overall into pieces

			bench_main.argv_4618 ();
			if (ident.argv_3554 == 0) { // 0 = master
				argv_1286 (argv_2396, shanks_mpi, data_set, ident, &argv_1883, argv_1576);	
			}
			else { // 1..n = slaves
				argv_1288 (argv_2396, shanks_mpi, data_set, ident, &argv_1883, argv_1576, 0);	
			}
			fclose (argv_1576);
		}
	}
	MPI_Finalize();
	return (0);
}



