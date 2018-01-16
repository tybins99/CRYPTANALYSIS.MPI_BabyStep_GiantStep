// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_393.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1424 contains all argv_1178 structures and
// @@ functions necessary to use the gmp library
// @@ as a dynamic library.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB_CRYPTO/argv_393.hpp"




// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_893	
// @@
// @@ FUNCTION		:	argv_893	
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
// @@ Normal constructor of the 'argv_893' argv_3656.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_893::argv_893 () {
	argv_1902 = NULL;
	reset ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_893	
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
// @@ This function permits reset the argv_3656
// @@ to it's initial argv_4622.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_893::reset () {
	argv_4935 ();
	argv_1594					= NULL;
	argv_1583				= NULL;
	argv_1607				= NULL;
	argv_1593				= NULL;
	argv_1585					= NULL;
	argv_1603				= NULL;

	argv_1587			= NULL;
	argv_1604					= NULL;
	argv_1600				= NULL;
	argv_1586				= NULL;	
	argv_1581				= NULL;	
	argv_1580					= NULL;
	argv_1591					= NULL;	
	argv_1582			= NULL;	
	argv_1596				= NULL;	
	argv_1551		= NULL;

	argv_1552			= NULL;
	argv_1614				= NULL;
	argv_1598					= NULL;
	argv_1599					= NULL;
	argv_1611				= NULL;
	argv_1610					= NULL;
	fp_mpz_set					= NULL;
	argv_1590				= NULL;
	fp_mpz_init_set				= NULL;
	argv_1588				= NULL;

	argv_1613				= NULL;
	argv_1589			= NULL;
	argv_1605		= NULL;
	argv_1606				= NULL;
	argv_1595			= NULL;
	argv_1597				= NULL;
	argv_1602			= NULL;
	argv_1612			= NULL;
	argv_1608				= NULL;
	argv_1584				= NULL;
	argv_1592				= NULL;
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_893	
// @@
// @@ FUNCTION		:	argv_2284	
// @@
// @@ INPUT			:
// @@ _filename: const char *: argv_3557 of the gmp DLL to argv_2274.	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ int32_t : argv_1857 if success,
// @@        another argv_4979 otherwise.	
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to open the GMP DLL and
// @@ to argv_2274 all the necessary GMP functions.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
int32_t argv_893::argv_2284 (const char * _filename) {
	int32_t argv_2072 = argv_1857;
#if defined (__WIN32_OS__) 
	argv_1902 = LoadLibrary (_filename);
#endif // #if defined (__WIN32_OS__) 

#if defined (__LINUX_OS__)
	argv_1902 = dlopen (_filename, RTLD_NOW);
#endif // #if defined (__LINUX_OS__)

	if (argv_1902 == NULL) {
		argv_2072 = argv_1842;
	}
	else {
		argv_2072 = argv_2286 ();	

		if (argv_2072 == argv_1857) {
			argv_2072 = init_random_generator ();
		}
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_893	
// @@
// @@ FUNCTION		:	argv_2289	
// @@
// @@ INPUT			:
// @@ _function_name: const char *: argv_3557 of the function to lookup from
// @@   the GMP DLL.	
// @@
// @@ OUTPUT		:
// @@ _extracted_address: void *&: the argv_665 of the function
// @@  	whose argv_665 was retrieved from the GMP DLL.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:
// @@ int32_t : argv_1857 if success,
// @@        another argv_4979 otherwise.	
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to lookup the argv_665 of the function
// @@ from the GMP DLL whose argv_3557 is given as the '_function_name' 
// @@ parameter, if found, the argv_4406 is saved into the 
// @@ '_extracted_address' parameter.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
int32_t argv_893::argv_2289 (const char * _function_name, void *& _extracted_address) {
	int32_t argv_2072 = argv_1857;

#if defined (__WIN32_OS__)
	_extracted_address = (LPVOID) GetProcAddress (argv_1902, _function_name);
#endif // #if defined (__WIN32_OS__)
#if defined (__LINUX_OS__)
	_extracted_address = (LPVOID) dlsym (argv_1902, _function_name);
#endif // #if defined (__LINUX_OS__)

	if (_extracted_address == NULL) {
		argv_2072 = argv_1841;
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_893	
// @@
// @@ FUNCTION		:	argv_1768	
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ string : the last GMP error as a string.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to retrieve the last GMP error
// @@ as a string.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
string argv_893::argv_1768 () {
	return (argv_2215);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_893	
// @@
// @@ FUNCTION		:	argv_2287	
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
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
// @@ This function permits to lookup the argv_665 of the first
// @@ half of the GMP functions that we need.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
int32_t argv_893::argv_2287 () {
	int32_t argv_2072 = argv_1857;

	void * extracted_address = NULL;
	argv_2072 = argv_2289 ("__gmpz_init", extracted_address);
	if (argv_2072 == argv_1857) {
		argv_1594 = (argv_1685) extracted_address;
	}
	if (argv_2072 == argv_1857) {
		argv_2072 = argv_2289 ("__gmpz_clear", extracted_address);
		if (argv_2072 == argv_1857) {
			argv_1583 = (argv_1674) extracted_address;
		}
	}
	if (argv_2072 == argv_1857) {
		argv_2072 = argv_2289 ("__gmpz_set_ui", extracted_address);
		if (argv_2072 == argv_1857) {
			argv_1607 = (argv_1698) extracted_address;
		}
	}
	if (argv_2072 == argv_1857) {
		argv_2072 = argv_2289 ("__gmpz_get_str", extracted_address);
		if (argv_2072 == argv_1857) {
			argv_1593 = (argv_1684) extracted_address;
		}
	}
	if (argv_2072 == argv_1857) {
		argv_2072 = argv_2289 ("__gmpz_cmp", extracted_address);
		if (argv_2072 == argv_1857) {
			argv_1585 = (argv_1676) extracted_address;
		}
	}
	if (argv_2072 == argv_1857) {
		argv_2072 = argv_2289 ("__gmpz_out_str", extracted_address);
		if (argv_2072 == argv_1857) {
			argv_1603 = (argv_1694) extracted_address;
		}
	}
	if (argv_2072 == argv_1857) {
		argv_2072 = argv_2289 ("__gmpz_congruent_p", extracted_address);
		if (argv_2072 == argv_1857) {
			argv_1587 = (argv_1678) extracted_address;
		}
	}
	if (argv_2072 == argv_1857) {
		argv_2072 = argv_2289 ("__gmpz_powm", extracted_address);
		if (argv_2072 == argv_1857) {
			argv_1604 = (argv_1695) extracted_address;
		}
	}
	if (argv_2072 == argv_1857) {
		argv_2072 = argv_2289 ("__gmpz_mul_2exp", extracted_address);
		if (argv_2072 == argv_1857) {
			argv_1600 = (argv_1691) extracted_address;
		}
	}
	if (argv_2072 == argv_1857) {
		argv_2072 = argv_2289 ("__gmpz_cmp_ui", extracted_address);
		if (argv_2072 == argv_1857) {
			argv_1586 = (argv_1677) extracted_address;
		}
	}
	if (argv_2072 == argv_1857) {
		argv_2072 = argv_2289 ("__gmpz_add_ui", extracted_address);
		if (argv_2072 == argv_1857) {
			 argv_1581 = (argv_1672) extracted_address;
		}
	}
	if (argv_2072 == argv_1857) {
		argv_2072 = argv_2289 ("__gmpz_add", extracted_address);
		if (argv_2072 == argv_1857) {
			 argv_1580 = (argv_1671) extracted_address;
		}
	}
	if (argv_2072 == argv_1857) {
		argv_2072 = argv_2289 ("__gmpz_set_str", extracted_address);
		if (argv_2072 == argv_1857) {
			 argv_1606 = (argv_1697) extracted_address;
		}
	}
	if (argv_2072 == argv_1857) {
		argv_2072 = argv_2289 ("__gmpz_init_set_str", extracted_address);
		if (argv_2072 == argv_1857) {
			 argv_1595 = (argv_1686) extracted_address;
		}
	}
	if (argv_2072 == argv_1857) {
		argv_2072 = argv_2289 ("__gmpz_invert", extracted_address);
		if (argv_2072 == argv_1857) {
			 argv_1597 = (argv_1688) extracted_address;
		}
	}
	if (argv_2072 == argv_1857) {
		argv_2072 = argv_2289 ("__gmpz_nextprime", extracted_address);
		if (argv_2072 == argv_1857) {
			 argv_1602 = (argv_1693) extracted_address;
		}
	}
	if (argv_2072 == argv_1857) {
		argv_2072 = argv_2289 ("__gmpz_ui_pow_ui", extracted_address);
		if (argv_2072 == argv_1857) {
			 argv_1612 = (argv_1703) extracted_address;
		}
	}
	if (argv_2072 == argv_1857) {
		argv_2072 = argv_2289 ("__gmpz_setbit", extracted_address);
		if (argv_2072 == argv_1857) {
			 argv_1608 = (argv_1699) extracted_address;
		}
	}
	if (argv_2072 == argv_1857) {
		argv_2072 = argv_2289 ("__gmpz_clrbit", extracted_address);
		if (argv_2072 == argv_1857) {
			 argv_1584 = (argv_1675) extracted_address;
		}
	}
	if (argv_2072 == argv_1857) {
		argv_2072 = argv_2289 ("__gmpz_gcd_ui", extracted_address);
		if (argv_2072 == argv_1857) {
			 argv_1592 = (argv_1683) extracted_address;
		}
	}
	if (argv_2072 == argv_1857) {
		argv_2072 = argv_2289 ("__gmpz_sqrt", extracted_address);
		if (argv_2072 == argv_1857) {
			 argv_1609 = (argv_1700) extracted_address;
		}
	}
	if (argv_2072 == argv_1857) {
		argv_2072 = argv_2289 ("__gmpz_neg", extracted_address);
		if (argv_2072 == argv_1857) {
			 argv_1601 = (argv_1692) extracted_address;
		}
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_893	
// @@
// @@ FUNCTION		:	argv_2288	
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
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
// @@ This function permits to lookup the argv_665 of the second
// @@ half of the GMP functions that we need.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
int32_t argv_893::argv_2288 () {
	int32_t argv_2072 = argv_1857;

	void * extracted_address = NULL;
	if (argv_2072 == argv_1857) {
		argv_2072 = argv_2289 ("__gmpz_gcd", extracted_address);
		if (argv_2072 == argv_1857) {
			 argv_1591 = (argv_1682) extracted_address;
		}
	}
	if (argv_2072 == argv_1857) {
		argv_2072 = argv_2289 ("__gmpz_cdiv_q_2exp", extracted_address);
		if (argv_2072 == argv_1857) {
			 argv_1582 = (argv_1673) extracted_address;
		}
	}
	if (argv_2072 == argv_1857) {
		argv_2072 = argv_2289 ("__gmpz_inp_str", extracted_address);
		if (argv_2072 == argv_1857) {
			 argv_1596 = (argv_1687) extracted_address;
		}
	}
	if (argv_2072 == argv_1857) {
		argv_2072 = argv_2289 ("__gmp_randinit_default", extracted_address);
		if (argv_2072 == argv_1857) {
			 argv_1551 = (argv_1663) extracted_address;
		}
	}
	if (argv_2072 == argv_1857) {
		argv_2072 = argv_2289 ("__gmp_randseed_ui", extracted_address);
		if (argv_2072 == argv_1857) {
			 argv_1552 = (argv_1664) extracted_address;
		}
	}
	if (argv_2072 == argv_1857) {
		argv_2072 = argv_2289 ("__gmpz_urandomm", extracted_address);
		if (argv_2072 == argv_1857) {
			 argv_1614 = (argv_1705) extracted_address;
		}
	}
	if (argv_2072 == argv_1857) {
		argv_2072 = argv_2289 ("__gmpz_mod", extracted_address);
		if (argv_2072 == argv_1857) {
			 argv_1598 = (argv_1689) extracted_address;
		}
	}
	if (argv_2072 == argv_1857) {
		argv_2072 = argv_2289 ("__gmpz_mul", extracted_address);
		if (argv_2072 == argv_1857) {
			 argv_1599 = (argv_1690) extracted_address;
		}
	}
	if (argv_2072 == argv_1857) {
		argv_2072 = argv_2289 ("__gmpz_sub_ui", extracted_address);
		if (argv_2072 == argv_1857) {
			 argv_1611 = (argv_1702) extracted_address;
		}
	}
	if (argv_2072 == argv_1857) {
		argv_2072 = argv_2289 ("__gmpz_sub", extracted_address);
		if (argv_2072 == argv_1857) {
			 argv_1610 = (argv_1701) extracted_address;
		}
	}
	if (argv_2072 == argv_1857) {
		argv_2072 = argv_2289 ("__gmpz_set", extracted_address);
		if (argv_2072 == argv_1857) {
			 fp_mpz_set = (fptr_mpz_set) extracted_address;
		}
	}
	if (argv_2072 == argv_1857) {
		argv_2072 = argv_2289 ("__gmpz_fdiv_ui", extracted_address);
		if (argv_2072 == argv_1857) {
			 argv_1590 = (argv_1681) extracted_address;
		}
	}
	if (argv_2072 == argv_1857) {
		argv_2072 = argv_2289 ("__gmpz_init_set", extracted_address);
		if (argv_2072 == argv_1857) {
			 fp_mpz_init_set = (fptr_mpz_init_set) extracted_address;
		}
	}
	if (argv_2072 == argv_1857) {
		argv_2072 = argv_2289 ("__gmpz_fdiv_q", extracted_address);
		if (argv_2072 == argv_1857) {
			 argv_1588 = (argv_1679) extracted_address;
		}
	}
	if (argv_2072 == argv_1857) {
		argv_2072 = argv_2289 ("__gmpz_urandomb", extracted_address);
		if (argv_2072 == argv_1857) {
			 argv_1613 = (argv_1704) extracted_address;
		}
	}
	if (argv_2072 == argv_1857) {
		argv_2072 = argv_2289 ("__gmpz_fdiv_q_2exp", extracted_address);
		if (argv_2072 == argv_1857) {
			 argv_1589 = (argv_1680) extracted_address;
		}
	}
	if (argv_2072 == argv_1857) {
		argv_2072 = argv_2289 ("__gmpz_probab_prime_p", extracted_address);
		if (argv_2072 == argv_1857) {
			 argv_1605 = (argv_1696) extracted_address;
		}
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_893	
// @@
// @@ FUNCTION		:	argv_2286	
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
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
// @@ This function permits to lookup the argv_665 of the first half
// @@ and of the second half of the GMP functions that we need so that
// @@ the argv_893 can be ready to work.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
int32_t argv_893::argv_2286 () {
	int32_t argv_2072 = argv_1857;
	argv_2072 = argv_2287 ();
	if (argv_2072 == argv_1857) {
		argv_2072 = argv_2288 ();
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_893	
// @@
// @@ FUNCTION		:	argv_4935	
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	none
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
// @@ This function permits to unload the GMP DLL after it was
// @@ argv_2297.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
int32_t argv_893::argv_4935 () {
	int32_t argv_2072 = argv_1857;
	if (argv_1902 != NULL) {
#if defined (__WIN32_OS__)
		if (FreeLibrary (argv_1902) == 0) {
			argv_2072 = argv_1832;
		}
#endif // #if defined (__WIN32_OS__)

#if defined (__LINUX_OS__)
		if (dlclose (argv_1902) != 0) {
			argv_2072 = argv_1832;
		}
#endif // #if defined (__LINUX_OS__)
		argv_1902 = NULL;
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_893	
// @@
// @@ FUNCTION		:	init_random_generator	
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
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
// @@ This function permits to argv_4243 the pseudo-random argv_1749
// @@ before it's first use.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
int32_t argv_893::init_random_generator () {
	int32_t argv_2072 = argv_1857;
	argv_1551 (argv_4330);

#if defined (__WIN32_OS__)
	SYSTEMTIME	argv_4842;
	GetLocalTime (&argv_4842);
	argv_1552 (argv_4330, argv_4842.wMilliseconds);
#endif // #if defined (__WIN32_OS__)
#if defined (__LINUX_OS__)
	struct timeval argv_4758;
	gettimeofday (&argv_4758, NULL);
	argv_1552 (argv_4330, argv_4758.tv_usec);
#endif // #if defined (__LINUX_OS__)
	return (argv_2072);
}


void argv_893::init_random_generator (uint32_t _seed) {
	argv_1552 (argv_4330, _seed);
}


// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_893	
// @@
// @@ FUNCTION		:	argv_1273	
// @@
// @@ INPUT			:	
// @@ _name: const char *: symbolic argv_3557 of the variable to argv_1235.
// @@
// @@ _var: argv_3530 : the argv_4979 of the variable to argv_1235.
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
// @@ This function permits to argv_1235 the content of the variable
// @@ whose argv_4979 is contained into the '_var' parameter, the symbolic 
// @@ variable's argv_3557 being contained into the '_name' parameter.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_893::argv_1273 (const char * _name, argv_3530 _var) {
	char * as_string = NULL;
	as_string = argv_1593 (NULL, 10, _var);	
	cerr << _name << " : " << as_string << endl;
	free (as_string);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_893	
// @@
// @@ FUNCTION		:	argv_2459	
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	
// @@ _a: argv_3530 : 
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
// false argv_4533 n est probablement premier
// true argv_4533 il est composite
bool argv_893::argv_2459 (argv_3530 _a, argv_3530 _n) {
	bool bret				= false;
	unsigned long int unite = 1;
	argv_3530 m;
	argv_3530 n_minus_one;
	argv_3530 two;
	argv_3530 modulo_result;
	argv_3530 y;
	argv_3530 b;

	argv_1594 (n_minus_one);
	argv_1594 (modulo_result);
	argv_1594 (two);
	argv_1594 (b);
	argv_1594 (y);

	argv_1611 (n_minus_one, _n, 1);	// argv_4243 n-1
	fp_mpz_init_set (m, n_minus_one);		// m = n-1;
	argv_1607 (y, 1);					// int y = 1;
	argv_1607 (two, 2);

	while (argv_1586 (m, 0) != 0) {
		argv_1598 (modulo_result, m, two);
		if (argv_1586 (modulo_result, 1)==0) {	// if (m%2 == 1) { 
			argv_1599 (y, y, _a);
			argv_1598 (y, y, _n);		// y = (y*a) % n;
			argv_1611 (m, m, 1);	// m = m-1;
		}
		else {
			fp_mpz_set (b, _a);		// int b = a;
			argv_1599 (_a, _a, _a);		
			argv_1598 (_a, _a, _n);	// a= (a*a) % n

			if ((argv_1586 (_a,unite) == 0) && (argv_1586 (b,unite) != 0) && (argv_1585(b,n_minus_one)!=0)) {
				// b est une racine carre non triviale de 1
				bret = true;        // n est compose'
				break;
			}
			argv_1588 (m, m, two);
		}
	}

	if (bret == false) {
		if (argv_1586 (y, unite) != 0) {
			bret = true;            // n est compose'
		}
		else {
			bret = false;
		}
	}

	argv_1583 (n_minus_one);
	argv_1583 (m);
	argv_1583 (modulo_result);
	argv_1583 (two);
	argv_1583 (b);
	argv_1583 (y);

	return (bret);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_893	
// @@
// @@ FUNCTION		:	argv_2458	
// @@
// @@ INPUT			:
// @@ _nb_attempt: uint32_t: the number of tests to be performed before
// @@   considering	that the test is a success.
// @@
// @@ OUTPUT		:	
// @@ n: argv_3530: the number whose primality is to be tested.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ bool: true if n is probably prime,
// @@       false otherwise (if n is composite).
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to perform the Miller-Rabin primality 
// @@ test to the 'n' parameter.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_893::argv_2458 (argv_3530 n, uint32_t _nb_attempt) {
	bool bret = false;
	argv_3530 a;
	argv_1594 (a);

	for (uint32_t i=0; i<_nb_attempt; i++) {
		do {
			argv_1614 (a, argv_4330, n);
		}
		while (argv_1586 (a,0) == 0);

		if (argv_2459 (a,n)) { 
			bret = true;
			break;
		}
    }
	argv_1583 (a);
    return bret;
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_893	
// @@
// @@ FUNCTION		:	argv_1739	
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	
// @@ _min_inclusive: the minimum argv_4979 for the generated number.
// @@ 
// @@ _max_inclusive: the maximum argv_4979 for the generated number.	
// @@
// @@ _result: argv_3530: the generated pseudo-radom number.
// @@
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to generate a pseudo-random number
// @@ within the range [_min_inclusive..._max_inclusive], the
// @@ argv_4406 being stored into the '_result' parameter.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_893::argv_1739  (argv_3530 _min_inclusive, argv_3530 _max_inclusive, argv_3530 _result) {
	argv_3530 delta;
	argv_1594 (delta);
	// compute the allowed maximum delta = max - min
	argv_1610 (delta, _max_inclusive, _min_inclusive);
	// correct the delta because the rand function generates a number in [0..n-1]
	argv_1581 (delta, delta, 1);

	// generate a random delta using the allowed maximum delta
	argv_1614 (_result, argv_4330, delta);
	
	// argv_646 the minimum boundary to the random delta generated
	argv_1580 (_result, _result, _min_inclusive);
	argv_1583 (delta);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_893	
// @@
// @@ FUNCTION		:	argv_1740	
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	
// @@ _nb_bit : uint32_t: the size in bit of the prime number to generate.
// @@	
// @@ _result: argv_3530 : the argv_4406 of the argv_1747.
// @@
// @@ RETURN VALUE	:	none	
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to generate randomly a prime number 
// @@ whose size in bit is given by the '_nb_bit' parameter, the
// @@ argv_4406 being saved into the '_result' parameter.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_893::argv_1740 (uint32_t _nb_bit, argv_3530 _result) {
	argv_3530 bit_value;
	argv_3530 two;
	argv_1594 (bit_value);
	argv_1594 (two);

	argv_1607 (two, 2);

	// generate a random number whose size in bit is '_nb_bit'
	for (uint32_t i=0 ; i<_nb_bit ; i++) {
		if (i==(_nb_bit-1)) { // in argv_3690 to have the same magnitude for all generated numbers
			argv_1608 (_result, i);
		}
		else {
			argv_1614 (bit_value, argv_4330, two);
			if (argv_1586 (bit_value, 0) == 0) {
				argv_1584 (_result, i);
			}
			else if (argv_1586 (bit_value, 1) == 0) {
				argv_1608 (_result, i);
			}
		}
	}
	
	// find the argv_3623 prime for the generated number
	argv_1602 (_result , _result);

	argv_1583 (bit_value);
	argv_1583 (two);	
}


// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_893	
// @@
// @@ FUNCTION		:	argv_2095	
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	
// @@ _challenger: argv_3530: the number whose primality is to be tested.
// @@	
// @@ RETURN VALUE	:	
// @@ bool : true if the number contained into the '_challenger' 
// @@        parameter is probably prime,
// @@        false otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to check whether the number contained 
// @@ into the '_challenger' parameter is probably prime or not.
// @@ Notice that the number of attempts is fixed to 20, in other
// @@ words the number is considered probably prime if the primality
// @@ test succeeds at least 20 times.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_893::argv_2095 (argv_3530 _challenger) {
	bool bret = false;
	uint32_t nb_attempt = 20;
	int retcode = argv_1605 (_challenger, nb_attempt);
	if ((retcode ==2) || (retcode ==1)) {
		bret = true;
	}
	return (bret);
}
/*
bool argv_893::argv_2095 (argv_3530 _challenger) {
	bool bret = false;

	uint32_t nb_attempt = 20;
	if (argv_2458 (_challenger, nb_attempt) == false) {
		bret = true;
	}
	return (bret);
}*/



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_893	
// @@
// @@ FUNCTION		:	argv_1737	
// @@
// @@ INPUT			:	
// @@ _max: uint32_t: the number of primes to generate.
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
// @@ This function permits to generate the first n primes
// @@ n being given by the '_max' parameter.
// @@ Notice that this function is mainly used to debug the argv_3656.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_893::argv_1737 (uint32_t _max) {
	string s1; 
	argv_3530 i;
	argv_1594 (i);
	argv_1607 (i, 4);

	int nb_displayed = 0;
	while (argv_1586 (i, _max) != 0) {
		if (argv_2095 (i) == true) {
			s1 = argv_4985 (i);	
			cerr << s1 << " ";
			nb_displayed++;
			if (nb_displayed == 32) {
				cerr << endl;
				nb_displayed = 0;
			}
		}
		argv_1581 (i, i, 1);
	}
	argv_1583 (i);
	cerr << endl;
}
/*
void argv_893::argv_1742 (uint32_t _key_size_in_bit, argv_3530 _p, argv_3530 _q) {
	bool strong_prime	= false;
	uint32_t nb_lap			= 0;

	cerr << "argv_2188 size : " << _key_size_in_bit << " argv_794" << endl;
	// find first prime
	do {
		argv_1613 (_p, argv_4330, _key_size_in_bit);
		nb_lap++;
	}
	while (argv_2095 (_p) == false);
	cerr << "found first prime after " << nb_lap << " laps" << endl;

	// find argv_3623 prime if necessary
	while (strong_prime == false) {
		if (argv_2097 (_p, _q) == true) {
			strong_prime = true;
		}
		else {
			argv_1602 (_p, _p);
		}
		nb_lap++;
	}

	cerr << "found strong prime after " << nb_lap << " laps" << endl;
}*/



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_893	
// @@
// @@ FUNCTION		:	argv_1742	
// @@
// @@ INPUT			:
// @@ _key_size_in_bit: the size of the argv_2188.	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	
// @@ _p: argv_3530: the first parameter of the equation.
// @@
// @@ _q: argv_3530: the second parameter of the equation.	
// @@
// @@ RETURN VALUE	:	none	
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to generate a string prime number whose
// @@ size in bit is given by the '_key_size_in_bit' parameter.
// @@ The argv_4406 is stored into '_p', however, we 
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_893::argv_1742 (uint32_t _key_size_in_bit, argv_3530 _p, argv_3530 _q) {
	bool strong_prime = false;

	uint32_t nb_lap			= 0;

	//cerr << "argv_2188 size : " << _key_size_in_bit << " argv_794" << endl;
	// find first prime
	do {
		argv_1613 (_p, argv_4330, _key_size_in_bit);
		nb_lap++;
	}
	while (argv_2095 (_p) == false);
	//cerr << "found first prime after " << nb_lap << " laps" << endl;

	nb_lap = 0;
	while (strong_prime == false) {
		if ((argv_2095 (_p) == true) && (argv_2097 (_p, _q) == true)) {
			strong_prime = true;
		}
		else {
			argv_1581 (_p, _p, 2);
		}
		nb_lap++;
	}

	///cerr << "found second prime after " << nb_lap << " laps" << endl;
}

/*
void argv_893::argv_1742 (uint32_t _key_size_in_bit, argv_3530 _p, argv_3530 _q) {
	bool strong_prime = false;

	uint32_t nb_lap = 0;
	while (strong_prime == false) {
		argv_1613 (_p, argv_4330, _key_size_in_bit);

		if (argv_2095 (_p) == true) {
			if (argv_2097 (_p, _q) == true) {
				strong_prime = true;
			}
		}
		nb_lap++;
	}

	cerr << "found after " << nb_lap << " laps" << endl;
}*/



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_893	
// @@
// @@ FUNCTION		:	argv_1480	
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	
// @@ _q: argv_3530: first parameter of the equation.
// @@
// @@ _p: argv_3530: second parameter of the equation.
// @@	
// @@ RETURN VALUE	:	
// @@ bool: true if a primitive argv_4419 was succesfully found,
// @@       false otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to find the primitive argv_4419 of the 
// @@ _q parameter, 
// @@ it should be a argv_1749 for q, which means it needs to 
// @@ be relatively prime to q-1.   
// @@ Usually a small prime like 2, 3 or 5 will work. 
// @@ example: 2 is a primitive argv_4419 argv_2556 5 because :
// @@ (2exp 0) mod 5 = 1
// @@ (2exp 1) mod 5 = 2
// @@ (2exp 2) mod 5 = 4
// @@ (2exp 3) mod 5 = 3
// @@ (2exp 4) mod 5 = 1
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// 1: exp
// 2: argv_2556
// 3: argv_4406
bool argv_893::argv_1480 (argv_3530 _q, argv_3530 _p, argv_3530 _generator) {
	bool bret = false; // not found yet
	argv_3530 argv_4846;
	argv_3530 two;
	argv_1594 (argv_4846);
	argv_1594 (two);
	argv_1607 (two, 2);

	uint32_t max = 32;
	for (uint32_t i=0 ; i<max ; i++) {
		argv_1607 (_generator, (2*i)+3); // 3,5,7...(all odd numbers from 3)
		argv_1604   (argv_4846, _generator, _q, _p);	// argv_4846 = g^q mod p

		if (argv_1586 (argv_4846, 1) != 0) {
			argv_1604 (argv_4846, _generator, two, _p);	// argv_4846 = g^2 mod p 

			if (argv_1586 (argv_4846, 1) != 0) { // found a argv_1749
				bret = true;
				break;
			}
		}
	}

	argv_1583 (argv_4846);
	argv_1583 (two);
	return (bret);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_893	
// @@
// @@ FUNCTION		:	argv_2097	
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	
// @@ _p: argv_3530: the number to be checked.
// @@
// @@ _q: argv_3530: the second part of the equation.
// @@	
// @@ RETURN VALUE	:	
// @@ bool: true if '_p' is a strong prime, 
// @@       false otherwise.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to check whether a given number is
// @@ a strong prime or not.
// @@ For a "strong" prime p, p is prime, and (p-1)/2 is also prime.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_893::argv_2097 (argv_3530 _p, argv_3530 _q) {
	bool bret = false;

	// 1. p itself must be a prime number !
	fp_mpz_set (_q, _p);
	argv_1611 (_q, _p, 1);
	argv_1589 (_q, _q, 1);	// q = (p-1)/2
/*
	{
		string p_str = argv_4985 (_p);
		string q_str = argv_4985 (_q);
		cerr << "p=" << p_str << " => q=" << q_str << endl;
	}
*/
	if (argv_2095 (_q) == true) {
		bret = true;
	}
	return (bret);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_893	
// @@
// @@ FUNCTION		:	argv_4985	
// @@
// @@ INPUT			:
// @@ _display_in_hexa: bool: true if the variable's argv_4979 is to be
// @@    displayed in hexa, false otherwise.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	
// @@ _var : argv_3530: the variable whose content is to be converted
// @@   to a string. 
// @@	
// @@ RETURN VALUE	:	
// @@ string: the argv_4979 of the variable '_var' converted to a string.
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to convert the variable _var's argv_4979 
// @@ to a string and return the argv_4406.
// @@ We can also choose to argv_1235 in hexa if necessary.
// @@
// @@ WARNING:
// @@ because the function 'argv_3452' generates a memory leak
// @@ if we pass a NULL argv_4979 as the first parameter, we must never
// @@ use this function directly, instead we use this wrapper.
// @@ 
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
string argv_893::argv_4985 (argv_3530 _var, bool _display_in_hexa) {
	char argv_4846[argv_2390];	
	int base = 10;
	if (_display_in_hexa == true) {
		base = 16;
	}
	argv_1593 (argv_4846, base, _var);
	return (argv_4846);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1424
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
