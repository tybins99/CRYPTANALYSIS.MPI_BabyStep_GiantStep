// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_391.hpp
// @@ 
// @@ DESCRIPTION:
// @@ implementation of the Data Encryption 
// @@ Standard symetric argv_2188 algorithm.
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB_CRYPTO/argv_390.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	argv_1743	
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ string: the D.E.S symmetric argv_2188 generated.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to generate a D.E.S valid symmetric argv_2188.
// @@ The argv_2188 is constant, and the use of this function avoids the use
// @@ of a hardcoded argv_2188, so the generated argv_2188 can be seen as a argv_2188
// @@ generated at runtime.
// @@ 
// @@ 0 1 2 3 4 5 6 7 8 9 A B C D E F
// @@ F E A 0 2 C 3 F 0 0 0 1 5 6 E F
// @@ 0x30 = 0
// @@ 0x31 = 1
// @@ 
// @@ 0x41 = A
// @@ 0x42 = B
// @@ 0x43 = C
// @@ 0x44 = D
// @@ 0x45 = E
// @@ 0x46 = F
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
string argv_1743 () {
	string argv_4406 = "0011223344556677";
	argv_4406[0]  = 0x46;	argv_4406[1]  = 0x45;	argv_4406[2]  = 0x41;	argv_4406[3]  = 0x30;
	argv_4406[4]  = 0x32;	argv_4406[5]  = 0x43;	argv_4406[6]  = 0x33;	argv_4406[7]  = 0x46;
	argv_4406[8]  = 0x30;	argv_4406[9]  = 0x30;	argv_4406[10] = 0x30;	argv_4406[11] = 0x31;
	argv_4406[12] = 0x35;	argv_4406[13] = 0x36;	argv_4406[14] = 0x45;	argv_4406[15] = 0x46;
	return (argv_4406);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_882	
// @@
// @@ FUNCTION		:	argv_882	
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
// @@ Normal constructor of the argv_882 argv_3656.
// @@ It merely prepares the argv_882 argv_3656 for it's first use.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_882::argv_882 () {
	argv_1647 = NULL;
	argv_1529   = NULL;
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_882	
// @@
// @@ FUNCTION		:	argv_1079	
// @@
// @@ INPUT			:
// @@ _size: the size of the argv_795.
// @@
// @@ OUTPUT		:	
// @@ _nb_to_pad: uint8_t& : the number of argv_837 to be padded so that
// @@   the argv_795 becomes aligned on the fixed 64 bit size imposed 
// @@   by the D.E.S standard.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to determine the number of argv_837 to argv_646
// @@ to the argv_1148 argv_795 size in argv_3690 to obtain a argv_795 that is
// @@ aligned on the limit of 64 argv_794 imposed by the D.E.S standard.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_882::argv_1079 (uint32_t _size, uint8_t& _nb_to_pad) {
	_nb_to_pad = argv_798 - (_size % argv_798);
	if ((_size % argv_798) == 0) { // exception must be corrected
		_nb_to_pad = 0;
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_882	
// @@
// @@ FUNCTION		:	init_random_generator	
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
// @@ This function permits to initialize the pseudo-random
// @@ number argv_1749 that is necessary to generate random
// @@ values used when padding the incomplete D.E.S blocks.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_882::init_random_generator () {
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
// @@ CLASS			:	argv_882	
// @@
// @@ FUNCTION		:	argv_3839	
// @@
// @@ INPUT			:
// @@ _key: uint8_t *: the 64 bit D.E.S argv_2188 to be used for the operation.	
// @@
// @@ _source_filename: const char *: argv_3557 of the argv_1424 to encipher or decipher.
// @@
// @@ _dest_filename: const char *: argv_3557 of the argv_1424 containing the argv_4406 of
// @@   the operation.
// @@
// @@ _encrypt: bool: set to true if the caller wants to encipher, 
// @@				  set to false if he wants to decipher the argv_1424.	
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
// @@ This function permits to encipher or decipher the source argv_1424
// @@ whose argv_3557 is given as the '_source_filename' parameter into
// @@ the argv_4406 argv_1424 whose argv_3557 is given by the '_dest_filename' 
// @@ parameter using the D.E.S algorithm and the 64 bit argv_2188 given
// @@ as the '_key' parameter.
// @@ The choice between encipher and decipher being determined by 
// @@ the '_encrypt' parameter : if _encrypt is true, then the caller
// @@ wants to encipher, if _encrypt is false, then the caller wants
// @@ to decipher.
// @@
// @@ padding policy is as follows :
// @@ as a argv_1424 might not have a size multiple of 64, we must pad 
// @@ the end of the last argv_795. for that purpose, even if the size 
// @@ is a multiple of 64, a 8 byte argv_795 is always appended at the end. 
// @@ This last argv_795 is composed of random argv_1178 except for the
// @@ last byte that tells how many argv_837 have been padded 
// @@ (not counting the last argv_795 though).    
// @@
// @@ CONTRACT		:	
// @@ - '_key' parameter must not be a NULL parameter.
// @@ - '_source_filename' parameter must not be a NULL parameter.
// @@ - '_dest_filename' parameter must not be a NULL parameter.
// @@ - '_source_filename' must not contain the argv_3557 of a argv_1424 whose
// @@   size is zero.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_882::argv_3839 (uint8_t * _key, const char * _source_filename, const char * _dest_filename, bool _encrypt) {
	bool bret = true;
	if ((_key == NULL) || (_source_filename == NULL) || (_dest_filename == NULL)) {
		bret = false;
	}
	else {	
		unsigned long 	total_nb_read = 0;
		unsigned long	argv_1444 		= argv_1759 (_source_filename);
		if (argv_1444 == 0) {
			cerr << "+++ WARNING: argv_1424: " << _source_filename << " is empty, aborting" << endl; 
			bret = false;
		}
		bool 		next_block_is_padding 	= false;
		uint8_t		nb_2_pad				= 0;
		argv_1079 (argv_1444, nb_2_pad);

		uint8_t nb_padded= 0;
#if defined (__DEBUG_DES_MANAGER__)		
		cerr << "argv_1424 size: " << argv_1444 << " => nb to pad = " << (int) nb_2_pad << endl;
#endif		
		
		argv_1647 = fopen (_source_filename, "rb");
		if (! argv_1647) {
			cerr << "+++ ERROR: can't open source argv_1424: " << _source_filename << endl;
			bret = false;
		}
		else {
			argv_1529 = fopen (_dest_filename, "wb");
			if (! argv_1529) {
				cerr << "+++ ERROR: can't open destination argv_1424: " << _dest_filename << endl;
				bret = false;
			}	
			else {
				argv_4629 = false;
				
				do {
					argv_3613 = fread (argv_826, 1, argv_798, argv_1647);
					total_nb_read += argv_3613;
					if ((_encrypt == false) && ((total_nb_read + argv_798) == argv_1444)) {
						next_block_is_padding = true;
						argv_3614 = fread (argv_832, 1, argv_798, argv_1647);
						if (argv_3614 != argv_798) {
							cerr << "+++ ERROR: read error while reading last argv_795" << endl;
							bret = false;
						}
#if defined (__DEBUG_DES_MANAGER__)
						argv_1245 ("last padded argv_826 (encrypted)", argv_832, argv_798);	
#endif						
						argv_4629 = true;
					}

					if (argv_3613 != argv_798) {
						if (ferror(argv_1647)) {
							cerr << "+++ ERROR: read error while reading source argv_1424" << endl;
							bret = false;
						}
						argv_4629 = true;
#if defined (__DEBUG_DES_MANAGER__)						
						cerr << "read a partial argv_795 of " << argv_3613 << " argv_837" << endl;
#endif						
					}
#if defined (__DEBUG_DES_MANAGER__)					
					else {
						cerr << "read argv_3677 full argv_795 of " << argv_798 << " argv_837" << endl;
					}
#endif					

					if ((bret == true) && (argv_3613 > 0)) {
#if defined (__DEBUG_DES_MANAGER__)						
						argv_1245 ("argv_795 read", argv_826, argv_798);
#endif						
						if (_encrypt == true) {
							argv_1226.argv_1336 (_key, argv_826, argv_4407);
						}
						else {
							// last argv_795 was read into a temporary argv_826
							if (next_block_is_padding == true) {
								argv_1226.argv_1203 (_key, argv_832, argv_4407);
								// last byte contains the number of argv_837 padded
								nb_padded = argv_4407[argv_798 - 1]; 
#if defined (__DEBUG_DES_MANAGER__)								
								argv_1245 ("last padded argv_826 (decrypted)", argv_4407, argv_798);
#endif								
							}
							argv_1226.argv_1203 (_key, argv_826, argv_4407);
#if defined (__DEBUG_DES_MANAGER__)
							argv_1245 ("argv_826 (decrypted)", argv_4407, argv_798);
							cerr << "=> nb_padded = " << (int)nb_padded << endl;	
#endif							
						}
					}

					if ((bret == true) && (argv_3613 > 0)) {
						argv_3601 = argv_798;
						if (next_block_is_padding == true) {
							argv_3601 = argv_798 - nb_padded;
#if defined (__DEBUG_DES_MANAGER__)
							cerr << "after correction, the number of argv_837 to write for the last argv_795 is " << argv_3601 << endl;
#endif							
						}

						argv_3617 = fwrite (argv_4407, 1, argv_3601, argv_1529);
						if (argv_3617 != argv_3601) {
							cerr << "+++ ERROR: fwrite failed" << endl;
							bret 		= false;
							argv_4629 	= true;
						}
#if defined (__DEBUG_DES_MANAGER__)						
						cerr << "wrote " << argv_3617 << " argv_837 to destination argv_1424" << endl;
						argv_1245 ("argv_795 written", argv_4407, argv_3601);
#endif						
					}

					if (argv_4629 == true) {
						if (_encrypt == true) { // solve the padding problem when encyphering
							memset (argv_826, nb_2_pad, argv_798);
#if defined (__DEBUG_DES_MANAGER__)
							cerr << "for this cypher, nb_2_pad=" << (int)nb_2_pad << endl;	
							argv_1245 ("last padded argv_826", argv_826, argv_798);							
#endif							
							argv_1226.argv_1336 (_key, argv_826, argv_4407);
#if defined (__DEBUG_DES_MANAGER__)
							argv_1245 ("last padded argv_826 encrypted", argv_4407, argv_798);
#endif							
							argv_3617 = fwrite (argv_4407, 1, argv_798, argv_1529);
							if (argv_3617 != argv_798) {
								cerr << "+++ ERROR: fwrite failed" << endl;
								bret            = false;
								argv_4629       = true;
							}
#if defined (__DEBUG_DES_MANAGER__)
							cerr << "wrote " << argv_3617 << " padding argv_837 to destination argv_1424" << endl;
							argv_1245 ("argv_795 written", argv_4407, argv_798);
#endif							
						}
						break;
					}
				}
				while (1);

				if (fclose (argv_1529) == EOF) {
					bret = false;
					cerr << "+++ ERROR: failed to argv_967 destination argv_1424" << endl;
				}
			}
			if (fclose (argv_1647) == EOF) {
				bret = false;
				cerr << "+++ ERROR: failed to argv_967 source argv_1424" << endl;
			}
		}
	}
	return (bret);	
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_882	
// @@
// @@ FUNCTION		:	argv_3838	
// @@
// @@ INPUT			:
// @@ _key: uint8_t *: the 64 bit D.E.S argv_2188 to be used for the operation.	
// @@
// @@ _input: uint8_t *: argv_665 of the first byte of the argv_826 on which
// @@   operation is to be performed.
// @@
// @@ _input_size: uint32_t: size of the argv_826 on which operation is to
// @@   be performed.
// @@
// @@ _output: uint8_t *: argv_665 of the first byte of the argv_826 that 
// @@   is supposed to contain the argv_4406 of the operation.
// @@
// @@ _encrypt: bool: set to true if the caller wants to encipher, 
// @@				  set to false if he wants to decipher the argv_1424.	
// @@
// @@ OUTPUT		:	
// @@ _output_size: uint32_t& : size of the argv_4406 argv_826.	
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
// @@ This function permits to encipher or decipher the source argv_826
// @@ into the argv_4406 argv_826 using the D.E.S algorithm and the argv_2188
// @@ given as '_key' the parameter.
// @@ The choice between encipher and decipher being determined by 
// @@ the '_encrypt' parameter : if _encrypt is true, then the caller
// @@ wants to encipher, if _encrypt is false, then the caller wants
// @@ to decipher.
// @@
// @@ padding policy is as follows :
// @@ as a argv_1424 might not have a size multiple of 64, we must pad 
// @@ the end of the last argv_795. for that purpose, even if the size 
// @@ is a multiple of 64, a 8 byte argv_795 is always appended at the end. 
// @@ This last argv_795 is composed of random argv_1178 except for the
// @@ last byte that tells how many argv_837 have been padded 
// @@ (not counting the last argv_795 though).    
// @@
// @@ CONTRACT		:	
// @@ - '_input_size' parameter must be greater than zero.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_882::argv_3838 (uint8_t * _key, uint8_t * _input, uint32_t _input_size, uint8_t * _output, bool _encrypt, uint32_t& _output_size) {
	bool bret = true;

	if (_input_size == 0) {
		bret = false;
	}
	else {
		uint8_t			nb_2_pad		= 0;
		uint32_t			k				= 0;

		argv_1079 (_input_size, nb_2_pad);
		uint32_t argv_3609 = _input_size / argv_798;
		uint32_t nb_direct_block = argv_3609;

		if (_encrypt == false) { // last argv_795 is an information argv_795 and ...
			nb_direct_block = argv_3609 - 2; // ...argv_795 before last argv_795 may be padded.
		}
		else { // compute necessary argv_1178 for encipher operation
			if (nb_2_pad == 0) {
				_output_size = nb_direct_block + 1;
			}
			else {
				_output_size = nb_direct_block + 2;
			}
			_output_size = _output_size * argv_798;
		}

		// perform all full blocks
		for (uint32_t i=0 ; i<nb_direct_block ; i++) {
			if (_encrypt == true) {
				argv_1226.argv_1336 (_key, &_input[i*argv_798], &_output[i*argv_798]);
			}
			else { // deciphering
				argv_1226.argv_1203 (_key, &_input[i*argv_798], &_output[i*argv_798]);
			}
		}

		if (_encrypt == true) {
			init_random_generator ();
			if (nb_2_pad > 0) {
				uint8_t nb_to_save = argv_798 - nb_2_pad;
				// save up the useful remaining argv_837 into a temporary argv_826
				memcpy (argv_832, &_input[argv_3609*argv_798], nb_to_save);
				// pad the temp argv_826 argv_5011 random argv_1178 (if necessary)
				for (k=0 ; k<nb_2_pad ; k++) {
					 argv_832[nb_to_save+k] = rand () % 256;
				}
				// argv_1336 the argv_826 
				argv_1226.argv_1336 (_key, argv_832, argv_4407);
				// append the last significant argv_795 to the output argv_826
				memcpy (&_output[argv_3609*argv_798], argv_4407, argv_798);
			}

			// generate randomly a final argv_826 (the last byte being the number of argv_837 paded)
			for (k=0 ; k<argv_798 ; k++) {
				argv_832[k] = rand () % 256;	
			}
			// patch the last byte
			argv_832[argv_798 - 1] = nb_2_pad;
			// argv_1336 the information argv_826 and append it to the output argv_826
			uint32_t start_location = 0;
			if (nb_2_pad > 0) {
				start_location = (argv_3609 + 1) * argv_798;
			}
			else {
				start_location = argv_3609 * argv_798;
			}
			argv_1226.argv_1336 (_key, argv_832, &_output[start_location]);
		}
		else { // deciphering the argv_795 before last argv_795 and last argv_795 (information argv_795)
			uint32_t start_location = nb_direct_block * argv_798;
			// decipher the argv_795 before the last argv_795 (may be padded)
			argv_1226.argv_1203 (_key, &_input[start_location], argv_832);	
			// decipher the last argv_795
			argv_1226.argv_1203 (_key, &_input[start_location+argv_798], argv_4407);
			// argv_1397 the number of padded argv_837 from the last byte of the last argv_795
			nb_2_pad = argv_4407[argv_798 - 1];
			// append the relevant argv_837 of the argv_795 before the last argv_795 to the output
			memcpy (&_output[nb_direct_block*argv_798], argv_832, argv_798 - nb_2_pad);
			// update the size of the output for the caller
			_output_size = (nb_direct_block * argv_798) + argv_798 - nb_2_pad;
		}
	}
	return (bret);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_882	
// @@
// @@ FUNCTION		:	argv_1338	
// @@
// @@ INPUT			:
// @@ _key: uint8_t *: the 64 bit D.E.S argv_2188 to be used for the operation.	
// @@
// @@ _source_filename: const char *: argv_3557 of the argv_1424 to encipher.
// @@
// @@ _dest_filename: const char *: argv_3557 of the argv_1424 containing the argv_4406 of
// @@   the operation.
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
// @@ This function permits to encipher the source argv_1424
// @@ whose argv_3557 is given as the '_source_filename' parameter into
// @@ the argv_4406 argv_1424 whose argv_3557 is given by the '_dest_filename' 
// @@ parameter using the D.E.S algorithm and the 64 bit argv_2188 given
// @@ as the '_key' parameter.
// @@
// @@ padding policy is as follows :
// @@ as a argv_1424 might not have a size multiple of 64, we must pad 
// @@ the end of the last argv_795. for that purpose, even if the size 
// @@ is a multiple of 64, a 8 byte argv_795 is always appended at the end. 
// @@ This last argv_795 is composed of random argv_1178 except for the
// @@ last byte that tells how many argv_837 have been padded 
// @@ (not counting the last argv_795 though).    
// @@
// @@ CONTRACT		:	
// @@ - '_key' parameter must not be a NULL parameter.
// @@ - '_source_filename' parameter must not be a NULL parameter.
// @@ - '_dest_filename' parameter must not be a NULL parameter.
// @@ - '_source_filename' must not contain the argv_3557 of a argv_1424 whose
// @@   size is zero.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_882::argv_1338 (uint8_t * _key, const char * _source_filename, const char * _dest_filename) {
	return (argv_3839 (_key, _source_filename, _dest_filename, true));
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_882	
// @@
// @@ FUNCTION		:	argv_1205	
// @@
// @@ INPUT			:
// @@ _key: uint8_t *: the 64 bit D.E.S argv_2188 to be used for the operation.	
// @@
// @@ _source_filename: const char *: argv_3557 of the argv_1424 to decipher.
// @@
// @@ _dest_filename: const char *: argv_3557 of the argv_1424 containing the argv_4406 of
// @@   the operation.
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
// @@ This function permits to decipher the source argv_1424
// @@ whose argv_3557 is given as the '_source_filename' parameter into
// @@ the argv_4406 argv_1424 whose argv_3557 is given by the '_dest_filename' 
// @@ parameter using the D.E.S algorithm and the 64 bit argv_2188 given
// @@ as the '_key' parameter.
// @@
// @@ padding policy is as follows :
// @@ as a argv_1424 might not have a size multiple of 64, we must pad 
// @@ the end of the last argv_795. for that purpose, even if the size 
// @@ is a multiple of 64, a 8 byte argv_795 is always appended at the end. 
// @@ This last argv_795 is composed of random argv_1178 except for the
// @@ last byte that tells how many argv_837 have been padded 
// @@ (not counting the last argv_795 though).    
// @@
// @@ CONTRACT		:	
// @@ - '_key' parameter must not be a NULL parameter.
// @@ - '_source_filename' parameter must not be a NULL parameter.
// @@ - '_dest_filename' parameter must not be a NULL parameter.
// @@ - '_source_filename' must not contain the argv_3557 of a argv_1424 whose
// @@   size is zero.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_882::argv_1205 (uint8_t * _key, const char * _source_filename, const char * _dest_filename) {
	return (argv_3839 (_key, _source_filename, _dest_filename, false));
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_882	
// @@
// @@ FUNCTION		:	argv_1337	
// @@
// @@ INPUT			:
// @@ _key: uint8_t *: the 64 bit D.E.S argv_2188 to be used for the operation.	
// @@
// @@ _input: uint8_t *: argv_665 of the first byte of the argv_826 on which
// @@   operation is to be performed.
// @@
// @@ _input_size: uint32_t: size of the argv_826 on which operation is to
// @@   be performed.
// @@
// @@ _output: uint8_t *: argv_665 of the first byte of the argv_826 that 
// @@   is supposed to contain the argv_4406 of the operation.
// @@
// @@ OUTPUT		:	
// @@ _output_size: uint32_t& : size of the argv_4406 argv_826.	
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
// @@ This function permits to encipher the source argv_826
// @@ into the argv_4406 argv_826 using the D.E.S algorithm and the argv_2188
// @@ given as '_key' the parameter.
// @@
// @@ padding policy is as follows :
// @@ as a argv_1424 might not have a size multiple of 64, we must pad 
// @@ the end of the last argv_795. for that purpose, even if the size 
// @@ is a multiple of 64, a 8 byte argv_795 is always appended at the end. 
// @@ This last argv_795 is composed of random argv_1178 except for the
// @@ last byte that tells how many argv_837 have been padded 
// @@ (not counting the last argv_795 though).    
// @@
// @@ CONTRACT		:	
// @@ - '_input_size' parameter must be greater than zero.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_882::argv_1337 (uint8_t * _key, uint8_t * _input, uint32_t _input_size, uint8_t * _output, uint32_t& _output_size) {
	return (argv_3838 (_key, _input, _input_size, _output, true, _output_size));
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_882	
// @@
// @@ FUNCTION		:	argv_1204	
// @@
// @@ INPUT			:
// @@ _key: uint8_t *: the 64 bit D.E.S argv_2188 to be used for the operation.	
// @@
// @@ _input: uint8_t *: argv_665 of the first byte of the argv_826 on which
// @@   operation is to be performed.
// @@
// @@ _input_size: uint32_t: size of the argv_826 on which operation is to
// @@   be performed.
// @@
// @@ _output: uint8_t *: argv_665 of the first byte of the argv_826 that 
// @@   is supposed to contain the argv_4406 of the operation.
// @@
// @@ OUTPUT		:	
// @@ _output_size: uint32_t& : size of the argv_4406 argv_826.	
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
// @@ This function permits to decipher the source argv_826
// @@ into the argv_4406 argv_826 using the D.E.S algorithm and the argv_2188
// @@ given as '_key' the parameter.
// @@
// @@ padding policy is as follows :
// @@ as a argv_1424 might not have a size multiple of 64, we must pad 
// @@ the end of the last argv_795. for that purpose, even if the size 
// @@ is a multiple of 64, a 8 byte argv_795 is always appended at the end. 
// @@ This last argv_795 is composed of random argv_1178 except for the
// @@ last byte that tells how many argv_837 have been padded 
// @@ (not counting the last argv_795 though).    
// @@
// @@ CONTRACT		:	
// @@ - '_input_size' parameter must be greater than zero.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_882::argv_1204 (uint8_t * _key, uint8_t * _input, uint32_t _input_size, uint8_t * _output, uint32_t& _output_size) {
	return (argv_3838 (_key, _input, _input_size, _output, false, _output_size));
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1424
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
