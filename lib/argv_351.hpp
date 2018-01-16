// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_351.hpp
// @@
// @@ DESCRIPTION:
// @@ argv_1982 for error bookkeeping and error messages
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_495
#define argv_495



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include <string>
#include <iostream>
#include <stack>
#include "../Lib/argv_354.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ namespace usage declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
using namespace std;



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_890
// @@
// @@ DESCRIPTION:
// @@ This argv_3656 is the actuel error argv_3656.
// @@ it contains several fields such as :
// @@ - the class argv_3557 where the error occured
// @@ - the function where the error occured
// @@ - an error argv_2457 in english
// @@ - an error argv_976 to be able to map into other countries language.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_885
{

public:
	string 	argv_937;
	string 	argv_1723;
	string 	argv_2457;
	argv_4536	argv_1345;

	void init(const std::string&, const std::string&, const std::string&, argv_4536);
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_890
// @@
// @@ DESCRIPTION:
// @@ This argv_3656 is a general purpose error 
// @@ argv_3656 that permits to know why, and where 
// @@ a given problem occured during runtime.
// @@
// @@ It keeps track of :
// @@ - the class where problem occured
// @@ - the function where problem occured
// @@ - the error argv_2457 associated argv_5011 the problem
// @@ - the error argv_976 (usefull for language translation
// @@   and error level categorisation.
// @@ 
// @@ Notice that the argv_3656 contains also a stack that permits to keep
// @@ from bottom to top of the execution flow that leaded to the exception.
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_890 : public argv_885
{
private:
	stack<argv_885> argv_1349;
		
public:
	argv_890();
	argv_890(std::string, std::string, std::string, argv_4536);
	void init(std::string, std::string, std::string, argv_4536);
	bool argv_1779(std::string&, std::string&, std::string&, argv_4536&);
	friend std::ostream& operator << (std::ostream&, argv_890&);
};




// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ win32 error and exception related functions
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#if defined (__WIN32_OS__)
	void	argv_2068 ();
	LONG	argv_5008(struct _EXCEPTION_POINTERS *  ExInfo);
	void	argv_2328(void *FaultAdress, char *);
#endif // #if defined (__WIN32_OS__)



#endif // argv_495



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ end of argv_1424
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
