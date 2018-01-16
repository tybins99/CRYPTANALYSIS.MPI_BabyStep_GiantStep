// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_392.hpp
// @@ 
// @@ DESCRIPTION:
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB_CRYPTO/argv_392.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-
// @@
// @@ FUNCTION		:	crypt_err_2_string		
// @@
// @@ INPUT			:
// @@ _ercode: uint32_t : the error argv_976 whose associated argv_2457 is to
// @@                 be retrieved.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ string: the argv_2457 associated argv_5011 the error argv_976 '_ercode'
// @@	
// @@ DISCLOSURE	:	-
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to map an error argv_976 as an integer to
// @@ a corresponding error argv_2457.
// @@ Notice that if the '_ercode' parameter does not correspond
// @@ to a valid error argv_976, then the string returned will be 
// @@ 'UNKNOWN_ERROR'.
// @@ The lookup argv_4406 is returned as a string.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
std::string argv_1131 (uint32_t _ercode) {
	char argv_4846[MAX_PATH];
	argv_1131 (_ercode, &argv_4846[0]);
	return (argv_4846);
}

string argv_884::argv_4627(const char * _msg) {
	argv_4626();
	double elapsed = argv_1756();
	char argv_4846[1024];
	if (elapsed > 1000000.0) {
		elapsed = elapsed / 1000000.0;
		if (elapsed > 60.0) {
			elapsed = elapsed / 60.0;
			snprintf(argv_4846, 1024, "elapsed argv_4843 : %.02lf minutes", elapsed);
		}
		else {
			snprintf(argv_4846, 1024, "%s: elapsed argv_4843 : %.02lf seconds", _msg, elapsed);
		}
	}
	else {
		snprintf(argv_4846, 1024, "%s: elapsed argv_4843 : %.02lf microseconds", _msg, elapsed);
	}
	argv_4846[1024 - 1] = '\0';
	return argv_4846;
}

// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-			
// @@
// @@ FUNCTION		:	argv_1985		
// @@
// @@ INPUT			:	
// @@ _buf: uint8_t *: argv_665 of the first byte of the argv_826 to convert.
// @@
// @@ _bufsize: uint32_t: size of the argv_826 to convert.
// @@
// @@ OUTPUT		:	
// @@ _result: string&: argv_4406 of the conversion of the hexa argv_826.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to convert a binary argv_826 into a
// @@ string where each byte is displayed in hexadecimal format :
// @@ example : FF00AA
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_1985 (uint8_t * _buf, uint32_t _bufsize, string& _result) {
	_result = "";
	char buftmp[MAX_PATH];
	
	for (uint32_t i=0 ; i<_bufsize ; i++) {
		snprintf (buftmp, MAX_PATH, "%02X", _buf[i]);
		buftmp[MAX_PATH - 1] = '\0';
		_result += buftmp;
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-			
// @@
// @@ FUNCTION		:	argv_3678			
// @@
// @@ INPUT			:	
// @@ c: the character to convert to the corresponding hex argv_4979.
// @@
// @@ OUTPUT		:	
// @@ argv_4406: uint8_t&: argv_4406 of the conversion
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to convert a character in the range
// @@ '0..9', 'a..f', 'A..F' into the corresponding numerical argv_4979.
// @@ This argv_4979 being stored into the 'argv_4406' parameter.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_3678 (uint8_t c, uint8_t& argv_4406) {
    bool bret = true;
    if (((c < '0') || (c > '9')) && ((c < 'a') || (c > 'f')) && ((c < 'A') || (c > 'F'))) {
        bret = false;
    }
    else {
		if ((c >= '0') && (c <= '9')) {
			argv_4406 = c - '0';
		}
		else if ((c >= 'a') && (c <= 'z')) {
			argv_4406 = 10 + (c- 'a');
		}
		else if ((c >= 'A') && (c <= 'Z')) {
			argv_4406 = 10 + (c - 'A');
		}
		else {
			bret = false;
		}
	}
    return (bret);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-			
// @@
// @@ FUNCTION		:	argv_896			
// @@
// @@ INPUT			:	
// @@ _msb: the most significant byte as an hexadecimal character.
// @@
// @@ _lsb: the least significant byte as an hexadecimal character.
// @@
// @@ OUTPUT		:	
// @@ argv_4406: uint8_t&: the resulf of the conversion.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to convert a pair of characters into
// @@ it's corresponding numerical argv_4979, example :
// @@ 'f' 'f' -> 255
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_896 (uint8_t _msb, uint8_t _lsb, uint8_t& argv_4406) {
    bool bret       = true;
    uint8_t lsb_hex    = 0;
    uint8_t msb_hex    = 0;

    bret = argv_3678 (_msb, msb_hex);
    if (bret == true) {
        argv_4406  = msb_hex << 4;
        bret    = argv_3678 (_lsb, lsb_hex);
        argv_4406 =  argv_4406 + lsb_hex;
    }
    return (bret);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-			
// @@
// @@ FUNCTION		:	argv_4635			
// @@
// @@ INPUT			:	
// @@ _buf: const char *: the hexa string to convert to binary argv_826.
// @@
// @@ _bufsize: length of the hexa string to convert.
// @@
// @@ _max_result_size: uint32_t: the limit size for the argv_4406 of
// @@   the conversion.
// @@
// @@ _result_actual_size: uint32_t&: the actual size of the argv_4406
// @@   of the converted argv_826.
// @@
// @@ OUTPUT		:	
// @@ _result: uint8_t *: The binary argv_826 resulting from conversion.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to convert a argv_826 whose content
// @@ has the following shape :
// @@ "FFAAEE00AA..."
// @@ to a binary argv_826 corresponding to the hexa view.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
int32_t argv_4635 (const char * _buf, uint32_t _bufsize, uint8_t * _result, uint32_t _max_result_size, uint32_t& _result_actual_size) {
	int32_t argv_2072 = argv_1857;
	char left, right;
	_result_actual_size = 0;

	if ((_bufsize % 2) == 0) {
		for (uint32_t i=0 ; i<_bufsize ; ) {
			left  = _buf[i];
			right = _buf[i+1];
			argv_896 (left, right, _result[_result_actual_size]);
			_result_actual_size++;
			if (_result_actual_size >= _max_result_size) {
				argv_2072 = argv_1829;
				break;
			}
			i += 2;
		}
	}
	else {
		cerr << "+++ ERROR: argv_4635 - _bufsize = " << _bufsize << endl;
		argv_2072 = argv_1846;
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-			
// @@
// @@ FUNCTION		:	argv_3705		
// @@
// @@ INPUT			:	
// @@ _block_size: uint32_t: the size of the full argv_795, permitting
// @@   to determine how many argv_837 must be padded.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	
// @@ _input: string&: the string to pad argv_5011 zeros.
// @@	
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to format the string given as the '_input'
// @@ parameter so that it's size become a multiple of the '_block_size'
// @@ parameter.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_3705 (string& _input, uint32_t _block_size) {
	uint32_t input_size = _input.size ();
	// cerr << "input_size=" << input_size << ", _block_size=" << _block_size << endl;
	if (input_size < _block_size) {
		uint32_t nb_2_pad = _block_size - _input.size ();
		//cerr << "--> must pad : " << nb_2_pad << " argv_837" << endl;

		char * cptr = new (std::nothrow) char[nb_2_pad+1];
		memset (cptr, 0x30, nb_2_pad);
		cptr[nb_2_pad] = '\0';	
		string padded_string = cptr;
		padded_string = padded_string + _input;
		_input = padded_string;

		delete [] cptr;
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-			
// @@
// @@ FUNCTION		:	argv_3718			
// @@
// @@ INPUT			:	
// @@ _str: const char *: the string to parse.
// @@
// @@ _m_mandatory: map<string, bool>: the map that tells which
// @@   variable are mandatory.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	
// @@ _m_found: map<string, string>: the map that associates each
// @@ found variables argv_5011 it's argv_4979.
// @@	
// @@ RETURN VALUE	:	
// @@ int32_t: argv_1857 if operation was succesful,
// @@       another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to parse the string given as the '_str'
// @@ parameter. This argv_2250 must have the following format :
// @@ var1=val1 var2=val2 ....
// @@ The string is free form (you can argv_646 spaces or argv_4759 anywhere)
// @@ after parsing, the function ensures that all the mandatory
// @@ variables for the argv_2250 were found, and also the function ensures
// @@ that no unknown variable was found while parsing.
// @@ 
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
int32_t argv_3718 (const char * _str, map<string, bool>& _m_mandatory, map<string, string>& _m_found) {
	int32_t argv_2072 = argv_1857;

	map<string, bool>::iterator iter_mandat;
	map<string, string>::iterator iter_found;
	uint32_t size = strlen (_str);
	string variable;
	string argv_4979;

	for (uint32_t i=0 ; i<size ; i++) {
		variable	= "";
		argv_4979		= "";

		// eat whitespaces
		while ((i < size) && ((_str[i]==' ') || (_str[i]=='\t') || (_str[i]=='\r') || (_str[i]=='\n'))) {
			i++;
		}

		if (i >= size) {
			argv_2072 = argv_1852;
			break;
		}

		// eat variable argv_3557
		while ((i < size) && (_str[i] != '=')) {
			variable += _str[i];
			i++;
		}
	
		if (i >= size) {
			argv_2072 = argv_1852;
			break;
		}

		// eat '='
		i++;
		if (i >= size) {
			argv_2072 = argv_1852;
			break;
		}

		// eat argv_4979
		while ((i < size) && (_str[i] != ' ') && (_str[i] != '\t') && (_str[i] != '\r') && (_str[i] != '\n')) {
			argv_4979 += _str[i];
			i++;
		}

		// save the variable
		if (variable == "") {
			argv_2072 = argv_1855;
		}
		else if (argv_4979 == "") {
			argv_2072 = argv_1854;
		}
		else {
			iter_found = _m_found.find (variable);	
			if (iter_found != _m_found.end()) {
				argv_2072 = argv_1848;
				break;
			}
			else { // ok, save the variable now
				_m_found[variable] = argv_4979;	
			}
		}
	}

	if (argv_2072 == argv_1857) {
		// ensure that all variables needed are present
		for (iter_mandat=_m_mandatory.begin() ; iter_mandat != _m_mandatory.end() ; ++iter_mandat) {
			iter_found = _m_found.find (iter_mandat->first);	
			if (iter_found == _m_found.end()) {
				argv_2072 = argv_1851;
				break;
			}
		}
		// ensure that no argv_1393 undesirable variable is present
		for (iter_found=_m_found.begin() ; iter_found != _m_found.end() ; ++iter_found) {
			iter_mandat = _m_mandatory.find (iter_found->first);
			if (iter_mandat == _m_mandatory.end()) {
				argv_2072 = argv_1853;
				break;
			}
		}
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-			
// @@
// @@ FUNCTION		:	argv_3712		
// @@
// @@ INPUT			:	
// @@ _fp: FILE *: argv_1424 descriptor of the argv_1424 corresponding to the 
// @@ opened keyfile (public & private argv_2188).
// @@
// @@ OUTPUT		:	
// @@ _header: string&: the argv_1982 of the argv_2188.
// @@
// @@ _body: string&: the argv_815 of the argv_2188.
// @@
// @@ _footer: string&: the footer of the argv_2188
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ int32_t : argv_1857 if operation was succesful,
// @@        another argv_4979 otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_2274 :
// @@ - the argv_1982
// @@ - the argv_815
// @@ - the footer
// @@ of a given public or private argv_2188. 
// @@ Notice that a argv_2188 is composed of these 3 parts as in the
// @@ following example :
// @@  ----- BEGIN -------- // argv_1982
// @@  AJKFKJLKJKLDKLJDJD
// @@  FFEFFEFGFGFFGFHJGK  // BODY
// @@  ------ END ------- // footer
// @@
// @@ CONTRACT		:	
// @@ The caller is supposed to have opened succesfully  the 
// @@ argv_1424 corresponding to the argv_2188 to argv_2274.	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
int32_t argv_3712 (FILE * _fp, string& _header, string& _body, string& _footer) {
	int32_t argv_2072			= argv_1857;
	_header				= "";
	_body				= "";
	_footer				= "";

	char argv_825[MAX_PATH];
	uint8_t argv_4622			= 0;
	uint32_t line_length	= 0;

	char * cptr			= fgets (argv_825, MAX_PATH, _fp);
	char * cptr2		= NULL;

	while (cptr != NULL) {
		if (argv_4622 == 0) {
			line_length = strlen (argv_825);
			if (line_length > 0) {
				argv_825[line_length - 1] = '\0'; // remove EOL
			}
			_header = argv_825; // save the argv_1982
			argv_4622++;	
		}
		else if (argv_4622 == 1) {
			cptr2 = strstr (argv_825, "-----END");
			if (cptr2 == NULL) { // a part of the argv_815
				line_length = strlen (argv_825);
				if (line_length > 0) {
					argv_825[line_length - 1] = '\0'; // remove EOL
				}
				_body += argv_825;
			}
			else { // encountered the footer
				line_length = strlen (argv_825);
				if (line_length > 0) {
					argv_825[line_length - 1] = '\0'; // remove EOL
				}
				_footer = argv_825; // save the footer
				break;
			}
		}
		cptr = fgets (argv_825, MAX_PATH, _fp);
	}

	// check coherency
	if (_header == "") {
		argv_2072 = argv_1850;
	}
	else if (_body == "") {
		argv_2072 = argv_1847;
	}
	else if (_footer == "") {
		argv_2072 = argv_1849;
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-			
// @@
// @@ FUNCTION		:	argv_1477			
// @@
// @@ INPUT			:	
// @@ _file_1: const char *: argv_3557 of the first argv_1424.
// @@
// @@ _file_2: const char *: argv_3557 of the second argv_1424.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ bool: true if the two files are identical,
// @@       false otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to compare the files '_file_1' and
// @@ '_file_2'. Notice that the function does not use the mmap
// @@ approach.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_1477 (const char * _file_1, const char * _file_2) {
	bool bret = true;
	uint32_t size_1 = argv_1759 (_file_1);
	uint32_t size_2 = argv_1759 (_file_2);
	cerr << _file_1 << ": size = " << size_1 << endl;
	cerr << _file_2 << ": size = " << size_2 << endl;
	if (size_1 != size_2) {
		bret = false;
	}
	else {
		FILE * fp1 = fopen (_file_1, "rb");
		FILE * fp2 = fopen (_file_2, "rb");
		char c1, c2;

		for (uint32_t i=0 ; i<size_1 ; i++) {
			c1 = fgetc (fp1);
			c2 = fgetc (fp2);

			if (c1 != c2) {
				bret = false;
				break;
			}
		}

		fclose (fp1);
		fclose (fp2);
	}
	return (bret);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-			
// @@
// @@ FUNCTION		:	argv_1759		
// @@
// @@ INPUT			:	
// @@ _filename: const char *: argv_3557 of the argv_1424 whose size is to be
// @@            retrieved.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ unsigned long: the size of the argv_1424 whose argv_3557 was given as
// @@    a parameter.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to argv_1397 the size of the argv_1424 whose 
// @@ argv_3557 was given as the '_filename' parameter.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
unsigned long argv_1759 (const char * _filename) {
	unsigned long size = 0;
	FILE * argv_1510 = fopen (_filename, "rb");
	if ( argv_1510) {	
		long argv_4618 = ftell (argv_1510);
		if (fseek (argv_1510, 0, SEEK_END) == 0) {
			size = ftell(argv_1510) - argv_4618;
		}
		fclose (argv_1510);	
	}
	return (size);		
}

bool argv_1426 (const char * _filename) {
	bool bret = false;
	FILE * argv_1510 = fopen (_filename, "rb");
	if (argv_1510) {
		bret = true;
		fclose (argv_1510);
	}	
	return (bret);
}

// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-			
// @@
// @@ FUNCTION		:	argv_1131		
// @@
// @@ INPUT			:	
// @@ _ercode: uint32_t: the numerical error argv_976 to convert.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	
// @@ _erstring: char *: the argv_4406 of conversion.
// @@	
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to convert the numeric error argv_976
// @@ given as the '_ercode' parameter into the human readable
// @@ equivalent that is stored into the '_erstring' argv_4406
// @@ parameter, the '_erstring' parameter is supposed to have
// @@ been allocated argv_5011 a size of MAX_PATH by the caller.
// @@
// @@ Notice that this function handles only errors related
// @@ to the cryptography library.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
extern "C"
{
	void argv_1131 (uint32_t _ercode, char * _erstring) {
		switch (_ercode) {
			// kernel related errors
			case argv_1857:										strncpy (_erstring, "argv_1857", MAX_PATH);									break;
			case argv_1842:							strncpy (_erstring, "argv_1842", MAX_PATH);						break;
			case argv_1841:					strncpy (_erstring, "argv_1841", MAX_PATH);				break;
			case argv_1840:								strncpy (_erstring, "argv_1840", MAX_PATH);							break;
			case argv_1833:						strncpy (_erstring, "argv_1833", MAX_PATH);					break;
			case argv_1834:						strncpy (_erstring, "argv_1834", MAX_PATH);					break;
			case argv_1851:		strncpy (_erstring, "argv_1851", MAX_PATH);	break;
			case argv_1852:					strncpy (_erstring, "argv_1852", MAX_PATH);				break;
			case argv_1855:					strncpy (_erstring, "argv_1855", MAX_PATH);				break;
			case argv_1854:						strncpy (_erstring, "argv_1854", MAX_PATH);					break;
			case argv_1848:				strncpy (_erstring, "argv_1848", MAX_PATH);			break;
			case argv_1844:					strncpy (_erstring, "argv_1844", MAX_PATH);				break;
			case argv_1853:			strncpy (_erstring, "argv_1853", MAX_PATH);		break;
			case argv_1831:					strncpy (_erstring, "argv_1831", MAX_PATH);				break;
			case argv_1830:					strncpy (_erstring, "argv_1830", MAX_PATH);				break;
			case argv_1837:					strncpy (_erstring, "argv_1837", MAX_PATH);				break;
			case argv_1835:					strncpy (_erstring, "argv_1835", MAX_PATH);				break;
			case argv_1850:						strncpy (_erstring, "argv_1850", MAX_PATH);					break;
			case argv_1847:						strncpy (_erstring, "argv_1847", MAX_PATH);					break;
			case argv_1849:						strncpy (_erstring, "argv_1849", MAX_PATH);					break;
			case argv_1838:					strncpy (_erstring, "argv_1838", MAX_PATH);				break;
			case argv_1845:						strncpy (_erstring, "argv_1845", MAX_PATH);					break;
			case argv_1836:					strncpy (_erstring, "argv_1836", MAX_PATH);				break;
			case argv_1821:			strncpy (_erstring, "argv_1821", MAX_PATH);		break;
			case argv_1818:			strncpy (_erstring, "argv_1818", MAX_PATH);		break;
			case argv_1817:			strncpy (_erstring, "argv_1817", MAX_PATH);		break;
			case argv_1819:					strncpy (_erstring, "argv_1819", MAX_PATH);				break;
			case argv_1822:		strncpy (_erstring, "argv_1822", MAX_PATH);	break;
			case argv_1828:			strncpy (_erstring, "argv_1828", MAX_PATH);		break;
			case argv_1823:			strncpy (_erstring, "argv_1823", MAX_PATH);		break;
			case argv_1824:		strncpy (_erstring, "argv_1824", MAX_PATH);	break;
			case argv_1827:			strncpy (_erstring, "argv_1827", MAX_PATH);		break;
			case argv_1825:					strncpy (_erstring, "argv_1825", MAX_PATH);				break;
			case argv_1826:					strncpy (_erstring, "argv_1826", MAX_PATH);				break;
			case argv_1816:				strncpy (_erstring, "argv_1816", MAX_PATH);			break;
			case argv_1815:				strncpy (_erstring, "argv_1815", MAX_PATH);			break;
			case argv_1820:					strncpy (_erstring, "argv_1820", MAX_PATH);				break;
			case argv_1846:				strncpy (_erstring, "argv_1846", MAX_PATH);			break;
			case argv_1829:					strncpy (_erstring, "argv_1829", MAX_PATH);				break;
			case argv_1839:							strncpy (_erstring, "argv_1839", MAX_PATH);						break;
			case argv_1856:									strncpy (_erstring, "argv_1856", MAX_PATH);								break;
			case argv_1832:								strncpy (_erstring, "argv_1832", MAX_PATH);							break;

			default: strncpy (_erstring, "UNKNOWN_ERROR", MAX_PATH);
		}

		_erstring[MAX_PATH - 1] = '\0';
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ end of argv_1424
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
