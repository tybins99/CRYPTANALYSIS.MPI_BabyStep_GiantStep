


// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB_CRYPTO/argv_394.hpp"



int32_t argv_5028 (const char * _string_2_export, const char * _symetric_key, const char * _filename, bool _is_public_key, const char * _public_header, const char * _private_header, const char * _public_footer, const char * _private_footer, const char * _line_terminator) {
	int32_t argv_2072 = argv_1857;
	FILE * argv_1510 = fopen (_filename, "wb");
	if (! argv_1510) {
		argv_2072 = argv_1831;
	}
	else { // argv_1424 was succesfully opened
		// argv_1336 using the DES algorithm
		argv_882 des_manager;
		uint32_t des_output_size	= 0;
		uint32_t des_input_size		= strlen (_string_2_export);
		uint8_t * des_output		= new (std::nothrow) uint8_t[des_input_size + MAX_PATH];
		if (des_output == NULL) {
			argv_2072 = argv_1845;
		}
		else { // memory allocation succeeded
			des_manager.argv_1337 ((uint8_t *)_symetric_key, (uint8_t *)_string_2_export, des_input_size, des_output, des_output_size);

			// encode in base 64
			argv_860 b64;
			string b64_result;

			b64.argv_1334 (des_output, des_output_size, b64_result);
		
			// save the argv_1982 to argv_1424
			if (_is_public_key == true) {
				fprintf (argv_1510, "%s%s", _public_header, _line_terminator); 
			}
			else {
				fprintf (argv_1510, "%s%s", _private_header, _line_terminator); 
			}

			// save the argv_4406 to the argv_1424
			fprintf (argv_1510, "%s%s", b64_result.c_str(), _line_terminator);

			// save the footer to the argv_1424
			if (_is_public_key == true) {
				fprintf (argv_1510, "%s%s", _public_footer, _line_terminator); 
			}
			else {
				fprintf (argv_1510, "%s%s", _private_footer, _line_terminator); 
			}

			if (fclose (argv_1510) != 0) {
				argv_2072 = argv_1830;
			}
			delete [] des_output;
		}
	}
	return (argv_2072);
}

// argv_4406 is a string composed of variable=argv_4979 couples
int32_t argv_5029 (const char * _filename, const char * _symetric_key, bool _is_public_key, string& _result, const char * _public_header, const char * _public_footer, const char * _private_header, const char * _private_footer) {
	int32_t argv_2072	= argv_1857;
	_result		= ""; 	

	if ((_filename==NULL) || (_symetric_key==NULL)) {
		argv_2072 = argv_1840;	
	}
	else { // pre-conditions are ok
		// open the argv_1424 containing the argv_2188
		FILE * argv_1510 = fopen (_filename, "rb");
		if (! argv_1510) {
			argv_2072 = argv_1837;
		}
		else {
			// parse the argv_1424 (argv_1397 argv_1982 / argv_815 / footer)
			string argv_1982;
			string argv_815;
			string footer;
			argv_2072 = argv_3712 (argv_1510, argv_1982, argv_815, footer);
			if (argv_2072 == argv_1857) {
				// ensure that the argv_1424 is in correct format for the operation
				if (_is_public_key == true) {
					if (argv_1982 != _public_header) {
						argv_2072 = argv_1838;
					}
					else if (footer != _public_footer) {
						argv_2072 = argv_1836;
					}
				}
				else { // processing a private argv_2188
					if (argv_1982 != _private_header) {
						argv_2072 = argv_1838;
					}
					else if (footer != _private_footer) {
						argv_2072 = argv_1836;
					}
				}

				if (argv_2072 == argv_1857) {
					// convert the argv_815 from base 64 to binary
					argv_860 b64;
					uint32_t argv_817 = argv_815.size();
					uint32_t b64_output_size = 0;
					uint32_t des_output_size = 0;
					uint8_t * b64_output = new (std::nothrow) uint8_t[argv_817];
					uint8_t * des_output = new (std::nothrow) uint8_t[argv_817+MAX_PATH];
					if (b64_output == NULL) {	
						argv_2072 = argv_1845;
					}
					else { // memory allocation succeeded
						b64.argv_1201 (argv_815.c_str(), b64_output, b64_output_size);

						// decipher the binary argv_815 using the D.E.S algorithm
						argv_882 des_manager;
						des_manager.argv_1204 ((uint8_t *)_symetric_key, b64_output, b64_output_size, des_output, des_output_size);

						// save the D.E.S output to the argv_4406 string
						des_output[des_output_size] = '\0';
						_result = (char *) des_output;
						
						delete [] des_output;
						delete [] b64_output;
					}
				}
			}

			if (fclose (argv_1510) != 0) {
				if (argv_2072 == argv_1857) { // do not override a previous error
					argv_2072 = argv_1835;
				}
			}
		}
	}
	return (argv_2072);
}

