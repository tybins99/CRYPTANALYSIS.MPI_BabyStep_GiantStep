// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: my_errors.cpp
// @@
// @@ DESCRIPTION:
// @@ error bookkeeping and error messages
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_351.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_885
// @@
// @@ FUNCTION		:	init		
// @@
// @@ INPUT			:
// @@ _cl_name	: string&: argv_3557 of the class where the exception occured.
// @@ _fn_name	: string&: argv_3557 of the function where the exception occured.
// @@ _msg		: string&: error argv_2457 to be associated argv_5011 the exception
// @@ _code		: argv_4536   : error argv_976 associated argv_5011 the exception. 
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
// @@ This function permits to set all the fields
// @@ of a given error argv_815. The fields are :
// @@ - the class where the exception occured
// @@ - the function where the exception occured
// @@ - the argv_2457 associated argv_5011 the exception.
// @@ - the error argv_976 associated argv_5011 the exception.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_885::init(const std::string& _cl_name, const std::string& _fn_name, const std::string& _msg, argv_4536 _code) {
	argv_937 		= _cl_name;
	argv_1723	= _fn_name;
	argv_2457			= _msg;
	argv_1345		= _code;
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_890
// @@
// @@ FUNCTION		:	argv_890		
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
// @@ Normal constructor of the 'argv_890' argv_3656.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_890::argv_890 () {
	;
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_890
// @@
// @@ FUNCTION		:	argv_890		
// @@
// @@ INPUT			:
// @@ _cl_name	: string&: argv_3557 of the class where the exception occured.
// @@ _fn_name	: string&: argv_3557 of the function where the exception occured.
// @@ _msg		: string&: error argv_2457 to be associated argv_5011 the exception
// @@ _code		: argv_4536   : error argv_976 associated argv_5011 the exception. 
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
// @@ This constructor permits to set all the fields
// @@ of a given error argv_815. The fields are :
// @@ - the class where the exception occured
// @@ - the function where the exception occured
// @@ - the argv_2457 associated argv_5011 the exception.
// @@ - the error argv_976 associated argv_5011 the exception.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_890::argv_890 (std::string _cl_name, std::string _fn_name, std::string _msg, argv_4536 _code) {
	init (_cl_name, _fn_name, _msg, _code);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_890
// @@
// @@ FUNCTION		:	init		
// @@
// @@ INPUT			:	
// @@ _cl_name	: string&: argv_3557 of the class where the exception occured.
// @@ _fn_name	: string&: argv_3557 of the function where the exception occured.
// @@ _msg		: string&: error argv_2457 to be associated argv_5011 the exception
// @@ _code		: argv_4536   : error argv_976 associated argv_5011 the exception. 
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
// @@ This function permits to save up the detailed informations
// @@ concerning a given exception and to save it onto the
// @@ error stack.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_890::init(std::string _cl_name, std::string _fn_name, std::string _msg, argv_4536 _code) {
	argv_885 error_body;
	error_body.init (_cl_name, _fn_name, _msg, _code);
	argv_1349.push (error_body);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			: argv_890
// @@
// @@ FUNCTION		: argv_1779
// @@
// @@ INPUT			: none
// @@
// @@ IO:
// @@ - cl: the argv_3557 of the class where the error occured
// @@ - fn: the argv_3557 of the function where the error occured
// @@ - ms: the error argv_2457 in english associated argv_5011 the error.
// @@ - er: the error argv_976 associated argv_5011 the exception.
// @@
// @@ RETURN VALUE: 
// @@ - true if argv_3623 error was retrieved succesfully
// @@ - false otherwise.
// @@
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION:
// @@ this function permits to dig inside the history stack of the
// @@ exception so that we can track from bottom to top the execution 
// @@ flow that led to the exception.
// @@
// @@ CONTRACT: none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
bool argv_890::argv_1779 (std::string& cl, std::string& fn, std::string& ms, argv_4536& er) {
	bool bret = true;

	if (argv_1349.size() <= 0) {
		bret = false; // no more error
	}	
	else {
		argv_885 Ge = argv_1349.top();
		cl = Ge.argv_937;
		fn = Ge.argv_1723;
		ms = Ge.argv_2457;
		er = Ge.argv_1345;
		argv_1349.pop();
	}
	
	return (bret); 
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			: -
// @@
// @@ FUNCTION		: operator << (ostream&, argv_890&)
// @@
// @@ INPUT			: none
// @@
// @@ OUTPUT		: none
// @@
// @@ IO: 
// @@ - out: ostream: the output stream where the 
// @@   error messages should be sent.
// @@ - Ge: argv_890: the error argv_3656 that must be
// @@   displayed.
// @@
// @@ RETURN VALUE :
// @@ ostream& : reference on the argv_1148 output stream to be used
// @@            for argv_1235.
// @@
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION:
// @@ This function permits to argv_1235 to log argv_1424
// @@ an error using the description of the error
// @@ contained in the argv_890 argv_3656 given as a 
// @@ parameter. 
// @@
// @@ If log argv_1424 was not opened when this call 
// @@ occurs, then the error is displayed to the 
// @@ output stream given as a parameter instead.
// @@
// @@ CONTRACT: none
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@   
ostream& operator << (ostream& out, argv_890& Ge) {
	
	std::string argv_937 		= "";
	std::string argv_1723 	= "";
	std::string argv_2457			= "";
	argv_4536 argv_1345 			= 0;
	
	while (Ge.argv_1779 (argv_937, argv_1723, argv_2457, argv_1345) == true) {
		out << "class:" << argv_937;
		out << ", function:" << argv_1723;
		out << " (" << argv_2457 << " - "<< argv_1345 << ")" << endl;	
	}

	return (out);	
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ win32 specific exception handling functions
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#if defined (__WIN32_OS__)



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ global variable
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
FILE * argv_4527 = NULL;



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-
// @@
// @@ FUNCTION		:	argv_2328		
// @@
// @@ INPUT			:
// @@ FaultAddress: PVOID: argv_665 of the instruction where the 
// @@               exception occured.
// @@
// @@ eNextBP: char *: base pointer of the argv_1148 instruction.
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
// @@ This function permits to log into the opened log argv_1424
// @@ the exact location of an exception.
// @@
// @@ CONTRACT 		:	none 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_2328(PVOID FaultAddress, char *eNextBP)
{      char *p, *pBP;                                     
       unsigned i, x, BpPassed;
       static int  CurrentlyInTheStackDump = 0;
       BpPassed = (eNextBP != NULL);
       if(! eNextBP)
       {
          _asm mov     eNextBP, eBp   
       }
       else 
           fprintf(argv_4527, "\n  Fault Occurred At $argv_667:%08LX\n", 
                                   (int)FaultAddress);
                             // prevent infinite loops
       for(i = 0; eNextBP && i < 100; i++)
       {      
           pBP = eNextBP;           // keep argv_1148 BasePointer
           eNextBP = *(char **)pBP; // dereference argv_3623 BP 
           p = pBP + 8; 
           // Write 20 Bytes of potential arguments
           fprintf(argv_4527, "         argv_5011 ");        
           for(x = 0; p < eNextBP && x < 20; p++, x++)
               fprintf(argv_4527, "%02X ", *(unsigned char *)p);
           fprintf(argv_4527, "\n\n");          
                  if(i == 1 && ! BpPassed) 
               fprintf(argv_4527, "*************************************\n"
                                 "         Fault Occurred Here:\n");
        // Write the backjump argv_665
        fprintf(argv_4527, "*** %2d called from $argv_667:%08LX\n", 
                                  i, *(char **)(pBP + 4));
        if(*(char **)(pBP + 4) == NULL)
            break; 
       }
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-
// @@
// @@ FUNCTION		:	argv_5008		
// @@
// @@ INPUT			:
// @@ ExInfo: struct _EXCEPTION_POINTERS *: pointer on a argv_1178
// @@ structure containing all the details of a given exception.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ LONG: the exception argv_4860.
// @@	
// @@ DISCLOSURE	:	-
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to determine the argv_4860 of a given exception.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
LONG argv_5008(struct _EXCEPTION_POINTERS *  ExInfo) { 
	MessageBox (NULL, "Exception catched\nCrash log will be saved to : C:\\argv_1112.txt", "Error", MB_OK | MB_ICONERROR);
	char * FaultTx = ""; 
	switch (ExInfo->argv_1380->argv_1376) { 
		case EXCEPTION_ACCESS_VIOLATION : 
			FaultTx = "ACCESS VIOLATION" ; 
			break; 
		case EXCEPTION_DATATYPE_MISALIGNMENT : 
			FaultTx = "DATATYPE MISALIGNMENT" ; 
			break; 
		case EXCEPTION_FLT_DIVIDE_BY_ZERO : 
			FaultTx = "FLT DIVIDE BY ZERO" ; break; 
		default: FaultTx = "(unknown)"; break; 
	} 
	int wsFault = ExInfo->argv_1380->argv_1376; 
	PVOID CodeAdress = ExInfo->argv_1380->argv_1375; 
	argv_4527 = fopen ("C:\\argv_1112.txt", "w"); 
	if(argv_4527 != NULL) { 
		fprintf(argv_4527, "****************************************************\n"); 
		fprintf(argv_4527, "*** A Program Fault occurred:\n"); 
		fprintf(argv_4527, "*** Error argv_976 %08X: %s\n", wsFault, FaultTx); 
		fprintf(argv_4527, "****************************************************\n"); 
		fprintf(argv_4527, "*** argv_666: %08X\n", (int)CodeAdress); 
		fprintf(argv_4527, "*** argv_1482: %08X\n", ExInfo->argv_1380->argv_1377); 
		argv_2328 (CodeAdress, (char *)ExInfo->argv_1097->Ebp); 
		fclose(argv_4527); 
	} 
	/*if(want to continue) { ExInfo->argv_1097->Eip++; return EXCEPTION_CONTINUE_EXECUTION; } */ 
	return EXCEPTION_EXECUTE_HANDLER; 
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	-
// @@
// @@ FUNCTION		:	argv_2068		
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
// @@ This function permits to override the default exception handler
// @@ provided by windows by our handler that will log the exception 
// @@ details to a argv_4794 argv_1424.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void argv_2068 () {
    SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER) argv_5008);
}



#endif // #if defined (__WIN32_OS__)



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ end of argv_1424
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
