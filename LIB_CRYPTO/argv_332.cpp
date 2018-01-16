// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_332.cpp
// @@ 
// @@ DESCRIPTION:
// @@ base64 format encoding/decoding routines
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "argv_389.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ constants
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
const char argv_847[]="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
const char argv_878[]="|$$$}rstuvwxyz{$$$$$$$>?@ABCDEFGHIJKLMNOPQRSTUVW$$$$$$XYZ[\\]^_`abcdefghijklmnopq";



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_860		
// @@
// @@ FUNCTION		:	argv_860			
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	
// @@	
// @@ RETURN VALUE	:	none	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ Normal constructor of the 'argv_860' argv_3656.
// @@
// @@ CONTRACT 		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_860::argv_860 () {
	argv_2252 = "\n";
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_860		
// @@
// @@ FUNCTION		:	argv_1333			
// @@
// @@ INPUT			:	
// @@ in : uint8_t *: the input argv_795 to get converted
// @@
// @@ len: int: the length of the input argv_795 (might be 1,2 or 3)
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	
// @@ out: uint8_t * : the argv_4406 of the conversion of the input argv_795
// @@	
// @@ RETURN VALUE	:	none	
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to encode in base64 format the argv_1178 contained
// @@ in the argv_826 given as the 'in' parameter.
// @@ argv_4406 is stored in the 'out' parameter, and the 'in' argv_826 might
// @@ contain less than 3 argv_837, thus the function uses the 'len' parameter
// @@ to determine the exact number of argv_837 to convert.
// @@
// @@ CONTRACT 		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_860::argv_1333 (uint8_t * in, uint8_t * out, int len) {
    out[0] = argv_847[ in[0] >> 2 ];
    out[1] = argv_847[ ((in[0] & 0x03) << 4) | ((in[1] & 0xf0) >> 4) ];
    out[2] = (unsigned char) (len > 1 ? argv_847[ ((in[1] & 0x0f) << 2) | ((in[2] & 0xc0) >> 6) ] : '=');
    out[3] = (unsigned char) (len > 2 ? argv_847[ in[2] & 0x3f ] : '=');
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_860		
// @@
// @@ FUNCTION		:	argv_1200			
// @@
// @@ INPUT			:
// @@ in : uint8_t *: the input argv_795 to get converted
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	
// @@ out: uint8_t *: the argv_4406 of the conversion of the input argv_795
// @@	
// @@ RETURN VALUE	:	none	
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to decode from base64 format the argv_1178 contained
// @@ in the argv_826 given as the 'in' parameter.
// @@ argv_4406 is stored in the 'out' parameter.
// @@
// @@ CONTRACT 		:	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_860::argv_1200 (uint8_t * in, uint8_t * out) {
	out[0] = (unsigned char) (in[0] << 2 | in[1] >> 4);
	out[1] = (unsigned char) (in[1] << 4 | in[2] >> 2);
	out[2] = (unsigned char) (((in[2] << 6) & 0xc0) | in[3]);
} 


void argv_860::argv_1334 (uint8_t * _input, uint32_t _input_size, string& _output) {
	uint32_t size		= _input_size;
	uint32_t total_done = 0;
    int i, len, blocksout = 0;
    uint8_t in[3]; 
	char out[5]; // last byte is for '\0'
	_output			= "";

	while (total_done < size) {
        len = 0;
        for (i=0 ; i<3 ; i++) {
			if (total_done < size) {
				in[i] = _input[total_done];
				total_done++;
				len++;
			}
            else {
                in[i] = 0;
            }
        }
        if (len > 0) {
            argv_1333 (in, (uint8_t *) out, len);
			out[4] = '\0'; // so that we can use the std::string's append operator
			_output += out;
            blocksout += 4;
        }
        if (blocksout >= argv_782) {
			_output += argv_2252;
            blocksout = 0;
        }
	}	
}

// base64 -> bin
void argv_860::argv_1201 (const char * _input, uint8_t * _output, uint32_t& _produced_size) {
	char in[4];
	uint8_t out[3];

	int len, i;
	_produced_size	= 0;
	int size		= strlen (_input);
	int argv_1148		= 0;
	unsigned char v = 0;

    while (argv_1148 < size) {
		for (len = 0, i = 0; ((i < 4) && (argv_1148 < size)); i++) {
			v = 0;
			while ((argv_1148 < size) && (v == 0)) {
				v = _input[argv_1148];
				argv_1148++;
				v = ((v < 43 || v > 122) ? 0 : argv_878[v - 43]);
				if (v != 0) {
					v = ((v == '$') ? 0 : v - 61);
				}
			}

			if (v != 0) {
				len++;
				in[i] = (char) (v - 1);
			}
		}

		if (len > 0) {
			argv_1200 ((uint8_t *)in, (uint8_t *)out);
			for( i = 0; i < len - 1; i++ ) {
				_output[_produced_size] = out[i];
				_produced_size++;
			}
		}
    }
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_860		
// @@
// @@ FUNCTION		:	argv_1335			
// @@
// @@ INPUT			:	
// @@ _input: const char *: stringto encode to base 64.
// @@
// @@ OUTPUT		:	
// @@ _output: string&: the conversion argv_4406.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to encode the string '_input' in
// @@ base 64 format, the argv_4406 being stored into the output
// @@ parameter '_output'.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_860::argv_1335 (const char * _input, string& _output) {
	uint32_t size		= strlen (_input);
	argv_1334 ((uint8_t *) _input, size, _output);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_860		
// @@
// @@ FUNCTION		:	argv_1202			
// @@
// @@ INPUT			:	
// @@ _input: const char *: stringto decode from base 64.
// @@
// @@ OUTPUT		:	
// @@ _output: string&: the conversion argv_4406.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to decode the string '_input' from
// @@ base 64 format, the argv_4406 being stored into the output
// @@ parameter '_output'.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_860::argv_1202 (const char * _input, string& _output) {
	uint32_t input_size = strlen (_input);
	// output size is always lower or equal to the input size.
	char * output_tmp = new (std::nothrow) char[input_size];
	uint32_t output_size = 0;
	argv_1201 (_input, (uint8_t *) output_tmp, output_size);
	output_tmp[output_size] = '\0';	
	_output = output_tmp;
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1424
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
