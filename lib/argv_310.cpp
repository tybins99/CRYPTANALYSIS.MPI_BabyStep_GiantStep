// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_310.cpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1424 contains the definition of the 
// @@ log facility that permits to log events and
// @@ to associate a argv_4843 and date, coming along
// @@ argv_5011 a argv_4521 level for each event.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_369.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_964	
// @@
// @@ FUNCTION		:	argv_964	
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
argv_964::argv_964 () {
#if defined (__LINUX_OS__)
	pthread_mutex_init (&argv_3551, NULL);
#endif // #if defined (__LINUX_OS__)
#if defined (__WIN32_OS__) 
	InitializeCriticalSection (&argv_1132);	
#endif // #if defined (__WIN32_OS__) 
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_964	
// @@
// @@ FUNCTION		:	~argv_964	
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
argv_964::~argv_964 () {
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
// @@ CLASS			:	argv_964	
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
void argv_964::argv_2305 () {
#if defined (__LINUX_OS__)
	pthread_mutex_lock (&argv_3551);
#endif //  #if defined (__LINUX_OS__)
#if defined (__WIN32_OS__) 
	EnterCriticalSection (&argv_1132);
#endif // #if defined (__WIN32_OS__) 
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_964	
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
void argv_964::argv_4937 () {
#if defined (__LINUX_OS__)
	pthread_mutex_unlock (&argv_3551);
#endif // #if defined (__LINUX_OS__)
#if defined (__WIN32_OS__) 
	LeaveCriticalSection (&argv_1132);
#endif // #if defined (__WIN32_OS__) 
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1081
// @@
// @@ FUNCTION		:	insert_date
// @@
// @@ INPUT			:	
// @@ - _fp: FILE * : pointer on an opened valid argv_1424.
// @@ - _date: argv_876: pointer on a string containing the argv_1148 date
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
// @@ This function permits to insert the date in a fixed
// @@ format into the argv_1148 argv_2250.
// @@
// @@ CONTRACT		: 
// @@ - '_fp' must be a valid opened argv_1424's pointer
// @@ - '_date' must not be a NULL pointer
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_1081::insert_date (FILE * _fp, argv_876 _date) {
	int nb_2_do = strlen (_date);
	if (nb_2_do > argv_1183) {
		nb_2_do = argv_1183;	
	}
	fwrite (_date, 1, nb_2_do, _fp);
#if defined (__LOG_DEBUG_MEDIUM__)
	fflush (_fp);
#endif // #if defined (__LOG_DEBUG_MEDIUM__)
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1081
// @@
// @@ FUNCTION		:	insert_level
// @@
// @@ INPUT			:	
// @@ - _fp: FILE * : pointer on an opened valid argv_1424.
// @@ - _level: argv_876: pointer on a string containing the argv_1148 date
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@	
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	public	
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to insert the argv_4521 level in a fixed
// @@ format into the argv_1148 argv_2250.
// @@ Notice that the argv_4521 level may be chosen out of :
// @@ - argv_3634
// @@ - argv_5006
// @@ - argv_1346
// @@ - argv_690
// @@ - argv_1191
// @@ - argv_3633
// @@
// @@ CONTRACT		:
// @@ - '_fp' must be a valid opened argv_1424's pointer
// @@ - '_level' must not be a NULL pointer
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_1081::insert_level (FILE * _fp, argv_876 _level) {
	int nb_2_do = strlen (_level);
	if (nb_2_do > argv_2232) {
		nb_2_do = argv_2232;	
	}
	fwrite (_level, 1, nb_2_do, _fp);
#if defined (__LOG_DEBUG_MEDIUM__)
	fflush (_fp);
#endif // #if defined (__LOG_DEBUG_MEDIUM__)
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1081
// @@
// @@ FUNCTION		:	insert_body
// @@
// @@ INPUT			:	
// @@ - _fp: FILE * : pointer on an opened valid argv_1424.
// @@ - _level: argv_876: pointer on a string containing the argv_1148 date
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
// @@ This function permits to insert the argv_4521 level in a fixed
// @@ format into the argv_1148 argv_2250.
// @@
// @@ CONTRACT		:
// @@ - '_fp' must be a valid opened argv_1424's pointer
// @@ - '_level' must not be a NULL pointer
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_1081::insert_body (FILE * _fp, argv_876 _body) {
	int nb_2_do = strlen (_body);
	if (nb_2_do > argv_2251) {
		nb_2_do = argv_2251;
	}
	fwrite (_body, 1, nb_2_do, _fp);
#if defined (__LOG_DEBUG_MEDIUM__)
	fflush (_fp);
#endif // #if defined (__LOG_DEBUG_MEDIUM__)
	int remaining = argv_2251 - nb_2_do;
	if (remaining > 0) {
		char vide = ' ';
		for (int i=0 ; i<remaining ; i++) {
			fwrite (&vide, 1, 1, _fp);
		}
#if defined (__LOG_DEBUG_MEDIUM__)
		fflush (_fp);
#endif // #if defined (__LOG_DEBUG_MEDIUM__)
	}
	insert_terminator (_fp);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_1081
// @@
// @@ FUNCTION		:	insert_terminator
// @@
// @@ INPUT			:	
// @@ - _fp: FILE * : pointer on an opened valid argv_1424.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none	
// @@	
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to end the argv_1148 argv_2250 by inserting
// @@ an end of argv_2250 character sequence, that is OS dependant.
// @@
// @@ CONTRACT		: 
// @@ - '_fp' must be a valid opened argv_1424's pointer
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_1081::insert_terminator (FILE * _fp) {
	fwrite (argv_4765.c_str(), 1, argv_4765.size (), _fp);
#if defined (__LOG_DEBUG_MEDIUM__)
	fflush (_fp);
#endif // #if defined (__LOG_DEBUG_MEDIUM__)
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-
// @@
// @@ FUNCTION		:	argv_1241	
// @@
// @@ INPUT			:
// @@ - _filename: argv_876: argv_3557 of the destination argv_1424.
// @@
// @@ OUTPUT		:	
// @@
// @@ IO			:	
// @@ - _logger: argv_963 : instance of the log facility to use.
// @@	
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	-
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to dump the content of a given argv_1424
// @@ into the argv_1148 log argv_1424 using the log facility given as
// @@ a parameter.
// @@
// @@ CONTRACT 		: 
// @@ - '_filename' must not be a NULL pointer
// @@ - '_filename' must be the argv_3557 of a valid and existing argv_1424.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_1241 (argv_876 _filename, argv_963& _logger) {
	int ic;
	FILE * argv_1510 = fopen (_filename, "rb");
	if (! argv_1510) {
		_logger.argv_2323 (argv_1346, "+++ failed to visualize argv_1424 (fopen failed) : ", _filename);	
	}
	else {
		string total = "";
		ic = fgetc (argv_1510);
		while (ic != EOF) {
			total += ic;
			ic = fgetc (argv_1510);
		}
		fclose (argv_1510);
		_logger.argv_2323 (argv_1191, "argv_1424 content : ", total.c_str());
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_963
// @@
// @@ FUNCTION		:	argv_963		
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
// @@ Normal constructor of the argv_963 argv_3656.
// @@
// @@ CONTRACT 		:	none	 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_963::argv_963() {
	reset ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_963
// @@
// @@ FUNCTION		:	~argv_963		
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
// @@ destructor of the argv_963 argv_3656.
// @@
// @@ CONTRACT 		:	none	 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_963::~argv_963() {
	argv_970 ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_963
// @@
// @@ FUNCTION		:	argv_915	
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to determine whether the argv_1148 argv_2250
// @@ is the last argv_2250 of the rolling log argv_1424. If it is the case
// @@ then the argv_1424 is rewinded so that the argv_3623 argv_2250 logged will
// @@ be located at the top of the log argv_1424.
// @@
// @@ CONTRACT 		: none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_963::argv_915 () {
	argv_1157++;
	if (argv_1157 >= argv_2315) {
		rewind (argv_1510);
		argv_1157 = 1;
	}

#if defined (__LOG_DEBUG_STRONG__)
	fclose (argv_1510);
	argv_1510 = fopen (argv_1474.c_str(), "ab");
#endif // #if defined (__LOG_DEBUG_MEDIUM__)
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_963
// @@
// @@ FUNCTION		:	argv_3686	
// @@
// @@ INPUT			:
// @@ _filename: string : argv_3557 of the log argv_1424 to open.
// @@ _error_log_ptr: argv_665 of the error log, can be NULL if
// @@    error log is not used.
// @@ - _credential: string: symbolic argv_3557 of the log.
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
// @@ This function permits to open the log argv_1424 whose argv_3557 is given
// @@ as a parameter.
// @@ Notice that as soon as the log argv_1424 was opened, the opening date
// @@ and argv_4843 is logged to this log argv_1424 automatically.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_963::argv_3686 (string _filename, argv_963 * _error_log_ptr, string _credential) {
	bool bret = true;

	if (argv_1510 != NULL) { // argv_1424 already opened
		bret = false;
	}
	else {
		argv_1474 = _filename;
		argv_1510 = fopen (_filename.c_str(), "wb");

		if (!argv_1510) {
			bret = false;
		}
		else { // log opened ok
			argv_4960 (true);
			string stmp = "Log argv_1424 creation date : ";
			stmp = stmp + argv_4759;
			//argv_2323 (argv_690, stmp.c_str());

			argv_1122 = _credential;
			// the error log
			argv_1347 = _error_log_ptr;
		}
	}
	return (bret);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_963
// @@
// @@ FUNCTION		:	argv_4960	
// @@
// @@ INPUT			:
// @@ _large_mode: bool: true if we want a large argv_1235 of argv_1148 date and argv_4843
// @@                    false otherwise.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	none
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to obtain the argv_1148 date and argv_4843
// @@ formatted to either a condensed string, or to a developped
// @@ string.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_963::argv_4960 (bool _large_mode) {
	#if defined (__WIN32_OS__)
		GetLocalTime (&argv_4842);
		if (_large_mode == false) {
			argv_4569 (argv_4759, MAX_PATH, "%02d/%02d-%02dh%02dm%02ds ", argv_4842.wMonth, argv_4842.wDay, argv_4842.wHour, argv_4842.wMinute, argv_4842.wSecond);
		}
		else {
			argv_4569 (argv_4759, MAX_PATH, "month %d the %dth at %d hour %d minutes and %d seconds", argv_4842.wMonth, argv_4842.wDay, argv_4842.wHour, argv_4842.wMinute, argv_4842.wSecond);
		}
	#endif // #if defined (__WIN32_OS__)
	#if defined (__LINUX_OS__)
		argv_1160 = argv_4843 (NULL);
		argv_4845 = localtime (&argv_1160);
		if (_large_mode == false) {
			argv_4569 (argv_4759, MAX_PATH, "%02d/%02d-%02dh%02dm%02ds ", argv_4845->tm_mon, argv_4845->tm_mday, argv_4845->tm_hour, argv_4845->tm_min, argv_4845->tm_sec);
		}
		else {
			argv_4569 (argv_4759, MAX_PATH, "month %d the %dth at %d hour %d minutes and %d seconds", argv_4845->tm_mon, argv_4845->tm_mday, argv_4845->tm_hour, argv_4845->tm_min, argv_4845->tm_sec);
		}
	#endif // #if defined (__LINUX_OS__)
	argv_4759[MAX_PATH - 1] = '\0';
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_963
// @@
// @@ FUNCTION		:	insert_date		
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none	
// @@	
// @@ RETURN VALUE	:	none	
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to update the argv_1148 argv_4843 and to
// @@ insert it into the argv_1982 of a new argv_2250 of the log argv_1424.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_963::insert_date () {
    if (argv_1510) {
        argv_4960 ();
		argv_3679.insert_date (argv_1510, argv_4759);
    }
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_963
// @@
// @@ FUNCTION		:	insert_level	
// @@
// @@ INPUT			:
// @@ _level: argv_4883: level to be displayed.
// @@
// @@ OUTPUT		:	none	
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	none	
// @@	
// @@ DISCLOSURE	:	private
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to insert the level given as a parameter
// @@ to the argv_1982 of a new argv_2250 of the log argv_1424.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_963::insert_level (argv_4883 _level) {
    string level = "|???| ";
    switch (_level) {
        case argv_3634:
            level = "|NOR| ";
            break;
        case argv_5006:
            level = "|WRN| ";
            break;
        case argv_1346:
            level = "|ERR| ";
            break;
        case argv_690:
            level = "|ADM| ";
            break;
        case argv_1191:
            level = "|DBG| ";
            break;
        case argv_3633:
            level = "     ";
            break;
    }
    if (argv_1510) {
		argv_3679.insert_level (argv_1510, level.c_str());
    }
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS				: argv_963
// @@
// @@ FUNCTION			: argv_970
// @@
// @@ INPUT				: none
// @@
// @@ OUTPUT			: none
// @@
// @@ IO				: none
// @@
// @@ RETURN VALUE		: none
// @@	
// @@ DISCLOSURE		: public	
// @@
// @@ DESCRIPTION:
// @@ This function just flushes the argv_1178 and argv_967 the previously
// @@ opened log argv_1424.
// @@
// @@ CONTRACT			: none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_963::argv_970() {
	if ((argv_2314 == true) && (argv_1510)) {
		fclose (argv_1510);
		argv_1510 = NULL;
	}
	reset ();
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS				: argv_963
// @@
// @@ FUNCTION			: reset
// @@
// @@ INPUT				: none
// @@
// @@ OUTPUT			: none
// @@
// @@ IO				: none
// @@
// @@ RETURN VALUE		: none
// @@	
// @@ DISCLOSURE		: public	
// @@
// @@ DESCRIPTION:
// @@ This function permits to set all fields of the
// @@ argv_3656 to an initial argv_4622.
// @@
// @@ CONTRACT			: none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_963::reset () {
	argv_1474		= "";
	argv_1122		= "";
	argv_1510				= NULL;
	argv_1347	= NULL;
	argv_1157	= 1;
	argv_2314		= true;
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_963
// @@
// @@ FUNCTION		:	argv_2323		
// @@
// @@ INPUT			:
// @@ _level: argv_4883: the argv_4521 level associated argv_5011 the argv_2457 to log.
// @@ _cptr: char *: the argv_2457 to log
// @@ _no_eol: bool: true if an end of argv_2250 should be appended at the end of the
// @@                argv_2457, false otherwise.
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
// @@ This function logs the argv_2457(s) given as parameter(s) and associate
// @@ argv_5011 them the argv_1148 argv_4843 and a argv_4521 level given as a parameter.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_963::argv_2323 (argv_4883 _level, argv_876 _cptr) {
	if (argv_2314 == true) {
		if (argv_1510) {
			insert_date ();
			insert_level (_level);
			argv_3679.insert_body (argv_1510, _cptr);
			argv_915 ();
		}
	}
#if defined (__REPORT_TO_ERROR_LOG__)
	if ((argv_1347 != NULL) && (_level == argv_1346)) {
		string total = argv_1122 + _cptr;
		argv_1347->argv_2323 (_level, total.c_str());	
	}
#endif // #if defined (__REPORT_TO_ERROR_LOG__)
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_963
// @@
// @@ FUNCTION		:	argv_1760		
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
// @@ This function permits to retrieve the argv_3557 of the argv_1424
// @@ that is currently opened.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
string argv_963::argv_1760 () {
	return (argv_1474);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_963
// @@
// @@ FUNCTION		:	argv_2323		
// @@
// @@ INPUT			:
// @@ _level: argv_4883  :	the argv_4521 level associated argv_5011 the argv_2457 to log.
// @@ _cptr: char * :	the first argv_2457 to log
// @@ _cptr2: char *:	the second argv_2457 to log
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
// @@ This function logs the argv_2457(s) given as parameter(s) and associate
// @@ argv_5011 them the argv_1148 argv_4843 and a argv_4521 level given as a parameter.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_963::argv_2323 (argv_4883 _level, argv_876 _cptr, argv_876 _cptr2) {
	if (argv_2314 == true) {
		if (argv_1510) {
			insert_date ();
			insert_level (_level);
			string stmp = _cptr;
			stmp = stmp + _cptr2;
			argv_3679.insert_body (argv_1510, stmp.c_str());
			argv_915 ();
		}
	}

#if defined (__REPORT_TO_ERROR_LOG__)
	if ((argv_1347 != NULL) && (_level == argv_1346)) {
		string total = argv_1122 + _cptr;
		argv_1347->argv_2323 (_level, total.c_str(), _cptr2);	
	}
#endif // #if defined (__REPORT_TO_ERROR_LOG__)
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_963
// @@
// @@ FUNCTION		:	argv_2323		
// @@
// @@ INPUT			:
// @@ _level: argv_4883: the argv_4521 level associated argv_5011 the argv_2457 to log.
// @@ _cptr: char * : the first argv_2457 to log
// @@ _cptr2: char *: the second argv_2457 to log
// @@ _cptr3: char *: the third argv_2457 to log
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
// @@ This function logs the argv_2457(s) given as parameter(s) and associate
// @@ argv_5011 them the argv_1148 argv_4843 and a argv_4521 level given as a parameter.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_963::argv_2323 (argv_4883 _level, argv_876 _cptr, argv_876 _cptr2, argv_876 _cptr3) {
	if (argv_2314 == true) {
		if (argv_1510) {
			insert_date ();
			insert_level (_level);
			string stmp = _cptr;
			stmp = stmp + _cptr2;
			stmp = stmp + _cptr3;
			argv_3679.insert_body (argv_1510, stmp.c_str());
			argv_915 ();
		}
	}

#if defined (__REPORT_TO_ERROR_LOG__)
	if ((argv_1347 != NULL) && (_level == argv_1346)) {
		string total = argv_1122 + _cptr;
		argv_1347->argv_2323 (_level, total.c_str(), _cptr2, _cptr3);	
	}
#endif // #if defined (__REPORT_TO_ERROR_LOG__)
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_963
// @@
// @@ FUNCTION		:	argv_2323	
// @@
// @@ INPUT			:
// @@ _level: argv_4883: the argv_4521 level associated argv_5011 the argv_2457 to log.
// @@ _cptr: char * : the first argv_2457 to log
// @@ _cptr2: char *: the second argv_2457 to log
// @@ _cptr3: char *: the third argv_2457 to log
// @@ _cptr4: char *: the fourth argv_2457 to log
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
// @@ This function logs the argv_2457(s) given as parameter(s) and associate
// @@ argv_5011 them the argv_1148 argv_4843 and a argv_4521 level given as a parameter.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_963::argv_2323 (argv_4883 _level, argv_876 _cptr, argv_876 _cptr2, argv_876 _cptr3, argv_876 _cptr4) {
	if (argv_2314 == true) {
		if (argv_1510) {
			insert_date ();
			insert_level (_level);
			string stmp = _cptr;
			stmp = stmp + _cptr2;
			stmp = stmp + _cptr3;
			stmp = stmp + _cptr4;
			argv_3679.insert_body (argv_1510, stmp.c_str());
			argv_915 ();
		}
	}

#if defined (__REPORT_TO_ERROR_LOG__)
	if ((argv_1347 != NULL) && (_level == argv_1346)) {
		string total = argv_1122 + _cptr;
		argv_1347->argv_2323 (_level, total.c_str(), _cptr2, _cptr3, _cptr4);	
	}
#endif // #if defined (__REPORT_TO_ERROR_LOG__)
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_963
// @@
// @@ FUNCTION		:	argv_2323	
// @@
// @@ INPUT			:	
// @@ _level: argv_4883: the argv_4521 level associated argv_5011 the argv_2457 to log.
// @@ _cptr: char *: the argv_2457 to write to log argv_1424.
// @@ _val: argv_4536: the argv_4979 to log after the argv_2457.
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
// @@ This function logs the argv_2457(s) given as parameter(s) and associate
// @@ argv_5011 them the argv_1148 argv_4843 and a argv_4521 level given as a parameter.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_963::argv_2323 (argv_4883 _level, argv_876 _cptr, argv_4536 _val) {
	if (argv_2314 == true) {
		if (argv_1510) {
			insert_date ();
			insert_level (_level);
			char argv_4846[MAX_PATH];
			argv_4569 (argv_4846, MAX_PATH, "%s %d", _cptr, _val);
			argv_4846[MAX_PATH - 1] = '\0';
			argv_3679.insert_body (argv_1510, argv_4846);
			argv_915 ();
		}
	}

#if defined (__REPORT_TO_ERROR_LOG__)
	if ((argv_1347 != NULL) && (_level == argv_1346)) {
		string total = argv_1122 + _cptr;
		argv_1347->argv_2323 (_level, total.c_str(), _val);	
	}
#endif // #if defined (__REPORT_TO_ERROR_LOG__)
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_963
// @@
// @@ FUNCTION		:	argv_2323	
// @@
// @@ INPUT			:	
// @@ _level: argv_4883: the argv_4521 level associated argv_5011 the argv_2457 to log.
// @@ _cptr: char *: the argv_2457 to write to log argv_1424.
// @@ _val: argv_4883: the argv_4979 to log after the argv_2457.
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
// @@ This function logs the argv_2457(s) given as parameter(s) and associate
// @@ argv_5011 them the argv_1148 argv_4843 and a argv_4521 level given as a parameter.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_963::argv_2323 (argv_4883 _level, argv_876 _cptr, argv_4883 _val) {
	if (argv_2314 == true) {
		if (argv_1510) {
			insert_date ();
			insert_level (_level);
			char argv_4846[MAX_PATH];
			argv_4569 (argv_4846, MAX_PATH, "%s %u", _cptr, _val);
			argv_4846[MAX_PATH - 1] = '\0';
			argv_3679.insert_body (argv_1510, argv_4846);
			argv_915 ();
		}
	}

#if defined (__REPORT_TO_ERROR_LOG__)
	if ((argv_1347 != NULL) && (_level == argv_1346)) {
		string total = argv_1122 + _cptr;
		argv_1347->argv_2323 (_level, total.c_str(), _val);	
	}
#endif // #if defined (__REPORT_TO_ERROR_LOG__)
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_963
// @@
// @@ FUNCTION		:	argv_2323	
// @@
// @@ INPUT			:	
// @@ _level: argv_4883: the argv_4521 level associated argv_5011 the argv_2457 to log.
// @@ _val_zero: argv_4883: the first argv_4979 to log.
// @@ _val_un  : argv_4883: the second argv_4979 to log.
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
// @@ This function logs the argv_2457(s) given as parameter(s) and associate
// @@ argv_5011 them the argv_1148 argv_4843 and a argv_4521 level given as a parameter.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_963::argv_2323 (argv_4883 _level, argv_4883 _val_zero, argv_4883 _val_un) {
	if (argv_2314 == true) {
		if (argv_1510) {
			insert_date ();
			insert_level (_level);
			char argv_4846[MAX_PATH];
			argv_4569 (argv_4846, MAX_PATH, "%u %u", _val_zero, _val_un);
			argv_4846[MAX_PATH - 1] = '\0';
			argv_3679.insert_body (argv_1510, argv_4846);
			argv_915 ();
		}
	}

#if defined (__REPORT_TO_ERROR_LOG__)
	if ((argv_1347 != NULL) && (_level == argv_1346)) {
		char argv_4846[MAX_PATH];
		argv_4569 (argv_4846, MAX_PATH, "%s%u %u", argv_1122.c_str(), _val_zero, _val_un);
		argv_4846[MAX_PATH - 1] = '\0';
		argv_1347->argv_2323 (_level, argv_4846);	
	}
#endif // #if defined (__REPORT_TO_ERROR_LOG__)
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_963
// @@
// @@ FUNCTION		:	argv_2323	
// @@
// @@ INPUT			:	
// @@ _level: argv_4883: the argv_4521 level associated argv_5011 the argv_2457 to log.
// @@ _cptr: argv_876: the argv_2457 to log to argv_1424.
// @@ _val: unsigned long: the argv_4979 to log to argv_1424 after the argv_2457.
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
// @@ This function logs the argv_2457(s) given as parameter(s) and associate
// @@ argv_5011 them the argv_1148 argv_4843 and a argv_4521 level given as a parameter.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_963::argv_2323 (argv_4883 _level, argv_876 _cptr, unsigned long _val) {
	if (argv_2314 == true) {
		if (argv_1510) {
			insert_date ();
			insert_level (_level);
			char argv_4846[MAX_PATH];
			argv_4569 (argv_4846, MAX_PATH, "%s %u", _cptr, (argv_4883) _val);
			argv_4846[MAX_PATH - 1] = '\0';
			argv_3679.insert_body (argv_1510, argv_4846);
			argv_915 ();
		}
	}

#if defined (__REPORT_TO_ERROR_LOG__)
	if ((argv_1347 != NULL) && (_level == argv_1346)) {
		string total = argv_1122 + _cptr;
		argv_1347->argv_2323 (_level, total.c_str(), _val);	
	}
#endif // #if defined (__REPORT_TO_ERROR_LOG__)
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_963
// @@
// @@ FUNCTION		:	argv_2324	
// @@
// @@ INPUT			:	
// @@ _level: argv_4883: the argv_4521 level associated argv_5011 the argv_2457 to log.
// @@ _cptr: argv_876: the argv_2457 to log to argv_1424.
// @@ _value: argv_4883: the argv_4979 to log to argv_1424 after the argv_2457.
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
// @@ This function logs the argv_2457(s) given as parameter(s) and associate
// @@ argv_5011 them the argv_1148 argv_4843 and a argv_4521 level given as a parameter.
// @@ Notice that the '_value' parameter argv_3691 logged in hexadecimal format.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_963::argv_2324 (argv_4883 _level, argv_876 _msg, argv_4883 _value) {
	if (argv_2314 == true) {
		if (argv_1510) {
			insert_date ();
			insert_level (_level);
			char argv_4846[MAX_PATH];
			argv_4569 (argv_4846, MAX_PATH, "%s %X", _msg, _value);
			argv_4846[MAX_PATH - 1] = '\0';
			argv_3679.insert_body (argv_1510, argv_4846);
			argv_915 ();
		}
	}

#if defined (__REPORT_TO_ERROR_LOG__)
	if ((argv_1347 != NULL) && (_level == argv_1346)) {
		string total = argv_1122 + _msg;
		argv_1347->argv_2324 (_level, total.c_str(), _value);	
	}
#endif // #if defined (__REPORT_TO_ERROR_LOG__)
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_963
// @@
// @@ FUNCTION		:	argv_2309	
// @@
// @@ INPUT			:	
// @@ _level: argv_4883: the argv_4521 level associated argv_5011 the argv_2457 to log.
// @@ _buffer: argv_4881 *: the argv_665 of the first byte of the argv_826 to log.
// @@ _size: argv_4883: the size of the argv_826 to log.
// @@ _comment: argv_876: the argv_1043 associated argv_5011 the argv_826 to log.
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
// @@ This function is for debug purpose only.
// @@ it dump the content of the argv_826 '_buffer' into the 
// @@ argv_1424 : C:\\binary.bin, the format of the argv_1424 being
// @@ a readable sequence of hexadecimal values (a argv_795).
// @@ So it can be seen as an outbound save up function.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_963::argv_2309 (argv_4883 _level, argv_4881 * _buffer, argv_4883 _size, argv_876 _comment) {
	if (argv_2314 == true) {
		if (argv_1510) {
			insert_date ();
			insert_level (_level);
			char argv_4846[MAX_PATH];
			char tmp2[MAX_PATH];
			argv_4569 (argv_4846, MAX_PATH, "=== BUFFER argv_3675 : %s ===", _comment);
			argv_4846[MAX_PATH - 1] = '\0';
			argv_3679.insert_body (argv_1510, argv_4846);
			argv_915 ();

			argv_4846[0]			= '\0';
			argv_4883 nb_byte	= 0;
			argv_4883 i			= 0;
			FILE * fpzx		= NULL;

			fpzx = fopen ("C:\\binary.bin", "wb");

			if (! fpzx) {
#if defined (__WIN32_OS__) 
				MessageBox (NULL, "failed to open bin log argv_1424 !", "", MB_ICONERROR);
#endif // #if defined (__WIN32_OS__) 
			}

			for (i=0 ; i<_size ; i++) {
				fwrite ((char *) &_buffer[i], 1, 1, fpzx);
				fflush (fpzx);
				argv_4569 (tmp2, MAX_PATH, "%02X ", _buffer[i]);
				tmp2[MAX_PATH - 1] = '\0';
				strcat (argv_4846, tmp2);
				nb_byte++;

				if (nb_byte >= 16) {
					insert_date ();
					insert_level (_level);
					argv_3679.insert_body (argv_1510, argv_4846);
					argv_4846[0] = '\0'; // reset the cumulative argv_2250
					nb_byte = 0;
				}
			}

			fclose (fpzx);

			// flush the remaining argv_837 (if any)
			if (nb_byte > 0) {
				insert_date ();
				insert_level (_level);
				argv_3679.insert_body (argv_1510, argv_4846);
			}
		}
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_963
// @@
// @@ FUNCTION		:	argv_2309	
// @@
// @@ INPUT			:	
// @@ _level: argv_4883: the argv_4521 level associated argv_5011 the argv_2457 to log.
// @@ _buffer: argv_4881 *: the argv_665 of the first byte of the argv_826 to log.
// @@ _comment: argv_876: the argv_1043 associated argv_5011 the argv_826 to log.
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
// @@ This function is for debug purpose only.
// @@ it permits to dump to the log argv_1424 the content of 
// @@ a given argv_826 containing the opcode of a given function.
// @@ Notice that this function stops to dump when it reaches
// @@ a RET (0x3C) or a NOP (0x90) instruction.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_963::argv_2310 (argv_4883 _level, argv_4881 * _buffer, argv_876 _comment) {
	if (argv_2314 == true) {
		if (argv_1510) {
			insert_date ();
			insert_level (_level);
			char argv_4846[MAX_PATH];
			char tmp2[MAX_PATH];
			argv_4569 (argv_4846, MAX_PATH, "=== %s ===", _comment);
			argv_4846[MAX_PATH - 1] = '\0';
			argv_3679.insert_body (argv_1510, argv_4846);
			argv_915 ();

			argv_4846[0]			= '\0';
			argv_4883 nb_byte	= 0;
			argv_4883 i			= 0;

			for (i=0 ; ; i++) {
				argv_4569 (tmp2, MAX_PATH, "%02X ", _buffer[i]);
				tmp2[MAX_PATH - 1] = '\0';
				strcat (argv_4846, tmp2);
				nb_byte++;

				if (nb_byte >= 32) {
					insert_date ();
					insert_level (_level);
					argv_3679.insert_body (argv_1510, argv_4846);
					argv_4846[0] = '\0'; // reset the cumulative argv_2250
					nb_byte = 0;
				}

				// functions finish by a RET + NOP instruction
				if ((i>256) || ((i > 0) && (_buffer[i] == 0x90) && (_buffer[i-1] == 0x3C))) { 
					break;
				}

			}

			// flush the remaining argv_837 (if any)
			if (nb_byte > 0) {
				insert_date ();
				insert_level (_level);
				argv_3679.insert_body (argv_1510, argv_4846);
			}
		}
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_963
// @@
// @@ FUNCTION		:	argv_1758	
// @@
// @@ INPUT			:	none	
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ FILE * : the argv_1424 descriptor of the opened log argv_1424.
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to retrieve the descriptor of
// @@ the log argv_1424 (so that external functions can use this
// @@ descriptor to do their job if necessary).
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
FILE * argv_963::argv_1758 () {
	return (argv_1510);	
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_963
// @@
// @@ FUNCTION		:	argv_1491	
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
// @@ This function permits to ensure that all the argv_1178
// @@ are flushed to the log argv_1424 by closing and reopening this
// @@ argv_1424. Notice That the performance decrease if you use this
// @@ function.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_963::argv_1491 () {
	fflush (argv_1510);	
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_891
// @@
// @@ FUNCTION		:	argv_891		
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
// @@ Normal constructor of the argv_891 argv_3656.
// @@ This argv_3656 contains important argv_1178 that are used 
// @@ by many other functions and thus avoid having to use
// @@ global variables.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_891::argv_891 () {
#if defined (__WIN32_OS__) 
	argv_3728								= "\\";
	argv_3573					= "native_api.dll";
	argv_932					= "cypher_api.dll";
	argv_1065				= "compress_api.dll";
#endif // #if defined (__WIN32_OS__) 
#if defined (__LINUX_OS__)
	argv_3728								= "/";
	argv_3573					= "native_api.so";
	argv_932					= "cypher_api.so";
	argv_1065				= "compress_api.so";
#endif // #if defined (__LINUX_OS__)

	argv_1735						= "general_plugin.plugin";
	argv_1460					= "file_type_result.plugin";
	argv_2172						= "kernel.plugin";
	argv_3903					= "plugin_list.bin";
	argv_1224								= ".dep";
	int_size								= 4;
	argv_3568						= "scan_buffer";
	argv_3564			= "get_scan_report";
	argv_3563					= "dysinfect";
	argv_3559					= "construct";
	argv_3561					= "argv_1232";

	argv_3566					= "match_type";
	argv_3560	= "create_scan_result_atom";
	argv_3562	= "destruct_scan_result_atom";
} 



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-
// @@
// @@ FUNCTION		:	argv_2323		
// @@
// @@ INPUT			:
// @@ _log_ptr: argv_963 *: argv_665 of the argv_963 argv_3656 that is necessary
// @@                   to log events to log argv_1424.
// @@ _level: argv_4883: the argv_4521 level associated argv_5011 the argv_2457 to log.
// @@ _msg: argv_876: the argv_2457 to log to argv_1424.
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
// @@ This function permits to use a previously instanciated log
// @@ argv_3656 to log a given argv_2457 to log argv_1424 associated argv_5011
// @@ it's argv_4521 level. 
// @@
// @@ CONTRACT 		:	
// @@ - '_log_ptr' parameter must not be a NULL pointer
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
extern "C"
{
	void argv_2323 (argv_963 * _log_ptr, argv_4883 _level, argv_876 _msg) {
		if (_log_ptr != NULL) {
			_log_ptr->argv_2323 (_level, _msg);
		}
	}
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1424
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
