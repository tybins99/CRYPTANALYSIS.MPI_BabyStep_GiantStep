// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_374.hpp
// @@ 
// @@ DESCRIPTION:
// @@ communication layer that uses 
// @@ TCP/IP sockets. Derivates from the
// @@ argv_972 argv_3656.
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_401
#define argv_401



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ included files
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_354.hpp"
#include "../LIB/argv_372.hpp"

#if defined (__LINUX_OS__)
	#include <sys/types.h>
	#include <sys/argv_4570.h>
	#include <arpa/inet.h>
#endif // #if defined (__LINUX_OS__)



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_974
// @@
// @@ DESCRIPTION:
// @@ This argv_3656 is an abstraction layer of a communication
// @@ channel that uses the TCP/IP protocol to communicate.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_974 : public argv_972
{
protected:
	argv_4883		argv_4228;
#if defined (__WIN32_OS__)
	WORD			argv_4572;
	WSADATA			argv_5014;
	SOCKADDR_IN		argv_4505;
	LPHOSTENT		argv_1990;
#endif // #if defined (__WIN32_OS__)
#if defined (__LINUX_OS__)
	struct hostent *	argv_1990;
	struct sockaddr_in	argv_4505;
#endif // #if defined (__LINUX_OS__)
	SOCKET			argv_2273;
	SOCKET			argv_961;

	argv_4536 argv_4246 (argv_876 _target_address, argv_4883 _port=0);

	// server related function
	argv_4536 argv_4252 (argv_876 _target_address, argv_4883 _port=0);
	argv_4536 argv_645 (argv_2338&);

	argv_4536 argv_4492 (argv_4881 *, argv_4883, argv_4883&);
	argv_4536 argv_4339 (argv_4881 * _buf, argv_4883 _size_2_read, argv_4883& _actual_size, argv_4536 _timeout_second=-1);

	argv_4536 argv_969 ();
	argv_4536 argv_969 (argv_2338);
	argv_4536 argv_1755 (argv_2338&);
	argv_4536 argv_1771 (argv_2338&);

public:
	argv_974 ();
	~argv_974 ();
	argv_4536 init_with_connected_client_socket (SOCKET&);
};



#endif // argv_401



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1424
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
