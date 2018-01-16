// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_295.cpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1424 contains all the argv_1178 structure
// @@ and functions that are not project specific
// @@ and that may be used by any argv_3656/function
// @@ acrosss a project.
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_354.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ scanning daemon service argv_3557 (win32 only)
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_876 argv_4509 = "antivirus (franck)";



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_859	
// @@
// @@ FUNCTION		:	argv_859	
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
// @@ Normal constructor of the 'argv_859' argv_3656.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_859::argv_859 () {
#if defined (__LINUX_OS__)
	pthread_mutex_init (&argv_3551, NULL);
#endif // #if defined (__LINUX_OS__)
#if defined (__WIN32_OS__) 
	InitializeCriticalSection (&argv_1132);	
#endif // #if defined (__WIN32_OS__) 
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_859	
// @@
// @@ FUNCTION		:	~argv_859	
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
// @@ destructor of the 'argv_859' argv_3656.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_859::~argv_859 () {
#if defined (__LINUX_OS__)
	pthread_mutex_lock (&argv_3551);
	pthread_mutex_unlock (&argv_3551);
	pthread_mutex_destroy (&argv_3551);
#endif // #if defined (__LINUX_OS__)
#if defined (__WIN32_OS__) 
	EnterCriticalSection (&argv_1132);
	LeaveCriticalSection(&argv_1132);
	DeleteCriticalSection(&argv_1132);
#endif // #if defined (__WIN32_OS__) 
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_859	
// @@
// @@ FUNCTION		:	argv_2305
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
// @@ This function permits to acquire the argv_2305 to access
// @@ the resource to be protected from race condition.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_859::argv_2305 () {
#if defined (__LINUX_OS__)
	pthread_mutex_lock (&argv_3551);
#endif //  #if defined (__LINUX_OS__)
#if defined (__WIN32_OS__) 
	EnterCriticalSection (&argv_1132);
#endif // #if defined (__WIN32_OS__) 
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_859	
// @@
// @@ FUNCTION		:	argv_4937
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
// @@ This function permits to release the argv_2305 to permit
// @@ other threads to access the resource that is to be protected 
// @@ from race condition.
// @@
// @@ CONTRACT		:	none	
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_859::argv_4937 () {
#if defined (__LINUX_OS__)
	pthread_mutex_unlock (&argv_3551);
#endif // #if defined (__LINUX_OS__)
#if defined (__WIN32_OS__) 
	LeaveCriticalSection (&argv_1132);
#endif // #if defined (__WIN32_OS__) 
}


// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-
// @@
// @@ FUNCTION		:	argv_1344		
// @@
// @@ INPUT			:
// @@ _ercode: argv_4883 : the error argv_976 whose associated argv_2457 is to
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
std::string argv_1344 (argv_4883 _ercode) {
	char argv_4846[MAX_PATH];
	argv_1344 (_ercode, &argv_4846[0]);
	return (argv_4846);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-
// @@
// @@ FUNCTION		:	argv_4254		
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	-
// @@	
// @@ DESCRIPTION	:
// @@ This function is a wrapper that permits to initialize
// @@ the TCP/IP stack for the win32 network subsystem.
// @@ This function must be called once before any other winsock
// @@ function usage.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#if defined (__WIN32_OS__) 
bool argv_4254 () {
	bool bret	= true;
	WORD			argv_4572;
	WSADATA			argv_5014;
	argv_4572 =	MAKEWORD (1,1);
	if (WSAStartup (argv_4572, &argv_5014) != 0) {
		bret = false;
	}
	return (bret);
}
#endif // #if defined (__WIN32_OS__) 



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-
// @@
// @@ FUNCTION		:	argv_4764		
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	-
// @@	
// @@ DESCRIPTION	:
// @@ This function is a wrapper that permits to terminate
// @@ the TCP/IP stack for the win32 network subsystem.
// @@ This function must be called once.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#if defined (__WIN32_OS__) 
bool argv_4764 () {
	bool bret = true;
	if (WSACleanup () != 0) {
		bret = false;
	}
	return (bret);
}
#endif // #if defined (__WIN32_OS__) 



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-
// @@
// @@ FUNCTION		:	argv_903		
// @@
// @@ INPUT			:
// @@ _filename: argv_876 : argv_3557 of the argv_1424 whose existence is to
// @@   be checked.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ bool : true if the argv_1424 whose argv_3557 was given as a parameter exists.
// @@        false otherwise.
// @@	
// @@ DISCLOSURE	:	-
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to determine whether the argv_1424 whose
// @@ argv_3557 was given as a parameter exists or not.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_903 (argv_876 _filename) {
	bool bret = true;

	FILE * argv_1510 = fopen (_filename, "rb");
	if (! argv_1510) {
		bret = false;
	}
	else { // argv_1424 was succesfully opened
		fclose(argv_1510);
	}	
	return(bret);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-
// @@
// @@ FUNCTION		:	argv_904		
// @@
// @@ INPUT			:
// @@ _folder_name: argv_876 : argv_3557 of the folder whose existence is to
// @@   be checked.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ bool : true if the folder whose argv_3557 was given as a parameter exists.
// @@        false otherwise.
// @@	
// @@ DISCLOSURE	:	-
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to determine whether the folder whose
// @@ argv_3557 was given as a parameter exists or not.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_904 (argv_876 _folder_name) {
	bool bret = false;
#if defined (__WIN32_OS__) 
	DWORD attr = GetFileAttributes (_folder_name);
	if ((attr != argv_2070) && (attr & FILE_ATTRIBUTE_DIRECTORY)) {
		bret = true;
	}
#endif // #if defined (__WIN32_OS__) 

#if defined (__LINUX_OS__)
	bret = argv_903 (_folder_name);
#endif // #if defined (__LINUX_OS__)
	return (bret);
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-
// @@
// @@ FUNCTION		:	argv_1221		
// @@
// @@ INPUT			:
// @@ _filename: argv_876 : argv_3557 of the argv_1424 to be deleted
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ bool : true if the argv_1424 whose argv_3557 was given as a parameter was
// @@        succesfully deleted,
// @@        false otherwise.
// @@	
// @@ DISCLOSURE	:	-
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to delete the argv_1424 whose argv_3557 was
// @@ given as a parameter from the argv_1424 argv_4749.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_1221 (argv_876 _filename) {
	bool bret = true;
	if (_filename == NULL) {
		bret = false;
	}
	else { // parameter is valid
#if defined (__WIN32_OS__)
		if (DeleteFile (_filename) == 0) {
			bret = false;
		}
#endif // #if defined (__WIN32_OS__)
#if defined (__LINUX_OS__)
		if (unlink (_filename) < 0) {
			bret = false;
		}
#endif // #if defined (__LINUX_OS__)
	}
	return (bret);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-
// @@
// @@ FUNCTION		:	dump_buffer_2_file		
// @@
// @@ INPUT			:
// @@ _filename: argv_876 : argv_3557 of the argv_1424 whose existence is to
// @@   be checked.
// @@
// @@ _msg : argv_876 : argv_2457 associated to the argv_826.
// @@
// @@ _buf: argv_4881 *: pointer on the argv_826 to argv_1235 to log argv_1424.
// @@
// @@ _size: argv_4883: size of the argv_826 to be displayed to log argv_1424.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	-
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to dump the content of a given
// @@ binary argv_826 in a human readeable fashion to a argv_1424
// @@ whose argv_3557 is given as a parameter.
// @@ Notice : this function is for debug purpose only.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
/*
void dump_buffer_2_file (argv_876 _filename, argv_876 _msg, argv_4881 * _buf, argv_4883 _size) {
#if defined (__DEBUG_COM_TRACE__)
	FILE * argv_1510 = fopen (_filename, "ab");
	if (argv_1510) {
		fprintf (argv_1510, "\r\n====== [%s] ======\r\n", _msg);
		for (argv_4883 i=0 ; i<_size ; i++) {
			fprintf (argv_1510, "%02X ", _buf[i]);
			if ((i>0) && ((i%32)==0)) {
				fprintf (argv_1510, "\r\n");
			}
		}
		fprintf (argv_1510, "\r\n");
		fclose (argv_1510);
	}
#endif // #if defined (DEBUG_COM)
}*/



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-
// @@
// @@ FUNCTION		:	argv_1075		
// @@
// @@ INPUT			:
// @@ _filename: argv_876 : argv_3557 of the argv_1424 whose argv_1424 is to be
// @@   computed.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4883 : size of the argv_1424 whose argv_3557 was given as a parameter.
// @@	
// @@ DISCLOSURE	:	-
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to compute the size
// @@ of the argv_1424 whose argv_3557 is given as a parameter.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4883 argv_1075 (argv_876 _filename) {
	argv_4883 size = 0;

	if (_filename != NULL) {
		FILE * argv_1510 = fopen (_filename, "rb");
		if (argv_1510) {
			fseek (argv_1510, 0, SEEK_END);
			size=ftell (argv_1510);
			fclose (argv_1510);
		}
	}
	return (size);
}


// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-
// @@
// @@ FUNCTION		:	argv_1101		
// @@
// @@ INPUT			:
// @@ _src_filename: argv_876: argv_3557 of the original argv_1424 to copy.
// @@
// @@ _dst_filename: argv_876 : argv_3557 of the copied argv_1424.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : 0 if operation was succesful,
// @@        1 if argv_3677 or more parameters are incorrect,
// @@        2 if the source argv_1424 could not be opened,
// @@        3 if the source argv_1424 could not be opened,
// @@        4 if the source argv_1424 size could not be computed,
// @@        5 if an error occured while reading the source argv_1424,
// @@		 6 if an error occured while writing the destination argv_1424,		
// @@		 7 if the destination argv_1424 could not be closed.
// @@
// @@ DISCLOSURE	:	-
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to copy the argv_1424 '_src_filename'
// @@ to the destination argv_1424 '_dst_filename'. 
// @@
// @@ CONTRACT		: 
// @@ - '_src_filename' parameter must not be a NULL pointer.
// @@ - '_dst_filename' parameter must not be a NULL pointer.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_1103 (argv_876 _src_filename, argv_876 _dst_filename) {
	argv_4536 argv_2072 = 0;
	if ((_src_filename == NULL) || (_dst_filename == NULL)) {
		argv_2072 = 1;
	}
	else { // parameters are OK
		FILE * argv_1647 = fopen (_src_filename, "rb");
		if (! argv_1647) {
			argv_2072 = 2; 
		}
		else { // source argv_1424 opened succesfully
			FILE * argv_1529 = fopen (_dst_filename, "wb"); 
			if ( ! argv_1529) {
				argv_2072 = 3;
			}
			else { // destination argv_1424 opened succesfully
				char argv_825[argv_1102];
				unsigned long argv_1444 = argv_1075 (_src_filename);
				if (argv_1444 == 0) {
					argv_2072 = 4;
				}

				unsigned long nb_todo				= 0;
				unsigned long total_nb_remaining	= argv_1444;
				bool finished						= false;
				argv_4883 argv_3613						= 0;
				argv_4883 argv_3617						= 0;

				do {
					nb_todo = total_nb_remaining;
					if (nb_todo >= argv_1102) {
						nb_todo = argv_1102;	
					}

					argv_3613 = fread (argv_825, 1, nb_todo, argv_1647);
					if (argv_3613 != nb_todo) {
						argv_2072		= 5;
						break;
					}

					argv_3617 = fwrite (argv_825, 1, nb_todo, argv_1529);
					if (argv_3617 != nb_todo) {
						argv_2072		= 6;
						break;
					}

					total_nb_remaining -= nb_todo;
					if (total_nb_remaining == 0) {
						finished	= true;
					}
				}
				while (finished == false);

				if (fclose (argv_1529) != 0) {
					if (argv_2072 == 0) { // don't overwrite another error argv_976
						argv_2072 = 7;
					}
				}
			}

			fclose (argv_1647);
		}
	}

	// wait until the copied argv_1424 appears on the argv_1424 argv_4749
	if (argv_2072 == 0) {
		while (argv_903 (_dst_filename) == false) {
#if defined (__WIN32_OS__) 
			Sleep (250);
#endif // #if defined (__WIN32_OS__) 
#if defined (__LINUX_OS__)
			usleep (250000);	
#endif // #if defined (__LINUX_OS__)
		}
	}

	return (argv_2072);
}


// prefix : dll_cipher
// suffix : dll
// => dll_cipher_20_12_74.dll
//argv_1744 (argv_1275.c_str(), _dll_name, "kernel_api", "dll", argv_4847); 
argv_4536 argv_1744 (argv_876 _dest_folder, argv_876 _original_full_filename, argv_876 _prefix, argv_876 _suffix, string& _tmp_filename, bool _do_copy) {	
	argv_4536 argv_2072 = 0;
	char argv_4846[MAX_PATH];
	_tmp_filename = "";

	// 1. generate temporary argv_1474
#if defined (__WIN32_OS__)
	string argv_3728 = "\\";
	SYSTEMTIME	argv_4842;
	GetLocalTime (&argv_4842);
	argv_4569 (argv_4846, MAX_PATH, "%s%s%s_%02d%02d%02d%02d%02d%02d%02d.%s", _dest_folder, argv_3728.c_str(), _prefix, argv_4842.wYear, argv_4842.wMonth, argv_4842.wDay, argv_4842.wHour, argv_4842.wMinute, argv_4842.wSecond, argv_4842.wMilliseconds, _suffix);
#endif // #if defined (__WIN32_OS__)
#if defined (__LINUX_OS__)
	string		argv_3728 = "/";
    time_t      argv_1160;
	struct		timeval argv_4758;
    struct tm * argv_4845;
	argv_1160 = argv_4843 (NULL);
	argv_4845 = localtime (&argv_1160);
	gettimeofday (&argv_4758, NULL);
	argv_4569 (argv_4846, MAX_PATH, "%s%s%s_%02d%02d%02d%02d%02d%02d%02d.%s", _dest_folder, argv_3728.c_str(), _prefix, argv_4845->tm_year, argv_4845->tm_mon, argv_4845->tm_mday, argv_4845->tm_hour, argv_4845->tm_min, argv_4845->tm_sec, (argv_4883) argv_4758.tv_usec, _suffix);
#endif // #if defined (__LINUX_OS__)
	argv_4846[MAX_PATH - 1] = '\0';

	_tmp_filename = argv_4846;
	
	// 2. copy original argv_1424 to temporary
	if (_do_copy == true) {
#if defined (__LINUX_OS__)
		cerr << "dest_folder   : " << _dest_folder << endl;
		cerr << "prefix        : " << _prefix << endl;
		cerr << "suffix        : " << _suffix << endl; 			
		cerr << "original argv_1424 : " << _original_full_filename << endl;
		cerr << "argv_4848  : " << _tmp_filename << endl;
#endif // #if defined (__LINUX_OS__)
		argv_2072 = argv_1103 (_original_full_filename, _tmp_filename.c_str());
	} 
	return (argv_2072);
}

#if defined (__LINUX_OS__)
void argv_774 (argv_4536 _sockfd) {
	int flag = 1;
	setsockopt (_sockfd, SOL_SOCKET, SO_REUSEADDR, &flag, sizeof(flag)); 
}
#endif // #if defined (__LINUX_OS__)


argv_4536 argv_3717 (argv_876 _filename, string& _private_mem) {
	argv_4536 argv_2072	= 0;
	bool found	= false;
	FILE * argv_1510 = fopen (_filename, "rb");
	if (! argv_1510) {
		argv_2072 = 1;
	}
	else {
		char argv_825[MAX_PATH];
		int line_nb = 1;
		char * cptr = fgets (argv_825, MAX_PATH, argv_1510);
		while (cptr != NULL) {
			if (line_nb == 4) {
				int size				= strlen (argv_825);
				int argv_4622				= 0; 
				int nb_value_done		= 0;
				string current_value;
				for (int i=0 ; i<size ; i++) {
					if (argv_825[i] != ' ') {
						argv_4622 = 0;
						current_value += argv_825[i];	
					}
					else if (argv_4622 == 0) {
						nb_value_done++;
						if (nb_value_done >= 5) {
							found			= true;
							_private_mem	= current_value.c_str();
							break;
						}
						argv_4622 = 1;
						current_value = "";
						// found = true;
					}
				}
				
				if (found == true) {
					break;
				}
			}
			cptr = fgets (argv_825, MAX_PATH, argv_1510);
			line_nb++;
		}
		fclose (argv_1510);
	}

	if (argv_2072 == 0) {
		if (found == false) {
			argv_2072 = 3;
		}
	}
	return (argv_2072);
}

argv_4536 parse_handle_file (argv_876 _filename, string& _count) {
	argv_4536 argv_2072	= 0;
	_count		= "";
	bool found	= false;
	FILE * argv_1510 = fopen (_filename, "rb");
	if ( ! argv_1510) {
		argv_2072 = 1;
	}
	else {
		string pattern = "Total handles: ";
		char * location_ptr = NULL;
		char argv_825[MAX_PATH];
		char * cptr = fgets (argv_825, MAX_PATH, argv_1510); 
		while (cptr != NULL) {
			location_ptr = strstr (argv_825, pattern.c_str());
			if (location_ptr != NULL) {
				char * first_byte = &location_ptr[pattern.size()];
				int i=0;
				while (isdigit (first_byte[i])) {
					_count += first_byte[i];
					i++;
				}
				if (_count != "") {
					found = true;
				}
			}
			cptr = fgets (argv_825, MAX_PATH, argv_1510); 
		}

		fclose (argv_1510);
	}

	if (argv_2072 == 0) {
		if (found == false) {
			argv_2072 = 3;
		}
	}
	return (argv_2072);
}


// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	argv_894		
// @@
// @@ INPUT			:
// @@ _socket: SOCKET&: the argv_4570 descriptor that must be changed
// @@   to non-blocking mode.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_2448 if success,
// @@        another argv_4979 otherwise.	
// @@	
// @@ DISCLOSURE	:	protected
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to change the argv_4570 whose descriptor
// @@ was given as a parameter to non-blocking mode.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#if defined (__WIN32_OS__)
argv_4536 argv_894 (SOCKET& _socket) {
#endif // #if defined (__WIN32_OS__)
#if defined (__LINUX_OS__)
argv_4536 argv_894 (argv_4536 _socket) {
#endif // #if defined (__LINUX_OS__)

	argv_4536 argv_2072 = argv_2448;

#if defined (__WIN32_OS__)
	unsigned long non_block_flag = 1;
	if (ioctlsocket (_socket, FIONBIO, &non_block_flag) == SOCKET_ERROR) {
		argv_2072 = argv_2425;
	}	
#endif // #if defined (__WIN32_OS__)

#if defined (__LINUX_OS__)
	argv_4536 argv_4978;
	// acquire argv_1148 flag status
	argv_4978 = fcntl (_socket, F_GETFL, 0);
	// change the flag for this argv_4570
	if (fcntl (_socket, F_SETFL, argv_4978 | O_NONBLOCK) < 0) {
		argv_2072 = argv_2425;
	}
#endif // #if defined (__LINUX_OS__)

	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-	
// @@
// @@ FUNCTION		:	disable_nagle_algorithm		
// @@
// @@ INPUT			:
// @@ _socket: SOCKET&: the argv_4570 descriptor that must be changed.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_2448 if success,
// @@        another argv_4979 otherwise.	
// @@	
// @@ DISCLOSURE	:	protected
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to change the argv_4570 whose descriptor
// @@ was given as a parameter to disable the nagle algorithm.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#if defined (__WIN32_OS__) 
argv_4536 disable_nagle_algorithm (SOCKET& _socket) {
#endif // #if defined (__WIN32_OS__) 
#if defined (__LINUX_OS__)
argv_4536 disable_nagle_algorithm (argv_4536 _socket) {
#endif // #if defined (__LINUX_OS__)

	argv_4536 argv_2072			= argv_2448;
	argv_4883 disabling_flag	= 1;
   
    if (setsockopt (_socket, IPPROTO_TCP, TCP_NODELAY, (char *) &disabling_flag, sizeof(argv_4883)) != 0) {
		argv_2072 = argv_2427;
	}	
	return (argv_2072);
}


bool argv_1400 (argv_876 _abs_filename, string& _left, string& _right) {
	bool bret		= true;
	bool dot_found	= false;
	argv_4883 size = strlen (_abs_filename);
	_right = "";
	_left  = "";
	argv_4883 argv_4618;
	for (argv_4618 = size - 1 ; argv_4618 >= 0 ; argv_4618--) {
		if (_abs_filename[argv_4618] == '\\') {
			dot_found = true;
			argv_4618++; // jump the '\\'
			break;
		}
	}

	if (dot_found == false) {
		bret = false;
	}
	else {
		argv_4883 i;
		for (i=argv_4618 ; i<size ; i++) {
			_right += _abs_filename[i];	
		}

		if (_right == "") { // failed to retrieve the relative path
			bret = false;
		}

		// argv_1397 the left part
		argv_4618--;
		if (argv_4618 >= 0) {
			for (i=0 ; i<argv_4618 ; i++) {
				_left += _abs_filename[i];	
			}
		}

		if (_left == "") { // failed to retrieve the relative path
			bret = false;
		}
	}
	return (bret);
}	

void argv_4501 (argv_4881 _separator, argv_876 _path, vector<string>& _v_result) {
	_v_result.clear ();
	argv_4883 size = strlen (_path);
	string argv_1148;
	for (argv_4883 i=0 ; i<size ; i++) {
		if (_path[i] == _separator) {
			_v_result.push_back (argv_1148);	
			argv_1148 = "";
		}
		else {
			argv_1148 += _path[i];
		}
	}

	// don't forget the last argv_3677 (if any)
	if (argv_1148 != "") {
		_v_result.push_back (argv_1148);
	}
}


#if defined (__WIN32_OS__)
// delete only files matching the pattern given as a parameter.
bool argv_1220 (argv_876 _folder_name, argv_876 _pattern) {
	bool bret = true;
	char previous_current_directory[MAX_PATH];
	// save the previous argv_1148 directory
	GetCurrentDirectory (MAX_PATH, previous_current_directory);

	if (SetCurrentDirectory (_folder_name) == false) {
		bret = false;
	}
	else {	
		WIN32_FIND_DATA	FindData;
		HANDLE hFind = FindFirstFile (_pattern, &FindData);

		if (hFind == INVALID_HANDLE_VALUE) { // no argv_1424 found matching the pattern
			bret = true;
		}
		else {
			string full_filename = "";
			do {
				// if it is not a directory
				if (!(FindData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)) {
					full_filename = _folder_name;
					full_filename = full_filename + "\\" + FindData.cFileName;
					DeleteFile (full_filename.c_str());
				}
			}
			while (FindNextFile (hFind, &FindData)) ;
			FindClose (hFind);
		}
	}

	// restore the original argv_1148 directory
	SetCurrentDirectory (previous_current_directory);
	return (bret);
}
#endif // #if defined (__WIN32_OS__)


#if defined (__LINUX_OS__)
void argv_1220 (argv_876 _folder_name, argv_876 _pattern) {

}
#endif // #if defined (__LINUX_OS__)

void argv_647 (argv_4881 _data, vector<argv_875>& _v_atom) {
	argv_875 atom;
	atom.argv_4860		= argv_1094;
	atom.argv_4982	= _data;
	_v_atom.push_back (atom);
}

void argv_647 (argv_4883 _data, vector<argv_875>& _v_atom) {
	argv_875 atom;
	atom.argv_4860			= argv_1095;
	atom.argv_4983		= _data;
	_v_atom.push_back (atom);
}

void argv_647 (argv_876 _data, vector<argv_875>& _v_atom) {
	argv_875 atom;
	atom.argv_4860			= argv_1093;
	atom.argv_4981	= _data;
	_v_atom.push_back (atom);
}

void argv_647 (const string& _data, vector<argv_875>& _v_atom) {
	argv_875 atom;
	atom.argv_4860			= argv_1093;
	atom.argv_4981	= _data;
	_v_atom.push_back (atom);
}


bool argv_1399 (argv_876 _dirname, vector<string>& v_dir) {
	bool bret = true;
	string dirname = _dirname;
	char previous_current_directory[MAX_PATH];
	// save the previous argv_1148 directory
	GetCurrentDirectory (MAX_PATH, previous_current_directory);

	if (SetCurrentDirectory (_dirname) == false) {
		bret = false;
	}
	else {
		WIN32_FIND_DATA FindData; 
		HANDLE hFind = FindFirstFile ("*.*", &FindData);	

		if (hFind == INVALID_HANDLE_VALUE) {
			bret = false;
		}
		else {
			v_dir.clear ();
			argv_4883 name_size;
			do  {
				if (FindData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY) {
					if((strcmp(FindData.cFileName, ".")!=0) && (strcmp(FindData.cFileName, "..")!=0)) {
//if ! defined (EXPLORE_HIDDEN_SYSTEM_DIR)
//						if (is_hidden_system_file (FindData.cFileName) == true) {
//#if defined (DEBUG_SCANNER)
						name_size = dirname.size ();
						if (name_size > 0) {
							if (dirname[name_size - 1] != '\\') {
								v_dir.push_back (dirname + "\\" + FindData.cFileName);
							}
							else {
								v_dir.push_back (dirname + FindData.cFileName);
							}
						}
					}
				}
			}
			while (FindNextFile (hFind, &FindData)) ;
		}
		FindClose (hFind);
	}

	// restore the original argv_1148 directory
	SetCurrentDirectory (previous_current_directory);
	return (bret);
}


bool empty_directory (argv_876 _folderPath) {
	bool bret = true;

	if (argv_904 (_folderPath) == false) {
		bret = false;
	}
	else {
		char fileFound[MAX_PATH];
		WIN32_FIND_DATA info;
		HANDLE hp; 
		argv_4569 (fileFound, MAX_PATH, "%s\\*.*", _folderPath);
		fileFound[MAX_PATH - 1] = '\0';
		hp = FindFirstFile(fileFound, &info);
		do {
			if (!((strcmp(info.cFileName, ".")==0)||
				(strcmp(info.cFileName, "..")==0))) {
			  if((info.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)==
				  FILE_ATTRIBUTE_DIRECTORY) {
				  string subFolder = _folderPath;
				  subFolder.append("\\");
				  subFolder.append(info.cFileName);
				  empty_directory((char*)subFolder.c_str());
				  RemoveDirectory(subFolder.c_str());
			  }
			  else {
				argv_4569 (fileFound, MAX_PATH, "%s\\%s", _folderPath, info.cFileName);
				fileFound[MAX_PATH - 1] = '\0';
				argv_4353 (fileFound);

				BOOL retVal = DeleteFile(fileFound);
				if (retVal == 0) {
					DWORD argv_1343 = GetLastError ();
					char argv_4846[MAX_PATH];
					argv_4569 (argv_4846, MAX_PATH, "+++ ERROR: DeleteFile(%s) failed ! (erno=%d)", fileFound, argv_1343);
					argv_4846[MAX_PATH - 1] = '\0';
					MessageBox (NULL, argv_4846, "", MB_ICONERROR);
					bret = false;
					break;
				}
			  }
			}
		}while(FindNextFile(hp, &info)); 
		FindClose(hp);
	}
	return (bret);
}


argv_4536 empty_and_remove_directory (argv_876 _folder_name) {
	argv_4536 argv_2072 = 0;
	bool bret = empty_directory (_folder_name);
	if (bret == false) {
		argv_2072 = 1;
	} 
	else if (RemoveDirectory (_folder_name) == 0) { // failed
		DWORD argv_1343 = GetLastError ();
		char argv_4846[MAX_PATH];
		argv_4569 (argv_4846, MAX_PATH, "+++ ERROR: empty_and_remove_directory(%s) failed ! (erno=%d)", _folder_name, argv_1343);
		argv_4846[MAX_PATH - 1] = '\0';
		MessageBox (NULL, argv_4846, "", MB_ICONERROR);
		argv_2072 = 2;
	}
	return (argv_2072);
}


bool argv_1427 (argv_876 _filename) {
#if defined (__WIN32_OS__) 
	bool bret = false;

	DWORD dwAttrs; 
	dwAttrs = GetFileAttributes (_filename); 
	if ((dwAttrs != -1) && (dwAttrs & FILE_ATTRIBUTE_READONLY)) {
		bret = true;
	}
#endif // #if defined (__WIN32_OS__) 
	return (bret);
}

bool argv_4353 (argv_876 _filename) {
	bool bret = true;
#if defined (__WIN32_OS__) 
	DWORD dwAttrs;
	dwAttrs = GetFileAttributes (_filename); 
	if (dwAttrs == -1) {
		bret = false;
	}
	else {
		if (!(dwAttrs & FILE_ATTRIBUTE_READONLY)) {
			bret = false;
		}
		else {
			dwAttrs &= ~FILE_ATTRIBUTE_READONLY;
			if (! SetFileAttributes (_filename, dwAttrs)) {
				int argv_2072 = GetLastError();
				bret = false;	
			}
			else {
				bret = true;
			}
		}
	}
#endif // #if defined (__WIN32_OS__) 
	return (bret);
}


bool argv_655 (argv_876 _filename) {
	bool bret = true;
#if defined (__WIN32_OS__) 
	DWORD dwAttrs;
	dwAttrs = GetFileAttributes (_filename); 
	if (dwAttrs == -1) {
		bret = false;
	}
	else {
		dwAttrs |= FILE_ATTRIBUTE_READONLY;
		if (! SetFileAttributes (_filename, dwAttrs)) {
			int argv_2072 = GetLastError();
			bret = false;	
		}
		else {
			bret = true;
		}
	}
#endif // #if defined (__WIN32_OS__) 
	return (bret);
}


// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-
// @@
// @@ FUNCTION		:	argv_1344		
// @@
// @@ INPUT			:
// @@ _ercode: argv_4883 : the error argv_976 whose associated argv_2457 is to
// @@                 be retrieved.
// @@
// @@ OUTPUT		:	
// @@ _erstring: char * : the argv_826 in which this function will
// @@       copy the argv_4406 of the lookup of the error argv_2457
// @@       associated argv_5011 the error argv_976 '_ercode'.
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	-
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to map an error argv_976 as an integer to
// @@ a corresponding error argv_2457.
// @@ Notice that if the '_ercode' parameter does not correspond
// @@ to a valid error argv_976, then the string returned will be 
// @@ 'UNKNOWN_ERROR'.
// @@ 
// @@ The lookup argv_4406 is stored into the '_erstring' parameter.
// @@ Notice that it is up to the caller to allocate the '_erstring'
// @@ argv_826, argv_5011 a sufficient size (MAX_PATH is a recommended argv_4979).
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
extern "C"
{
	void argv_1344 (argv_4883 _ercode, char * _erstring) {
		switch (_ercode) {
			// kernel related errors
			case argv_2182                                    :  strncpy (_erstring, "argv_2182", MAX_PATH);							break;
			case argv_2139                          :  strncpy (_erstring, "argv_2139", MAX_PATH);				break;
			case argv_2132                   :  strncpy (_erstring, "argv_2132", MAX_PATH);			break;
			case argv_2130                    :  strncpy (_erstring, "argv_2130", MAX_PATH);			break;
			case argv_2136           :  strncpy (_erstring, "argv_2136", MAX_PATH);	break;
			case argv_2137			   :  strncpy (_erstring, "argv_2137", MAX_PATH);		break;
			case argv_2171                         :  strncpy (_erstring, "argv_2171", MAX_PATH);				break;
			case argv_2167                 :  strncpy (_erstring, "argv_2167", MAX_PATH);		break;
			case argv_2168               :  strncpy (_erstring, "argv_2168", MAX_PATH);		break;
			case argv_2169                     :  strncpy (_erstring, "argv_2169", MAX_PATH);			break;
			case argv_2166                  :  strncpy (_erstring, "argv_2166", MAX_PATH);		break;
			case argv_2140                        :  strncpy (_erstring, "argv_2140", MAX_PATH);				break;
			case argv_2144                   :  strncpy (_erstring, "argv_2144", MAX_PATH);			break;
			case argv_2173          :  strncpy (_erstring, "argv_2173", MAX_PATH);break;
			case argv_2177            :  strncpy (_erstring, "argv_2177", MAX_PATH);  break;
			case argv_2115                  :  strncpy (_erstring, "argv_2115", MAX_PATH);		break;
			case argv_2131           :  strncpy (_erstring, "argv_2131", MAX_PATH);	break;
			case argv_2134          :  strncpy (_erstring, "argv_2134", MAX_PATH);break;
			case argv_2135              :  strncpy (_erstring, "argv_2135", MAX_PATH);	break;
			case argv_2122           :  strncpy (_erstring, "argv_2122", MAX_PATH);	break;
			case argv_2123         :  strncpy (_erstring, "argv_2123", MAX_PATH);  break;
			case argv_2164                             :  strncpy (_erstring, "argv_2164", MAX_PATH);					break;
			case argv_2128            :  strncpy (_erstring, "argv_2128", MAX_PATH);  break;
			case argv_2165          :  strncpy (_erstring, "argv_2165", MAX_PATH);break;
			case argv_2116           :  strncpy (_erstring, "argv_2116", MAX_PATH); break;
			case argv_2185            :  strncpy (_erstring, "argv_2185", MAX_PATH);  break;
			case argv_2114                     :  strncpy (_erstring, "argv_2114", MAX_PATH);			break;
			case argv_2181			   :  strncpy (_erstring, "argv_2181", MAX_PATH);	break;
			case argv_2180				   :  strncpy (_erstring, "argv_2180", MAX_PATH);		break;	
			case argv_2129					   :  strncpy (_erstring, "argv_2129", MAX_PATH);				break;	
			case argv_2179	       :  strncpy (_erstring, "argv_2179", MAX_PATH); break;
			case argv_2133         :  strncpy (_erstring, "argv_2133", MAX_PATH); break;
			case argv_2121        :  strncpy (_erstring, "argv_2121", MAX_PATH); break;
			case argv_2126				   :  strncpy (_erstring, "argv_2126", MAX_PATH);			break;
			case argv_2119			   :  strncpy (_erstring, "argv_2119", MAX_PATH);	break;
			case argv_2184					   :  strncpy (_erstring, "argv_2184", MAX_PATH);			break;
			case argv_2127 :  strncpy (_erstring, "argv_2127", MAX_PATH);	break;
			case argv_2170					   :  strncpy (_erstring, "argv_2170", MAX_PATH);			break;
			case argv_2125			   :  strncpy (_erstring, "argv_2125", MAX_PATH);	break;
			case argv_2176			   :  strncpy (_erstring, "argv_2176", MAX_PATH);	break;
			case argv_2186					   :  strncpy (_erstring, "argv_2186", MAX_PATH);			break;
			case argv_2183					   :  strncpy (_erstring, "argv_2183", MAX_PATH);			break;
			case argv_2124	   :  strncpy (_erstring, "argv_2124", MAX_PATH);	break;
			case argv_2174			   :  strncpy (_erstring, "argv_2174", MAX_PATH);	break;
			case argv_2138			   :  strncpy (_erstring, "argv_2138", MAX_PATH);		break;

			// library loader related errors
			case argv_2246                                :  strncpy (_erstring, "argv_2246", MAX_PATH);						break;
			case argv_2237                          :  strncpy (_erstring, "argv_2237", MAX_PATH);				break;
			case argv_2243                    :  strncpy (_erstring, "argv_2243", MAX_PATH);			break;
			case argv_2242                 :  strncpy (_erstring, "argv_2242", MAX_PATH);		break;
			case argv_2244                        :  strncpy (_erstring, "argv_2244", MAX_PATH);				break;
			case argv_2238                  :  strncpy (_erstring, "argv_2238", MAX_PATH);		break;
			case argv_2247                         :  strncpy (_erstring, "argv_2247", MAX_PATH);				break;
			case argv_2239                       :  strncpy (_erstring, "argv_2239", MAX_PATH);				break;
			case argv_2245                  :  strncpy (_erstring, "argv_2245", MAX_PATH);		break;
			case argv_2241            :  strncpy (_erstring, "argv_2241", MAX_PATH);  break;
			case argv_2240						   :  strncpy (_erstring, "argv_2240", MAX_PATH);				break;

			// plugin loader related errors
			case argv_3922                                    :  strncpy (_erstring, "argv_3922", MAX_PATH);							break;
			case argv_3902                          :  strncpy (_erstring, "argv_3902", MAX_PATH);				break;
			case argv_3901                   :  strncpy (_erstring, "argv_3901", MAX_PATH);			break;
			case argv_3899                    :  strncpy (_erstring, "argv_3899", MAX_PATH);			break;
			case argv_3911                               :  strncpy (_erstring, "argv_3911", MAX_PATH);						break;
			case argv_3891                 :  strncpy (_erstring, "argv_3891", MAX_PATH);		break;
			case argv_3912                     :  strncpy (_erstring, "argv_3912", MAX_PATH);			break;
			case argv_3920                            :  strncpy (_erstring, "argv_3920", MAX_PATH);					break;
			case argv_3921                           :  strncpy (_erstring, "argv_3921", MAX_PATH);					break;
			case argv_3923                      :  strncpy (_erstring, "argv_3923", MAX_PATH);			break;
			case argv_3931             :  strncpy (_erstring, "argv_3931", MAX_PATH);	break;
			case argv_3910                                :  strncpy (_erstring, "argv_3910", MAX_PATH);						break;
			case argv_3896                               :  strncpy (_erstring, "argv_3896", MAX_PATH);						break;
			case argv_3894                              :  strncpy (_erstring, "argv_3894", MAX_PATH);					break;
			case argv_3897                              :  strncpy (_erstring, "argv_3897", MAX_PATH);					break;
			case argv_3919                        :  strncpy (_erstring, "argv_3919", MAX_PATH);				break;
			case argv_3914                                :  strncpy (_erstring, "argv_3914", MAX_PATH);						break;
			case argv_3915                 :  strncpy (_erstring, "argv_3915", MAX_PATH);		break;
			case argv_3916                 :  strncpy (_erstring, "argv_3916", MAX_PATH);		break;
			case argv_3913                      :  strncpy (_erstring, "argv_3913", MAX_PATH);			break;
			case argv_3917                     :  strncpy (_erstring, "argv_3917", MAX_PATH);			break;
			case argv_3918                  :  strncpy (_erstring, "argv_3918", MAX_PATH);		break;
			case argv_3890                          :  strncpy (_erstring, "argv_3890", MAX_PATH);				break;
			case argv_3898               :  strncpy (_erstring, "argv_3898", MAX_PATH);		break;
			case argv_3900              :  strncpy (_erstring, "argv_3900", MAX_PATH);	break;
			case argv_3893        :  strncpy (_erstring, "argv_3893", MAX_PATH);	break;

			// compressor/decompressor related errors
			case argv_2210                                  :  strncpy (_erstring, "argv_2210", MAX_PATH);						break;
			case argv_2209                           :  strncpy (_erstring, "argv_2209", MAX_PATH);					break;
			case argv_2211                        :  strncpy (_erstring, "argv_2211", MAX_PATH);				break;
			case argv_2208                                 :  strncpy (_erstring, "argv_2208", MAX_PATH);						break;
			case argv_2212                     :  strncpy (_erstring, "argv_2212", MAX_PATH);			break;
			case argv_2213                   :  strncpy (_erstring, "argv_2213", MAX_PATH);			break;

			// cypher/decypher related errors
			case argv_1173                                    :  strncpy (_erstring, "argv_1173", MAX_PATH);							break;
			case argv_1171                          :  strncpy (_erstring, "argv_1171", MAX_PATH);				break;
			case argv_1176                          :  strncpy (_erstring, "argv_1176", MAX_PATH);				break;
			case argv_1172                                   :  strncpy (_erstring, "argv_1172", MAX_PATH);							break;

			// xmemroy related errors
			case argv_5027                                      :  strncpy (_erstring, "argv_5027", MAX_PATH);							break;
			case argv_5025                       :  strncpy (_erstring, "argv_5025", MAX_PATH);				break;
			case argv_5019                     :  strncpy (_erstring, "argv_5019", MAX_PATH);			break;
			case argv_5018                      :  strncpy (_erstring, "argv_5018", MAX_PATH);			break;
			case argv_5020                            :  strncpy (_erstring, "argv_5020", MAX_PATH);					break;

			// coff argv_1424 loader related errors
			case argv_3671                                    :  strncpy (_erstring, "argv_3671", MAX_PATH);							break;
			case argv_3662                             :  strncpy (_erstring, "argv_3662", MAX_PATH);					break;
			case argv_3669                                :  strncpy (_erstring, "argv_3669", MAX_PATH);						break;
			case argv_3661                       :  strncpy (_erstring, "argv_3661", MAX_PATH);				break;
			case argv_3670                    :  strncpy (_erstring, "argv_3670", MAX_PATH);			break;
			case argv_3657                              :  strncpy (_erstring, "argv_3657", MAX_PATH);					break;
			case argv_3665                    :  strncpy (_erstring, "argv_3665", MAX_PATH);			break;
			case argv_3660                      :  strncpy (_erstring, "argv_3660", MAX_PATH);			break;
			case argv_3668                        :  strncpy (_erstring, "argv_3668", MAX_PATH);				break;
			case argv_3667                          :  strncpy (_erstring, "argv_3667", MAX_PATH);				break;
			case argv_3663                   :  strncpy (_erstring, "argv_3663", MAX_PATH);			break;
			case argv_3664                   :  strncpy (_erstring, "argv_3664", MAX_PATH);			break;
			case argv_3673                          :  strncpy (_erstring, "argv_3673", MAX_PATH);				break;
			case argv_3658                   :  strncpy (_erstring, "argv_3658", MAX_PATH);			break;
			case argv_3672                     :  strncpy (_erstring, "argv_3672", MAX_PATH);			break;
			case argv_3666          :  strncpy (_erstring, "argv_3666", MAX_PATH);  break;
			case argv_3659          :  strncpy (_erstring, "argv_3659", MAX_PATH);  break;

			// list related errors
			case argv_2272                                      :  strncpy (_erstring, "argv_2272", MAX_PATH);							break;
			case argv_2271                     :  strncpy (_erstring, "argv_2271", MAX_PATH);			break;
			case argv_2270                            :  strncpy (_erstring, "argv_2270", MAX_PATH);					break;
			case argv_2269                 :  strncpy (_erstring, "argv_2269", MAX_PATH);		break;
			case argv_2263                                  :  strncpy (_erstring, "argv_2263", MAX_PATH);						break;
			case argv_2268              :  strncpy (_erstring, "argv_2268", MAX_PATH);	break;
			case argv_1057     :  strncpy (_erstring, "argv_1057", MAX_PATH);	break;
			case argv_2261						   :  strncpy (_erstring, "argv_2261", MAX_PATH);				break;

			// argv_1424 argv_4860 detection argv_4406 related errors
			case argv_4875                              :  strncpy (_erstring, "argv_4875", MAX_PATH);					break;
			case argv_4872                    :  strncpy (_erstring, "argv_4872", MAX_PATH);			break;
			case argv_4873             :  strncpy (_erstring, "argv_4873", MAX_PATH);	break;
			case argv_4871      :  strncpy (_erstring, "argv_4871", MAX_PATH);  break;
			case argv_4874                             :  strncpy (_erstring, "argv_4874", MAX_PATH);					break;

			// kernel related errors
			case argv_3889                                :  strncpy (_erstring, "argv_3889", MAX_PATH);						break;
			case argv_3886                      :  strncpy (_erstring, "argv_3886", MAX_PATH);			break;
			case argv_3884               :  strncpy (_erstring, "argv_3884", MAX_PATH);		break;
			case argv_3883                :  strncpy (_erstring, "argv_3883", MAX_PATH);		break;
			case argv_3885       :  strncpy (_erstring, "argv_3885", MAX_PATH);  break;
			case argv_3881                         :  strncpy (_erstring, "argv_3881", MAX_PATH);				break;
			case argv_3887                       :  strncpy (_erstring, "argv_3887", MAX_PATH);				break;
			case argv_3879                    :  strncpy (_erstring, "argv_3879", MAX_PATH);			break;
			case argv_3882                          :  strncpy (_erstring, "argv_3882", MAX_PATH);				break;
			case argv_3880                      :  strncpy (_erstring, "argv_3880", MAX_PATH);			break;
			case argv_3888                     :  strncpy (_erstring, "argv_3888", MAX_PATH);			break;

			// scanner related errors
			case argv_1441                              :  strncpy (_erstring, "argv_1441", MAX_PATH);					break;
			case argv_1438                    :  strncpy (_erstring, "argv_1438", MAX_PATH);			break;
			case argv_1432              :  strncpy (_erstring, "argv_1432", MAX_PATH);	break;
			case argv_1440             :  strncpy (_erstring, "argv_1440", MAX_PATH);	break;
			case argv_1431                      :  strncpy (_erstring, "argv_1431", MAX_PATH);			break;
			case argv_1437			   :  strncpy (_erstring, "argv_1437", MAX_PATH);		break;
			case argv_1443				   :  strncpy (_erstring, "argv_1443", MAX_PATH);		break;
			case argv_1442				   :  strncpy (_erstring, "argv_1442", MAX_PATH);		break;
			case argv_1439			   :  strncpy (_erstring, "argv_1439", MAX_PATH);		break;
			case argv_1433		   :  strncpy (_erstring, "argv_1433", MAX_PATH);		break;
			case argv_1434		   :  strncpy (_erstring, "argv_1434", MAX_PATH);		break;
			case argv_1436		   :  strncpy (_erstring, "argv_1436", MAX_PATH);		break;
			case argv_1435	   :  strncpy (_erstring, "argv_1435", MAX_PATH);	break;

			// symbol table related errors
			case argv_4663                              :  strncpy (_erstring, "argv_4663", MAX_PATH);					break;
			case argv_4661                    :  strncpy (_erstring, "argv_4661", MAX_PATH);			break;
			case argv_4664               :  strncpy (_erstring, "argv_4664", MAX_PATH);		break;
			case argv_4662                       :  strncpy (_erstring, "argv_4662", MAX_PATH);				break;
			case argv_4660             :  strncpy (_erstring, "argv_4660", MAX_PATH);	break;
			case argv_4659              :  strncpy (_erstring, "argv_4659", MAX_PATH);	break;

			// plugin manager related errors
			case argv_3909                            :  strncpy (_erstring, "argv_3909", MAX_PATH);					break;
			case argv_3906                  :  strncpy (_erstring, "argv_3906", MAX_PATH);		break;
			case argv_3904            :  strncpy (_erstring, "argv_3904", MAX_PATH);  break;
			case argv_3905           :  strncpy (_erstring, "argv_3905", MAX_PATH); break;
			case argv_3908             :  strncpy (_erstring, "argv_3908", MAX_PATH);	break;
			case argv_3907                     :  strncpy (_erstring, "argv_3907", MAX_PATH);			break;

			// COFF loader related errors
			case argv_993                               :  strncpy (_erstring, "argv_993", MAX_PATH);						break;
			case argv_986                     :  strncpy (_erstring, "argv_986", MAX_PATH);			break;
			case argv_982               :  strncpy (_erstring, "argv_982", MAX_PATH);		break;
			case argv_983              :  strncpy (_erstring, "argv_983", MAX_PATH);	break;
			case argv_984                 :  strncpy (_erstring, "argv_984", MAX_PATH);		break;
			case argv_994             :  strncpy (_erstring, "argv_994", MAX_PATH);	break;
			case argv_981                   :  strncpy (_erstring, "argv_981", MAX_PATH);			break;
			case argv_980              :  strncpy (_erstring, "argv_980", MAX_PATH);	break;
			case argv_990                              :  strncpy (_erstring, "argv_990", MAX_PATH);					break;
			case argv_996            :  strncpy (_erstring, "argv_996", MAX_PATH);  break;
			case argv_978          :  strncpy (_erstring, "argv_978", MAX_PATH);break;
			case argv_985            :  strncpy (_erstring, "argv_985", MAX_PATH);  break;
			case argv_995                 :  strncpy (_erstring, "argv_995", MAX_PATH);		break;
			case argv_979             :  strncpy (_erstring, "argv_979", MAX_PATH);	break;
			case argv_989              :  strncpy (_erstring, "argv_989", MAX_PATH);	break;
			case argv_992             :  strncpy (_erstring, "argv_992", MAX_PATH);	break;
			case argv_999           :  strncpy (_erstring, "argv_999", MAX_PATH); break;
			case argv_998          :  strncpy (_erstring, "argv_998", MAX_PATH);break;
			case argv_987                    :  strncpy (_erstring, "argv_987", MAX_PATH);			break;
			case argv_997                   :  strncpy (_erstring, "argv_997", MAX_PATH);			break;
			case argv_991              :  strncpy (_erstring, "argv_991", MAX_PATH);	break;
			case argv_988       :  strncpy (_erstring, "argv_988", MAX_PATH); break;

			// complex list related errors
			case argv_1061                              :  strncpy (_erstring, "argv_1061", MAX_PATH);					break;
			case argv_1058                    :  strncpy (_erstring, "argv_1058", MAX_PATH);			break;
			case argv_1056      :  strncpy (_erstring, "argv_1056", MAX_PATH);  break;
			case argv_1059             :  strncpy (_erstring, "argv_1059", MAX_PATH);	break;
			case argv_1060                       :  strncpy (_erstring, "argv_1060", MAX_PATH);				break;
			case argv_1055                          :  strncpy (_erstring, "argv_1055", MAX_PATH);				break;
			case argv_1054                :  strncpy (_erstring, "argv_1054", MAX_PATH);		break;

			// argv_1424 mapper related errors
			case argv_1490                                   :  strncpy (_erstring, "argv_1490", MAX_PATH);							break;
			case argv_1489                               :  strncpy (_erstring, "argv_1489", MAX_PATH);						break;
			case argv_1487                         :  strncpy (_erstring, "argv_1487", MAX_PATH);				break;
			case argv_1485           :  strncpy (_erstring, "argv_1485", MAX_PATH);	break;
			case argv_1488                  :  strncpy (_erstring, "argv_1488", MAX_PATH);		break;
			case argv_1486                  :  strncpy (_erstring, "argv_1486", MAX_PATH);		break;
			case argv_1484                   :  strncpy (_erstring, "argv_1484", MAX_PATH);			break;

			// PE extractor related error
			case argv_3831							   :  strncpy (_erstring, "argv_3831", MAX_PATH);					break;	
			case argv_3828					   :  strncpy (_erstring, "argv_3828", MAX_PATH);			break;			
			case argv_3827      :  strncpy (_erstring, "argv_3827", MAX_PATH); break;
			case argv_3830			   :  strncpy (_erstring, "argv_3830", MAX_PATH);	break;
			case argv_3829						   :  strncpy (_erstring, "argv_3829", MAX_PATH);				break;
			case argv_3826				   :  strncpy (_erstring, "argv_3826", MAX_PATH);		break;

			// argv_2420 related errors
			case argv_2448									   :  strncpy (_erstring, "argv_2448", MAX_PATH);							break;	
			case argv_2434                :  strncpy (_erstring, "argv_2434", MAX_PATH);		break;	
			case argv_2431               :  strncpy (_erstring, "argv_2431", MAX_PATH);		break;	
			case argv_2423               :  strncpy (_erstring, "argv_2423", MAX_PATH);		break;	
			case argv_2432                 :  strncpy (_erstring, "argv_2432", MAX_PATH);		break;	
			case argv_2433              :  strncpy (_erstring, "argv_2433", MAX_PATH);	break;	
			case argv_2435                           :  strncpy (_erstring, "argv_2435", MAX_PATH);					break;	
			case argv_2447                      :  strncpy (_erstring, "argv_2447", MAX_PATH);			break;	
			case argv_2422                                 :  strncpy (_erstring, "argv_2422", MAX_PATH);   			        break;	
			case argv_2436                               :  strncpy (_erstring, "argv_2436", MAX_PATH);   			        break;	
			case argv_2421                           :  strncpy (_erstring, "argv_2421", MAX_PATH); 		        break;	
			case argv_2424                           :  strncpy (_erstring, "argv_2424", MAX_PATH); 		        break;	
			case argv_2426                              :  strncpy (_erstring, "argv_2426", MAX_PATH); 		            break;	
			case argv_2425                 :  strncpy (_erstring, "argv_2425", MAX_PATH);       break;	
			case argv_2427              :  strncpy (_erstring, "argv_2427", MAX_PATH);    break;	
			case argv_2442                                 :  strncpy (_erstring, "argv_2442", MAX_PATH);						break;	
			case argv_2430                                :  strncpy (_erstring, "argv_2430", MAX_PATH);						break;	
			case argv_2439                                 :  strncpy (_erstring, "argv_2439", MAX_PATH);						break;	
			case argv_2446						   :  strncpy (_erstring, "argv_2446", MAX_PATH);				break;
			case argv_2440				   :  strncpy (_erstring, "argv_2440", MAX_PATH);		break;
			case argv_2443				   :  strncpy (_erstring, "argv_2443", MAX_PATH);		break;
			case argv_2441							   :  strncpy (_erstring, "argv_2441", MAX_PATH);						break;
			case argv_2438								   :  strncpy (_erstring, "argv_2438", MAX_PATH);						break;

			// packet coder related errors
			case argv_3740                                 :  strncpy (_erstring, "argv_3740", MAX_PATH); 		                break;	
			case argv_3737                       :  strncpy (_erstring, "argv_3737", MAX_PATH);             break;	
			case argv_3736                :  strncpy (_erstring, "argv_3736", MAX_PATH);      break;	
			case argv_3739                                :  strncpy (_erstring, "argv_3739", MAX_PATH);                      break;	
			case argv_3738                :  strncpy (_erstring, "argv_3738", MAX_PATH);      break;	
			case argv_3735                          :  strncpy (_erstring, "argv_3735", MAX_PATH);                break;	
				
			// packet related errors
			case argv_3778                                    :  strncpy (_erstring, "argv_3778", MAX_PATH);                             break;	
			case argv_3750                   :  strncpy (_erstring, "argv_3750", MAX_PATH);            break;	
			case argv_3754                     :  strncpy (_erstring, "argv_3754", MAX_PATH);              break;	
			case argv_3757							:  strncpy (_erstring, "argv_3757", MAX_PATH);					break;	
			case argv_3751                   :  strncpy (_erstring, "argv_3751", MAX_PATH);			break;	
			case argv_3760                               :  strncpy (_erstring, "argv_3760", MAX_PATH);			            break;	
			case argv_3755            :  strncpy (_erstring, "argv_3755", MAX_PATH);	    break;	
			case argv_3734			:  strncpy (_erstring, "argv_3734", MAX_PATH);	break;	
			case argv_3752	    :  strncpy (_erstring, "argv_3752", MAX_PATH);	break;	
			case argv_3743						:  strncpy (_erstring, "argv_3743", MAX_PATH);				break;	
			case argv_3742					:  strncpy (_erstring, "argv_3742", MAX_PATH);				break;	
			case argv_3765					:  strncpy (_erstring, "argv_3765", MAX_PATH);				break;	
			case argv_3746						:  strncpy (_erstring, "argv_3746", MAX_PATH);				break;	
			case argv_3744				:  strncpy (_erstring, "argv_3744", MAX_PATH);			break;	
			case argv_3747						:  strncpy (_erstring, "argv_3747", MAX_PATH);				break;	
			case argv_3748						:  strncpy (_erstring, "argv_3748", MAX_PATH);				break;	
			case argv_3745					:  strncpy (_erstring, "argv_3745", MAX_PATH);				break;	
			case argv_3741						:  strncpy (_erstring, "argv_3741", MAX_PATH);					break;	
			case argv_3758						:  strncpy (_erstring, "argv_3758", MAX_PATH);					break;	
			case argv_3782			:  strncpy (_erstring, "argv_3782", MAX_PATH);		break;	
			case argv_3756		:  strncpy (_erstring, "argv_3756", MAX_PATH);	break;	
			case PCK_ILLEGAL_WHEN_TMP_FOLDER_NOT_SET			:  strncpy (_erstring, "PCK_ILLEGAL_WHEN_TMP_FOLDER_NOT_SET", MAX_PATH);		break;	
			case argv_3749					:  strncpy (_erstring, "argv_3749", MAX_PATH);				break;	
			case argv_3759					:  strncpy (_erstring, "argv_3759", MAX_PATH);				break;	
			case argv_3753				:  strncpy (_erstring, "argv_3753", MAX_PATH);			break;	
			case PCK_ILLEGAL_CALL_WHEN_PCK_TYPE_NOT_SET			:  strncpy (_erstring, "PCK_ILLEGAL_CALL_WHEN_PCK_TYPE_NOT_SET", MAX_PATH);		break;	

			// test related error codes
			case argv_4793						:  strncpy (_erstring, "argv_4793", MAX_PATH);					break;	
			case argv_4792									:  strncpy (_erstring, "argv_4792", MAX_PATH);								break;	
			case argv_4775					:  strncpy (_erstring, "argv_4775", MAX_PATH);				break;	
			case argv_4774		:  strncpy (_erstring, "argv_4774", MAX_PATH);	break;	
			case argv_4780							:  strncpy (_erstring, "argv_4780", MAX_PATH);						break;	
			case argv_4772						:  strncpy (_erstring, "argv_4772", MAX_PATH);					break;	
			case argv_4773						:  strncpy (_erstring, "argv_4773", MAX_PATH);					break;	
			case argv_4777				:  strncpy (_erstring, "argv_4777", MAX_PATH);			break;	
			case argv_4776				:  strncpy (_erstring, "argv_4776", MAX_PATH);			break;	
			case argv_4781					:  strncpy (_erstring, "argv_4781", MAX_PATH);				break;	
			case argv_4779				:  strncpy (_erstring, "argv_4779", MAX_PATH);			break;	
			case argv_4778				:  strncpy (_erstring, "argv_4778", MAX_PATH);			break;	

			// test related error codes (internal test errors)
			case argv_4783							:  strncpy (_erstring, "argv_4783", MAX_PATH);						break;	
			case argv_4782				:  strncpy (_erstring, "argv_4782", MAX_PATH);			break;	

			// event loop related events
			case argv_1368								:  strncpy (_erstring, "argv_1368", MAX_PATH);							break;	
			case argv_1358					:  strncpy (_erstring, "argv_1358", MAX_PATH);				break;	
			case argv_1353						:  strncpy (_erstring, "argv_1353", MAX_PATH);					break;	
			case argv_1369					:  strncpy (_erstring, "argv_1369", MAX_PATH);				break;	
			case argv_1354				:  strncpy (_erstring, "argv_1354", MAX_PATH);			break;	
			case argv_1363							:  strncpy (_erstring, "argv_1363", MAX_PATH);						break;	
			case argv_1371						:  strncpy (_erstring, "argv_1371", MAX_PATH);					break;	
			case argv_1355			:  strncpy (_erstring, "argv_1355", MAX_PATH);		break;	
			case argv_1364						:  strncpy (_erstring, "argv_1364", MAX_PATH);					break;	
			case argv_1361					:  strncpy (_erstring, "argv_1361", MAX_PATH);				break;	
			case argv_1365					:  strncpy (_erstring, "argv_1365", MAX_PATH);				break;	
			case argv_1359			:  strncpy (_erstring, "argv_1359", MAX_PATH);		break;	
			case argv_1356			:  strncpy (_erstring, "argv_1356", MAX_PATH);		break;	
			case argv_1360			:  strncpy (_erstring, "argv_1360", MAX_PATH);		break;	
			case argv_1357					:  strncpy (_erstring, "argv_1357", MAX_PATH);				break;	
			case argv_1370					:  strncpy (_erstring, "argv_1370", MAX_PATH);				break;	
			case argv_1362					:  strncpy (_erstring, "argv_1362", MAX_PATH);				break;	
			case argv_1367						:  strncpy (_erstring, "argv_1367", MAX_PATH);					break;	
			case argv_1366				:  strncpy (_erstring, "argv_1366", MAX_PATH);			break;	

			// client argv_1178 related errors
			case argv_943							:  strncpy (_erstring, "argv_943", MAX_PATH);						break;	
			case argv_941			:  strncpy (_erstring, "argv_941", MAX_PATH);		break;	
			case argv_942				:  strncpy (_erstring, "argv_942", MAX_PATH);			break;	

			// scanning daemon related errors
			case argv_4455							:  strncpy (_erstring, "argv_4455", MAX_PATH);						break;	
			case argv_4454				:  strncpy (_erstring, "argv_4454", MAX_PATH);			break;	
			case argv_4453			:  strncpy (_erstring, "argv_4453", MAX_PATH);		break;	
			case argv_4443			:  strncpy (_erstring, "argv_4443", MAX_PATH);		break;	
			case argv_4449				:  strncpy (_erstring, "argv_4449", MAX_PATH);			break;	
			case argv_4444				:  strncpy (_erstring, "argv_4444", MAX_PATH);			break;	
			case argv_4452			:  strncpy (_erstring, "argv_4452", MAX_PATH);		break;	
			case argv_4447			:  strncpy (_erstring, "argv_4447", MAX_PATH);		break;	
			case argv_4448					:  strncpy (_erstring, "argv_4448", MAX_PATH);				break;	
			case argv_4445			:  strncpy (_erstring, "argv_4445", MAX_PATH);		break;	
			case argv_4450			:  strncpy (_erstring, "argv_4450", MAX_PATH);		break;	
			case argv_4451				:  strncpy (_erstring, "argv_4451", MAX_PATH);			break;	
			case argv_4446		:  strncpy (_erstring, "argv_4446", MAX_PATH);	break;	
			case argv_4457	:  strncpy (_erstring, "argv_4457", MAX_PATH);break;	
			case argv_4456		:  strncpy (_erstring, "argv_4456", MAX_PATH);	break;	

			// com client related errors
			case argv_1021								:  strncpy (_erstring, "argv_1021", MAX_PATH);							break;	
			case argv_1015					:  strncpy (_erstring, "argv_1015", MAX_PATH);				break;	
			case argv_1013		:  strncpy (_erstring, "argv_1013", MAX_PATH);	break;	
			case argv_1016			:  strncpy (_erstring, "argv_1016", MAX_PATH);		break;	
			case argv_1017						:  strncpy (_erstring, "argv_1017", MAX_PATH);					break;	
			case argv_1014		:  strncpy (_erstring, "argv_1014", MAX_PATH);	break;	
			case argv_1022					:  strncpy (_erstring, "argv_1022", MAX_PATH);				break;
			case argv_1020						:  strncpy (_erstring, "argv_1020", MAX_PATH);					break;

			// gateway related errors
			case argv_1731								:  strncpy (_erstring, "argv_1731", MAX_PATH);							break;	
			case argv_1728						:  strncpy (_erstring, "argv_1728", MAX_PATH);					break;	
			case argv_1729					:  strncpy (_erstring, "argv_1729", MAX_PATH);				break;	
			case argv_1727			:  strncpy (_erstring, "argv_1727", MAX_PATH);		break;	

 			// kernel manager related errors
			case argv_2162								:  strncpy (_erstring, "argv_2162", MAX_PATH);							break;	
			case argv_2152					:  strncpy (_erstring, "argv_2152", MAX_PATH);				break;	
			case argv_2157						:  strncpy (_erstring, "argv_2157", MAX_PATH);					break;	
			case argv_2154					:  strncpy (_erstring, "argv_2154", MAX_PATH);				break;	
			case argv_2150		:  strncpy (_erstring, "argv_2150", MAX_PATH);	break;	
			case argv_2151			:  strncpy (_erstring, "argv_2151", MAX_PATH);		break;	
			case argv_2155				:  strncpy (_erstring, "argv_2155", MAX_PATH);			break;	
			case argv_2149	:  strncpy (_erstring, "argv_2149", MAX_PATH);break;	
			case argv_2147			:  strncpy (_erstring, "argv_2147", MAX_PATH);		break;	
			case argv_2153			:  strncpy (_erstring, "argv_2153", MAX_PATH);		break;	
			case argv_2146			:  strncpy (_erstring, "argv_2146", MAX_PATH);		break;	
			case argv_2148		:  strncpy (_erstring, "argv_2148", MAX_PATH);	break;	
			case argv_2145					:  strncpy (_erstring, "argv_2145", MAX_PATH);				break;	
			case argv_2156		:  strncpy (_erstring, "argv_2156", MAX_PATH);	break;	

			// admin related errors
			case argv_4954							:  strncpy (_erstring, "argv_4954", MAX_PATH);								break;
			case argv_4947				:  strncpy (_erstring, "argv_4947", MAX_PATH);					break;
			case argv_4943		:  strncpy (_erstring, "argv_4943", MAX_PATH);			break;
			case argv_4951		:  strncpy (_erstring, "argv_4951", MAX_PATH);			break;
			case argv_4942				:  strncpy (_erstring, "argv_4942", MAX_PATH);					break;
			case argv_4944				:  strncpy (_erstring, "argv_4944", MAX_PATH);					break;
			case argv_4945	:  strncpy (_erstring, "argv_4945", MAX_PATH);		break;
			case argv_4946		:  strncpy (_erstring, "argv_4946", MAX_PATH);			break;
			case argv_4949	:  strncpy (_erstring, "argv_4949", MAX_PATH);		break;
			case argv_4955:  strncpy (_erstring, "argv_4955", MAX_PATH);	break;
			case argv_4950					:  strncpy (_erstring, "argv_4950", MAX_PATH);						break;
			case argv_4948		:  strncpy (_erstring, "argv_4948", MAX_PATH);			break;
			case argv_4956		:  strncpy (_erstring, "argv_4956", MAX_PATH);			break;
			case argv_4953	:  strncpy (_erstring, "argv_4953", MAX_PATH);		break;	
			case argv_4957					:  strncpy (_erstring, "argv_4957", MAX_PATH);						break;
			case argv_4958	:  strncpy (_erstring, "argv_4958", MAX_PATH);		break;

			// resolved shelf related errors
			case argv_4404							:  strncpy (_erstring, "argv_4404", MAX_PATH);						break;
			case argv_4401				:  strncpy (_erstring, "argv_4401", MAX_PATH);			break;
			case argv_4398		:  strncpy (_erstring, "argv_4398", MAX_PATH);	break;
			case argv_4399						:  strncpy (_erstring, "argv_4399", MAX_PATH);					break;
			case argv_4400					:  strncpy (_erstring, "argv_4400", MAX_PATH);				break;
			case argv_4403				:  strncpy (_erstring, "argv_4403", MAX_PATH);			break;
			case argv_4402	:  strncpy (_erstring, "argv_4402", MAX_PATH);break;

			// spyware manager related errors
			case argv_4583							:  strncpy (_erstring, "argv_4583", MAX_PATH);						break;
			case argv_4581					:  strncpy (_erstring, "argv_4581", MAX_PATH);				break;
			case argv_4582			:  strncpy (_erstring, "argv_4582", MAX_PATH);		break;
			case argv_4580		:  strncpy (_erstring, "argv_4580", MAX_PATH);	break;

			// inner argv_4228 related errors
			case argv_2067								:  strncpy (_erstring, "argv_2067", MAX_PATH);							break;
			case argv_2066					:  strncpy (_erstring, "argv_2066", MAX_PATH);				break;
			case argv_2063					:  strncpy (_erstring, "argv_2063", MAX_PATH);				break;
			case argv_2062			:  strncpy (_erstring, "argv_2062", MAX_PATH);		break;
			case argv_2065			:  strncpy (_erstring, "argv_2065", MAX_PATH);		break;
			case argv_2064			:  strncpy (_erstring, "argv_2064", MAX_PATH);		break;

			// inner client related errors
			case argv_2060							:  strncpy (_erstring, "argv_2060", MAX_PATH);						break;
			case argv_2057					:  strncpy (_erstring, "argv_2057", MAX_PATH);				break;
			case argv_2055		:  strncpy (_erstring, "argv_2055", MAX_PATH);	break;
			case argv_2058			:  strncpy (_erstring, "argv_2058", MAX_PATH);		break;
			case argv_2061					:  strncpy (_erstring, "argv_2061", MAX_PATH);				break;
			case argv_2054					:  strncpy (_erstring, "argv_2054", MAX_PATH);				break;
			case argv_2059		:  strncpy (_erstring, "argv_2059", MAX_PATH);	break;
			case argv_2056		:  strncpy (_erstring, "argv_2056", MAX_PATH);	break;

			// admin client related errors
			case argv_689							:  strncpy (_erstring, "argv_689", MAX_PATH);						break;
			case argv_684					:  strncpy (_erstring, "argv_684", MAX_PATH);				break;
			case argv_682	:  strncpy (_erstring, "argv_682", MAX_PATH); break;
			case argv_686			:  strncpy (_erstring, "argv_686", MAX_PATH);		break;
			case argv_683		:  strncpy (_erstring, "argv_683", MAX_PATH);	break;
			case argv_688				:  strncpy (_erstring, "argv_688", MAX_PATH);			break;
			case argv_687					:  strncpy (_erstring, "argv_687", MAX_PATH);				break;
			case argv_685					:  strncpy (_erstring, "argv_685", MAX_PATH);				break;

			// archive extractor related errors
			case argv_740						:  strncpy (_erstring, "argv_740", MAX_PATH);					break;
			case argv_742			:  strncpy (_erstring, "argv_742", MAX_PATH);		break;
			case argv_734					:  strncpy (_erstring, "argv_734", MAX_PATH);				break;
			case argv_735				:  strncpy (_erstring, "argv_735", MAX_PATH);			break;
			case argv_736			:  strncpy (_erstring, "argv_736", MAX_PATH);		break;
			case argv_741			:  strncpy (_erstring, "argv_741", MAX_PATH);		break;
			case argv_737		:  strncpy (_erstring, "argv_737", MAX_PATH);	break;
			case argv_733		:  strncpy (_erstring, "argv_733", MAX_PATH);	break;
			case argv_739		:  strncpy (_erstring, "argv_739", MAX_PATH);	break;
			case argv_729		:  strncpy (_erstring, "argv_729", MAX_PATH);	break;
			case argv_730				:  strncpy (_erstring, "argv_730", MAX_PATH);			break;
			case argv_731				:  strncpy (_erstring, "argv_731", MAX_PATH);			break;
			case argv_732				:  strncpy (_erstring, "argv_732", MAX_PATH);			break;

			// archive creator related errors
			case argv_724						:  strncpy (_erstring, "argv_724", MAX_PATH);					break;
			case argv_727			:  strncpy (_erstring, "argv_727", MAX_PATH);		break;
			case argv_720					:  strncpy (_erstring, "argv_720", MAX_PATH);				break;
			case argv_719				:  strncpy (_erstring, "argv_719", MAX_PATH);			break;
			case argv_721		:  strncpy (_erstring, "argv_721", MAX_PATH);	break;
			case argv_717		:  strncpy (_erstring, "argv_717", MAX_PATH);	break;
			case argv_725			:  strncpy (_erstring, "argv_725", MAX_PATH);		break;
			case argv_726			:  strncpy (_erstring, "argv_726", MAX_PATH);		break;
			case argv_718			:  strncpy (_erstring, "argv_718", MAX_PATH);		break;
			case argv_716				:  strncpy (_erstring, "argv_716", MAX_PATH);			break;
			case argv_722			:  strncpy (_erstring, "argv_722", MAX_PATH);		break;

			// argv_1424 argv_4860 analyzer related errors
			case argv_4867							:  strncpy (_erstring, "argv_4867", MAX_PATH);						break;
			case argv_4866				:  strncpy (_erstring, "argv_4866", MAX_PATH);			break;
			case argv_4863				:  strncpy (_erstring, "argv_4863", MAX_PATH);			break;
			case argv_4864					:  strncpy (_erstring, "argv_4864", MAX_PATH);				break;
			case argv_4865						:  strncpy (_erstring, "argv_4865", MAX_PATH);					break;

			// com manager related errors
			case argv_1037							:  strncpy (_erstring, "argv_1037", MAX_PATH);						break;
			case argv_1030					:  strncpy (_erstring, "argv_1030", MAX_PATH);				break;
			case argv_1031				:  strncpy (_erstring, "argv_1031", MAX_PATH);			break;
			case argv_1034					:  strncpy (_erstring, "argv_1034", MAX_PATH);				break;
			case argv_1025					:  strncpy (_erstring, "argv_1025", MAX_PATH);				break;
			case argv_1028 :  strncpy (_erstring, "argv_1028", MAX_PATH);		break;
			case argv_1029				:  strncpy (_erstring, "argv_1029", MAX_PATH);			break;
			case argv_1035			:  strncpy (_erstring, "argv_1035", MAX_PATH);		break;
			case argv_1026			:  strncpy (_erstring, "argv_1026", MAX_PATH);		break;
			case argv_1036					:  strncpy (_erstring, "argv_1036", MAX_PATH);				break;
			case argv_1027				:  strncpy (_erstring, "argv_1027", MAX_PATH);			break;
			case argv_1032	:  strncpy (_erstring, "argv_1032", MAX_PATH); break;
			case argv_1039			:  strncpy (_erstring, "argv_1039", MAX_PATH);		break;
			case argv_1024		:  strncpy (_erstring, "argv_1024", MAX_PATH);	break;

			// scan gateway related errors
			case argv_4465							:  strncpy (_erstring, "argv_4465", MAX_PATH);						break;
			case argv_4466		:  strncpy (_erstring, "argv_4466", MAX_PATH);	break;
			case argv_4463					:  strncpy (_erstring, "argv_4463", MAX_PATH);				break;
			case argv_4460	:  strncpy (_erstring, "argv_4460", MAX_PATH); break;
			case argv_4464				:  strncpy (_erstring, "argv_4464", MAX_PATH);			break;
			case argv_4467					:  strncpy (_erstring, "argv_4467", MAX_PATH);				break;
			case argv_4461		:  strncpy (_erstring, "argv_4461", MAX_PATH);	break;
			case argv_4462				:  strncpy (_erstring, "argv_4462", MAX_PATH);			break;

			// archive facility related errors
			case argv_757						:  strncpy (_erstring, "argv_757", MAX_PATH);					break;
			case argv_751				:  strncpy (_erstring, "argv_751", MAX_PATH);			break;
			case argv_749		:  strncpy (_erstring, "argv_749", MAX_PATH);	break;
			case argv_750		:  strncpy (_erstring, "argv_750", MAX_PATH);	break;
			case argv_755					:  strncpy (_erstring, "argv_755", MAX_PATH);				break;
			case argv_752			:  strncpy (_erstring, "argv_752", MAX_PATH);		break;
			case argv_753			:  strncpy (_erstring, "argv_753", MAX_PATH);		break;
			case argv_754	:  strncpy (_erstring, "argv_754", MAX_PATH);break;
			case argv_747		:  strncpy (_erstring, "argv_747", MAX_PATH);	break;
			case argv_745				:  strncpy (_erstring, "argv_745", MAX_PATH);			break;
			case argv_746	:  strncpy (_erstring, "argv_746", MAX_PATH);break;
			case argv_756			:  strncpy (_erstring, "argv_756", MAX_PATH);		break;
			case argv_748				:  strncpy (_erstring, "argv_748", MAX_PATH);			break;
			case argv_744		:  strncpy (_erstring, "argv_744", MAX_PATH);	break;
			case argv_743				:  strncpy (_erstring, "argv_743", MAX_PATH);			break;

			default: argv_1131 (_ercode, _erstring);
		}
		_erstring[MAX_PATH - 1] = '\0';
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-
// @@
// @@ FUNCTION		:	argv_3924		
// @@
// @@ INPUT			:
// @@ _type: argv_4883: argv_4860 of the plugin whose associated readable argv_3557
// @@              is to be retrieved.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ string: the readable argv_3557 associated argv_5011 the plugin whose argv_4860
// @@ was given as a parameter.
// @@	
// @@ DISCLOSURE	:	-
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to lookup the readable plugin argv_3557
// @@ associated argv_5011 the plugin argv_4860 passed as a parameter.
// @@ The argv_4406 is returned as a std::string.
// @@
// @@ Notice that if the parameter '_type' is not a valid plugin
// @@ argv_4860, then "<UNDEFINED_PLUGIN_TYPE>" is returned.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
std::string argv_3924 (argv_4883 _type) {
	switch (_type) {
		case argv_3927:				return ("argv_3927");
		case argv_3926:	return ("argv_3926");	
		case argv_3925:			return ("argv_3925");
		case argv_3928:					return ("argv_3928");
		case argv_3930:				return ("argv_3930");
		case argv_3929:					return ("argv_3929");

		default: return "<UNDEFINED_PLUGIN_TYPE>";		
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1424
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

