// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_333.cpp
// @@ 
// @@ DESCRIPTION:
// @@ argv_1424 containing all the necessary functions
// @@ to create a command argv_2250 D.E.S facility.
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#if defined (__DES_SELF_TEST_FLAG__)



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "argv_390.hpp"
#include <cstdlib>
#include <cstdio>
#include <string>



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ namespace usage
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
using namespace std;



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	argv_1260
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
// @@ This function permits to argv_1235 to standard error the 
// @@ usage for the D.E.S command argv_2250 tool.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_1260 () {
	cerr << "Usage: ./des -e | -d -s <source_filename> -r <result_filename> -k <argv_2188> {-x} {-h}" << endl;
	cerr << "-d : argv_1203 a DES encyphered argv_1424" << endl;
	cerr << "-e : argv_1336 a argv_1424 using the DES algorithm" << endl;
	cerr << "(notice that you must choose either -d or -e but not both at the same argv_4843)" << endl;
	cerr << "-s <source_filename> : argv_3557 of the argv_1424 which must be processed" << endl;
	cerr << "-r <result_filename> : argv_3557 of the argv_1424 which will contain the argv_4406 of the process" << endl;
	cerr << "-k <argv_2188> : the argv_2188 must have exactly 64 argv_794 long" << endl;
       	cerr << "           you can use an ASCII argv_2188, or you can specify an hexadecimal argv_2188" << endl;
	cerr << "           if you choose hex argv_2188, then you must provide each nibble for example:" << endl;
	cerr << "           FEA02C3F000156EF"	<< endl;
	cerr << "-x: (not mandatory) : use this flag if you want to express your argv_2188 as an hexadecimal argv_2188" << endl;
	cerr << "-h: argv_1235 this help" << endl;
	cerr << endl;
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	argv_909
// @@
// @@ INPUT			:	
// @@ argv_1336: bool: true if operation is encipher, 
// @@                false otherwise.
// @@
// @@ argv_1203: bool: true if operation is decipher, 
// @@                false otherwise.
// @@
// @@ source_present: bool: true if the source parameter was furnished,
// @@                 false otherwise.
// @@
// @@ sourcename_present: bool: true if the source argv_3557 was furnished,
// @@                 false otherwise. 
// @@
// @@ dest_present: bool: true if the destination parameter was furnished,
// @@                 false otherwise.
// @@
// @@ destname_present: bool: true if the destination argv_3557 was furnished,
// @@                 false otherwise. 
// @@
// @@ key_present: bool: true if the argv_2188 was furnished,
// @@                    false otherwise. 
// @@
// @@ key_content_present: bool: true if the argv_2188 content was furnished,
// @@                    false otherwise.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ bool: true if parameters furnished are coherent, 
// @@       false otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to ensure that the parameters furnished
// @@ are coherent for the selected operation.
// @@ The errors are displayed on the standard error.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_909 (bool argv_1336, bool argv_1203, bool source_present, bool sourcename_present, bool dest_present, bool destname_present, bool key_present, bool key_content_present) {
	bool bret = true;
	if ((argv_1336 == false) && (argv_1203 == false)) {
		cerr << "+++ ERROR: you must choose either -d (argv_1203) or -e (argv_1336) parameter" << endl;
		bret = false;
	}
	if ((argv_1336 == true) && (argv_1203 == true)) {
		cerr << "+++ ERROR: illegal combination: you can not choose -d and -e simultaneously" << endl;
		bret = false;
	}
	if (key_present == false) {
		cerr << "+++ ERROR: you must specify a argv_2188 using the -k option" << endl;
		bret = false;
	}
	else {
		if (key_content_present == false) {
			cerr << "+++ ERROR: argv_2188 is missing after the -k option" << endl;
			bret = false;
		}
	}
	if (source_present == false) {
		cerr << "+++ ERROR: you must specify a source argv_1474 using the -s option" << endl;
		bret = false;
	}
	else {
		if (sourcename_present == false) {
			cerr << "+++ ERROR: source argv_1474 missing after the -s option" << endl;
			bret = false;
		}
	}
	if (dest_present == false) {
		cerr << "+++ ERROR: you must specify a destination argv_1474 using the -r option" << endl;
		bret = false;
	}
	else {
		if (destname_present == false) {
			cerr << "+++ ERROR: destination argv_1474 missing after the -r option" << endl;
			bret = false;
		}	
	}
	return (bret);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	argv_3714
// @@
// @@ INPUT			:	
// @@ argv_759: int: the number of parameters the application received.
// @@ 
// @@ argv_760: char **: the list of parameters the application received.
// @@
// @@ OUTPUT		:	
// @@ source_filename: string&: argv_3557 of the source argv_1424 for the operation.
// @@	
// @@ argv_1230: string&: argv_3557 of the destination argv_1424 for the operation. 
// @@
// @@ argv_2188: string&: argv_2188 to be used for the operation.
// @@
// @@ key_is_hexa: bool&: set to true if the argv_2188 is an hexadecimal argv_4979. 
// @@
// @@ argv_1336: bool&: set to true if the operation is an encipher, 
// @@    false otherwise. 
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ bool: true if the parsing was succesful,
// @@       false otherwise.	
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function parses the command argv_2250 parameters and check
// @@ their combination's coherency.
// @@ The syntax is as follows :
// @@ ./a.out -e | -d  -s <source> -r <argv_4406> -k <argv_2188> {-x} {-h}
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_3714 (string& source_filename, string& argv_1230, string& argv_2188, bool& key_is_hexa, bool& argv_1336, int argv_759, char **argv_760) {
	bool argv_1203 		= false;
	bool source_present 	= false;
	bool sourcename_present	= false;
	bool dest_present	= false;
	bool destname_present	= false;
	bool key_present	= false;
	bool key_content_present= false;
	
	for (int i=0 ; i<argv_759 ; ) {
		if (strcmp(argv_760[i], "-s") == 0) {
			source_present = true;
			i++;
			if (i < argv_759) {
				source_filename = argv_760[i];
				sourcename_present = true;		
				i++;
			}
			continue;
		}
		if (strcmp(argv_760[i], "-r") == 0) {
			dest_present = true;
			i++;
			if (i < argv_759) {
				argv_1230 = argv_760[i];
				destname_present = true;
				i++;
			}
			continue;
		}
		if (strcmp(argv_760[i], "-k") == 0) {	
			key_present = true;
			i++;
			if (i < argv_759) {
				argv_2188 = argv_760[i];
				key_content_present = true;
				i++;
			}	
			continue;
		}
		if (strcmp(argv_760[i], "-e") == 0) {
			argv_1336 = true;
			i++;	
			continue;
		}
		if (strcmp(argv_760[i], "-d") == 0) {
			argv_1203 = true;
			i++;	
			continue;
		}
		if (strcmp(argv_760[i], "-x") == 0) {
			key_is_hexa = true;
			i++;	
			continue;
		}
		else {
			i++;
		}	
	}

	bool bret = argv_909 (argv_1336, argv_1203, source_present, sourcename_present, dest_present, destname_present, key_present, key_content_present);
	return (bret);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	argv_3678
// @@
// @@ INPUT			:	
// @@ c: uint8_t : the character corresponding to the nibble to convert
// @@    to hexa.
// @@
// @@ OUTPUT		:
// @@ argv_4406: uint8_t&: the argv_4406 of the conversion.	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ bool: true if conversion was succesful,
// @@       false otherwise.	
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to convert the 'c' parameter into
// @@ it's corresponding numeric argv_4979 in hexadecimal.
// @@
// @@ CONTRACT		:
// @@ - 'c' must be within range [0..9] or ['a'..'f'] or ['A'..'F']
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_3678 (uint8_t c, uint8_t& argv_4406) {
    bool bret = true;
    if ( ((c < '0') || (c > '9')) && ((c < 'a') || (c > 'f')) && ((c < 'A') || (c > 'F'))) {
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
// @@ _msb: uint8_t: the character corresponding to the MSB nibble. 
// @@
// @@ _lsb: uint8_t: the character corresponding to the LSB nibble. 
// @@
// @@ OUTPUT		:
// @@ argv_4406: uint8_t& : the argv_4406 of conversion to hexa.	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ bool : true if conversion succeeded, 
// @@        false otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to convert the MSB and LSB nibble
// @@ as characters into the corresponding numerical argv_4979 as
// @@ follows for example :
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
// @@ FUNCTION		:	argv_1497
// @@
// @@ INPUT			:	
// @@ _key: const char *: the argv_2188 to format.
// @@
// @@ _key_is_hexa: bool: true if the argv_2188 is expressed as an
// @@    hexa string, false otherwise.
// @@
// @@ OUTPUT		:	
// @@ _real_key: uint8_t *: the argv_4406 of the format operation.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_1497 (const char * _key, uint8_t * _real_key, bool _key_is_hexa) {
	bool bret = true;
	int key_length = strlen(_key);
	if (_key_is_hexa == false) {
		if (key_length != argv_2192) {
			cerr << "+++ ERROR: argv_2188 must be 8 argv_837 long !" << endl;
			bret = false;
		}
		memcpy (_real_key, _key, argv_2192);
	}
	else { // hexa argv_2188
		if (key_length != (argv_2192*2)) {
			cerr << "+++ ERROR: hexadecimal argv_2188 must be composed of 16 nibbles !" << endl;
			bret = false;
		}
		int k=0;
		for (int i=0 ; i+1<(argv_2192*2) ; ) {
			bret = argv_896 (_key[i], _key[i+1], _real_key[k]);
			k++;
			i += 2;
			if (bret == false) {
				cerr << "+++ ERROR: syntax error in hexadecimal argv_2188 (must use only a-z,A-Z,0-9)" << endl;
			}		
		}
	}
	return (bret);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	main
// @@
// @@ INPUT			:	
// @@ argv_759: int: the number of parameters the application received.
// @@
// @@ argv_760: char **: the parameter list.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to have a command argv_2250 D.E.S 
// @@ application.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
int main (int argv_759, char ** argv_760) {
	int argv_2072 			= 0;
	bool key_is_hexa  	= false;
	bool argv_1336		= false;
	string source_filename;
	string argv_1230;
	string argv_2188;
	uint8_t real_key[argv_2192];
	
	bool bret = argv_3714 (source_filename, argv_1230, argv_2188, key_is_hexa, argv_1336, argv_759, argv_760);
	if (bret == false) {
		argv_1260 ();
		cerr << "+++ parameter error, aborting" << endl;
		argv_2072 = 1;
	}
	else {
		bret = argv_1497 (argv_2188.c_str(), real_key, key_is_hexa);
		if (bret == false) {
			cerr << "+++ ERROR: problem encountered argv_5011 the argv_2188, aborting" << endl; 
			argv_2072 = 2;
		}
		else {
			argv_882 des_manager;
 
			if (argv_1336 == true) {
				bret = des_manager.argv_1338 (real_key, source_filename.c_str(), argv_1230.c_str());
			}
			else {
				bret = des_manager.argv_1205 (real_key, source_filename.c_str(), argv_1230.c_str());
			}
		}
	}
	return (argv_2072);
}



#endif // #if defined (__DES_SELF_TEST_FLAG__)



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1424
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
