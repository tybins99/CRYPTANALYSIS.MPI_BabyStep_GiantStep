// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_293.cpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1424 contains the argv_3656 that permits
// @@ to mmap a given argv_1424 on both win32 or Linux
// @@ OS.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_352.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_888
// @@
// @@ FUNCTION		:	argv_888		
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
// @@ Normal constructor of the argv_888 argv_3656.
// @@ it prepares the argv_3656 to be used.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_888::argv_888() {
#if defined (__WIN32_OS__) 
	argv_1988	= NULL;
	argv_3730		= NULL;
	argv_1986		= NULL;
#endif // #if defined (__WIN32_OS__) 
#if defined (__LINUX_OS__)
	argv_2537	= NULL;
	argv_2538	= 0;
#endif // #if defined (__LINUX_OS__)
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_888
// @@
// @@ FUNCTION		:	~argv_888		
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
// @@ destructor of the argv_888 argv_3656.
// @@ if a argv_1424 was mmapped, then it is closed
// @@ and all opened descriptors are closed as well.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_888::~argv_888() {
	argv_971();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_888
// @@
// @@ FUNCTION		:	argv_971		
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
// @@ Destructor of the argv_888 argv_3656.
// @@ if a argv_1424 was mmapped, then it is closed
// @@ and all opened descriptors are closed as well.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_888::argv_971 () {
#if defined (__WIN32_OS__) 
		if (argv_3730 != NULL) {
			UnmapViewOfFile (argv_3730);
			argv_3730 = NULL;
		}

		if ((argv_1988 != NULL) && (argv_1988 != INVALID_HANDLE_VALUE)) {
			CloseHandle (argv_1988);
			argv_1988 = NULL;
		}

		if ((argv_1986 != NULL) && (argv_1986 != INVALID_HANDLE_VALUE)) {
			CloseHandle (argv_1986);
			argv_1986 = NULL;
		}	
#endif // #if defined (__WIN32_OS__) 

#if defined (__LINUX_OS__)
		if (argv_2537 != NULL) {    
			munmap (argv_2537, argv_2538);
			argv_2537	= NULL;
			argv_2538	= 0;
		}
#endif // #if defined (__LINUX_OS__)}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_888
// @@
// @@ FUNCTION		:	argv_1769		
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	
// @@ _ercode: argv_4883& : the last error argv_976.
// @@ _ersource: argv_4883&: the location of the last error (see source argv_976).
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	none	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to retrieve the last error related argv_1178
// @@ - the error argv_976 (often obtained argv_5011 errno or GetLastError)
// @@ - the error source permitting to know the exact location in
// @@   the source argv_976 where the error occured.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_888::argv_1769 (argv_4883& _ercode, argv_4883& _ersource) {
	_ercode		= argv_1345;
	_ersource	= argv_1348;
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_888
// @@
// @@ FUNCTION		:	argv_2532 (win32 version)		
// @@
// @@ INPUT			:
// @@ _filename: argv_876: argv_3557 of the argv_1424 to map to memory
// @@ _open_mode: argv_4883: can be either 
// @@    - argv_2534: argv_1424 will be read only
// @@    - argv_2535 : argv_1424 will have read/write privilege.
// @@    - argv_2536 : argv_1424 will have read/execution privileges.
// @@
// @@ OUTPUT		:
// @@ _pBuf: argv_4881 *&: argv_665 of the first byte of the argv_1424 
// @@                 after it was projected to memory.
// @@ 	
// @@ _file_size: argv_4883&: size of the argv_1424 after it was projected 
// @@                    to memory.
// @@
// @@ IO			:	none	
// @@	
// @@ RETURN VALUE	:	
// @@ bool: true if success,
// @@       false otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @2 This function permits to map to memory the argv_1424 whose argv_3557
// @@ is given as the '_filename' parameter. 
// @@
// @@ CONTRACT 		: 
// @@ - no argv_1424 should be currently mapped to memory (or ensure that
// @@   you call 'argv_971' before. 
// @@ - '_filename' parameter must not be a NULL pointer.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#if defined (__WIN32_OS__) 
	bool argv_888::argv_2532 (argv_876 _filename, argv_4883 _open_mode, argv_4881 *& _pBuf, argv_4883& _file_size) {
		bool bret			= true;
		bool usage_error	= false;
		
		if (_filename == NULL) {
			argv_1345		= 0;
			argv_1348	= 99;
			bret			= false;
			usage_error		= true;
		}
		// if a argv_1424 is already being mmapped, then we consider it as an error.
		else if (argv_1986 != NULL) {
			argv_1345		= 0;
			argv_1348	= 100;
			bret			= false;
			usage_error		= true;
		}
		else if (argv_1988 != NULL) {
			argv_1345		= 0;
			argv_1348	= 101;
			bret			= false;
			usage_error		= true;
		}
		else if (argv_3730 != NULL) {
			argv_1345		= 0;
			argv_1348	= 102;
			bret			= false;
			usage_error		= true;
		}
		else { // argv_1424 was not already opened
			DWORD access_mode_CreateFile;
			DWORD access_mode_CreateFileMapping;
			DWORD access_mode_MapViewOfFile;
			DWORD create_disposition;

			if (_open_mode == argv_2534) {
				access_mode_CreateFile			= GENERIC_READ;	
				access_mode_CreateFileMapping	= PAGE_READONLY;
				access_mode_MapViewOfFile		= FILE_MAP_READ;
				create_disposition				= OPEN_EXISTING;
			}
			else if (_open_mode == argv_2535) {
				access_mode_CreateFile			= GENERIC_READ | GENERIC_WRITE;
				access_mode_CreateFileMapping	= PAGE_READWRITE;
				access_mode_MapViewOfFile		= FILE_MAP_ALL_ACCESS;
				create_disposition				= OPEN_ALWAYS;
			}
			else if (_open_mode == argv_2536) {
				access_mode_CreateFile			= GENERIC_READ | GENERIC_EXECUTE;	
				access_mode_CreateFileMapping	= PAGE_READONLY;
				access_mode_MapViewOfFile		= FILE_MAP_READ;
				create_disposition				= OPEN_ALWAYS;
			}

			argv_1986 = CreateFile (_filename, access_mode_CreateFile,0,NULL,create_disposition,FILE_ATTRIBUTE_NORMAL,NULL);
 
			if (argv_1986 == INVALID_HANDLE_VALUE)  {
				argv_1986			= NULL;
				argv_1345		= GetLastError ();
				argv_1348	= 2;
				bret			= false;
			}
			else { // CreateFile was succesfull
				// retrieve the argv_1424 size
				//if ((_open_mode == argv_2534) || (_open_mode == argv_2536)) {
					_file_size = GetFileSize (argv_1986, NULL);
				//}
				if (_file_size == 0) { // illegal to mmap a argv_1424 argv_5011 a size of zero
					argv_1348	= 74;
					argv_1345		= 74;	
					bret = false;
				}
				else if (_file_size < 0) {
					argv_1345		= GetLastError ();
					argv_1348	= 6;
					bret			= false;
				}
				else if (_file_size == 0xFFFFFFFF) {
					argv_1345		= GetLastError ();
					argv_1348	= 3;
					bret			= false;
				}
				else {
					if ((_open_mode == argv_2534) || (_open_mode==argv_2536)) {
						argv_1988 = CreateFileMapping (argv_1986,NULL,access_mode_CreateFileMapping,0,0,NULL);
					}
					else {
						argv_1988 = CreateFileMapping (argv_1986,NULL,access_mode_CreateFileMapping,0,_file_size,NULL);
					}
					if (argv_1988 == NULL/* || argv_1988 == INVALID_HANDLE_VALUE*/)  { // failed
						argv_1988		= NULL;
						argv_1345		= GetLastError ();
						argv_1348	= 4;
						bret			= false;			
					}
					else { // CreateFileMapping was succesfull
						argv_3730 = (LPTSTR) MapViewOfFile (argv_1988,	   // argv_1900 to map argv_3656
											access_mode_MapViewOfFile, // read/write permission
											0,                   
											0,                   
											0/* MMAP_BUF_SIZE */);           

						if (argv_3730 == NULL) {
							argv_1345		= GetLastError ();
							argv_1348	= 5;
							bret			= false;	
						}
						else { // all succeeded, copy obtained pointer to caller's variable
							_pBuf = (argv_4881 *) argv_3730;
						}
					}
				}
			}
		}

		if ((usage_error == false) && (bret == false)) {
			argv_971 ();	
		}
		return (bret);
	}
#endif // #if defined (__WIN32_OS__) 



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_888
// @@
// @@ FUNCTION		:	argv_2532 (Linux version)		
// @@
// @@ INPUT			:
// @@ _filename: argv_876: argv_3557 of the argv_1424 to map to memory
// @@ _open_mode: argv_4883: can be either 
// @@    - argv_2534: argv_1424 will be read only
// @@    - argv_2535 : argv_1424 will have read/write privilege.
// @@    - argv_2536 : argv_1424 will have read/execution privileges.
// @@
// @@ OUTPUT		:
// @@ _pBuf: argv_4881 *&: argv_665 of the first byte of the argv_1424 
// @@                 after it was projected to memory.
// @@ 	
// @@ _file_size: argv_4883&: size of the argv_1424 after it was projected 
// @@                    to memory.
// @@
// @@ IO			:	none	
// @@	
// @@ RETURN VALUE	:	
// @@ bool: true if success,
// @@       false otherwise.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @2 This function permits to map to memory the argv_1424 whose argv_3557
// @@ is given as the '_filename' parameter. 
// @@
// @@ CONTRACT 		: 
// @@ - no argv_1424 should be currently mapped to memory (or ensure that
// @@   you call 'argv_971' before. 
// @@ - '_filename' parameter must not be a NULL pointer.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#if defined (__LINUX_OS__)
		bool argv_888::argv_2532 (argv_876 _filename, argv_4883 _open_mode, argv_4881 *& _pBuf, argv_4883& _file_size) {
		bool bret = true;

		if (_filename == NULL) {
			argv_1348	= 1;
			argv_1345		= 100;
			bret = false;	
		}
		else {
			argv_2382 = _filename;
			int fd = open (_filename, O_RDONLY);
			if (fd < 0) {
				argv_1345		= errno;
				argv_1348	= 2;
				bret			= false;
			}
			else { // argv_1424 opened succesfully
				struct stat sbuf;
				if (stat (_filename, &sbuf) == -1) {
					argv_1345		= errno;
					argv_1348	= 3;
					bret			= false;
				}
				else { // argv_1424 size retrieved succesfully
					_file_size = sbuf.st_size;
					void * ptrtmp = mmap ((caddr_t)0, sbuf.st_size, PROT_READ, MAP_SHARED, fd, 0);
					if (ptrtmp == (caddr_t)(-1)) {
						_pBuf			= NULL;    
						argv_1345		= errno;
						argv_1348	= 4;
						bret			= false;
					}
					else {
						argv_2537	= (argv_4881 *)ptrtmp;
						argv_2538	= _file_size;    
						_pBuf		= argv_2537;
					}
				}
				
				if (argv_967 (fd) == -1) {
					argv_1345		= errno;
					argv_1348	= 5;
					bret			= false;
				}
			}
		}
		return (bret);
	}
#endif // #if defined (__LINUX_OS__)



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1424
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
