#include "../LIB_CRYPTO/argv_388.hpp"

void argv_1112 (const char * _msg) {
	FILE * fp_crash = fopen ("C:\\argv_1112.txt", "ab");
	if (fp_crash) {
		fprintf (fp_crash, "%s\r\n", _msg);
		fclose (fp_crash);
	}
}

void argv_4387 () {
	FILE * fp_crash = fopen ("C:\\argv_1112.txt", "wb");
	if (fp_crash) {
		fclose (fp_crash);
	}
}

argv_1139::argv_1139 () {
	argv_1884 = NULL;
	fprintf (stderr, "init hash table...");
	fflush(stderr);
	argv_1909.init (argv_4528);
	fprintf (stderr, "[DONE]\n");
}

void argv_1139::init (argv_893 * _gmp_tool_ptr, FILE * _fp_log) {
	argv_1576			= _fp_log;	
	argv_1884	= _gmp_tool_ptr;
}

void argv_1139::argv_1076 (argv_3530 _modulo, argv_3530 _result) {
	argv_1884->argv_1609 (_result, _modulo);      // sqrt of the size of the group
	argv_1884->argv_1581 (_result, _result, 1); // ceil
	string modulo_str	= argv_1884->argv_4985 (_modulo);
	string order_str	= argv_1884->argv_4985 (_result);
	fprintf (argv_1576, "Number of elements in group : %s => argv_3690 = %s\r\n", modulo_str.c_str(), order_str.c_str());
}

void argv_1139::argv_775 (argv_3530 _generator, argv_3530 _modulo, argv_3530 _order) {
	//fprintf (stderr, "argv_775\n");
	argv_1909.reset ();
	argv_3530 argv_4406, iterator;
	argv_1884->argv_1594 (argv_4406);
	argv_1884->argv_1594 (iterator);

	//argv_1884->fp_mpz_set (iterator,	argv_4620);
	argv_1884->fp_mpz_set (iterator,	argv_4637);

	uint32_t unused_index;
	string key_str;
	string value_str;

	//while (argv_1884->argv_1585 (iterator, argv_4628) < 0) {
	while (argv_1884->argv_1585 (iterator, argv_4638) < 0) {
		argv_1884->argv_1604 (argv_4406, _generator, iterator, _modulo);
		key_str		= argv_1884->argv_4985 (argv_4406);
		value_str	= argv_1884->argv_4985 (iterator);
		argv_1909.argv_650 (key_str, value_str, unused_index);
		argv_1884->argv_1581 (iterator, iterator, 1);	
	}
	argv_1884->argv_1583 (argv_4406);
	argv_1884->argv_1583 (iterator);

	uint32_t nb_potential_collision = argv_1909.argv_1078 ();
	fprintf (argv_1576, "number of collision in hash table : %u\r\n", nb_potential_collision);
	argv_1909.argv_1236 ("C:\\argv_1909.txt", "after argv_775");
}

// argv_793 = (alpha exp x) mod argv_3690
bool argv_1139::argv_1797 (argv_3530 _beta, argv_3530 _order, argv_3530 _precomputed_inverse, argv_3530 _modulo, argv_3530 _result) {
	bool found_flag = false;

	// argv_1909.argv_1236 (argv_1576, "entering giant step");
	//fprintf (stderr, "argv_1797\n");
	argv_3530 y, alpha_invert_powered, iterator, found_value;
	argv_1884->argv_1594 (y);
	argv_1884->argv_1594 (alpha_invert_powered);
	argv_1884->argv_1594 (iterator);
	argv_1884->argv_1594 (found_value);

	// argv_4406 = 0
	argv_1884->argv_1606 (_result,	"0", 10);
	// alpha_invert_powered = 1;
	argv_1884->argv_1606 (alpha_invert_powered,	"1", 10);
	
	argv_1884->fp_mpz_set (y, _beta);

	argv_1884->argv_1607 (iterator,	0);

	string y_str, found_value_str;
	uint32_t unused_index;

	string str_tmp = argv_1884->argv_4985 (_precomputed_inverse);
	//fprintf (argv_1576, "precomputed_inverse=%s\r\n", str_tmp.c_str());

	while (argv_1884->argv_1585 (iterator, argv_3690) < 0) {
		y_str = argv_1884->argv_4985 (y);
		//fprintf (argv_1576, "y=%s\r\n", y_str.c_str());

		if (argv_1909.argv_2089 (y_str, found_value_str, unused_index) == true) {
			fprintf (argv_1576, "giant step: found argv_4979 '%s' from hash table at index %u\r\n", y_str.c_str(), unused_index);
			// compute (i*m)+j	
			argv_1884->argv_1606 (found_value,	found_value_str.c_str(), 10);
			argv_1884->argv_1599 (_result, iterator, _order);
			argv_1884->argv_1580 (_result, _result, found_value);
			found_flag = true;
			break;
		}
		else { // argv_4979 not found yet
			//y = (y * _precomputed_inverse) % _modulo;
			argv_1884->argv_1599 (y, y, _precomputed_inverse);
			string stmp = argv_1884->argv_4985 (y);
			argv_1884->argv_1598 (y, y, _modulo);
			stmp = argv_1884->argv_4985 (y);
		}
		argv_1884->argv_1581 (iterator, iterator, 1);
	}

	argv_1884->argv_1583 (y);
	argv_1884->argv_1583 (alpha_invert_powered);
	argv_1884->argv_1583 (iterator);
	argv_1884->argv_1583 (found_value);

	if (found_flag == true) {
		string result_str = argv_1884->argv_4985 (_result);
		fprintf (argv_1576, "argv_1139::argv_1797...[FOUND: argv_4406 = %s]\r\n", result_str.c_str());
	}
	else {
		//fprintf (argv_1576, "argv_1139::argv_1797...[NOT_FOUND]\r\n");
	}
	return (found_flag);
}

void argv_1139::argv_1274 (const char * _msg, argv_3530 _var, bool _display_2_log) {
	string value_str = argv_1884->argv_4985 (_var);	
	if (_display_2_log == false) {
		fprintf (stderr, "%s = %s\r\n", _msg, value_str.c_str());
	}
	else {
		fprintf (argv_1576, "%s = %s\r\n", _msg, value_str.c_str());
	}
}

void argv_1139::argv_1080 () {
	argv_3530 argv_796, remaining, last_block_size;
	argv_3530 right_part, my_rank_plus_one;

	argv_1884->argv_1594 (argv_796);
	argv_1884->argv_1594 (remaining);
	argv_1884->argv_1594 (last_block_size);
	argv_1884->argv_1594 (right_part);
	argv_1884->argv_1594 (my_rank_plus_one);

	// argv_796 = argv_3690 / argv_3612;
	argv_1884->argv_1588 (argv_796, argv_3690, argv_3612);
	// remaining = argv_3690 - (argv_796 * argv_3612);
	argv_1884->argv_1599 (right_part, argv_796, argv_3612);
	argv_1884->argv_1610 (remaining, argv_3690, right_part);
	// last_block_size	= argv_796 + remaining;
	argv_1884->argv_1580 (last_block_size, argv_796, remaining);
	// argv_4620		= argv_3553 * argv_796;
	argv_1884->argv_1599 (argv_4620, argv_3553, argv_796);

	// compute argv_3553+1
	argv_1884->argv_1581 (my_rank_plus_one, argv_3553, 1);
	//if ((argv_3553+1) < argv_3612) {
	if (argv_1884->argv_1585 (my_rank_plus_one, argv_3612) < 0) { 
		// argv_4628	= argv_4620 + argv_796;	
		argv_1884->argv_1580 (argv_4628, argv_4620, argv_796);
	}
	else { // the last part
		// argv_4628	= argv_4620 + last_block_size;
		argv_1884->argv_1580 (argv_4628, argv_4620, last_block_size);
	}

/*
	argv_1274 ("argv_796", argv_796);
	argv_1274 ("remaining", remaining);
	argv_1274 ("last_block_size", last_block_size);
	argv_1274 ("argv_4620", argv_4620);
	argv_1274 ("argv_4628", argv_4628);*/
	string block_size_str, remaining_str, last_block_size_str, start_index_str, stop_index_str;
	block_size_str		= argv_1884->argv_4985 (argv_796);
	remaining_str		= argv_1884->argv_4985 (remaining);
	last_block_size_str = argv_1884->argv_4985 (last_block_size);
	start_index_str		= argv_1884->argv_4985 (argv_4620);
	stop_index_str		= argv_1884->argv_4985 (argv_4628);

	fprintf (argv_1576, "[argv_796=%s|remaining=%s|last_block_size=%s|argv_4620=%s|argv_4628=%s]\r\n", block_size_str.c_str(), remaining_str.c_str(), last_block_size_str.c_str(), start_index_str.c_str(), stop_index_str.c_str());

	argv_1884->argv_1583 (argv_796);
	argv_1884->argv_1583 (remaining);
	argv_1884->argv_1583 (last_block_size);
	argv_1884->argv_1583 (right_part);
	argv_1884->argv_1583 (my_rank_plus_one);
}

// _generator	: a small integer that can generate all possible integers
//                using only the exponentiation operator
// _modulo		: the size of the group generated by '_generator'
// _beta		: the argv_4406 of the exponentiation : argv_793 = (argv_1749 ^ x)
//				  x being the argv_4979 to find.
//
// _result		: the argv_4979 of x found using the baby step/giant step algorithm.
bool argv_1139::argv_4389 (uint32_t _nb_process, uint32_t _my_rank, uint32_t _max_per_loop, argv_3530 _generator, argv_3530 _modulo, argv_3530 _beta, string& _result_str) {
	bool bret	= false;
	argv_884 bench;

	argv_3530 negative_order, precomputed_inverse, argv_4406;

	argv_1884->argv_1594 (argv_4406);
	argv_1884->argv_1594 (argv_3690);
	argv_1884->argv_1594 (negative_order);
	argv_1884->argv_1594 (precomputed_inverse); // i.e: alpha ^ (- argv_3690)
	argv_1884->argv_1594 (argv_3553);
	argv_1884->argv_1594 (argv_4620);
	argv_1884->argv_1594 (argv_4628);
	argv_1884->argv_1594 (argv_3612);
	argv_1884->argv_1594 (argv_2396);
	argv_1884->argv_1594 (argv_4637);
	argv_1884->argv_1594 (argv_4638);
	
	argv_1884->argv_1607 (argv_3612		, _nb_process);
	argv_1884->argv_1607 (argv_3553		, _my_rank);
	argv_1884->argv_1607 (argv_2396	, _max_per_loop);

	string nb_process_str	= argv_1884->argv_4985 (argv_3612);
	string my_rank_str		= argv_1884->argv_4985 (argv_3553);
	string max_per_loop_str	= argv_1884->argv_4985 (argv_2396);
	fprintf (argv_1576, "[nb_processor=%s|my_id=%s|argv_2396=%s]\r\n", nb_process_str.c_str(), my_rank_str.c_str(), max_per_loop_str.c_str());

	argv_1076 (_modulo, argv_3690);

	// negative_order = (-1) * argv_3690
	argv_1884->argv_1601 (negative_order, argv_3690); 
	// precomputed_inverse = alpha ^ negative_order
	argv_1884->argv_1604 (precomputed_inverse, _generator, negative_order, _modulo);

	argv_1080 ();
/*
nb_todo = 7;
argv_2396 = 5;
nb_remaining = nb_todo;
argv_4854 = 0;

real_nb_todo = min (nb_remaining, argv_2396);
=> real_nb_todo = 5

nb_remaining  = nb_remaining - real_nb_todo;
argv_4854 = argv_4854 + real_nb_todo;
=> nb_remaining = 2
*/
	argv_3530 nb_remaining, argv_4854, real_nb_todo;
	argv_1884->argv_1594 (nb_remaining);
	argv_1884->argv_1594 (argv_4854);
	argv_1884->argv_1594 (real_nb_todo);
	string nb_remaining_str;
	string total_nb_done_str;
	string real_nb_todo_str;
	string sub_block_start_index_str;
	string sub_block_stop_index_str;

	// nb_remaining = (argv_4628 - argv_4620) + 1;
	argv_1884->argv_1610	(nb_remaining, argv_4628, argv_4620);
	argv_1884->argv_1581 (nb_remaining, nb_remaining, 1);
	// argv_4854 = 0;
	argv_1884->argv_1607 (argv_4854, 0);

	while (argv_1884->argv_1586 (nb_remaining, 0) > 0) {
		// real_nb_todo = min (nb_remaining, argv_2396);
		if (argv_1884->argv_1585 (nb_remaining, argv_2396) < 0) {
			argv_1884->fp_mpz_set (real_nb_todo, nb_remaining);	
		}
		else {
			argv_1884->fp_mpz_set (real_nb_todo, argv_2396);	
		}

		// argv_4637 = argv_4620 + argv_4854;
		argv_1884->fp_mpz_set (argv_4637, argv_4854);
		argv_1884->argv_1580 (argv_4637, argv_4620, argv_4854);
		// argv_4638  = argv_4637 + real_nb_todo;
		argv_1884->argv_1580 (argv_4638, argv_4637, real_nb_todo);

		//--------------------
		/*
		nb_remaining_str			= argv_1884->argv_4985 (nb_remaining);
		total_nb_done_str			= argv_1884->argv_4985 (argv_4854);
		real_nb_todo_str			= argv_1884->argv_4985 (real_nb_todo);
		sub_block_start_index_str	= argv_1884->argv_4985 (argv_4637);
		sub_block_stop_index_str	= argv_1884->argv_4985 (argv_4638);
		fprintf (argv_1576, "[nb_remaining=%s|argv_4854=%s|real_nb_todo=%s|argv_4637=%s|argv_4638=%s]\r\n", nb_remaining_str.c_str(), total_nb_done_str.c_str(), real_nb_todo_str.c_str(), sub_block_start_index_str.c_str(), sub_block_stop_index_str.c_str());
		*/
		//--------------------
		argv_775 (_generator, _modulo, argv_3690);
		bret = argv_1797 (_beta, argv_3690, precomputed_inverse, _modulo, argv_4406);
		if (bret == true) {
			_result_str = argv_1884->argv_4985 (argv_4406);
			break;
		}

		// nb_remaining  = nb_remaining - real_nb_todo;
		argv_1884->argv_1610 (nb_remaining, nb_remaining, real_nb_todo);
		// argv_4854 = argv_4854 + real_nb_todo;
		argv_1884->argv_1580 (argv_4854, argv_4854, real_nb_todo);
	}

	argv_1884->argv_1583 (nb_remaining);
	argv_1884->argv_1583 (argv_4854);
	argv_1884->argv_1583 (real_nb_todo);

	argv_1884->argv_1583 (argv_3612);
	argv_1884->argv_1583 (argv_3553);
	argv_1884->argv_1583 (argv_4620);
	argv_1884->argv_1583 (argv_4628);
	argv_1884->argv_1583 (argv_3690);
	argv_1884->argv_1583 (negative_order);
	argv_1884->argv_1583 (precomputed_inverse);
	argv_1884->argv_1583 (argv_4406);
	argv_1884->argv_1583 (argv_2396);
	argv_1884->argv_1583 (argv_4637);
	argv_1884->argv_1583 (argv_4638);
	return (bret);
}

Crandom_data_set::Crandom_data_set (argv_893 *	_gmp_tool_ptr) {
	argv_1884 = _gmp_tool_ptr;
	argv_1884->argv_1594 (argv_2556);
	argv_1884->argv_1594 (argv_1749);
	argv_1884->argv_1594 (argv_928);
	argv_1884->argv_1594 (argv_793);
	argv_1884->argv_1594 (argv_2557);
	argv_1884->argv_1594 (argv_3677);
	argv_1884->argv_1594 (argv_3696);
}

Crandom_data_set::~Crandom_data_set () {
	argv_1884->argv_1583 (argv_2556);
	argv_1884->argv_1583 (argv_1749);
	argv_1884->argv_1583 (argv_928);
	argv_1884->argv_1583 (argv_793);
	argv_1884->argv_1583 (argv_2557);
	argv_1884->argv_1583 (argv_3677);
	argv_1884->argv_1583 (argv_3696);
}

void argv_1139::argv_925 (Crandom_data_set& _data_set, uint32_t _key_size_in_bit) {
//--------------------------------------
/*	argv_1884->argv_1606 (_data_set.argv_2556,				"1407667259", 10);
	argv_1884->argv_1606 (_data_set.argv_1749,			"11", 10);
	argv_1884->argv_1606 (_data_set.argv_928,	"7065231", 10);
	argv_1884->argv_1606 (_data_set.argv_793,				"43915310", 10);
	argv_1884->argv_1606 (_data_set.argv_2557,		"1407667257", 10);
	argv_1884->argv_1606 (_data_set.argv_3677,				"1", 10);
	argv_1884->argv_1606 (_data_set.argv_3696,	"703833629", 10);
*/
//---------------------------------------------
	argv_1884->argv_1607 (_data_set.argv_3677, 1);
	// generate a huge strong prime number
	// (notice that we save the argv_4979 of (p-1)/2 in the 'q' parameter for
	// convenience).
	argv_1884->argv_1742 (_key_size_in_bit, _data_set.argv_2556, _data_set.argv_3696);
	// choose a primitive argv_4419 of this strong prime (the argv_1749 of the multiplicative group)
	argv_1884->argv_1480 (_data_set.argv_3696, _data_set.argv_2556, _data_set.argv_1749);
	// compute p-2 and use it to generate a random number in [1..p-2]
	argv_1884->argv_1611 (_data_set.argv_2557, _data_set.argv_2556, 2); 
	argv_1884->argv_1739 (_data_set.argv_3677, _data_set.argv_2557, _data_set.argv_928);
	// compute argv_793 = g^a mod p
	argv_1884->argv_1604 (_data_set.argv_793, _data_set.argv_1749, _data_set.argv_928, _data_set.argv_2556);

//-------------------------------------------------------
	argv_1274 ("argv_2556",					_data_set.argv_2556);
	argv_1274 ("argv_1749",				_data_set.argv_1749);
	argv_1274 ("argv_928",		_data_set.argv_928);
	argv_1274 ("argv_793",					_data_set.argv_793);
	argv_1274 ("argv_2557",			_data_set.argv_2557);
	argv_1274 ("argv_3677",					_data_set.argv_3677);
	argv_1274 ("argv_3696",		_data_set.argv_3696);
}

bool argv_1139::argv_926 (uint32_t _nb_process, uint32_t _my_rank, uint32_t _max_per_loop, string& _result) {
	bool bret = true;
	argv_884 bench;
	bench.argv_4618 ();
	_result   = "0"; // means "not found"
	fprintf (stderr, "preparing scenario...");
	Crandom_data_set data_set(argv_1884);
	argv_925 (data_set, 32);
	bench.argv_4626 ();
	string duration_str = bench.argv_4627 ("argv_4243 scenario");
	fprintf (argv_1576, "%s\r\n", duration_str.c_str());

	fprintf (stderr, "[DONE]\r\n");
	fprintf (stderr, "resolving...\r\n");
	bench.argv_4618 ();
		bret = argv_4389 (_nb_process, _my_rank, _max_per_loop, data_set.argv_1749, data_set.argv_2556, data_set.argv_793, _result);
	bench.argv_4626 ();
	duration_str = bench.argv_4627 ("argv_4389");
	fprintf (argv_1576, "%s\r\n", duration_str.c_str());

	if (bret == false) {
		fprintf (stderr, "argv_926: not found !\n");
	}
	else {
		fprintf (stderr, "found argv_4406 = %s\r\n", _result.c_str());
	}
	return (bret);
}

/*
bool argv_1139::argv_926 (uint32_t _nb_process, uint32_t _my_rank, string& _result) {
	bool bret = true;
	_result   = "0"; // means "not found"
	fprintf (argv_1576, "argv_1139::argv_926..[IN]\r\n");

	argv_3530 argv_2556, argv_1749, argv_928, argv_793, argv_4406;
	argv_1884->argv_1594 (argv_2556);
	argv_1884->argv_1594 (argv_1749);
	argv_1884->argv_1594 (argv_4406);
	argv_1884->argv_1594 (argv_928);
	argv_1884->argv_1594 (argv_793);

	argv_1884->argv_1606 (argv_2556,			"65371"	, 10);
	argv_1884->argv_1606 (argv_1749,		"3"		, 10);
	argv_1884->argv_1606 (argv_928,	"3281"	, 10);
	// argv_793 = (argv_1749 ^ exponent) mod argv_2556
	argv_1884->argv_1604 (argv_793, argv_1749, argv_928, argv_2556);
	string beta_str = argv_1884->argv_4985 (argv_793);
	//fprintf (stderr, "argv_793 = %s\r\n", beta_str.c_str());

	bret = argv_4389 (_nb_process, _my_rank, argv_1749, argv_2556, argv_793, argv_4406);
	if (bret == false) {
		//fprintf (stderr, "argv_926: not found !\n");
	}
	else {
		_result = argv_1884->argv_4985 (argv_4406);
		//fprintf (stderr, "found argv_4406 = %s\r\n", _result.c_str());
	}

	argv_1884->argv_1583 (argv_2556);
	argv_1884->argv_1583 (argv_1749);
	argv_1884->argv_1583 (argv_4406);
	argv_1884->argv_1583 (argv_928);
	argv_1884->argv_1583 (argv_793);
	return (bret);
}*/
