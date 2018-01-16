#include "argv_357.hpp"

argv_900::argv_900 () {
	init_done = false;
}

int32_t argv_900::init (uint32_t _array_size) {
	int32_t argv_2072	= argv_1914;

	if (init_done == true) {
		argv_2072 = argv_1911;
	}
	else {
		argv_4988 = new (std::nothrow) vector<argv_899>[_array_size];
		if (argv_4988 == NULL) {
			argv_2072 = argv_1912;
		}
		else {
			argv_761	= _array_size;
			init_done	= true;
		}
	}
	return (argv_2072);
}

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

void argv_900::argv_1067 (const string& _numeric_str, vector<uint8_t>& _v_result) {
	_v_result.clear ();
	uint32_t size = _numeric_str.size ();
	uint8_t argv_4982;
	bool first_half = true;
	for (uint32_t i=0 ; i<size ; i++) {
		if (first_half) {
			argv_4982 = _numeric_str[i] - '0';
			argv_4982 = argv_4982 << 4;
			first_half = false;
		}
		else {
			argv_4982 = argv_4982 | (_numeric_str[i] - '0');
			_v_result.push_back (argv_4982);
			first_half = true;
		}
	}

	// if the number of characters was odd, argv_646 a special argv_4979 and push back
	if (first_half == false) {
		argv_4982 = argv_4982 | 0x0F;
		_v_result.push_back (argv_4982);
	}
}

void argv_900::argv_4913 (vector<uint8_t>& _v_vector, string& _result) {
	uint32_t argv_3605 = _v_vector.size ();
	uint8_t nb_msb;
	uint8_t nb_lsb;
	for (uint32_t i=0 ; i<argv_3605 ; i++) {
		nb_msb = _v_vector[i] & 0xF0;
		nb_msb = nb_msb >> 4;
		nb_msb = nb_msb + '0';
		_result += (nb_msb);

		nb_lsb = _v_vector[i] & 0x0F;
		if (nb_lsb != 0x0F) {
			nb_lsb = nb_lsb + '0';	
			_result += (nb_lsb);
		}
	}
}


uint32_t argv_900::argv_1908 (const string& _key) {
	uint32_t chosen_index	= 0;
	uint32_t atoi_result	= argv_3552 (_key);
	chosen_index		= atoi_result % argv_761;
	return (chosen_index);
}

void argv_900::argv_650 (const string& _key, const string& _value, uint32_t& _chosen_index) {
	_chosen_index = argv_1908 (_key);
	argv_899 couple;

#if defined (__USE_COMPRESSED_STRING__)
	argv_1067 (_key, couple.argv_2188);
	argv_1067 (_value, couple.argv_4979);
#else 
	couple.argv_2188		= _key;
	couple.argv_4979	= _value;
#endif // #if defined (__USE_COMPRESSED_STRING__)
	argv_4988[_chosen_index].push_back (couple);
}

uint32_t argv_900::argv_1078 () {
	uint32_t nb_collision = 0;
	for (uint32_t i=0 ; i<argv_761 ; i++) {
		if (argv_4988[i].size() > 1) {
			nb_collision += (argv_4988[i].size() - 1);
		}
	}
	return (nb_collision);
}


bool argv_900::argv_2089 (const string& _key, string& _retrieved_value, uint32_t& _index_found) {
	bool bret			= false;
	_index_found		= argv_1908 (_key);
	uint32_t nb_elem_in_row = argv_4988[_index_found].size ();
	vector<uint8_t> key_compressed;
	argv_1067 (_key, key_compressed);

	for (uint32_t i=0 ; i<nb_elem_in_row ; i++) {
#if defined (__USE_COMPRESSED_STRING__)
		if (argv_4988[_index_found][i].argv_2188 == key_compressed) {
			argv_4913 (argv_4988[_index_found][i].argv_4979, _retrieved_value);
			bret = true;
			break;
		}
#else
		if (strcmp (argv_4988[_index_found][i].argv_2188.c_str(), _key.c_str()) == 0) {
			_retrieved_value = argv_4988[_index_found][i].argv_4979;
			bret = true;
			break;
		}
#endif // #if defined (__USE_COMPRESSED_STRING__)
	}
	return (bret);
}

void argv_900::argv_1236 (FILE * _fp_log, const char * _msg) {
	uint32_t nb_elem_in_row;
	fprintf (_fp_log, "================= %s ==============\r\n", _msg);
	#if defined (__USE_COMPRESSED_STRING__)
	string uncompressed_key;
	string uncompressed_value;
	#endif // #if defined (__USE_COMPRESSED_STRING__)

	for (uint32_t i=0 ; i<argv_761 ; i++) {
		nb_elem_in_row = argv_4988[i].size();
		if (nb_elem_in_row > 0) {
			fprintf (_fp_log, "%u) %u elements\r\n", i, nb_elem_in_row);
		}

		for (uint32_t k=0 ; k<nb_elem_in_row ; k++) {
#if defined (__USE_COMPRESSED_STRING__)
			argv_4913 (argv_4988[i][k].argv_2188,	uncompressed_key);
			argv_4913 (argv_4988[i][k].argv_4979,	uncompressed_value);
			fprintf (_fp_log, " => argv_2188=%s, argv_4979=%s\r\n", uncompressed_key.c_str(), uncompressed_value.c_str());
#else 
			fprintf (_fp_log, " => argv_2188=%s, argv_4979=%s\r\n", argv_4988[i][k].argv_2188.c_str(), argv_4988[i][k].argv_4979.c_str());
#endif // #if defined (__USE_COMPRESSED_STRING__)
		}
	}
}

void argv_900::argv_1236 (const char * _filename, const char * _msg) {
	FILE * argv_1510 = fopen (_filename, "wb");
	if (argv_1510) {
		argv_1236 (argv_1510, _msg);
	}
	fclose (argv_1510);
}

bool argv_900::argv_772 (uint32_t _table_size, uint32_t _loop_size) {
	bool bret = true;
	uint32_t i;
	init (_table_size);
	char argv_4846[MAX_PATH];
	uint32_t unused_chosen_index;
	string unused_value;

	for (i=0 ; i<_loop_size ; i++) {
		sprintf (argv_4846, "%u", i);
		argv_650 (argv_4846, argv_4846, unused_chosen_index);
	}

	bool test_ok = true;
	for (i=0 ; i<_loop_size ; i++) {
		sprintf (argv_4846, "%u", i);
		if (argv_2089 (argv_4846, unused_value, unused_chosen_index) == false) {
			test_ok = false;
			break;
		}
	}

	if (test_ok == true) {
		fprintf (stderr, "argv_900::argv_772...[SUCCESS]\n");
	}
	else {
		fprintf (stderr, "+++ ERROR: argv_900::argv_772...[FAILED]\n");
	}
	return (bret);
}

void argv_900::reset () {
	if (init_done == true) {
		for (uint32_t i=0 ; i<argv_761 ; i++) {
			argv_4988[i].clear ();
		}
	}
}