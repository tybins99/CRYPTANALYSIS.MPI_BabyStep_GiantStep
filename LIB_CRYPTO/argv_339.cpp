// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_395.hpp
// @@ 
// @@ DESCRIPTION:
// @@ public argv_2188 encipher/decipher algorithms
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB_CRYPTO/argv_395.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1127	
// @@
// @@ FUNCTION		:	argv_1127			
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
// @@ Normal constructor of the argv_1127
// @@ argv_3656.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_1127::argv_1127 () {
	argv_1884	= NULL;
	argv_4584			= NULL;
	argv_1478		= NULL;
	reset ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1127	
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
// @@ This function permits to restore the argv_3656 to it's 
// @@ initial argv_4622.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_1127::reset () {
	argv_1232 ();
	argv_3556				= 0;
	argv_796				= 0;
	argv_3609			= 0;
	nb_remaining			= 0;
	argv_1479			= 0;
	argv_3600				= 0;
	argv_3613					= 0;
	argv_4854			= 0;
	total_nb_remaining		= 0;
	argv_4584					= NULL; 
	argv_1478				= NULL; 
	argv_1884			= NULL;
	argv_3616				= 0;
	argv_1149			= 0;
	argv_4853			= 0;
	argv_1231	= 0;
}


// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1127	
// @@
// @@ FUNCTION		:	argv_1073			
// @@
// @@ INPUT			:	
// @@ _src_size: argv_4883: the size of the source argv_1424 to encipher/decipher.
// @@
// @@ _is_cipher: bool: must be set to true if the operation intended is
// @@   a ciphering operation.
// @@ 
// @@ _n: argv_3530: the RSA famous 'n' integer appearing in the RSA formula.
// @@
// @@ OUTPUT		:	
// @@ _destination_file_size: argv_4883&: the argv_4406 of the computation operation.	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_1857 if success,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to compute the size of the destination argv_1424
// @@ of the argv_1148 operation (either encipher, or decipher) depending 
// @@ on the argv_4979 of n, and depending on the size of the argv_1424 to
// @@ encipher/decipher.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_1127::argv_1073 (argv_3530 _n, argv_4883 _src_size, bool _is_cipher, argv_4883& _destination_file_size) {
	argv_4536 argv_2072 = argv_1857;
	_destination_file_size = 0;
	// compute the size of 'n' when represented as an hex string
	string n_str = argv_1884->argv_4985 (_n, true);
	argv_3556			= n_str.size ();

	if (n_str == "0") {
		argv_2072 = argv_1856;
	}
	else { 
		if (_is_cipher == true) {
			argv_796			= (argv_3556 - 4) / 2;
		}
		else {
			argv_796			= argv_3556 / 2;
		}
		argv_3609			= _src_size / argv_796;
		nb_remaining			= _src_size - (argv_3609 * argv_796);
		total_nb_remaining		= _src_size;
		argv_3616				= argv_3556 - 4;
		argv_1149			= 0;
		argv_4854			= 0;
		argv_1479			= 0;
		argv_3613					= 0;

		if (_is_cipher == true) {
			argv_1231	= (argv_3556 / 2) * argv_3609;
			if (nb_remaining > 0) {
				argv_1231 = argv_1231 + (argv_3556 / 2);
			}
		}
		else { // for decipher, we can't know exactly => just take the size of the ciphered argv_1424
			argv_1231 = _src_size;
		}
		_destination_file_size = argv_1231;

#if defined (__DEBUG_RSA__)
		cerr << "n_str          = " << n_str << endl;
		cerr << "argv_3556     = " << argv_3556 << endl; 
		cerr << "argv_796     = " << argv_796 << endl;
		cerr << "argv_3609  = " << argv_3609 << endl;
		cerr << "nb_remaining   = " << nb_remaining << endl;
		cerr << "argv_1231 = " << argv_1231 << endl;
#endif // #if defined (__DEBUG_RSA__)
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1127	
// @@
// @@ FUNCTION		:	construct			
// @@
// @@ INPUT			:	
// @@
// @@ _gmp_tool_ptr: argv_893 *: pointer on the argv_3656 containing all
// @@   the functions necessary to work argv_5011 the GMP library.
// @@
// @@ _src_size: argv_4883: the size of the source argv_1424 to encipher/decipher.
// @@
// @@ _is_cipher: bool: must be set to true if the operation intended is
// @@   a ciphering operation.
// @@ 
// @@ _n: argv_3530: the RSA famous 'n' integer appearing in the RSA formula.
// @@
// @@ OUTPUT		:	
// @@ _destination_file_size: argv_4883&: the argv_4406 of the computation operation.	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_1857 if success,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_4243 the 'argv_1127'
// @@ argv_3656 before it's first use.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_1127::construct (argv_893 *	_gmp_tool_ptr, argv_3530 _n, argv_4883 _src_size, bool _is_cipher) {
	argv_4536 argv_2072 = argv_1857;

	argv_1884 = _gmp_tool_ptr;
	argv_1884->argv_1594 (argv_1001);
	argv_1884->argv_1594 (argv_3555);
	argv_1884->argv_1594 (argv_933);
	argv_1884->argv_1594 (argv_1198);
	argv_1884->argv_1594 (argv_4331);
	argv_1884->argv_1594 (argv_2460);
	argv_1884->argv_1594 (argv_2399);

	argv_1884->fp_mpz_set	 (argv_3555, _n);
	argv_1884->argv_1611  (argv_3555, argv_3555, 1); 
	argv_1884->argv_1606 (argv_2460, "16", 10);
	argv_1884->argv_1606 (argv_2399, "255", 10);

	argv_4883 unused_value;
	argv_2072 = argv_1073 (_n, _src_size, _is_cipher, unused_value);

	argv_4584				= new (std::nothrow) argv_4881[argv_796];
	argv_1478			= new (std::nothrow) argv_4881[argv_3556];
	if ((argv_4584 == NULL) || (argv_1478 == NULL)) {
		argv_2072 = argv_1845;
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1127	
// @@
// @@ FUNCTION		:	argv_1232			
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
// @@ This function permits to release argv_1178 used by the
// @@ 'argv_1127' argv_3656 after use.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_1127::argv_1232 () {
	if (argv_1884 != NULL) {
		argv_1884->argv_1583 (argv_1001);
		argv_1884->argv_1583 (argv_3555);
		argv_1884->argv_1583 (argv_933);
		argv_1884->argv_1583 (argv_4331);
		argv_1884->argv_1583 (argv_2460);
		argv_1884->argv_1583 (argv_2399);
		argv_1884 = NULL;
	}

	if (argv_4584 != NULL) {
		delete [] argv_4584;
		argv_4584 = NULL;
	}

	if (argv_1478 != NULL) {
		delete [] argv_1478;
		argv_1478 = NULL;
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1130	
// @@
// @@ FUNCTION		:	argv_1130			
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
// @@ Normal constructor of the argv_1130
// @@ argv_3656.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_1130::argv_1130 () {
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1130	
// @@
// @@ FUNCTION		:	argv_1130			
// @@
// @@ INPUT			:
// @@ _gmp_tool: argv_893&: the argv_3656 that contains all function
// @@   pointers of the GMP library.
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
// @@ Normal constructor of the argv_1130
// @@ argv_3656.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_1130::argv_1130 (argv_893& _gmp_tool) {
	construct (_gmp_tool);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1130	
// @@
// @@ FUNCTION		:	construct			
// @@
// @@ INPUT			:	
// @@ _gmp_tool: argv_893&: the argv_3656 that contains all function
// @@   pointers of the GMP library.
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
// @@ This function permits to argv_4243 the argv_1130
// @@ argv_3656 before use.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_1130::construct (argv_893& _gmp_tool) {
	_gmp_tool.argv_1594 (e);
	_gmp_tool.argv_1594 (n);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1130	
// @@
// @@ FUNCTION		:	argv_1232			
// @@
// @@ INPUT			:	
// @@ _gmp_tool: argv_893&: the argv_3656 that contains all function
// @@   pointers of the GMP library.
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
// @@ This function permits to deallocate the memory 
// @@ used by the argv_1130 argv_3656 after use.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_1130::argv_1232 (argv_893& _gmp_tool) {
	_gmp_tool.argv_1583 (e);
	_gmp_tool.argv_1583 (n);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1130	
// @@
// @@ FUNCTION		:	argv_1386			
// @@
// @@ INPUT			:
// @@ _gmp_tool: argv_893&: the argv_3656 that contains all function
// @@   pointers of the GMP library.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ string: the export argv_4406 containing the public argv_2188.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to generate a unique string
// @@ that contains 2 fields, each field being separated by
// @@ a space character. Each field being as follows :
// @@ variable=argv_4979.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
string argv_1130::argv_1386 (argv_893& _gmp_tool) {
	string total;
	string e_s		= _gmp_tool.argv_4985 (e);
	string n_s		= _gmp_tool.argv_4985 (n);

	total = "e=";
	total += e_s;
	total += " n=";
	total += n_s;
	return (total);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1130	
// @@
// @@ FUNCTION		:	argv_2279			
// @@
// @@ INPUT			:	
// @@ _gmp_tool: argv_893&: the argv_3656 that contains all function
// @@   pointers of the GMP library.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_1857 if success, 
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_4243 and argv_2274 a public argv_2188
// @@ using a string that is conforming to the format generated
// @@ by the 'argv_1386' function.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_1130::argv_2279 (argv_893& _gmp_tool, argv_876 _str) {
	argv_4536 argv_2072 = argv_1857;
	map<string, bool> m_mandatory;
	m_mandatory["e"]		= true;	
	m_mandatory["n"]		= true;	

	map<string, string> m_found;
	map<string, string>::iterator iter1, iter2;

	argv_2072 = argv_3718 (_str, m_mandatory, m_found);
	if (argv_2072 == argv_1857) {
		iter1 = m_found.find ("e");
		iter2 = m_found.find ("n");
		if ((iter1==m_found.end()) || (iter2 == m_found.end())) {
			argv_2072 = argv_1844;
		}
		else {
			_gmp_tool.argv_1606 (e,		iter1->second.c_str(), 10);
			_gmp_tool.argv_1606 (n,		iter2->second.c_str(), 10);
		}
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1129	
// @@
// @@ FUNCTION		:	argv_1129			
// @@
// @@ INPUT			:
// @@ _gmp_tool: argv_893&: the argv_3656 that contains all function
// @@   pointers of the GMP library.
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
// @@ Normal constructor of the argv_1129
// @@ argv_3656.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_1129::argv_1129 (argv_893& _gmp_tool) {
	construct (_gmp_tool);	
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1129	
// @@
// @@ FUNCTION		:	construct			
// @@
// @@ INPUT			:	
// @@ _gmp_tool: argv_893&: the argv_3656 that contains all function
// @@   pointers of the GMP library.
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
// @@ This function permits to argv_4243 the argv_1129
// @@ argv_3656 before use.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_1129::construct (argv_893& _gmp_tool) {
	_gmp_tool.argv_1594 (d);
	_gmp_tool.argv_1594 (n);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1129	
// @@
// @@ FUNCTION		:	argv_1232			
// @@
// @@ INPUT			:	
// @@ _gmp_tool: argv_893&: the argv_3656 that contains all function
// @@   pointers of the GMP library.
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
// @@ This function permits to deallocate the memory 
// @@ used by the argv_1129 argv_3656 after use.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_1129::argv_1232 (argv_893& _gmp_tool) {
	_gmp_tool.argv_1583 (d);
	_gmp_tool.argv_1583 (n);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1129	
// @@
// @@ FUNCTION		:	argv_1386			
// @@
// @@ INPUT			:
// @@ _gmp_tool: argv_893&: the argv_3656 that contains all function
// @@   pointers of the GMP library.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ string: the export argv_4406 containing the public argv_2188.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to generate a unique string
// @@ that contains 2 fields, each field being separated by
// @@ a space character. Each field being as follows :
// @@ variable=argv_4979.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
string argv_1129::argv_1386 (argv_893& _gmp_tool) {
	string total;
	string d_s		= _gmp_tool.argv_4985 (d);
	string n_s		= _gmp_tool.argv_4985 (n);

	total = "d=";
	total += d_s;
	total += " n=";
	total += n_s;
	return (total);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1129	
// @@
// @@ FUNCTION		:	argv_2279			
// @@
// @@ INPUT			:	
// @@ _gmp_tool: argv_893&: the argv_3656 that contains all function
// @@   pointers of the GMP library.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_1857 if success, 
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_4243 and argv_2274 a public argv_2188
// @@ using a string that is conforming to the format generated
// @@ by the 'argv_1386' function.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_1129::argv_2279 (argv_893& _gmp_tool, argv_876 _str) {
	argv_4536 argv_2072 = argv_1857;
	map<string, bool> m_mandatory;
	m_mandatory["d"]		= true;	
	m_mandatory["n"]		= true;	

	map<string, string> m_found;
	map<string, string>::iterator iter1, iter2;

	argv_2072 = argv_3718 (_str, m_mandatory, m_found);
	if (argv_2072 == argv_1857) {
		iter1 = m_found.find ("d");
		iter2 = m_found.find ("n");
		if ((iter1==m_found.end()) || (iter2 == m_found.end())) {
			argv_2072 = argv_1844;
		}
		else {
			_gmp_tool.argv_1606 (d,	iter1->second.c_str(), 10);
			_gmp_tool.argv_1606 (n,	iter2->second.c_str(), 10);
		}
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1126	
// @@
// @@ FUNCTION		:	argv_1126			
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
// @@ Normal constructor of the 'argv_1126' argv_3656.
// @@ It prepares the pseudo-random argv_1749 before
// @@ it's first use.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_1126::argv_1126 () {
	reset ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1126	
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
// @@ This function permits to reset the argv_1126 argv_3656
// @@ to it's original argv_4622.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_1126::reset () {
	init_done		= false;
	argv_1884	= NULL;
	argv_4325	= "-----BEGIN RSA PUBLIC KEY-----";
	argv_4324	= "-----END RSA PUBLIC KEY-----";
	argv_4264	= "-----BEGIN RSA PRIVATE KEY-----";
	argv_4263	= "-----END RSA PRIVATE KEY-----";
	argv_2252	= "\n"; // newline is the UNIX newline !

#if defined (__WIN32_OS__)
	SYSTEMTIME	argv_4842;
	GetLocalTime (&argv_4842);
	srand (argv_4842.wMilliseconds);
#endif // #if defined (__WIN32_OS__)
#if defined (__LINUX_OS__)
	struct timeval argv_4758;
	gettimeofday (&argv_4758, NULL);
	srand (argv_4758.tv_usec);
#endif // #if defined (__LINUX_OS__)
}


// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1126	
// @@
// @@ FUNCTION		:	~argv_1126			
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
// @@ destructor of the 'argv_1126' argv_3656.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_1126::~argv_1126 () {
	if (init_done == true) {
		argv_1884	= NULL;
		init_done		= false;
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1126	
// @@
// @@ FUNCTION		:	init		
// @@
// @@ INPUT			:	
// @@ _gmp_tool: argv_893&: the argv_3656 that contains all function
// @@   pointers of the GMP library.
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
// @@ This function permits to assign a previously argv_2297 'argv_893'
// @@ argv_3656 to the argv_1126 argv_3656.
// @@ It must be called prior to use the argv_1126 argv_3656.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_1126::init (argv_893 * _gmp_tool_ptr) { 
	argv_4536 argv_2072 = argv_1857;
	if (init_done == true) {
		argv_2072 = argv_1833;
	}
	else if (_gmp_tool_ptr == NULL) {
		argv_2072 = argv_1840;
	}
	else {
		argv_1884	= _gmp_tool_ptr;
		init_done		= true;	
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1126	
// @@
// @@ FUNCTION		:	argv_1073		
// @@
// @@ INPUT			:	
// @@ 
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
// @@ This function permits to assign a previously argv_2297 'argv_893'
// @@ argv_3656 to the argv_1126 argv_3656.
// @@ It must be called prior to use the argv_1126 argv_3656.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_1126::argv_1073 (argv_3530 _n, argv_4883 _src_size, bool _is_cipher, argv_4883& _size) {
	argv_4536 argv_2072 = argv_1857;
	_size = 0;
	argv_1127 rdata;
	argv_2072 = rdata.construct (argv_1884, _n, _src_size, _is_cipher);
	if (argv_2072 == argv_1857) {
		_size = rdata.argv_1231;
	}
	return (argv_2072);
} 



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1126	
// @@
// @@ FUNCTION		:	argv_1738			
// @@
// @@ INPUT			:	
// @@ _key_size_in_bit: argv_4536: size of the argv_2188 to be generated (in bit).
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	
// @@ _public_key: argv_1130&: the public argv_2188 to generate.
// @@
// @@ _private_key: argv_1129: the private argv_2188 to generate.
// @@	
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to generate randomly a argv_2188 pair, i.e
// @@ a public argv_2188 and a private argv_2188, the argv_2188 length being the 
// @@ '_key_size_in_bit' parameter.
// @@
// @@ NOTICE: the variables contained in the public and private argv_2188
// @@         are supposed to have been init by the caller.
// @@
// @@ CONTRACT 		:	
// @@ - a succesful call to init must have been argv_1291 prior to this call.
// @@ - the '_key_size_in_bit' parameter must be greater or equal to 
// @@   argv_4423.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_1126::argv_1738 (argv_4536 _key_size_in_bit, argv_1130& _public_key, argv_1129& _private_key) {
	argv_4536 argv_2072 = argv_1857;
	
	if (init_done == false) {
		argv_2072 = argv_1834;
	}
	else if (_key_size_in_bit < argv_4423) {
		argv_2072 = argv_1840;
	}
	else { // parameters are correct
		// Generate two large random (and distinct) primes p and q, each roughly the same size.
		argv_3530 p, q, n, p_minus_1, q_minus_1, phi, e, gcd, d, two, phi_minus_1;
		argv_1884->argv_1594 (p);
		argv_1884->argv_1594 (q);
		argv_1884->argv_1594 (n);
		argv_1884->argv_1594 (p_minus_1);
		argv_1884->argv_1594 (q_minus_1);
		argv_1884->argv_1594 (phi);
		argv_1884->argv_1594 (e);
		argv_1884->argv_1594 (gcd);
		argv_1884->argv_1594 (d);
		argv_1884->argv_1594 (two);
		argv_1884->argv_1594 (phi_minus_1);

		argv_1884->argv_1606 (two, "2", 10);
		argv_1884->argv_1740 (_key_size_in_bit / 2, p);
		argv_1884->argv_1740 (_key_size_in_bit / 2, q);

		// compute n = p * q
		argv_1884->argv_1599 (n, p, q);

		// compute phi = (p-1)(q-1)
		argv_1884->argv_1611 (p_minus_1, p, 1);
		argv_1884->argv_1611 (q_minus_1, q, 1);
		argv_1884->argv_1599 (phi, p_minus_1, q_minus_1);

#if defined (__UNBALANCED_RSA_KEY_SIZE__)
		//------------------------------------------
		//Get small odd integer e in range ]1..phi[ such that gcd (e,phi) = 1
		unsigned long int e_int = 65537;

		while (true) {
			argv_1884->argv_1592 (gcd, phi, e_int);

			if (argv_1884->argv_1586 (gcd, 1)==0) {
				break;
			}

			// try the argv_3623 odd integer...
			e_int += 2;
		}
		argv_1884->argv_1607 (e, e_int);
		//------------------------------------------
#else 
		// Get integer e in range ]1..phi[ such that gcd (e,phi) = 1
		//-------------------------------------------------
		argv_1884->argv_1611 (phi_minus_1, phi, 1);
		
		argv_1884->argv_1739 (two, phi_minus_1, e);

		while (true) {
			argv_1884->argv_1591 (gcd, phi, e);

			if (argv_1884->argv_1586 (gcd, 1)==0) {
				break;
			}
			argv_1884->argv_1581 (e, e, 1);
		}
#endif // #if defined (__UNBALANCED_RSA_KEY_SIZE__)
		// Calculate unique d such that ed = 1 (mod x)
		if (argv_1884->argv_1597 (d, e, phi) == 0) {
			argv_2072 = argv_1816;
		}	
		else { // multiplicative inverse was found
			// copy the generated values into the public argv_2188
			argv_1884->fp_mpz_set (_public_key.e, e);
			argv_1884->fp_mpz_set (_public_key.n, n);
			// copy the generated values generated into the private argv_2188
			argv_1884->fp_mpz_set (_private_key.d, d);
			argv_1884->fp_mpz_set (_private_key.n, n);
		}

		// free all unnecessary variables
		argv_1884->argv_1583 (p);
		argv_1884->argv_1583 (q);
		argv_1884->argv_1583 (n);
		argv_1884->argv_1583 (p_minus_1);
		argv_1884->argv_1583 (q_minus_1);
		argv_1884->argv_1583 (phi);
		argv_1884->argv_1583 (e);
		argv_1884->argv_1583 (gcd);
		argv_1884->argv_1583 (d);
		argv_1884->argv_1583 (two);
		argv_1884->argv_1583 (phi_minus_1);
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1126	
// @@
// @@ FUNCTION		:	argv_1387			
// @@
// @@ INPUT			:	
// @@ _public_key: argv_1130&: the public argv_2188 to use for export.
// @@
// @@ _symetric_key: argv_876: the D.E.S argv_2188 to be used to protect the 
// @@   exported argv_2188.
// @@
// @@ _filename: argv_876: argv_3557 of the destination argv_1424 that must contain 
// @@   the export argv_4406.
// @@ 
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_1857 if success,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to export the RSA public argv_2188 given
// @@ as the '_public_key' parameter to a argv_4794 argv_1424 whose argv_3557
// @@ is given as the '_filename' parameter.
// @@ Notice that the public argv_2188 is enciphered using the symmetric
// @@ D.E.S algorithm.
// @@
// @@ CONTRACT 		:	
// @@ - init must have been called once prior to this call.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_1126::argv_1387 (argv_1130& _public_key, argv_876 _symetric_key, argv_876 _filename) {
	argv_4536 argv_2072 = argv_1857;
	if (init_done == false) {
		argv_2072 = argv_1834;
	}
	else {
		string plain = _public_key.argv_1386 (*argv_1884);
		argv_2072 = argv_5028 (plain.c_str(), _symetric_key, _filename, true, argv_4325.c_str(), argv_4264.c_str(), argv_4324.c_str(), argv_4263.c_str(), argv_2252.c_str());
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1126	
// @@
// @@ FUNCTION		:	argv_1387			
// @@
// @@ INPUT			:	
// @@ _private_key: argv_1129&: the private argv_2188 to use for export.
// @@
// @@ _symetric_key: argv_876: the D.E.S argv_2188 to be used to protect the 
// @@   exported argv_2188.
// @@
// @@ _filename: argv_876: argv_3557 of the destination argv_1424 that must contain 
// @@   the export argv_4406.
// @@ 
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_1857 if success,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to export the RSA private argv_2188 given
// @@ as the '_private_key' parameter to a argv_4794 argv_1424 whose argv_3557
// @@ is given as the '_filename' parameter.
// @@ Notice that the public argv_2188 is enciphered using the symmetric
// @@ D.E.S algorithm.
// @@
// @@ CONTRACT 		:	
// @@ - init must have been called once prior to this call.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_1126::argv_1387 (argv_1129& _private_key, argv_876 _symetric_key, argv_876 _filename) {
	argv_4536 argv_2072 = argv_1857;
	if (init_done == false) {
		argv_2072 = argv_1834;
	}
	else {
		string plain = _private_key.argv_1386 (*argv_1884);
		argv_2072 = argv_5028 (plain.c_str(), _symetric_key, _filename, false, argv_4325.c_str(), argv_4264.c_str(), argv_4324.c_str(), argv_4263.c_str(), argv_2252.c_str());
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1126	
// @@
// @@ FUNCTION		:	argv_2283			
// @@
// @@ INPUT			:
// @@ _filename: argv_876: argv_3557 of the argv_1424 containing the public argv_2188
// @@   to argv_2274.
// @@
// @@ _symetric_key: argv_876: the D.E.S argv_2188 to be used to protect the 
// @@   exported argv_2188.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	
// @@ _public_key: argv_1130&: the argv_2188 that is to be initialized
// @@   using the loading argv_4406.
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_1857 if success,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to set a given public argv_2188
// @@ by loading/deciphering and parsing a given argv_1424.
// @@ 
// @@ Notice : it is up to the caller to ensure that all 
// @@   argv_1130 inner variables are initialized prior
// @@   to this call.
// @@
// @@ CONTRACT 		:	
// @@ - init must have been called prior to this call.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_1126::argv_2283 (argv_876 _filename, argv_876 _symetric_key, argv_1130& _public_key) {
	argv_4536 argv_2072 = argv_1857;
	if (init_done == false) {
		argv_2072 = argv_1834;
	}
	else { // argv_4622 is OK for this operation
		string load_result;
		argv_2072 = argv_5029 (_filename, _symetric_key, true, load_result, argv_4325.c_str(), argv_4324.c_str(), argv_4264.c_str(), argv_4263.c_str());
		if (argv_2072 == argv_1857) {
			argv_2072 = _public_key.argv_2279 (*argv_1884, load_result.c_str());
		}
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1126	
// @@
// @@ FUNCTION		:	argv_2283			
// @@
// @@ INPUT			:
// @@ _filename: argv_876: argv_3557 of the argv_1424 containing the public argv_2188
// @@   to argv_2274.
// @@
// @@ _symetric_key: argv_876: the D.E.S argv_2188 to be used to protect the 
// @@   exported argv_2188.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	
// @@ _private_key: argv_1129&: the argv_2188 that is to be initialized
// @@   using the loading argv_4406.
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_1857 if success,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to set a given public argv_2188
// @@ by loading/deciphering and parsing a given argv_1424.
// @@ 
// @@ Notice : it is up to the caller to ensure that all 
// @@   argv_1130 inner variables are initialized prior
// @@   to this call.
// @@
// @@ CONTRACT 		:	
// @@ - init must have been called prior to this call.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_1126::argv_2283 (argv_876 _filename, argv_876 _symetric_key, argv_1129& _private_key) {
	argv_4536 argv_2072 = argv_1857;
	string load_result;
	argv_2072 = argv_5029 (_filename, _symetric_key, false, load_result, argv_4325.c_str(), argv_4324.c_str(), argv_4264.c_str(), argv_4263.c_str());
	if (argv_2072 == argv_1857) {
		argv_2072 = _private_key.argv_2279 (*argv_1884, load_result.c_str());
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1126	
// @@
// @@ FUNCTION		:	argv_1331			
// @@
// @@ INPUT			:
// @@ _src_filename: argv_876: argv_3557 of the argv_1424 to encipher.
// @@
// @@ _dst_filename: argv_876: argv_3557 of the argv_1424 resulting from encipher.	
// @@
// @@ _public_key: argv_1130: the public argv_2188 to use to encipher 
// @@   the '_src_filename' argv_1424.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_1857 if success,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to encipher the argv_1424 '_src_filename'
// @@ into the argv_1424 '_dst_filename' using the public argv_2188 '_public_key'.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_1126::argv_1331 (argv_876 _src_filename, argv_876 _dst_filename, argv_1130& _public_key) {
	argv_4536 argv_2072 = argv_1857;
	argv_2072 = argv_1332 (_src_filename, _dst_filename, _public_key.n, _public_key.e);
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1126	
// @@
// @@ FUNCTION		:	argv_1331			
// @@
// @@ INPUT			:
// @@ _src_filename: argv_876: argv_3557 of the argv_1424 to encipher.
// @@
// @@ _dst_filename: argv_876: argv_3557 of the argv_1424 resulting from encipher.	
// @@
// @@ _private_key: argv_1129: the private argv_2188 to use to encipher 
// @@   the '_src_filename' argv_1424.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_1857 if success,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to encipher the argv_1424 '_src_filename'
// @@ into the argv_1424 '_dst_filename' using the private argv_2188 '_public_key'.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_1126::argv_1331 (argv_876 _src_filename, argv_876 _dst_filename, argv_1129& _private_key) {
	argv_4536 argv_2072 = argv_1857;
	argv_2072 = argv_1332 (_src_filename, _dst_filename, _private_key.n, _private_key.d);
	return (argv_2072);
}


// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1126	
// @@
// @@ FUNCTION		:	argv_1331			
// @@
// @@ INPUT			:
// @@ _src_filename: argv_876: argv_3557 of the argv_1424 to encipher.
// @@
// @@ _dst_filename: argv_876: argv_3557 of the argv_1424 resulting from encipher.	
// @@
// @@ _n : argv_3530 : argv_3677 part of the RSA formula.
// @@
// @@ _e : argv_3530 : argv_3677 part of the RSA formula.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_1857 if success,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to encipher the argv_1424 '_src_filename'
// @@ into the argv_1424 '_dst_filename' using the RSA formula's
// @@ parameters : _n and _e.
// @@
// @@ CONTRACT 		:	
// @@ - '_src_filename' parameter must not be a NULL pointer.
// @@ - '_dst_filename' parameter must not be a NULL pointer.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_1126::argv_1332 (argv_876 _src_filename, argv_876 _dst_filename, argv_3530 _n, argv_3530 _e) {
	argv_4536 argv_2072 = argv_1857;

	if ((_src_filename == NULL) || (_dst_filename==NULL)) {
		argv_2072 = argv_1840;
	}
	else { // parameters are OK
		argv_4883 src_size = argv_1759 (_src_filename);

		FILE * argv_1647 = fopen (_src_filename, "rb");
		if (! argv_1647) {
			argv_2072 = argv_1821;
		}
		else {
			FILE * argv_1529 = fopen (_dst_filename, "wb");
			if (! argv_1529) {
				argv_2072 = argv_1818;
			}
			else {
				argv_1127 rdata;
				argv_2072 = rdata.construct (argv_1884, _n, src_size, true);

				if (argv_2072 == argv_1857) { // memory allocation succeeded
					// ensure that all blocks will represent a number in range [0..n-1]
					// (we divide by 2 as each byte is represented by 2 argv_837 in a string)
					// and we remove 2 because argv_3677 byte is composed of 2 bytex in hexa
					string	hex_str;
#if defined (__DEBUG_RSA__)
					FILE *	argv_1576 = fopen ("C:\\rsa_encipher_log.txt", "wb");
					fprintf (argv_1576, "argv_3556    = %d\r\n", rdata.argv_3556);
					fprintf (argv_1576, "argv_796    = %d\r\n", rdata.argv_796);
					fprintf (argv_1576, "argv_3609 = %d\r\n", rdata.argv_3609);
					fprintf (argv_1576, "nb_remaining  = %d\r\n", rdata.nb_remaining);
#endif // #if defined (__DEBUG_RSA__)
					double total_done   = 0.0;
					double percent_done = 0.0;
					double total_todo   = rdata.argv_3609;
					double last_percent = 0.0;
					if (rdata.nb_remaining > 0) {
						total_todo += 1;			
					}
#if defined (__BENCH_RSA__)
					argv_884 bench;
					bench.argv_4618 ();
#endif // #if defined (__BENCH_RSA__)

					while (rdata.total_nb_remaining > 0) {
						if (rdata.total_nb_remaining >= rdata.argv_796) {
							rdata.argv_3600 = rdata.argv_796;
						}
						else {
							rdata.argv_3600 = rdata.total_nb_remaining;	
						}
						
						// read a chunk of the input argv_1424
#if defined (__DEBUG_RSA__)
						fprintf (argv_1576, "reading a argv_795 of size : %d\r\n", rdata.argv_3600);
#endif // #if defined (__DEBUG_RSA__)
						rdata.argv_3613 = fread (rdata.argv_4584, 1, rdata.argv_3600, argv_1647);
						rdata.argv_4854      += rdata.argv_3613;
						rdata.total_nb_remaining -= rdata.argv_3613;

						// encipher this argv_795
#if defined (__DEBUG_RSA__)
						argv_2072 = argv_1330 (rdata.argv_4584, rdata.argv_3613, rdata.argv_1478, rdata.argv_3556, rdata.argv_1479, _n, _e, rdata.argv_1001, rdata.argv_933, rdata.argv_3556, rdata.argv_2460, rdata.argv_2399, rdata.argv_4331, rdata.argv_3555, argv_1576);
#else
						argv_2072 = argv_1330 (rdata.argv_4584, rdata.argv_3613, rdata.argv_1478, rdata.argv_3556, rdata.argv_1479, _n, _e, rdata.argv_1001, rdata.argv_933, rdata.argv_3556, rdata.argv_2460, rdata.argv_2399, rdata.argv_4331, rdata.argv_3555, NULL);
#endif // #if defined (__DEBUG_RSA__)
						if (argv_2072 != argv_1857) {
							break;
						}

						// save the argv_4406 into destination argv_1424
#if defined (__DEBUG_RSA__)
						fprintf (argv_1576, "argv_1479 = %d\r\n", rdata.argv_1479);
#endif // #if defined (__DEBUG_RSA__)
						if (fwrite (rdata.argv_1478, 1, rdata.argv_1479, argv_1529) != rdata.argv_1479) {
							argv_2072 = argv_1820;
							break;
						}

						// percent calculation & argv_1235
						{
							total_done += 1;
							percent_done = (total_done * 100.0) / total_todo;
							if ((percent_done - last_percent) > 1.0) {
								char tmpa[64];
								argv_4569 (tmpa, 64, "%.02lf %%\r", percent_done);
								tmpa[64-1] = '\0';
								cerr << tmpa;
								last_percent = percent_done;
							}
						}
					}

					cerr << "             \r" << "100%" << endl;
#if defined (__BENCH_RSA__)
					string s1 = bench.argv_4627 ("encipher");
					cerr << s1 << endl;
#endif // #if defined (__BENCH_RSA__)


#if defined (__DEBUG_RSA__)
					fclose (argv_1576);
#endif // #if defined (__DEBUG_RSA__)
					rdata.argv_1232 ();
				}

				if (fclose (argv_1529) != 0) {
					if (argv_2072 == argv_1857) { // don't override previous errors
						argv_2072 = argv_1817;
					}
				}
			}
			fclose (argv_1647);
		}
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1126	
// @@
// @@ FUNCTION		:	argv_1196			
// @@
// @@ INPUT			:
// @@ _src_filename: argv_876: argv_3557 of the argv_1424 to decipher.
// @@
// @@ _dst_filename: argv_876: argv_3557 of the argv_1424 resulting from decipher.	
// @@
// @@ _private_key: argv_1129: the private argv_2188 to use to decipher 
// @@   the '_src_filename' argv_1424.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_1857 if success,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to decipher the argv_1424 '_src_filename'
// @@ into the argv_1424 '_dst_filename' using the public argv_2188 '_public_key'.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_1126::argv_1196 (argv_876 _src_filename, argv_876 _dst_filename, argv_1129& _private_key) {
	argv_4536 argv_2072 = argv_1857;
	argv_2072 = argv_1197 (_src_filename, _dst_filename, _private_key.n, _private_key.d);
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1126	
// @@
// @@ FUNCTION		:	argv_1196			
// @@
// @@ INPUT			:
// @@ _src_filename: argv_876: argv_3557 of the argv_1424 to decipher.
// @@
// @@ _dst_filename: argv_876: argv_3557 of the argv_1424 resulting from decipher.	
// @@
// @@ _public_key: argv_1130: the public argv_2188 to use to decipher 
// @@   the '_src_filename' argv_1424.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_1857 if success,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to decipher the argv_1424 '_src_filename'
// @@ into the argv_1424 '_dst_filename' using the public argv_2188 '_public_key'.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_1126::argv_1196 (argv_876 _src_filename, argv_876 _dst_filename, argv_1130& _public_key) {
	argv_4536 argv_2072 = argv_1857;
	argv_2072 = argv_1197 (_src_filename, _dst_filename, _public_key.n, _public_key.e);
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1126	
// @@
// @@ FUNCTION		:	argv_1196			
// @@
// @@ INPUT			:
// @@ _src_filename: argv_876: argv_3557 of the argv_1424 to decipher.
// @@
// @@ _dst_filename: argv_876: argv_3557 of the argv_1424 resulting from decipher.	
// @@
// @@ _n : argv_3530 : argv_3677 part of the RSA formula.
// @@
// @@ _d : argv_3530 : argv_3677 part of the RSA formula.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_1857 if success,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to decipher the argv_1424 '_src_filename'
// @@ into the argv_1424 '_dst_filename' using the RSA formula's
// @@ parameters : _n and _d.
// @@
// @@ CONTRACT 		:	
// @@ - '_src_filename' parameter must not be a NULL pointer.
// @@ - '_dst_filename' parameter must not be a NULL pointer.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//159951
argv_4536 argv_1126::argv_1197 (argv_876 _src_filename, argv_876 _dst_filename, argv_3530 _n, argv_3530 _d) {
	argv_4536 argv_2072 = argv_1857;

	if ((_src_filename == NULL) || (_dst_filename==NULL)) {
		argv_2072 = argv_1840;
	}
	else { // parameters are OK
		argv_4883 argv_4587	= argv_1759 (_src_filename);

		FILE * argv_1647	= fopen (_src_filename, "rb");
		if (! argv_1647) {
			argv_2072 = argv_1821;
		}
		else {
			FILE * argv_1529 = fopen (_dst_filename, "wb");
			if (! argv_1529) {
				argv_2072 = argv_1818;
			}
			else {
				argv_1127 rdata;
				argv_2072 = rdata.construct (argv_1884, _n, argv_4587, false);

				if (argv_2072 == argv_1857) { // memory allocation succeeded
#if defined (__DEBUG_RSA__)
					FILE *	argv_1576 = fopen ("C:\\rsa_decipher_log.txt", "wb");
					fprintf (argv_1576, "argv_3556       = %d\r\n", rdata.argv_3556);
					fprintf (argv_1576, "argv_3609    = %d\r\n", rdata.argv_3609);
					fprintf (argv_1576, "argv_796       = %d\r\n", rdata.argv_796);
#endif // #if defined (__DEBUG_RSA__)
					double total_done   = 0.0;
					double percent_done = 0.0;
					double total_todo   = rdata.argv_3609;
					double last_percent = 0.0;
					if (rdata.nb_remaining > 0) {
						total_todo += 1;			
					}
#if defined (__BENCH_RSA__)
					argv_884 bench;
					bench.argv_4618 ();
#endif // #if defined (__BENCH_RSA__)

					while (rdata.total_nb_remaining > 0) {
						// read a chunk of the input argv_1424
						rdata.argv_3613 = fread (rdata.argv_4584, 1, rdata.argv_796, argv_1647);
						rdata.argv_4854      += rdata.argv_3613;
						rdata.total_nb_remaining -= rdata.argv_3613;

						// decipher this argv_795
#if defined (__DEBUG_RSA__)
						argv_2072 = argv_1195 (rdata.argv_4584, rdata.argv_3613, rdata.argv_1478, rdata.argv_3556, rdata.argv_1479, _n, _d, rdata.argv_1001, rdata.argv_1198, rdata.argv_1149, rdata.argv_3609, rdata.argv_3616, argv_1576);
#else 
						argv_2072 = argv_1195 (rdata.argv_4584, rdata.argv_3613, rdata.argv_1478, rdata.argv_3556, rdata.argv_1479, _n, _d, rdata.argv_1001, rdata.argv_1198, rdata.argv_1149, rdata.argv_3609, rdata.argv_3616, NULL);
#endif // #if defined (__DEBUG_RSA__)
						if (argv_2072 != argv_1857) {
							break;
						}

						// save the argv_4406 into destination argv_1424
						if (fwrite (rdata.argv_1478, 1, rdata.argv_1479, argv_1529) != rdata.argv_1479) {
							argv_2072 = argv_1820;
							break;
						}
						rdata.argv_1149++;

						// percent calculation & argv_1235
						{
							total_done += 1;
							percent_done = (total_done * 100.0) / total_todo;
							if ((percent_done - last_percent) > 1.0) {
								char tmpa[64];
								argv_4569 (tmpa, 64, "%.02lf %%\r", percent_done);
								tmpa[64-1] = '\0';
								cerr << tmpa;
								last_percent = percent_done;
							}
						}
					}

					// deallocate the unnecessary buffers
#if defined (__DEBUG_RSA__)
					fclose (argv_1576);
#endif // #if defined (__DEBUG_RSA__)
					rdata.argv_1232 ();
					cerr << "             \r" << "100%" << endl;
#if defined (__BENCH_RSA__)
					string s1 = bench.argv_4627 ("decipher");
					cerr << s1 << endl;
#endif // #if defined (__BENCH_RSA__)
				}

				if (fclose (argv_1529) != 0) {
					if (argv_2072 == argv_1857) { // don't override previous errors
						argv_2072 = argv_1817;
					}
				}
			}
			fclose (argv_1647);
		}
	}
	return (argv_2072);
}

argv_4536 argv_1126::argv_1330 (argv_4881 * _src_buf, argv_4883 _src_bufsize, argv_4881 * _dest_buf, argv_4883 _dest_bufsize, argv_4883& _actual_dest_bufsize, argv_3530 _n, argv_3530 _e, argv_3530 _collected_nb, argv_3530 _ciphered_block, argv_4883 _nb_to_pad, argv_3530 _min_rand, argv_3530 _max_rand, argv_3530 _random_trailer, argv_3530 _n_minus_1, FILE * _fp_log) {
	argv_4536 argv_2072 = argv_1857;
	string hex_str;

	// convert this argv_826 into a hex string
	argv_1985 (_src_buf, _src_bufsize, hex_str);
#if defined (__DEBUG_RSA__)
	if (_fp_log != NULL) {
		fprintf (_fp_log, "read argv_795 : %s (size=%d)\r\n", hex_str.c_str(), hex_str.size());
	}
#endif // #if defined (__DEBUG_RSA__)

	// generate a random trailing argv_4979 and convert it into a 2 argv_837 string
	argv_1884->argv_1739 (_min_rand, _max_rand, _random_trailer);
	string prefix = argv_1884->argv_4985 (_random_trailer, true);
#if defined (__DEBUG_RSA__)
	if (_fp_log != NULL) {
		fprintf (_fp_log, "random prefix = %s\r\n", prefix.c_str());
	}
#endif // #if defined (__DEBUG_RSA__)

	// append trailer to the begining of the number as an hex string.
	hex_str = prefix + hex_str;
#if defined (__DEBUG_RSA__)
	if (_fp_log != NULL) {
		fprintf (_fp_log, "after adding prefix : argv_795 = %s (size=%d)\r\n", hex_str.c_str(), hex_str.size());
	}
#endif // #if defined (__DEBUG_RSA__)

	// convert this hex string into a number
	argv_1884->argv_1606 (_collected_nb, hex_str.c_str(), 16);

	// ensure that this number is in the range [0..n-1]
	if (argv_1884->argv_1585 (_collected_nb, _n_minus_1) > 0) {
		argv_2072 = argv_1815;
	}
	else { // the argv_795 represents a valid number
		// perform the encipher of this argv_795
		argv_1884->argv_1604 (_ciphered_block, _collected_nb, _e, _n);

		// convert the argv_4406 into an hex string
		hex_str = argv_1884->argv_4985 (_ciphered_block, true);
#if defined (__DEBUG_RSA__)
		if (_fp_log != NULL) {
			fprintf (_fp_log, "enciphered argv_795 =%s (size=%d)\r\n", hex_str.c_str(), hex_str.size());
		}
#endif // #if defined (__DEBUG_RSA__)

		// pad the number if necessary
		argv_3705 (hex_str, _nb_to_pad);
#if defined (__DEBUG_RSA__)
		if (_fp_log != NULL) {
			fprintf (_fp_log, "after padding, size = %d\r\n", hex_str.size());
		}
#endif // #if defined (__DEBUG_RSA__)

		// convert the string argv_4406 into an hex argv_826 
		argv_2072 = argv_4635 (hex_str.c_str(), hex_str.size(), _dest_buf, _dest_bufsize, _actual_dest_bufsize);
	}
	return (argv_2072);
}

argv_4536 argv_1126::argv_1329 (argv_4881 * _src_buf, argv_4883 _src_bufsize, argv_4881 * _dest_buf, argv_4883 _dest_bufsize, argv_4883& _actual_dest_bufsize, argv_3530 _e, argv_3530 _n) {
	argv_4536 argv_2072 = argv_1857;
	argv_1127 rdata;
	argv_2072 = rdata.construct (argv_1884, _n, _src_bufsize, true);

	if (argv_2072 == argv_1857) {
		argv_4883 current_out = 0;

#if defined (__DEBUG_RSA__)
		FILE *	argv_1576 = fopen ("C:\\rsa_encipher_log.txt", "wb");
		fprintf (argv_1576, "argv_3556    = %d\r\n", rdata.argv_3556);
		fprintf (argv_1576, "argv_796    = %d\r\n", rdata.argv_796);
		fprintf (argv_1576, "argv_3609 = %d\r\n", rdata.argv_3609);
		fprintf (argv_1576, "nb_remaining  = %d\r\n", rdata.nb_remaining);
#endif // #if defined (__DEBUG_RSA__)

		while (rdata.total_nb_remaining > 0) {
			// choose the amount to read and saturate the argv_4979 if necessary.
			if (rdata.total_nb_remaining >= rdata.argv_796) {
				rdata.argv_3600 = rdata.argv_796;
			}
			else {
				rdata.argv_3600 = rdata.total_nb_remaining;	
			}

			if ((rdata.argv_4854 + rdata.argv_3600) > _src_bufsize) {
				argv_2072 = argv_1839;
				break;	
			}
			
#if defined (__DEBUG_RSA__)			
			fprintf (argv_1576, "reading a argv_795 of size : %d\r\n", rdata.argv_3600);
#endif // #if defined (__DEBUG_RSA__)

			// encipher this argv_795
#if defined (__DEBUG_RSA__)
			argv_2072 = argv_1330 (&_src_buf[rdata.argv_4854], rdata.argv_3600, &_dest_buf[current_out], rdata.argv_3556, rdata.argv_1479, _n, _e, rdata.argv_1001, rdata.argv_933, rdata.argv_3556, rdata.argv_2460, rdata.argv_2399, rdata.argv_4331, rdata.argv_3555, argv_1576);
#else 
			argv_2072 = argv_1330 (&_src_buf[rdata.argv_4854], rdata.argv_3600, &_dest_buf[current_out], rdata.argv_3556, rdata.argv_1479, _n, _e, rdata.argv_1001, rdata.argv_933, rdata.argv_3556, rdata.argv_2460, rdata.argv_2399, rdata.argv_4331, rdata.argv_3555, NULL);
#endif // #if defined (__DEBUG_RSA__)
			if (argv_2072 != argv_1857) {
				break;
			}
#if defined (__DEBUG_RSA__)
			fprintf (argv_1576, "argv_1479 = %d\r\n", rdata.argv_1479);
#endif // #if defined (__DEBUG_RSA__)

			// move the destination argv_826's pointer according to the number of argv_837 produced
			current_out += rdata.argv_1479;

			// read a chunk of the input argv_1424
			//fprintf (argv_1576, "reading a argv_795 of size : %d\r\n", rdata.argv_3600);
			// rdata.argv_3613 = fread (rdata.argv_4584, 1, rdata.argv_3600, argv_1647);
			rdata.argv_3613			  = rdata.argv_3600; 
			rdata.argv_4854      += rdata.argv_3613;
			rdata.total_nb_remaining -= rdata.argv_3613;
		}
		_actual_dest_bufsize = current_out;
		rdata.argv_1232 ();
#if defined (__DEBUG_RSA__)
		fclose (argv_1576);
#endif // #if defined (__DEBUG_RSA__)
	}
	return (argv_2072);
}

argv_4536 argv_1126::argv_1328 (argv_4881 * _src_buf, argv_4883 _src_bufsize, argv_4881 * _dest_buf, argv_4883 _dest_bufsize, argv_4883& _actual_dest_bufsize, argv_1130& _public_key) {
	argv_4536 argv_2072 = argv_1857;
	argv_2072 = argv_1329 (_src_buf, _src_bufsize, _dest_buf, _dest_bufsize, _actual_dest_bufsize, _public_key.e, _public_key.n);
	return (argv_2072);
}

argv_4536 argv_1126::argv_1328 (argv_4881 * _src_buf, argv_4883 _src_bufsize, argv_4881 * _dest_buf, argv_4883 _dest_bufsize, argv_4883& _actual_dest_bufsize, argv_1129& _private_key) {
	argv_4536 argv_2072 = argv_1857;
	argv_2072 = argv_1329 (_src_buf, _src_bufsize, _dest_buf, _dest_bufsize, _actual_dest_bufsize, _private_key.d, _private_key.n);
	return (argv_2072);
}

argv_4536 argv_1126::argv_1195 (argv_4881 * _src_buf, argv_4883 _src_bufsize, argv_4881 * _dest_buf, argv_4883 _dest_bufsize, argv_4883& _actual_dest_bufsize, argv_3530 _n, argv_3530 _d, argv_3530 _collected_nb, argv_3530 _deciphered_block, argv_4883 _current_block, argv_4883 _total_nb_block, argv_4883 _nb_to_pad, FILE * _fp_log) {
	argv_4536 argv_2072 = argv_1857;

	string hex_str;

	// convert this argv_826 into a hex string
	argv_1985 (_src_buf, _src_bufsize, hex_str);
#if defined (__DEBUG_RSA__)
	if (_fp_log != NULL) {
		fprintf (_fp_log, "read argv_795 : %s\r\n", hex_str.c_str());
	}
#endif // #if defined (__DEBUG_RSA__)

	// convert this hex string into a number
	argv_1884->argv_1606 (_collected_nb, hex_str.c_str(), 16);
#if defined (__DEBUG_RSA__)
	if (_fp_log != NULL) {
		string sa1 = argv_1884->argv_4985 (_collected_nb, true);
		fprintf (_fp_log, "after assignment, argv_1001 = %s\r\n", sa1.c_str());
	}
#endif // #if defined (__DEBUG_RSA__)

	// perform the decipher of this argv_795
	argv_1884->argv_1604 (_deciphered_block, _collected_nb, _d, _n);
	/*
	if (_fp_log != NULL) {
		string sa1 = argv_1884->argv_4985 (argv_1001, true);
		string sa2 = argv_1884->argv_4985 (_d, true);
		string sa3 = argv_1884->argv_4985 (_n, true);
		string sa4 = argv_1884->argv_4985 (argv_1198, true);
		fprintf (_fp_log, "(%s exp %s) mod %s = %s\r\n", sa1.c_str(), sa2.c_str(), sa3.c_str(), sa4.c_str());
	}
	}*/

	// convert the argv_4406 into an hex string
	hex_str = argv_1884->argv_4985 (_deciphered_block, true);

	// remove the trailing prefix (2 argv_837)
	hex_str = hex_str.substr (2, hex_str.size());

#if defined (__DEBUG_RSA__)	
	if (_fp_log != NULL) {
		fprintf (_fp_log, "deciphered argv_795 =%s (size=%d)\r\n", hex_str.c_str(), hex_str.size());
	}
#endif // #if defined (__DEBUG_RSA__)

	// pad the number if necessary (except for the last argv_795)
	if ((_current_block+1) < _total_nb_block) {
		argv_3705 (hex_str, _nb_to_pad);
#if defined (__DEBUG_RSA__)
		if (_fp_log != NULL) {
			fprintf (_fp_log, "after padding, size  = %d\r\n", hex_str.size());
			fprintf (_fp_log, "after padding, argv_4979 = %s\r\n", hex_str.c_str());
		}
#endif // #if defined (__DEBUG_RSA__)
	}

	// convert the hex string into a hex argv_826
	argv_2072 = argv_4635 (hex_str.c_str(), hex_str.size(), _dest_buf, _dest_bufsize, _actual_dest_bufsize);
	if (argv_2072 != argv_1857) {
#if defined (__DEBUG_RSA__)
		if (_fp_log != NULL) {
			fprintf (_fp_log, "+++ ERROR: argv_4635 failed !");
		}
#endif // #if defined (__DEBUG_RSA__)
	}
	return (argv_2072);
}



argv_4536 argv_1126::argv_1194 (argv_4881 * _src_buf, argv_4883 _src_bufsize, argv_4881 * _dest_buf, argv_4883 _dest_bufsize, argv_4883& _actual_dest_bufsize, argv_3530 _e, argv_3530 _n) {
	argv_4536 argv_2072 = argv_1857;
	argv_1127 rdata;
	argv_2072 = rdata.construct (argv_1884, _n, _src_bufsize, false);

	if (argv_2072 == argv_1857) {
		argv_4883 current_out = 0;

		while (rdata.total_nb_remaining > 0) {
			// choose the amount to read and saturate the argv_4979 if necessary.
			if (rdata.total_nb_remaining >= rdata.argv_796) {
				rdata.argv_3600 = rdata.argv_796;
			}
			else {
				rdata.argv_3600 = rdata.total_nb_remaining;	
			}

			if ((rdata.argv_4854 + rdata.argv_3600) > _src_bufsize) {
				argv_2072 = argv_1839;
				break;	
			}
			
			// decipher this argv_795
			argv_2072 = argv_1195 (&_src_buf[rdata.argv_4854], rdata.argv_3600, &_dest_buf[current_out], rdata.argv_3556, rdata.argv_1479, _n, _e, rdata.argv_1001, rdata.argv_1198, rdata.argv_1149, rdata.argv_3609, rdata.argv_3616, NULL);
			if (argv_2072 != argv_1857) {
				break;
			}
			// move the destination argv_826's pointer according to the number of argv_837 produced
			current_out += rdata.argv_1479;

			// read a chunk of the input argv_1424
			//fprintf (argv_1576, "reading a argv_795 of size : %d\r\n", rdata.argv_3600);
			// rdata.argv_3613 = fread (rdata.argv_4584, 1, rdata.argv_3600, argv_1647);
			rdata.argv_3613			  = rdata.argv_3600; 
			rdata.argv_4854      += rdata.argv_3613;
			rdata.total_nb_remaining -= rdata.argv_3613;
			rdata.argv_1149++;
		}
		_actual_dest_bufsize = current_out;
		rdata.argv_1232 ();
	}
	return (argv_2072);
}

argv_4536 argv_1126::argv_1193 (argv_4881 * _src_buf, argv_4883 _src_bufsize, argv_4881 * _dest_buf, argv_4883 _dest_bufsize, argv_4883& _actual_dest_bufsize, argv_1130& _public_key) {
	argv_4536 argv_2072 = argv_1857;
	argv_2072 = argv_1194 (_src_buf, _src_bufsize, _dest_buf, _dest_bufsize, _actual_dest_bufsize, _public_key.e, _public_key.n);
	return (argv_2072);
}

argv_4536 argv_1126::argv_1193 (argv_4881 * _src_buf, argv_4883 _src_bufsize, argv_4881 * _dest_buf, argv_4883 _dest_bufsize, argv_4883& _actual_dest_bufsize, argv_1129& _private_key) {
	argv_4536 argv_2072 = argv_1857;
	argv_2072 = argv_1194 (_src_buf, _src_bufsize, _dest_buf, _dest_bufsize, _actual_dest_bufsize, _private_key.d, _private_key.n);
	return (argv_2072);
}


// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	argv_4785		
// @@
// @@ INPUT			:	
// @@ argv_4883 : _key_size_in_bit: number of argv_794 in the argv_2188 to be generated.
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
// @@ This function permits to test the RSA argv_2188 argv_1747 
// @@ functionality.
// @@ 
// @@ Notice that the filenames are hardcoded, thus you may have to
// @@ adapt this function before using it.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_4785 (argv_4883 _key_size_in_bit) {
	argv_893 argv_1883;
	string libname = "C:\\new_engine\\SRC\\ElGamal\\Release\\gmp.dll";
	argv_4536 argv_2072 = argv_1883.argv_2284 (libname.c_str());
	if (argv_2072 != argv_1857) {
		cerr << "+++ ERROR: failed to argv_2274 gmp library" << endl;
	}
	else {
		argv_1126 argv_4422;
		argv_4422.init (&argv_1883);
		argv_1130		argv_4326 (argv_1883);
		argv_1129	private_key (argv_1883);
		cerr << "generating argv_2188 pair..." << endl;
		argv_4536 argv_2072 = argv_4422.argv_1738 (_key_size_in_bit, argv_4326, private_key);
		if (argv_2072 != argv_1857) {
			string serror = argv_1131 (argv_2072);
			cerr << "+++ ERROR: failed to argv_1738 - errno = " << serror.c_str() << endl;
		}
		else {
			cerr << "SUCCESS" << endl;
			cerr << "exporting argv_2188 to argv_1424..." << endl;
			string e_s = argv_1883.argv_4985 (argv_4326.e);
			string n_s = argv_1883.argv_4985 (argv_4326.n);
			string d_s = argv_1883.argv_4985 (private_key.d);

			FILE * argv_1510 = fopen ("C:\\rsa_keys.txt", "wb");
			if (! argv_1510) {
				cerr << "failed to open argv_1424 @1" << endl;
			}
			else {
				fprintf (argv_1510, "argv_4422 public argv_2188 : key_size_in_bit=%d\r\n", _key_size_in_bit);
				fprintf (argv_1510, "e=%s\r\n", e_s.c_str());
				fprintf (argv_1510, "n=%s\r\n", n_s.c_str());

				fprintf (argv_1510, "\r\n\r\nrsa private argv_2188 :\r\n");
				fprintf (argv_1510, "d=%s\r\n", d_s.c_str());
				fprintf (argv_1510, "n=%s\r\n", n_s.c_str());
				fclose (argv_1510);
			}
		}
		argv_4326.argv_1232 (argv_1883);
		private_key.argv_1232 (argv_1883);
		argv_1883.argv_4935 ();
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	argv_4784		
// @@
// @@ INPUT			:	
// @@ argv_4883 : _key_size_in_bit: number of argv_794 in the argv_2188 to be generated.
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
// @@ This function permits to test the RSA argv_2188 argv_1747 and argv_2188
// @@ export to argv_1424 functionalities.
// @@ 
// @@ Notice that the filenames are hardcoded, thus you may have to
// @@ adapt this function before using it.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_4784 (argv_4883 _key_size_in_bit, argv_876 _symmetric_key, argv_876 _pub_filename, argv_876 _priv_filename) {
	argv_893 argv_1883;
	string libname = "C:\\new_engine\\SRC\\ElGamal\\Release\\gmp.dll";
	argv_4536 argv_2072 = argv_1883.argv_2284 (libname.c_str());
	if (argv_2072 != argv_1857) {
		cerr << "+++ ERROR: failed to argv_2274 gmp library" << endl;
	}
	else {
		argv_1126 argv_4422;
		argv_4422.init (&argv_1883);
		argv_1130		argv_4326 (argv_1883);
		argv_1129	private_key (argv_1883);
		cerr << "generating argv_2188 pair..." << endl;
		argv_4536 argv_2072 = argv_4422.argv_1738 (_key_size_in_bit, argv_4326, private_key);
		if (argv_2072 != argv_1857) {
			string serror = argv_1131 (argv_2072);
			cerr << "+++ ERROR: failed to argv_1738 - errno = " << serror.c_str() << endl;
		}
		else {
			cerr << "SUCCESS" << endl;
			cerr << "exporting keys to files..." << endl;
			argv_2072 = argv_4422.argv_1387 (private_key, _symmetric_key, _priv_filename);
			if (argv_2072 != argv_1857) {
				cerr << "+++ failed to export argv_2188 to argv_1424" << endl;
				string serror = argv_1131 (argv_2072);
				cerr << serror << endl;
			}

			argv_2072 = argv_4422.argv_1387 (argv_4326, _symmetric_key, _pub_filename);
			if (argv_2072 != argv_1857) {
				cerr << "+++ failed to export argv_2188 to argv_1424" << endl;
				string serror = argv_1131 (argv_2072);
				cerr << serror << endl;
			}
		}
		argv_4326.argv_1232 (argv_1883);
		private_key.argv_1232 (argv_1883);
		argv_1883.argv_4935 ();
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	argv_4784		
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
// @@ This function permits to test the RSA argv_2188 initialization using
// @@ a given argv_1424 containing an enciphered argv_2188.
// @@ 
// @@ Notice that the filenames are hardcoded, thus you may have to
// @@ adapt this function before using it.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_4786 () {
	argv_893 argv_1883;
	string libname = "C:\\new_engine\\SRC\\ElGamal\\Release\\gmp.dll";
	argv_4536 argv_2072 = argv_1883.argv_2284 (libname.c_str());
	if (argv_2072 != argv_1857) {
		cerr << "+++ ERROR: failed to argv_2274 gmp library" << endl;
	}
	else {
		argv_1126 argv_4422;
		argv_4422.init (&argv_1883);
		argv_1130		argv_4326 (argv_1883);
		argv_1129	private_key (argv_1883);

		FILE * fplog = fopen ("C:\\test_import_keys_log.txt", "wb");
		cerr << "see log argv_1424 : " << "test_import_keys_log.txt" << endl;
		
		fprintf (fplog, "loading public argv_2188 from argv_1424...\r\n");
		argv_2072 = argv_4422.argv_2283 ("C:\\rsa_cle_publique.txt", "FEA02C3F000156EF", argv_4326);
		if (argv_2072 != argv_1857) {
			string serror = argv_1131 (argv_2072);
			fprintf (fplog, "+++ ERROR: failed to argv_2274 public argv_2188 from argv_1424 (%s)\r\n", serror.c_str());
		}
		else {
			fprintf (fplog, "public argv_2188...[LOADED FROM FILE]\r\n");
			fprintf (fplog, "loading private argv_2188 from argv_1424...\r\n");
			argv_2072 = argv_4422.argv_2283 ("C:\\rsa_cle_privee.txt", "FEA02C3F000156EF", private_key);
			if (argv_2072 != argv_1857) {
				string serror = argv_1131 (argv_2072);
				fprintf (fplog, "+++ ERROR: failed to argv_2274 private argv_2188 from argv_1424 (%s)\r\n", serror.c_str());
			}
			else {
				fprintf (fplog, "private argv_2188...[LOADED FROM FILE]\r\n");
				string pub_str	= argv_4326.argv_1386	(argv_1883);
				string priv_str = private_key.argv_1386	(argv_1883);
				
				fprintf (fplog, "=== public argv_2188 ===\r\n%s\r\n",		pub_str.c_str());
				fprintf (fplog, "=== private argv_2188 ===\r\n%s\r\n",	priv_str.c_str());

				// just for debug
				string n_str = argv_1883.argv_4985 (argv_4326.n, true);
				fprintf (fplog, "\r\n (in hexa) = %s\r\n", n_str.c_str());
				fprintf (fplog, "\r\nlength of n = %d\r\n", n_str.size());
			}
		}
		fclose (fplog);

		argv_1883.argv_4935 ();
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	argv_4771		
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
// @@ This function permits to ensure that the argv_1126 argv_3656
// @@ permits to cipher using the RSA public argv_2188.
// @@
// @@ Notice that the filenames are hardcoded, thus you may have to
// @@ adapt this function before using it.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_4771 () {
	argv_893 argv_1883;
	string libname = "C:\\new_engine\\SRC\\ElGamal\\Release\\gmp.dll";
	argv_4536 argv_2072 = argv_1883.argv_2284 (libname.c_str());
	if (argv_2072 != argv_1857) {
		cerr << "+++ ERROR: failed to argv_2274 gmp library" << endl;
	}
	else {
		argv_1126 argv_4422;
		argv_4422.init (&argv_1883);
		argv_1130		argv_4326 (argv_1883);

		argv_2072 = argv_4422.argv_2283 ("C:\\rsa_cle_publique.txt", "FEA02C3F000156EF", argv_4326);
		if (argv_2072 != argv_1857) {
			string serror = argv_1131 (argv_2072);
			fprintf (stderr, "+++ ERROR: failed to argv_2274 public argv_2188 from argv_1424 (%s)\r\n", serror.c_str());
		}
		else {
			fprintf (stderr, "public argv_2188...[LOADED FROM FILE]\r\n");
			fprintf (stderr, "private argv_2188...[LOADED FROM FILE]\r\n");
			string source_file = "C:\\new_engine\\SRC\\argv_4422\\Release\\a.txt";
			string argv_1229   = "C:\\new_engine\\SRC\\argv_4422\\Release\\a_ciphered.txt";
			fprintf (stderr, "enciphering argv_1424 : %s -> %s\r\n", source_file.c_str(), argv_1229.c_str());
			argv_2072 = argv_4422.argv_1331 (source_file.c_str(), argv_1229.c_str(), argv_4326);
			fprintf (stderr, "encipher...[DONE]\r\n");
			if (argv_2072 != argv_1857) {
				string serror = argv_1131 (argv_2072);
				fprintf (stderr, "encipher...[FAILED - %s]\r\n", serror.c_str());
			}
			else {
				fprintf (stderr, "encipher...[SUCCESS]\r\n");
			}
		}
		argv_4326.argv_1232 (argv_1883);
		argv_1883.argv_4935 ();
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	argv_4770		
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
// @@ This function permits to ensure that the argv_1126 argv_3656
// @@ permits to cipher using the RSA private argv_2188.
// @@
// @@ Notice that the filenames are hardcoded, thus you may have to
// @@ adapt this function before using it.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_4770 (argv_876 _gmp_lib, argv_876 _symmetric_key, argv_876 _priv_keyfile, argv_876 _src_file, argv_876 _dest_file) {
	argv_893 argv_1883;
	argv_4536 argv_2072 = argv_1883.argv_2284 (_gmp_lib);
	if (argv_2072 != argv_1857) {
		cerr << "+++ ERROR: failed to argv_2274 gmp library" << endl;
	}
	else {
		argv_1126 argv_4422;
		argv_4422.init (&argv_1883);
		argv_1129	private_key (argv_1883);

//		fprintf (stderr, "loading private argv_2188 from argv_1424...\r\n");
		argv_2072 = argv_4422.argv_2283 (_priv_keyfile, _symmetric_key, private_key);
		if (argv_2072 != argv_1857) {
			string serror = argv_1131 (argv_2072);
			fprintf (stderr, "+++ ERROR: failed to argv_2274 private argv_2188 from argv_1424 (%s)\r\n", serror.c_str());
		}
		else {
//			fprintf (stderr, "private argv_2188...[LOADED FROM FILE]\r\n");
//			fprintf (stderr, "enciphering argv_1424 : %s -> %s\r\n", _src_file, _dest_file);
			argv_2072 = argv_4422.argv_1331 (_src_file, _dest_file, private_key);
//			fprintf (stderr, "encipher...[DONE]\r\n");
			if (argv_2072 != argv_1857) {
				string serror = argv_1131 (argv_2072);
				fprintf (stderr, "encipher...[FAILED - %s]\r\n", serror.c_str());
			}
			else {
				fprintf (stderr, "encipher...[SUCCESS]\r\n");
			}
		}
		private_key.argv_1232 (argv_1883);
		argv_1883.argv_4935 ();
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	argv_4768		
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
// @@ This function permits to ensure that the argv_1126 argv_3656
// @@ permits to decipher using the RSA private argv_2188.
// @@
// @@ Notice that the filenames are hardcoded, thus you may have to
// @@ adapt this function before using it.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_4768 () {
	argv_893 argv_1883;
	string libname = "C:\\new_engine\\SRC\\ElGamal\\Release\\gmp.dll";
	argv_4536 argv_2072 = argv_1883.argv_2284 (libname.c_str());
	if (argv_2072 != argv_1857) {
		cerr << "+++ ERROR: failed to argv_2274 gmp library" << endl;
	}
	else {
		argv_1126 argv_4422;
		argv_4422.init (&argv_1883);
		argv_1129	private_key (argv_1883);

		fprintf (stderr, "loading private argv_2188 from argv_1424...\r\n");
		argv_2072 = argv_4422.argv_2283 ("C:\\rsa_cle_privee.txt", "FEA02C3F000156EF", private_key);
		if (argv_2072 != argv_1857) {
			string serror = argv_1131 (argv_2072);
			fprintf (stderr, "+++ ERROR: failed to argv_2274 private argv_2188 from argv_1424 (%s)\r\n", serror.c_str());
		}
		else {
			fprintf (stderr, "private argv_2188...[LOADED FROM FILE]\r\n");
			string source_file = "C:\\new_engine\\SRC\\argv_4422\\Release\\a_ciphered.txt";
			string argv_1229   = "C:\\new_engine\\SRC\\argv_4422\\Release\\a_deciphered.txt";
			fprintf (stderr, "deciphering argv_1424 : %s -> %s\r\n", source_file.c_str(), argv_1229.c_str());
			argv_2072 = argv_4422.argv_1196 (source_file.c_str(), argv_1229.c_str(), private_key);
			fprintf (stderr, "decipher...[DONE]\r\n");
			if (argv_2072 != argv_1857) {
				string serror = argv_1131 (argv_2072);
				fprintf (stderr, "decipher...[FAILED - %s]\r\n", serror.c_str());
			}
			else {
				fprintf (stderr, "decipher...[SUCCESS]\r\n");
			}
		}
		private_key.argv_1232 (argv_1883);
		argv_1883.argv_4935 ();
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	argv_4769		
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
// @@ This function permits to ensure that the argv_1126 argv_3656
// @@ permits to decipher using the RSA public argv_2188.
// @@
// @@ Notice that the filenames are hardcoded, thus you may have to
// @@ adapt this function before using it.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_4769 (argv_876 _gmp_dll, argv_876 _symmetric_key, argv_876 _pubkey_file, argv_876 _src_file, argv_876 _dest_file) {
	argv_893 argv_1883;
	argv_4536 argv_2072 = argv_1883.argv_2284 (_gmp_dll);
	if (argv_2072 != argv_1857) {
		cerr << "+++ ERROR: failed to argv_2274 gmp library" << endl;
	}
	else {
		argv_1126 argv_4422;
		argv_4422.init (&argv_1883);
		argv_1130		argv_4326 (argv_1883);

		argv_2072 = argv_4422.argv_2283 (_pubkey_file, _symmetric_key, argv_4326);
		if (argv_2072 != argv_1857) {
			string serror = argv_1131 (argv_2072);
			fprintf (stderr, "+++ ERROR: failed to argv_2274 public argv_2188 from argv_1424 (%s)\r\n", serror.c_str());
		}
		else {
			fprintf (stderr, "public argv_2188...[LOADED FROM FILE]\r\n");
			fprintf (stderr, "deciphering argv_1424 : %s -> %s\r\n", _src_file, _dest_file);
			argv_2072 = argv_4422.argv_1196 (_src_file, _dest_file, argv_4326);
			fprintf (stderr, "decipher...[DONE]\r\n");
			if (argv_2072 != argv_1857) {
				string serror = argv_1131 (argv_2072);
				fprintf (stderr, "decipher...[FAILED - %s]\r\n", serror.c_str());
			}
			else {
				fprintf (stderr, "decipher...[SUCCESS]\r\n");
			}
		}
		argv_4326.argv_1232 (argv_1883);
		argv_1883.argv_4935 ();
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	argv_4791		
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
// @@ This function permits to ensure that the argv_1126 argv_3656
// @@ permits to encipher using the RSA public argv_2188 and to
// @@ decipher using the RSA private argv_2188.
// @@
// @@ Notice that the filenames are hardcoded, thus you may have to
// @@ adapt this function before using it.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_4791 () {
	cerr << "----- encipher using public argv_2188 ----" << endl;
	argv_4771 ();

	cerr << "----- decipher using private argv_2188 ----" << endl;
	argv_4768 ();

	if (argv_1477 ("C:\\new_engine\\SRC\\argv_4422\\Release\\a.txt", "C:\\new_engine\\SRC\\argv_4422\\Release\\a_deciphered.txt") == false) {
		cerr << "+++ ERROR: files are different !" << endl;
	}
	else {
		cerr << "argv_1424 comparison...[OK]" << endl;
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	argv_4790		
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
// @@ This function permits to ensure that the argv_1126 argv_3656
// @@ permits to encipher using the RSA private argv_2188 and to
// @@ decipher using the RSA public argv_2188.
// @@
// @@ Notice that the filenames are hardcoded, thus you may have to
// @@ adapt this function before using it.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_4790 () {
	string src_filename			= "C:\\new_engine\\SRC\\argv_4422\\Release\\a.txt";
	string ciphered_filename	= "C:\\new_engine\\SRC\\argv_4422\\Release\\a_ciphered.txt"; 
	string deciphered_filename	= "C:\\new_engine\\SRC\\argv_4422\\Release\\a_deciphered.txt"; 
	string private_keyfile		= "C:\\new_engine\\SRC\\fake_GUI\\DLL\\rsa_priv_key.txt";
	string public_keyfile		= "C:\\new_engine\\SRC\\fake_GUI\\DLL\\rsa_pub_key.txt";
	string symmetric_key		= "FEA02C3F000156EF";
	string gmp_libname			= "C:\\new_engine\\SRC\\ElGamal\\Release\\gmp.dll";

	cerr << "----- encipher using private argv_2188 ----" << endl;
	argv_4770 (gmp_libname.c_str(), symmetric_key.c_str(), private_keyfile.c_str(), src_filename.c_str(), ciphered_filename.c_str());

	cerr << "----- decipher using public argv_2188 ----" << endl;
	argv_4769 (gmp_libname.c_str(), symmetric_key.c_str(), public_keyfile.c_str(), ciphered_filename.c_str(), deciphered_filename.c_str());

	if (argv_1477 (src_filename.c_str(), deciphered_filename.c_str()) == false) {
		cerr << "+++ ERROR: files are different !" << endl;
	}
	else {
		cerr << "argv_1424 comparison...[OK]" << endl;
	}
}

#if defined (__RSA_MMAP_TEST__)
	bool argv_4788 (argv_876 _private_key_file, argv_876 _symetric_key, argv_876 _source, argv_876 _dest) {
		bool bret = true;
		argv_893 argv_1883;
		string libname = "C:\\new_engine\\SRC\\ElGamal\\Release\\gmp.dll";
		argv_4536 argv_2072 = argv_1883.argv_2284 (libname.c_str());
		if (argv_2072 != argv_1857) {
			bret = false;
			cerr << "+++ ERROR: failed to argv_2274 gmp library" << endl;
		}
		else {
			argv_1126 argv_4422;
			argv_4422.init (&argv_1883);
			argv_1129	private_key (argv_1883);

			fprintf (stderr, "loading private argv_2188 from argv_1424...\r\n");
			argv_2072 = argv_4422.argv_2283 (_private_key_file, _symetric_key, private_key);
			if (argv_2072 != argv_1857) {
				bret = false;
				string serror = argv_1131 (argv_2072);
				fprintf (stderr, "+++ ERROR: failed to argv_2274 private argv_2188 from argv_1424 (%s)\r\n", serror.c_str());
			}
			else {
				fprintf (stderr, "private argv_2188...[LOADED FROM FILE]\r\n");
				fprintf (stderr, "enciphering argv_1424 : %s -> %s\r\n", _source, _dest);

				argv_888 mapper_src;
				argv_888 mapper_dest;

				argv_4881 * src_ptr = NULL;
				argv_4883   src_size = 0;
				argv_4881 * dest_ptr = NULL;
				argv_4883   dest_size = 0;

				// mmap the source argv_1424
				bool bret2 = mapper_src.argv_2532 (_source, argv_2534, src_ptr, src_size);
				if (bret2 == false) {
					bret = false;
					cerr << "+++ ERROR: failed to mmap source argv_1424 !" << endl;
				}
				else {
					cerr << "source argv_1424 mmapped" << endl;
					// compute the space needed for the destination argv_1424
					argv_2072 = argv_4422.argv_1073 (private_key.n, src_size, true, dest_size);
					if (argv_2072 != argv_1857) {
						bret = false;
						cerr << "+++ ERROR: 'argv_1073' failed !" << endl;
					}
					else {
						cerr << "destination argv_1424 size will be : " << dest_size << endl;
						// mmap the destination argv_1424
						bret2 = mapper_dest.argv_2532 (_dest, argv_2535, dest_ptr, dest_size);
						if (bret2 == false) {
							bret = false;
							cerr << "+++ ERROR: failed to mmap destination argv_1424 !" << endl;

							argv_4883 argv_1343, argv_1351;
							mapper_dest.argv_1769 (argv_1343, argv_1351);
							cerr << "argv_1343=" << argv_1343 << ", argv_1351=" << argv_1351 << endl;
						}
						else {
							cerr << "destination argv_1424 mmapped" << endl;
							argv_4883 actual_dest_size = 201274;
							argv_2072 = argv_4422.argv_1329 (src_ptr, src_size, dest_ptr, dest_size, actual_dest_size, private_key.d, private_key.n);
							fprintf (stderr, "encipher...[DONE]\r\n");
							if (argv_2072 != argv_1857) {
								bret = false;
								string serror = argv_1131 (argv_2072);
								fprintf (stderr, "encipher...[FAILED - %s]\r\n", serror.c_str());
							}
							else {
								fprintf (stderr, "encipher...[SUCCESS]\r\n");
								fprintf (stderr, "actual_dest_size = %u\n", actual_dest_size);
							}
							mapper_dest.argv_971 ();
						}
						mapper_src.argv_971 ();
					}
				}
			}
			private_key.argv_1232 (argv_1883);
			argv_1883.argv_4935 ();
		}
		return (bret);
	}
#endif // #if defined (__RSA_MMAP_TEST__)


#if defined (__RSA_MMAP_TEST__)
	bool argv_4787 (argv_876 _public_key_file, argv_876 _symetric_key, argv_876 _source, argv_876 _dest) {
		bool bret = true;
		argv_893 argv_1883;
		string libname = "C:\\new_engine\\SRC\\ElGamal\\Release\\gmp.dll";
		argv_4536 argv_2072 = argv_1883.argv_2284 (libname.c_str());
		if (argv_2072 != argv_1857) {
			cerr << "+++ ERROR: failed to argv_2274 gmp library" << endl;
			bret = false;
		}
		else {
			argv_1126 argv_4422;
			argv_4422.init (&argv_1883);
			argv_1130	argv_4326 (argv_1883);

			fprintf (stderr, "loading public argv_2188 from argv_1424...\r\n");
			argv_2072 = argv_4422.argv_2283 (_public_key_file, _symetric_key, argv_4326);
			if (argv_2072 != argv_1857) {
				bret = false;
				string serror = argv_1131 (argv_2072);
				fprintf (stderr, "+++ ERROR: failed to argv_2274 private argv_2188 from argv_1424 (%s)\r\n", serror.c_str());
			}
			else {
				fprintf (stderr, "public argv_2188...[LOADED FROM FILE]\r\n");
				fprintf (stderr, "enciphering argv_1424 : %s -> %s\r\n", _source, _dest);

				argv_888 mapper_src;
				argv_888 mapper_dest;

				argv_4881 * src_ptr = NULL;
				argv_4883   src_size = 0;
				argv_4881 * dest_ptr = NULL;
				argv_4883   dest_size = 0;

				// mmap the source argv_1424
				bool bret2 = mapper_src.argv_2532 (_source, argv_2534, src_ptr, src_size);
				if (bret2 == false) {
					bret = false;
					cerr << "+++ ERROR: failed to mmap source argv_1424 !" << endl;
				}
				else {
					cerr << "source argv_1424 mmapped" << endl;
					// compute the space needed for the destination argv_1424
					argv_2072 = argv_4422.argv_1073 (argv_4326.n, src_size, false, dest_size);
					if (argv_2072 != argv_1857) {
						bret = false;
						cerr << "+++ ERROR: 'argv_1073' failed !" << endl;
					}
					else {
						cerr << "destination argv_1424 size will be : " << dest_size << endl;
						// mmap the destination argv_1424
						bret2 = mapper_dest.argv_2532 (_dest, argv_2535, dest_ptr, dest_size);
						if (bret2 == false) {
							bret = false;
							cerr << "+++ ERROR: failed to mmap destination argv_1424 !" << endl;
						}
						else {
							cerr << "destination argv_1424 mmapped" << endl;
							argv_4883 actual_dest_size = 201274;
							argv_2072 = argv_4422.argv_1194 (src_ptr, src_size, dest_ptr, dest_size, actual_dest_size, argv_4326.e, argv_4326.n);
							fprintf (stderr, "decipher...[DONE]\r\n");
							if (argv_2072 != argv_1857) {
								bret = false;
								string serror = argv_1131 (argv_2072);
								fprintf (stderr, "decipher...[FAILED - %s]\r\n", serror.c_str());
							}
							else {
								fprintf (stderr, "encipher...[SUCCESS]\r\n");
								fprintf (stderr, "actual_dest_size = %u\n", actual_dest_size);
							}
							mapper_dest.argv_971 ();
						}
					}
					mapper_src.argv_971 ();
				}
			}
			argv_4326.argv_1232 (argv_1883);
			argv_1883.argv_4935 ();
		}
		return (bret);
	}
#endif // #if defined (__RSA_MMAP_TEST__)


#if defined (__RSA_MMAP_TEST__)
	void argv_4789 () {
		string private_keyfile	= "C:\\new_engine\\SRC\\fake_GUI\\DLL\\rsa_priv_key.txt";
		string public_keyfile	= "C:\\new_engine\\SRC\\fake_GUI\\DLL\\rsa_pub_key.txt";
		string plain_file		= "C:\\new_engine\\SRC\\argv_4422\\Release\\a.txt";
		string ciphered_file	= "C:\\new_engine\\SRC\\argv_4422\\Release\\a_ciphered.txt";
		string deciphered_file	= "C:\\new_engine\\SRC\\argv_4422\\Release\\a_deciphered.txt";
		string symetric_key		= "FEA02C3F000156EF";

		cerr << "------------- ENCIPHER -----------------" << endl;
		bool bret = argv_4788 (private_keyfile.c_str(), symetric_key.c_str(), plain_file.c_str(), ciphered_file.c_str());

		if (bret == true) {
			cerr << "------------- DECIPHER -----------------" << endl;
			argv_4787 (public_keyfile.c_str(), symetric_key.c_str(), ciphered_file.c_str(), deciphered_file.c_str());
		}
	}
#endif // #if defined (__RSA_MMAP_TEST__)

class argv_1128
{
private:
	map<string, bool>	argv_2570;
	map<string, bool>::iterator	argv_2530;

public:
	bool	argv_2086;
	bool	argv_2081;
	bool	argv_2080;
	bool	argv_2098;
	string	argv_4585;
	string	argv_1229;
	string	argv_4323;
	string	argv_4258;
	string	argv_1225;
	argv_4883	argv_2193;
	string	argv_2194;

	argv_1128 () {
		argv_2193					= 0;
		argv_2086				= false;
		argv_2081				= false;
		argv_2080				= false;
		argv_2098				= false;

		argv_2570["-genrsa"]		= true;
		argv_2570["-argv_2193"]		= true;
		argv_2570["-argv_1225"]		= true;
		argv_2570["-argv_4323"]	= true;
		argv_2570["-argv_4258"]	= true;
		argv_2570["-encipher"]		= true;
		argv_2570["-decipher"]		= true;
		argv_2570["-dest"]			= true;
		argv_2570["-verbose"]		= true;
	}

	void argv_1235 () {
		if (argv_2086 == true) {
			cerr << "genrsa : true" << endl;
		}
		else {
			cerr << "genrsa : false" << endl;
		}
		if (argv_2081 == true) {
			cerr << "encipher : true" << endl;
		}
		else {
			cerr << "encipher : false" << endl;
		}
		if (argv_2080 == true) {
			cerr << "decipher : true" << endl;
		}
		else {
			cerr << "decipher : false" << endl;
		}
		if (argv_2098 == true) {
			cerr << "verbose : true" << endl;
		}
		else {
			cerr << "verbose : false" << endl;
		}
		cerr << "source argv_1424 : "	<< argv_4585		<< endl;
		cerr << "argv_1229 : "		<< argv_1229	<< endl;
		cerr << "argv_4323 : "	<< argv_4323	<< endl;
		cerr << "argv_4258 : "	<< argv_4258	<< endl;
		cerr << "argv_1225 : "		<< argv_1225		<< endl;
		cerr << "argv_2193 : "		<< argv_2193		<< endl;
		cerr << "argv_2194 : "	<< argv_2194	<< endl;
	}

	bool argv_2087 (argv_876 _parameter) {
		bool bret = false;
		argv_2570.find (_parameter);
		argv_2530 = argv_2570.find (_parameter);
		if (argv_2530 != argv_2570.end()) {
			bret = true;
		}	
		return (bret);
	}

	void argv_4433 (argv_876 _var, argv_876 _val) {
		if (     strcmp (_var, "-genrsa") == 0) {
			argv_2086 = true;	
		}
		else if (strcmp (_var, "-argv_2193") == 0) {
			argv_2194 = _val;	
			argv_2193		= atoi (_val);
		}
		else if (strcmp (_var, "-argv_1225") == 0) {
			argv_1225 = _val;	
		}
		else if (strcmp (_var, "-argv_4323") == 0) {
			argv_4323 = _val;	
		}
		else if (strcmp (_var, "-argv_4258") == 0) {
			argv_4258 = _val;	
		}
		else if (strcmp (_var, "-encipher") == 0) {
			argv_2081 = true;	
			argv_4585	= _val;
		}
		else if (strcmp (_var, "-decipher") == 0) {
			argv_2080 = true;	
			argv_4585	= _val;
		}
		else if (strcmp (_var, "-dest") == 0) {
			argv_1229 = _val;
		}
		else if (strcmp (_var, "-verbose") == 0) {
			argv_2098 = true;
		}
	}
};

void argv_1257 () {
	cerr << "usage:" << endl; 
	cerr << "./a.out -genrsa -argv_2193 <size_in_bit> -argv_1225 <argv_2188> -argv_4323 <argv_1474> -argv_4258 <argv_1474> {-verbose}" << endl;
	cerr << "./a.out -encipher <source_filename> -dest <argv_1230> -argv_4323 <argv_1474> -argv_1225 <argv_2188> {-verbose}" << endl;
	cerr << "./a.out -encipher <source_filename> -dest <argv_1230> -argv_4258 <argv_1474> -argv_1225 <argv_2188> {-verbose}" << endl;
	cerr << endl;
	cerr << "./a.out -decipher <source_filename> -dest <argv_1230> -argv_4323 <argv_1474> -argv_1225 <argv_2188> {-verbose}" << endl;
	cerr << "./a.out -decipher <source_filename> -dest <argv_1230> -argv_4258 <argv_1474> -argv_1225 <argv_2188> {-verbose}" << endl;
}

argv_4536 argv_908 (argv_1128& _param) {
	argv_4536 argv_2072 = 0;
	argv_4536 nb_opa = 0;
	if (_param.argv_2086 == true) {
		nb_opa++;	
	}
	if (_param.argv_2081 == true) {
		nb_opa++;	
	}
	if (_param.argv_2080 == true) {
		nb_opa++;	
	}
	if (nb_opa == 0) {
		cerr << "+++ ERROR: please choose an operation : -genrsa, -encipher, -decipher" << endl;
		argv_2072 = 1;
	}
	else if (nb_opa > 1) {
		argv_2072 = 2;
		cerr << "+++ ERROR: multiple operations not allowed !!" << endl;
	}
	else { // user chose only argv_3677 operation 
		if (_param.argv_1225 == "") {
			cerr << "+++ ERROR: missing parameter : -argv_1225" << endl;
			argv_2072 = 3;
		}
		else if (_param.argv_1225.size() != 16) {
			cerr << "+++ ERROR: invalid parameter argv_4979 : -argv_1225 (length must be 16) !!" << endl;
			argv_2072 = 3;
		}

		if (argv_2072 == 0) {
			if (_param.argv_2086 == true) {
				if (_param.argv_2194 == "") {
					cerr << "+++ ERROR: missing parameter : -argv_2193" << endl;
					argv_2072 = 3;
				}
				else if ((_param.argv_2193 < 128) || (_param.argv_2193 > 8192)) {
					cerr << "+++ ERROR: invalid parameter argv_4979 -argv_2193 must be within range [128..8192]" << endl;
					argv_2072 = 3;
				}
				else if (_param.argv_4323 == "") {
					cerr << "+++ ERROR: missing parameter : -argv_4323" << endl;
					argv_2072 = 3;
				}
				else if (_param.argv_4258 == "") {
					cerr << "+++ ERROR: missing parameter : -argv_4258" << endl;
					argv_2072 = 3;
				}
			}
			else if ((_param.argv_2080 == true) || (_param.argv_2081 == true)) {
				if (_param.argv_4585 == "") {
					cerr << "+++ ERROR: missing parameter : source_filename" << endl;
					argv_2072 = 3;
				}
				else if (_param.argv_1229 == "") {
					cerr << "+++ ERROR: missing parameter : -dest" << endl;
					argv_2072 = 3;
				}
				else if ((_param.argv_4323 == "") && (_param.argv_4258 == "")) {
					cerr << "+++ ERROR: missing parameter : either -argv_4323, or -argv_4258" << endl;
					argv_2072 = 3;
				}
			}
		}
	}
	return (argv_2072);
}

argv_4536 argv_3714 (int _argc, char** _argv, argv_1128& _param) {
	argv_4536 argv_2072 = 0;
	for (argv_4536 i=1 ; i<_argc ; ) {
		// argv_1090 param & ensure that the param is known
		if (_param.argv_2087 (_argv[i]) == false) {
			argv_2072 = 1;
			cerr << "+++ ERROR: unknown parameter : '" << _argv[i] << "'" << endl;
			break;
		}

		if ((strcmp(_argv[i], "-genrsa") == 0) || (strcmp(_argv[i], "-verbose") == 0)) {
			_param.argv_4433 (_argv[i], "");
			i += 1;
		}
		else {
			// argv_1090 param argv_4979
			if ((i+1) >= _argc) {
				argv_2072 = 2;
				cerr << "+++ ERROR: missing argv_4979 for parameter '" << _argv[i] << "'" << endl; 
				break;
			}

			_param.argv_4433 (_argv[i], _argv[i+1]);
			i += 2;
		}
	}

	if (argv_2072 == 0) {
		argv_2072 = argv_908 (_param);
	}
	return (argv_2072);
}

#if defined (__TEST_RSA_MAIN__)
	int main(int argv_759, char* argv_760[]) {
		argv_4536 argv_2072 = 0;

		// argv_2274 the gmp DLL
		argv_893 argv_1883;
		string libname = "./gmp.dll";
		argv_2072 = argv_1883.argv_2284 (libname.c_str());
		if (argv_2072 != argv_1857) {
			cerr << "+++ ERROR: failed to argv_2274 gmp library" << endl;
			argv_2072 = 5;
		}
		else {
			cerr << "GMP library argv_2297" << endl;
			argv_1126 argv_4422;
			argv_4422.init (&argv_1883);

			argv_1128 param;
			argv_2072 = argv_3714 (argv_759, argv_760, param);
			if (argv_2072 != 0) {
				argv_1257 ();	
				param.argv_1235 ();
			}
			else { // parameters are OK
				if (param.argv_2098 == true) {
					cerr << "parameters OK" << endl;
				}
				if (param.argv_2086 == true) {
					if (param.argv_2098 == true) {
						cerr << "generating RSA argv_2188 pair (argv_2188 size : " << param.argv_2193 << ")" << endl;
					}
					argv_4784 (param.argv_2193, param.argv_1225.c_str(), param.argv_4323.c_str(), param.argv_4258.c_str());
				}
				else {
					argv_1129 private_key (argv_1883);
					argv_1130	argv_4326 (argv_1883);

					if (param.argv_4323 != "") {
						if (param.argv_2098 == true) {
							cerr << "loading public argv_2188 from argv_1424 : " << param.argv_4323 << endl;
						}
						argv_2072 = argv_4422.argv_2283 (param.argv_4323.c_str(), param.argv_1225.c_str(), argv_4326);
						if (argv_2072 != argv_1857) {
							string serror = argv_1131 (argv_2072);
							fprintf (stderr, "+++ ERROR: failed to argv_2274 public argv_2188 from argv_1424 (%s)\r\n", serror.c_str());
						}
					}
					else if (param.argv_4258 != "") {
						if (param.argv_2098 == true) {
							cerr << "loading private argv_2188 from argv_1424 : " << param.argv_4258 << endl;
						}
						argv_2072 = argv_4422.argv_2283 (param.argv_4258.c_str(), param.argv_1225.c_str(), private_key);
						if (argv_2072 != argv_1857) {
							string serror = argv_1131 (argv_2072);
							fprintf (stderr, "+++ ERROR: failed to argv_2274 private argv_2188 from argv_1424 (%s)\r\n", serror.c_str());
						}
					}

					if (argv_2072 == argv_1857) {
						if (param.argv_2081 == true) {
							if (param.argv_4258 != "") {
								if (param.argv_2098 == true) {
									cerr << "encipher argv_1424     : " << param.argv_4585	<< endl;
									cerr << "to argv_1424           : " << param.argv_1229	<< endl;
									cerr << "using private argv_2188 : " << param.argv_4258 << endl;
								}
								argv_2072 = argv_4422.argv_1331 (param.argv_4585.c_str(), param.argv_1229.c_str(), private_key);
							}
							else if (param.argv_4323 != "") {
								if (param.argv_2098 == true) {
									cerr << "encipher argv_1424     : " << param.argv_4585	<< endl;
									cerr << "to argv_1424           : " << param.argv_1229	<< endl;
									cerr << "using public argv_2188  : " << param.argv_4323 << endl;
								}
								argv_2072 = argv_4422.argv_1331 (param.argv_4585.c_str(), param.argv_1229.c_str(), argv_4326);
							}
						}
						else if (param.argv_2080 == true) {
							if (param.argv_4258 != "") {
								if (param.argv_2098 == true) {
									cerr << "decipher argv_1424     : " << param.argv_4585	<< endl;
									cerr << "to argv_1424           : " << param.argv_1229	<< endl;
									cerr << "using private argv_2188 : " << param.argv_4258 << endl;
								}
								argv_2072 = argv_4422.argv_1196 (param.argv_4585.c_str(), param.argv_1229.c_str(), private_key);
							}
							else if (param.argv_4323 != "") {
								if (param.argv_2098 == true) {
									cerr << "decipher argv_1424     : " << param.argv_4585	<< endl;
									cerr << "to argv_1424           : " << param.argv_1229	<< endl;
									cerr << "using public argv_2188  : " << param.argv_4323 << endl;
								}
								argv_2072 = argv_4422.argv_1196 (param.argv_4585.c_str(), param.argv_1229.c_str(), argv_4326);
							}
						}
					}

					if (argv_2072 == argv_1857) {
						if (param.argv_2098 == true) {
							cerr << "operation success" << endl;
						}
					}
					else {
						string serror = argv_1131 (argv_2072);
						cerr << "operation FAILED ! - errno = " << serror << endl;
					}

					private_key.argv_1232 (argv_1883);
					argv_4326.argv_1232 (argv_1883);
				}
			}
			argv_1883.argv_4935 ();
		}

		if (argv_2072 == argv_1857) { // remap error argv_976
			argv_2072 = 0;
		}
		return (argv_2072);
	}
#endif // #if defined (__TEST_RSA_MAIN__)



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1424
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

