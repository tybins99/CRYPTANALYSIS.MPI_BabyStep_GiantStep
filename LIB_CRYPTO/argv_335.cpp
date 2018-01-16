// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_335.cpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1424 permits to encipher/decipher buffers
// @@ and files using the Data Encryption Standard.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "argv_391.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ This matrix is the argv_1995 matrix 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
uint8_t argv_1995[] = {
1,2,3,4,5,6,7,8,9,
10,11,12,13,14,15,16,17,
18,19,20,21,22,23,24,25,
26,27,28,29,30,31,32,33,
34,35,36,37,38,39,40,41,
42,43,44,45,46,47,48,49,
50,51,52,53,54,55,56,57,
58,59,60,61,62,63,64
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ initial permutation IP
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
uint8_t argv_2071[] = {
        58, 50, 42, 34, 26, 18, 10,  2,
        60, 52, 44, 36, 28, 20, 12,  4,
        62, 54, 46, 38, 30, 22, 14,  6,
        64, 56, 48, 40, 32, 24, 16,  8,
        57, 49, 41, 33, 25, 17,  9,  1,
        59, 51, 43, 35, 27, 19, 11,  3,
        61, 53, 45, 37, 29, 21, 13,  5,
        63, 55, 47, 39, 31, 23, 15,  7
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ final permutation IP^-1
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
uint8_t argv_1510[] = {
        40,  8, 48, 16, 56, 24, 64, 32,
        39,  7, 47, 15, 55, 23, 63, 31,
        38,  6, 46, 14, 54, 22, 62, 30,
        37,  5, 45, 13, 53, 21, 61, 29,
        36,  4, 44, 12, 52, 20, 60, 28,
        35,  3, 43, 11, 51, 19, 59, 27,
        34,  2, 42, 10, 50, 18, 58, 26,
        33,  1, 41,  9, 49, 17, 57, 25
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ first permuted choice table (left part, permitting to generate C0)
// @@ (used during argv_2188 schedule calculation).
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
uint8_t argv_3731[] = {
        57, 49, 41, 33, 25, 17,  9,
         1, 58, 50, 42, 34, 26, 18,
        10,  2, 59, 51, 43, 35, 27,
        19, 11,  3, 60, 52, 44, 36,
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ first permuted choice table (right part, permitting to generate D0)
// @@ (used during argv_2188 schedule calculation).
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
uint8_t argv_3732[] = {
        63, 55, 47, 39, 31, 23, 15,
         7, 62, 54, 46, 38, 30, 22,
        14,  6, 61, 53, 45, 37, 29,
        21, 13,  5, 28, 20, 12,  4
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ permuted choice argv_2188 (table)
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
uint8_t argv_3733[] = {
        14, 17, 11, 24,  1,  5,
         3, 28, 15,  6, 21, 10,
        23, 19, 12,  4, 26,  8,
        16,  7, 27, 20, 13,  2,
        41, 52, 31, 37, 47, 55,
        30, 40, 51, 45, 33, 48,
        44, 49, 39, 56, 34, 53,
        46, 42, 50, 36, 29, 32
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ expansion operation matrix
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
uint8_t argv_1327[] = {
        32,  1,  2,  3,  4,  5,
         4,  5,  6,  7,  8,  9,
         8,  9, 10, 11, 12, 13,
        12, 13, 14, 15, 16, 17,
        16, 17, 18, 19, 20, 21,
        20, 21, 22, 23, 24, 25,
        24, 25, 26, 27, 28, 29,
        28, 29, 30, 31, 32,  1
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ The (in)famous S-boxes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
uint8_t argv_4533[] = {
        // S1
        14,  4, 13,  1,  2, 15, 11,  8,  3, 10,  6, 12,  5,  9,  0,  7,
         0, 15,  7,  4, 14,  2, 13,  1, 10,  6, 12, 11,  9,  5,  3,  8,
         4,  1, 14,  8, 13,  6,  2, 11, 15, 12,  9,  7,  3, 10,  5,  0,
        15, 12,  8,  2,  4,  9,  1,  7,  5, 11,  3, 14, 10,  0,  6, 13,

        // S2
        15,  1,  8, 14,  6, 11,  3,  4,  9,  7,  2, 13, 12,  0,  5, 10,
         3, 13,  4,  7, 15,  2,  8, 14, 12,  0,  1, 10,  6,  9, 11,  5,
         0, 14,  7, 11, 10,  4, 13,  1,  5,  8, 12,  6,  9,  3,  2, 15,
        13,  8, 10,  1,  3, 15,  4,  2, 11,  6,  7, 12,  0,  5, 14,  9,

        // S3
        10,  0,  9, 14,  6,  3, 15,  5,  1, 13, 12,  7, 11,  4,  2,  8,
        13,  7,  0,  9,  3,  4,  6, 10,  2,  8,  5, 14, 12, 11, 15,  1,
        13,  6,  4,  9,  8, 15,  3,  0, 11,  1,  2, 12,  5, 10, 14,  7,
         1, 10, 13,  0,  6,  9,  8,  7,  4, 15, 14,  3, 11,  5,  2, 12,

        // S4
         7, 13, 14,  3,  0,  6,  9, 10,  1,  2,  8,  5, 11, 12,  4, 15,
        13,  8, 11,  5,  6, 15,  0,  3,  4,  7,  2, 12,  1, 10, 14,  9,
        10,  6,  9,  0, 12, 11,  7, 13, 15,  1,  3, 14,  5,  2,  8,  4,
         3, 15,  0,  6, 10,  1, 13,  8,  9,  4,  5, 11, 12,  7,  2, 14,

        // S5
         2, 12,  4,  1,  7, 10, 11,  6,  8,  5,  3, 15, 13,  0, 14,  9,
        14, 11,  2, 12,  4,  7, 13,  1,  5,  0, 15, 10,  3,  9,  8,  6,
         4,  2,  1, 11, 10, 13,  7,  8, 15,  9, 12,  5,  6,  3,  0, 14,
        11,  8, 12,  7,  1, 14,  2, 13,  6, 15,  0,  9, 10,  4,  5,  3,

        // S6
        12,  1, 10, 15,  9,  2,  6,  8,  0, 13,  3,  4, 14,  7,  5, 11,
        10, 15,  4,  2,  7, 12,  9,  5,  6,  1, 13, 14,  0, 11,  3,  8,
         9, 14, 15,  5,  2,  8, 12,  3,  7,  0,  4, 10,  1, 13, 11,  6,
         4,  3,  2, 12,  9,  5, 15, 10, 11, 14,  1,  7,  6,  0,  8, 13,

        // S7
         4, 11,  2, 14, 15,  0,  8, 13,  3, 12,  9,  7,  5, 10,  6,  1,
        13,  0, 11,  7,  4,  9,  1, 10, 14,  3,  5, 12,  2, 15,  8,  6,
         1,  4, 11, 13, 12,  3,  7, 14, 10, 15,  6,  8,  0,  5,  9,  2,
         6, 11, 13,  8,  1,  4, 10,  7,  9,  5,  0, 15, 14,  2,  3, 12,

        // S8
        13,  2,  8,  4,  6, 15, 11,  1, 10,  9,  3, 14,  5,  0, 12,  7,
         1, 15, 13,  8, 10,  3,  7,  4, 12,  5,  6, 11,  0, 14,  9,  2,
         7, 11,  4,  1,  9, 12, 14,  2,  0,  6, 10, 13, 15,  3,  5,  8,
         2,  1, 14,  7,  4, 10,  8, 13, 15, 12,  9,  0,  3,  5,  6, 11
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ 32-bit permutation function P used on the output of the S-boxes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
uint8_t argv_3697[] = {
        16,  7, 20, 21,
        29, 12, 28, 17,
         1, 15, 23, 26,
         5, 18, 31, 10,
         2,  8, 24, 14,
        32, 27,  3,  9,
        19, 13, 30,  6,
        22, 11,  4, 25
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	argv_1098
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	
// @@ _var: int32_t&: the argv_4979 that is to be converted into big endian.
// @@	
// @@ RETURN VALUE	:	none	
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to flip the argv_3690 of the argv_837 of 
// @@ the integer given as a parameter so that we can switch to
// @@ and from big endian using it.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_1098 (int32_t& _var) {
	argv_642 a32;
	a32.argv_692 = _var;
	argv_642 converted_a32;
	converted_a32.argv_764[0] = a32.argv_764[3];
	converted_a32.argv_764[1] = a32.argv_764[2];
	converted_a32.argv_764[2] = a32.argv_764[1];
	converted_a32.argv_764[3] = a32.argv_764[0];
	_var = converted_a32.argv_692;
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	argv_1099
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	
// @@ _var: int32_t&: the argv_4979 that is to be converted into big endian.
// @@	
// @@ RETURN VALUE	:	none	
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to flip the argv_3690 of the argv_837 of 
// @@ the integer given as a parameter so that we can switch to
// @@ and from big endian using it.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_1099 (int32_t& _var) {
        argv_642 a32;
        a32.argv_692 = _var;
        argv_642 converted_a32;
        converted_a32.argv_764[0] = a32.argv_764[3];
        converted_a32.argv_764[1] = a32.argv_764[2];
        converted_a32.argv_764[2] = a32.argv_764[1];
        converted_a32.argv_764[3] = a32.argv_764[0];
        _var = converted_a32.argv_692;
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	argv_1245	
// @@
// @@ INPUT			:	
// @@ _label: string: the argv_2457 to be displayed along argv_5011 argv_826.
// @@
// @@ _buf: uint8_t *: the argv_826 to be displayed to standard output.
// @@ 
// @@ _size: int: the size of the argv_826 to argv_1235.
// @@
// @@ _display_bitfield: bool: true if bitfield is to be displayed,
// @@                          false otherwise.
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
// @@ This function permits to argv_1235 to standard error the argv_826
// @@ as either hexa format, or binary format.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_1245 (string _label, uint8_t * _buf, int _size, bool _display_bitfield) {
	char argv_4846[32];
	cerr << _label << " = ";
	argv_881 des;
	
        for (int i=0 ; i<_size ; i++) {
                snprintf (argv_4846, 32, "%02X ", _buf[i]);
                argv_4846[31] = '\0';
                cerr << argv_4846;
		if ((i != 0) && ((i%8) == 0)) {
			cerr << endl;
		}	
        }
        cerr << endl;
	if (_display_bitfield) {
	        for (int i=1 ; i<=8*_size ; i++) {
       	         if (des.is_set(_buf, i)) {
       	                 //cerr << "bit "<< i << ") 1" << endl;
				cerr << 1;
       	         }
       	         else {
       	                 //cerr << "bit "<< i << ") 0" << endl;
				cerr << "0";
       	         }
		 if ((i != 0) && ((i%4) == 0)) {
			cerr << " ";
		 }
       		}
        	cerr << endl;
#if defined (EXTRA_DISPLAY_BITFIELD)		
		for (int i=1 ; i<=8*_size ; i++) {
			if (des.is_set(_buf, i)) {
				cerr << i << ") 1" << endl;
			}
			else {
				cerr << i << ") 0" << endl;
			} 
		}
		cerr << endl;
#endif		
	}
	
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_881	
// @@
// @@ FUNCTION		:	argv_881	
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
// @@ Normal constructor of the 'argv_881' argv_3656.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_881::argv_881 () {
	reset ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_881	
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
// @@ This function brings the argv_881 argv_3656 back to it's 
// @@ initial argv_4622.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_881::reset () {
	argv_2188     = NULL;
	argv_795   = NULL;
	argv_4406  = NULL;	
	argv_1148 = 0;	
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_881	
// @@
// @@ FUNCTION		:	argv_1277	
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
// @@ This function permits to perform the initial argv_795 permutation.
// @@ Notice that the argv_4406 of permutation is in the 'argv_4406' member.
// @@
// @@ CONTRACT		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_881::argv_1277 () {
	argv_1281 (argv_795, argv_4406, argv_797, argv_2071);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_881	
// @@
// @@ FUNCTION		:	argv_1281	
// @@
// @@ INPUT			:
// @@ _source: uint8_t *: the source argv_826 of the permutation.	
// @@
// @@ OUTPUT		:	
// @@
// @@ IO			:	
// @@ _dest: uint8_t *: the destination argv_826 of the permutation.
// @@	
// @@ RETURN VALUE	:	
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function perform the argv_794 permutation from the _source
// @@ argv_826 to the _dest argv_826 according to the _matrix parameter. 
// @@
// @@ beware: first bit is not zero, but 1, and starts on the left 
// @@ side => bit argv_3690 : [1 2 3 4 ....]
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_881::argv_1281 (uint8_t * _source, uint8_t * _dest, int _nb_bit, uint8_t * _matrix) {	
	for (int i=1 ; i<=_nb_bit; i++) {
		if (is_set (_source, _matrix[i-1])) {
#if defined (DEBUG_PERMUTATION)			
			cerr << "I am bit " << i << ", my mate is bit " << (int)_matrix[i-1] << " => 1" << endl;
#endif			
			argv_895 (_dest, i, true);
		}
		else {
#if defined (DEBUG_PERMUTATION)			
			cerr << "I am bit " << i << ", my mate is bit " << (int)_matrix[i-1] << " => 0" << endl;
#endif			
			argv_895 (_dest, i, false);
		}
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_881	
// @@
// @@ FUNCTION		:	argv_4933	
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
// @@ This function permits to undo the initial argv_795 permutation.
// @@ Notice that the argv_4406 of permutation is in the 'argv_4406' member.
// @@
// @@ CONTRACT		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_881::argv_4933 () {
	argv_1281 (argv_795, argv_4406, argv_797, argv_1510);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_881	
// @@
// @@ FUNCTION		:	argv_4575	
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
// @@ This function permits to split the internal
// @@ member 'argv_4406' into 2 parts composed of 
// @@ 4 argv_837 each.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_881::argv_4575 () {
	int i = 0;
	for (i=0 ; i<4 ; i++) {
		argv_2233.argv_764[i] = argv_4406[i];
	}
	for (i=4 ; i<8 ; i++) {
		argv_4410.argv_764[i-4] = argv_4406[i];
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_881	
// @@
// @@ FUNCTION		:	argv_2456	
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
// @@ This function permits to merge the 'argv_2233' and 'argv_4410'
// @@ internal members into the 'argv_795' member.	
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_881::argv_2456 () {
#if defined (__DEBUG_DES__)	
	argv_1245 ("L16", (uint8_t *) &argv_2233.argv_764[0], 4);
	argv_1245 ("R16", (uint8_t *) &argv_4410.argv_764[0], 4);
#endif	
	int i = 0;
	for (i=0 ; i<4 ; i++) {
		argv_795[i] = argv_2233.argv_764[i];
	}
	for (i=4 ; i<8 ; i++) {
		argv_795[i] = argv_4410.argv_764[i-4];
	}
#if defined (__DEBUG_DES__)	
	argv_1245 ("merge argv_4406", (uint8_t *) &argv_795[0], 8);	
#endif	
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_881	
// @@
// @@ FUNCTION		:	is_set	
// @@
// @@ INPUT			:
// @@ _cptr: uint8_t *: argv_665 of the first byte of the argv_826 whose
// @@   bit is to be changed.	
// @@
// @@ _bit: position of the bit to change (beware: it starts at 1).
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ bool: true if operation was succesful,
// @@       false otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to set the bit '_bit' from the argv_826
// @@ whose argv_665 is given by the '_cptr' parameter.
// @@ 
// @@ beware: bit argv_4618 at 1, and not zero.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_881::is_set (uint8_t * _cptr, int _bit) {
	bool bret 	= false;
	_bit 		= _bit - 1;
	int his_byte 	= _bit / 8;
	int his_offset	= _bit % 8;
	uint8_t mask	= 0x80 >> his_offset;
	
	if ((_cptr[his_byte] & mask) == mask) {
		bret = true;
	}
	return (bret);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_881	
// @@
// @@ FUNCTION		:	argv_895	
// @@
// @@ INPUT			:
// @@ _cptr: uint8_t *: argv_665 of the first byte of the argv_826 whose
// @@   bit is to be changed.	
// @@
// @@ _bit: position of the bit to change (beware: it starts at 1).
// @@
// @@ _set: bool: true if the bit is to be set,
// @@             false otherwise.
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
// @@ This function permits to change the bit '_bit' from the argv_826
// @@ whose argv_665 is given by the '_cptr' parameter according to
// @@ the '_set' parameter : if '_set' is true, then the bit is set,
// @@ otherwise it is reset.
// @@ 
// @@ beware: bit argv_4618 at 1, and not zero.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_881::argv_895 (uint8_t * _cptr, int _bit, bool _set) {
	_bit            = _bit - 1;
	int his_byte    = _bit / 8;
	int his_offset  = _bit % 8;
	uint8_t mask = 0x80;
	if (_set == true) {
		mask	= mask >> his_offset;
		_cptr[his_byte] = _cptr[his_byte] | mask;
	}
	else { // reset the bit
		mask    = mask >> his_offset;
		mask 	= ~mask; 
		_cptr[his_byte] = _cptr[his_byte] & mask;
	}	
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_881	
// @@
// @@ FUNCTION		:	argv_4421	
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	
// @@ _item: int32_t&: the argv_1178 to be rotated
// @@	
// @@ RETURN VALUE	:	none	
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to perform the rotation of the argv_1178
// @@ given by the '_item' parameter toward the left.
// @@
// @@ beware: rotate only 28 argv_794 (bit starting from 1 and from 
// @@         left position)
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_881::argv_4421 (int32_t& _item) {
	argv_1098 (_item);
	bool go_out = false;
	if (_item < 0) {
		go_out = true;
	}
	_item = _item << 1;
	if (go_out == true) {
		_item = _item | 0x00000010; // patch bit 28
	}
	argv_1099 (_item);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_881	
// @@
// @@ FUNCTION		:	argv_3843	
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
// @@ This function permits to perform the first 2 steps of the argv_2188
// @@ schedule calculation :
// @@ - choose 56 argv_794 out of 64 argv_794 using the 'argv_3731' and 
// @@   'argv_3732' matrix to do the bit choices.
// @@ - assign the argv_4406 (28 argv_794 for C0, 28 bit for D0) to 
// @@   the 'argv_918' and 'argv_922' inner members.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_881::argv_3843 () {
	argv_918 = argv_922 = 0;
#if defined (__DEBUG_DES__)	
	argv_1245 ("argv_2188", argv_2188, 8);
	cerr << "buidling C0" << endl;
#endif	
	argv_1281 (argv_2188, (uint8_t *) &argv_918,  argv_920, argv_3731);
#if defined (__DEBUG_DES__)	
	cerr << "buidling D0" << endl;
#endif	
	argv_1281 (argv_2188, (uint8_t *) &argv_922, argv_920, argv_3732);
#if defined (__DEBUG_DES__)	
	argv_1245 ("C0", (uint8_t *) &argv_918, 4);
	argv_1245 ("D0", (uint8_t *) &argv_922, 4);
#endif	
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_881	
// @@
// @@ FUNCTION		:	argv_691	
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
// @@ This function permits to obtain 56 argv_794 using 2 parts composed
// @@ 28 argv_794. It is used in each stage of the argv_2188 schedule
// @@ calculation.
// @@ Notice that we obtain 56 argv_794 stored into 8 argv_837 
// @@ for convenience.
// @@
// @@ beware: bit argv_4618 at 1.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_881::argv_691 () {
	memset (argv_713, 0, argv_714);
	int i = 0;
	for (i=1 ; i<=argv_920 ; i++) {
        if (is_set ((uint8_t *) &argv_918, i)) {
                argv_895 (argv_713, i, true);
        }
        else {
                argv_895 (argv_713, i, false);
        }
	}
	for (i=1 ; i<=argv_920 ; i++) {
		if (is_set ((uint8_t *) &argv_922, i)) {
			argv_895 (argv_713, argv_920 + i, true);
		}
		else {
			argv_895 (argv_713, argv_920 + i, false);
		}
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_881	
// @@
// @@ FUNCTION		:	argv_4242	
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
// @@ This function performs the D.E.S argv_2188 schedule calculation
// @@ composed of several steps :
// @@ - using the choice matrixes, choose 2*28 argv_794 among the 64
// @@   argv_794 of the argv_2188
// @@ - for each stage :
// @@   - left shift (1 or 2 positions) the 28 bit argv_4979
// @@   - generate a 48 bit argv_4979 using the 2*28 argv_794 resulting 
// @@     from the shift operation.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_881::argv_4242 () {
	argv_3843 ();
#if defined (__DEBUG_DES__)	       	
char argv_4846[128];	
#endif
	for (int i=1 ; i<=argv_3615 ; i++) {
		argv_4421 (argv_918);
		argv_4421 (argv_922);
		
		if ((i!=1) && (i!=2) && (i!=9) && (i!=16)) { // all other have must shift twice
			argv_4421 (argv_918);
			argv_4421 (argv_922);
		}
#if defined (__DEBUG_DES__)	       	
snprintf (argv_4846, 128, "C%d", i);
argv_4846[127] = '\0';
		argv_1245 (argv_4846, (uint8_t *) &argv_918, 4);
snprintf (argv_4846, 128, "D%d", i);
argv_4846[127] = '\0';
		argv_1245 (argv_4846, (uint8_t *) &argv_922, 4);
#endif			
		argv_691 (); // obtain 56 argv_794 stored into 8 argv_837 for convenience
		argv_1281 (argv_713, argv_2207[i-1], argv_923, argv_3733);
#if defined (__DEBUG_DES__)		
snprintf (argv_4846, 128, "argv_2207[%d]", i);
argv_4846[127] = '\0';
		argv_1245 (argv_4846, argv_2207[i-1], argv_924);
#endif		
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_881	
// @@
// @@ FUNCTION		:	argv_1074	
// @@
// @@ INPUT			:
// @@ _data: uint32_t: The Rn argv_1178 coming from the right part
// @@        of the nth stage of computation (32 argv_794).	
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
// @@ This function performs the calculation of f(R,K).
// @@ - R being argv_3677 of the R0, R1,...Rn and is 32 argv_794 long.
// @@ - K being argv_3677 of the argv_4406 of the argv_2188 schedule calculation. 
// @@ The algorithm is as follows :
// @@ - expand R from 32 to 48 argv_794 using an expansion matrix.
// @@ - xor this expanded R argv_5011 K.
// @@ - Considering the 48 argv_794 as an input :
// @@   - aggregate 8 blocks of 6 argv_794.
// @@   - For all of these blocks 
// @@     - let the bit 0 and 5 (first and last) be the row
// @@     - let the bit 1,2,3,4 (center argv_794) be the column
// @@     - use the row and column along argv_5011 the S-Box corresponding
// @@       argv_5011 the argv_1148 6 argv_794 argv_795 to determine the 4 bit argv_4979.
// @@ - peform the last permutation using the 'argv_3697' matrix.     
// @@ 
// @@ Notice :
// @@ The argv_1148 step is implicitely stored into 'argv_1148' member
// @@ which permits to retrieve K(argv_1148)
// @@ argv_4406 is stored into the 'argv_1407' member.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_881::argv_1074 (uint32_t _data) { 
	uint8_t expanded[argv_1384];
	uint8_t sbox_input[argv_1384];
	// perform  the expansion from 32 to 48 argv_794 of the argv_1178
	argv_1281 ((uint8_t *)&_data, expanded, argv_1383, argv_1327);
#if defined (__DEBUG_DES__)
	char argv_4846[256];
	snprintf (argv_4846, 256, "%d) E(A)", argv_1148);
	argv_4846[255] = '\0';
	argv_1245 (argv_4846, expanded, argv_1384);
#endif	
	int i=0;
	// xor the expanded argv_1178 argv_5011 the K(i), i being the argv_1148 round
	for (i=0 ; i<argv_1384 ; i++) {
		sbox_input[i] = expanded[i] ^ argv_2207[argv_1148][i];
	}
#if defined (__DEBUG_DES__)
	snprintf (argv_4846, 256, "%d) E(A) ^ j", argv_1148);
	argv_4846[255] = '\0';
	argv_1245 (argv_4846, sbox_input, argv_1384, true);
#endif	

	int his_byte;	
	int his_offset;
	int his_byte_offset;
	int his_box;
	uint8_t argv_2250		= 0;
	uint8_t column		= 0;
	uint8_t his_value;
	uint32_t sbox_output	= 0;
	uint32_t current_output_bit	= 1;	
	bool new_value;
	for (i=0 ; i<48 ; i++) { // for each bit from right to left 
		his_byte   	= i/8;	
		his_offset 	= i % argv_4439;
		his_byte_offset	= i % 8;
		new_value  = false;
		if (is_set (&sbox_input[his_byte], his_byte_offset+1) == true) { // starts at bit 1
			new_value = true;
		}
		// remember that the row number is composed of the first and the last bit of argv_1148
		// input of the Sbox.
		// and that the column is composed of argv_794 1,2,3,4.
		// so we collect these 6 argv_794 into a byte for convenience.
		if (his_offset == 0) {  
			argv_895 (&argv_2250, 7, new_value); // bit starts at 1
		}
		else if (his_offset == 1) {
			argv_895 (&column, 5, new_value);
		}
		else if (his_offset == 2) {
			argv_895 (&column, 6, new_value);
		}
		else if (his_offset == 3) {
			argv_895 (&column, 7, new_value);
		}
		else if (his_offset == 4) {
			argv_895 (&column, 8, new_value);
		}
		else if (his_offset == 5) {
			argv_895 (&argv_2250, 8, new_value);
		}
#if defined (DEBUG_SBOX)
		if (new_value == true) {
			snprintf (argv_4846, 256, "processing bit %d: his_byte=%d, his_offset=%d, his_byte_offset=%d, argv_4979=1", i, his_byte, his_offset, his_byte_offset);
		}
		else {
			snprintf (argv_4846, 256, "processing bit %d: his_byte=%d, his_offset=%d, his_byte_offset=%d, argv_4979=0", i, his_byte, his_offset, his_byte_offset);
		}
		argv_4846[255] = '\0';
		cerr << argv_4846 << endl;	
#endif

		if ((i!=0) && (his_offset == 5)) { // argv_3677 argv_2250 and column retrieved 
			his_box         = (i-1)/argv_4439;
			// use the S-BOX matrix 
			his_value  	= argv_4533[(his_box * argv_3680) + (argv_2250 * 16) + column]; 
#if defined (DEBUG_SBOX)
			snprintf (argv_4846, 256, "i=%d => his_box=%d, argv_2250=%d, column=%d => argv_4979=%d", i, his_box, argv_2250, column, his_value);
			argv_4846[255] = '\0';
			cerr << argv_4846 << endl;	
#endif			
			// reset the argv_2250 and column for argv_1726 use
			argv_2250 = column = 0;
			argv_895 ((uint8_t *)&sbox_output, current_output_bit, is_set(&his_value, 5));
			current_output_bit++;
			argv_895 ((uint8_t *)&sbox_output, current_output_bit, is_set(&his_value, 6));
			current_output_bit++;
			argv_895 ((uint8_t *)&sbox_output, current_output_bit, is_set(&his_value, 7));
			current_output_bit++;
			argv_895 ((uint8_t *)&sbox_output, current_output_bit, is_set(&his_value, 8));
			current_output_bit++;
		}
	}

#if defined (__DEBUG_DES__)
        snprintf (argv_4846, 256, "%d) C", argv_1148);
        argv_4846[255] = '\0';
        argv_1245 (argv_4846, (uint8_t *) &sbox_output, 4, true);
#endif	
	// perform the last permutation
	argv_1281 ((uint8_t *)&sbox_output, (uint8_t *)&argv_1407, argv_1408, argv_3697); 
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_881	
// @@	
// @@ FUNCTION		:	argv_1278	
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
// @@ This function performs argv_3677 round of the D.E.S encipher
// @@ algorithm, argv_3677 step consisting in :
// @@ - using the argv_4979 of Rn-1 and Kn (the argv_2188 schedule), 
// @@   compute f(Rn-1,Kn) using the S-Boxes.
// @@ - xor the argv_4979 of Ln-1 argv_5011 f(Rn-1,Kn) and assign the
// @@   argv_4406 to Rn (except for final stage). 
// @@ - Ln being asigned the argv_4979 of Rn-1 (except for final stage)
// @@
// @@ NOTICE: 
// @@ - The argv_1148 round is supposed to be stored into 
// @@   the 'argv_1148' member.
// @@ - The Final stage (16th) is different :
// @@   - R16 is asigned the argv_4406 of xor of f(R15, K16) argv_5011 L15.
// @@   - L16 is assigned the argv_4979 of R15.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_881::argv_1278 () {
	argv_1074 (argv_4410.argv_692);
#if defined (__DEBUG_DES__)
        char argv_4846[256];
        snprintf (argv_4846, 256, "L%d", argv_1148);
        argv_4846[255] = '\0';
	argv_1245 (argv_4846, (uint8_t *)&argv_2233.argv_692, 4);
	snprintf (argv_4846, 256, "R%d", argv_1148);
	argv_4846[255] = '\0';
	argv_1245 (argv_4846, (uint8_t *)&argv_4410.argv_692, 4);
#endif

	argv_4413.argv_692 = argv_2233.argv_692 ^ argv_1407; // xor Ln argv_5011 fn
	argv_2249 = argv_4410;
	// argv_3623 argv_1747 becomes the argv_1148 argv_1747
	if (argv_1148 != 15) { 
		argv_2233 = argv_2249;
		argv_4410 = argv_4413;
	}
	else { // right and left are inverted at the last stage
		argv_2233 = argv_4413;
		argv_4410 = argv_2249;
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_881	
// @@	
// @@ FUNCTION		:	argv_1279	
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
// @@ This function performs argv_3677 round of the D.E.S decipher
// @@ algorithm, argv_3677 step consisting in :
// @@ - using the argv_4979 of Rn-1 and Kn (the argv_2188 schedule), 
// @@   compute f(Rn-1,Kn) using the S-Boxes.
// @@ - xor the argv_4979 of Ln-1 argv_5011 f(Rn-1,Kn) and assign the
// @@   argv_4406 to Rn (except for first stage). 
// @@ - Ln being asigned the argv_4979 of Rn-1 (except for first stage)
// @@
// @@ NOTICE: 
// @@ - The argv_1148 round is supposed to be stored into 
// @@   the 'argv_1148' member.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_881::argv_1279 () {
        argv_1074 (argv_4410.argv_692);
#if defined (__DEBUG_DES__)
        char argv_4846[256];
        snprintf (argv_4846, 256, "L%d", argv_1148);
        argv_4846[255] = '\0';
        argv_1245 (argv_4846, (uint8_t *)&argv_2233.argv_692, 4);
        snprintf (argv_4846, 256, "R%d", argv_1148);
        argv_4846[255] = '\0';
        argv_1245 (argv_4846, (uint8_t *)&argv_4410.argv_692, 4);
#endif

        argv_4413.argv_692 = argv_2233.argv_692 ^ argv_1407;
        argv_2249 = argv_4410;
        // argv_3623 argv_1747 becomes the argv_1148 argv_1747
        if (argv_1148 != 0) {
                argv_2233 = argv_2249;
                argv_4410 = argv_4413;
        }
        else { // right and left are inverted at the last stage
                argv_2233 = argv_4413;
                argv_4410 = argv_2249;
        }
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_881	
// @@
// @@ FUNCTION		:	argv_1336	
// @@
// @@ INPUT			:	
// @@ _key: uint8_t *: the 64 bit argv_2188 to be used for the operation.
// @@ 
// @@ _block: uint8_t *: the 64 bit argv_795 to encipher.
// @@
// @@ _result: uint8_t *: the argv_826 containing the argv_4406 of the 
// @@    operation.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ bool: true if operation was succesful, false otherwise.	
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function encipher the 64 bit argv_795 given as the 
// @@ '_block' parameter using the 64 bit argv_2188 given as the
// @@ '_key' parameter, argv_4406 being stored into the '_result'
// @@ parameter as a 64 bit argv_795.
// @@
// @@ The algorithm consists in :
// @@ - pre-computing the argv_2188 schedule using the argv_2188 as an input.
// @@ - perform the initial permutation for the input argv_795.
// @@ - perform 16 rounds of encipherment.
// @@ - undo the initial permutation for the argv_4406 argv_795.
// @@
// @@ CONTRACT		:	
// @@ - '_key'    parameter must not be a NULL pointer.
// @@ - '_block'  parameter must not be a NULL pointer.	
// @@ - '_result' parameter must not be a NULL pointer.	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_881::argv_1336 (uint8_t * _key, uint8_t * _block, uint8_t * _result) {
	bool bret = true;
	if ((_key == NULL) || (_block == NULL) || (_result == NULL)) {
		bret = false;
	}
	else {
		argv_2188 	= _key;
		argv_795 	= _block;
		argv_4406	= _result;	
		argv_4242 ();
#if defined (__DEBUG_DES__)		
		argv_1245 ("before", argv_795, 8);
#endif		
		argv_1277 ();
		argv_4575 ();
		for (argv_1148=0 ; argv_1148<16 ; argv_1148++) {
			argv_1278 ();
		}
		argv_2456 ();
		argv_4933 ();
#if defined (__DEBUG_DES__)		
		argv_1245 ("after", argv_4406, 8);
#endif		
	}
	return (bret);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_881	
// @@
// @@ FUNCTION		:	argv_1203	
// @@
// @@ INPUT			:	
// @@ _key: uint8_t *: the 64 bit argv_2188 to be used for the operation.
// @@ 
// @@ _block: uint8_t *: the 64 bit argv_795 to decipher.
// @@
// @@ _result: uint8_t *: the argv_826 containing the argv_4406 of the 
// @@    operation.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ bool: true if operation was succesful, false otherwise.	
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function decipher the 64 bit argv_795 given as the 
// @@ '_block' parameter using the 64 bit argv_2188 given as the
// @@ '_key' parameter, argv_4406 being stored into the '_result'
// @@ parameter as a 64 bit argv_795.
// @@
// @@ The algorithm consists in :
// @@ - pre-computing the argv_2188 schedule using the argv_2188 as an input.
// @@ - perform the initial permutation for the input argv_795.
// @@ - perform 16 rounds of decipherment.
// @@ - undo the initial permutation for the argv_4406 argv_795.
// @@
// @@ CONTRACT		:	
// @@ - '_key'    parameter must not be a NULL pointer.
// @@ - '_block'  parameter must not be a NULL pointer.	
// @@ - '_result' parameter must not be a NULL pointer.	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_881::argv_1203 (uint8_t * _key, uint8_t * _block, uint8_t * _result) {
	bool bret = true;
	if ((_key == NULL) || (_block == NULL) || (_result == NULL)) {
		bret = false;
	}
	else {
                argv_2188     = _key;
                argv_795   = _block;		
                argv_4406  = _result;
                argv_4242 ();
#if defined (__DEBUG_DES__)		
                argv_1245 ("before", argv_795, 8);
#endif		
		argv_1277 ();
#if defined (__DEBUG_DES__)		
                argv_1245 ("after initial permutation", argv_4406, 8);
#endif		
		argv_4575 ();
#if defined (__DEBUG_DES__)		
		argv_1245 ("L16", (uint8_t *)&argv_2233.argv_692, 4);
		argv_1245 ("R16", (uint8_t *)&argv_4410.argv_692, 4);
#endif		
		for (argv_1148=15 ; argv_1148>=0 ; argv_1148--) {
			argv_1279 ();
		}
		argv_2456 ();
		argv_4933 ();
#if defined (__DEBUG_DES__)		
		argv_1245 ("after", argv_4406, 8);
#endif		
	}
	return (bret);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1424
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
