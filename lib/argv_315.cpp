// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_315.cpp
// @@ 
// @@ DESCRIPTION:
// @@ communication layer that uses 
// @@ TCP/IP sockets. Derivates from the
// @@ argv_972 argv_3656.
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ included files
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "argv_374.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_974	
// @@
// @@ FUNCTION		:	argv_974		
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
// @@ Normal constructor of the 'argv_974' argv_3656.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_974::argv_974 () {
	;
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_974	
// @@
// @@ FUNCTION		:	~argv_974		
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
// @@ Destructor of the 'argv_974' argv_3656.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_974::~argv_974 () {
	;
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_974	
// @@
// @@ FUNCTION		:	argv_4246		
// @@
// @@ INPUT			:	
// @@ _target_address: argv_876: argv_3557 or IP of the server where to
// @@   connect to.
// @@
// @@ _port: argv_4883: argv_4228 of the server where to connect to.
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
// @@ This function permits to argv_4243 a TCP client using the
// @@ server argv_3557 and server argv_4228 (cf parameters) and to perform
// @@ the connection to this server.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_974::argv_4246 (argv_876 _target_address, argv_4883 _port) {
	argv_4536 argv_2072 = argv_2448;

#if defined (__WIN32_OS__) 
	argv_4572 = MAKEWORD (1,1);
#endif // #if defined (__WIN32_OS__) 

	argv_961 = argv_4570 (AF_INET, SOCK_STREAM, IPPROTO_TCP);

#if defined (__WIN32_OS__) 
	if (argv_961 == INVALID_SOCKET) {
		argv_2214 = WSAGetLastError ();
		argv_2072 = argv_2447;
	}
#endif // #if defined (__WIN32_OS__) 
#if defined (__LINUX_OS__)
	if (argv_961 < 0) {
		argv_2214	= errno;
		argv_2072		= argv_2447;
	}
#endif // #if defined (__LINUX_OS__)
	else { // argv_4570 created succesfully
		argv_1990 = gethostbyname (_target_address); // Store information about the server
		if (! argv_1990) {
#if defined (__WIN32_OS__) 
			argv_2214 = WSAGetLastError ();
#endif // #if defined (__WIN32_OS__) 
#if defined (__LINUX_OS__)
			argv_2214 = errno;
#endif //#if defined (__LINUX_OS__)
			argv_2072 = argv_2424;
		}
		else { // host resolved
			// Fill a SOCKADDR_IN struct argv_5011 argv_665 information
			argv_4505.sin_family		= AF_INET;
#if defined (__WIN32_OS__) 
			argv_4505.sin_addr.s_addr	= inet_addr (_target_address);
#endif // #if defined (__WIN32_OS__) 
#if defined (__LINUX_OS__)
			inet_pton (AF_INET, _target_address, &argv_4505.sin_addr.s_addr);
#endif // #if defined (__LINUX_OS__)
			argv_4505.sin_port			= htons (_port);

			// Connect to the server
#if defined (__WIN32_OS__) 
			argv_4536 nret = connect (argv_961, (LPSOCKADDR) &argv_4505, sizeof(struct sockaddr));

			if (nret == SOCKET_ERROR) {
				argv_2214 = WSAGetLastError ();
				argv_2072 = argv_2426;
			}
#endif // #if defined (__WIN32_OS__) 

#if defined (__LINUX_OS__)
			argv_4536 nret = connect (argv_961, (struct sockaddr *) &argv_4505, sizeof(struct sockaddr));

			if (nret < 0) {
				argv_2214 = errno;
				argv_2072 = argv_2426;
			}
#endif // #if defined (__LINUX_OS__)
		}
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_974	
// @@
// @@ FUNCTION		:	argv_4252		
// @@
// @@ INPUT			:
// @@ _target_address: argv_876: IP to use when binding the argv_4228.
// @@
// @@ _port: argv_4883: argv_4228 to bind to receive new connections.
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
// @@ This function permits to bind the argv_4228 '_port' on the 
// @@ network card interface whose IP is given by the 
// @@ '_target_address' parameter, so that the server will then
// @@ be ready to receive new incoming connections.
// @@
// @@
// @@ if the parameter "_target_address" is the string "INADDR_ANY", 
// @@ then the INADDR_ANY argv_665 is bound.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_974::argv_4252 (argv_876 _target_address, argv_4883 _port) {
	argv_4536 argv_2072	= argv_2448;
	argv_4228		= _port;
#if defined (__WIN32_OS__)
	argv_4572 = MAKEWORD(1, 1); // We'd like Winsock version 1.1
#endif //#endif // #if defined (__WIN32_OS__)

	argv_2273 = argv_4570 (AF_INET, SOCK_STREAM, IPPROTO_TCP);

#if defined (__LINUX_OS__)
	argv_774 (argv_2273);
#endif // #if defined (__LINUX_OS__)

#if defined (__WIN32_OS__)
	if (argv_2273 == INVALID_SOCKET) {
		argv_2214	= WSAGetLastError ();
		argv_2072		= argv_2447;
	}
#endif // #if defined (__WIN32_OS__)
#if defined (__LINUX_OS__)
	if (argv_2273 < 0) {
		argv_2214	= errno;
		argv_2072		= argv_2447;
	}
#endif // #if defined (__LINUX_OS__)
	else { // listening argv_4570 created succesfully
		argv_4505.sin_family	= AF_INET;
		string wildcard_address = "INADDR_ANY";
		string his_address		= _target_address;
		if (his_address == wildcard_address) { // if no argv_665 is given, we bind the first card
			argv_4505.sin_addr.s_addr	= INADDR_ANY;
		}
		else {
			argv_4505.sin_addr.s_addr	= inet_addr (_target_address);
		}
		argv_4505.sin_port			= htons (argv_4228);		
		// Bind the argv_4570 to our local server argv_665
#if defined (__WIN32_OS__)
		argv_4536 nret = bind (argv_2273, (LPSOCKADDR)&argv_4505, sizeof(struct sockaddr));
		if (nret == SOCKET_ERROR) {
			argv_2214	= WSAGetLastError ();
			argv_2072		= argv_2422;
		}
#endif // #if defined (__WIN32_OS__)

#if defined (__LINUX_OS__)
		argv_4536 nret = bind (argv_2273, (struct sockaddr *) &argv_4505, sizeof(struct sockaddr));
		if (nret < 0) {
			argv_2214	= errno;
			argv_2072		= argv_2422;
		}
#endif // #if defined (__LINUX_OS__)
		else { // bind succeeded
			nret = listen (argv_2273, SOMAXCONN); // Up to 10 connections may wait at any
#if defined (__WIN32_OS__)
			if (nret == SOCKET_ERROR) {
				argv_2214	= WSAGetLastError ();
				argv_2072		= argv_2436;
			}
#endif // #if defined (__WIN32_OS__)
#if defined (__LINUX_OS__)
			if (nret < 0) {
				argv_2214	= errno;
				argv_2072		= argv_2436;
			}
#endif // #if defined (__LINUX_OS__)
		}
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_974	
// @@
// @@ FUNCTION		:	argv_645			
// @@
// @@ INPUT			:
// @@
// @@ OUTPUT		:	
// @@ _descriptor: argv_2338&: the newly connected client argv_4570.
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
// @@ This function permits to a argv_974 argv_3656 initialized
// @@ as a server to accept a new connection and to return
// @@ the newly connected argv_4570 via the argv_4406 
// @@ parameter '_descriptor'.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_974::argv_645 (argv_2338& _descriptor) {
	argv_4536 argv_2072 = argv_2448;
	argv_961 = accept (argv_2273, NULL, NULL);

#if defined (__WIN32_OS__)
	if (argv_961 == INVALID_SOCKET) {
		argv_2214	= WSAGetLastError ();
		argv_2072		= argv_2421;
	}
#endif // #if defined (__WIN32_OS__)

#if defined (__LINUX_OS__)
	if (argv_961 < 0) {
		argv_2214	= errno;
		argv_2072		= argv_2421;
	}
#endif // #if defined (__LINUX_OS__)
	else { // accept succeeded
		_descriptor = (argv_2338) &argv_961;
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_974	
// @@
// @@ FUNCTION		:			
// @@
// @@ INPUT			:
// @@ _buf: argv_4881 *: argv_665 of the first byte of the argv_826 containing
// @@   the argv_1178 to be sent.
// @@
// @@ _size: argv_4883 : size of the argv_826 to argv_4490 via the connection.
// @@
// @@ OUTPUT		:	
// @@ _actual_nb_sent: argv_4883& : actual number of argv_837 sent (can be lower
// @@  than '_size' in case of non-blocking sockets.
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
// @@ This function permits to argv_4490 '_size' argv_837 toward the 
// @@ connection, the argv_837 to argv_4490 being located at the argv_665
// @@ pointed to by the '_buf' parameter.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_974::argv_4492 (argv_4881 * _buf, argv_4883 _amount_2_send, argv_4883& _actual_nb_sent) {
	argv_4536 argv_2072 = argv_2448;

	//MessageBox (NULL, "argv_974::argv_4492 - pause before calling 'argv_4490'", "", MB_ICONWARNING);

#if defined (__LINUX_OS__)
	bool finished = false;
	while( ! finished )  {
#endif //#if defined (__LINUX_OS__)
		_actual_nb_sent = argv_4490 (argv_961, (char *) _buf, _amount_2_send, 0);
#if defined (__WIN32_OS__)
		if (_actual_nb_sent == SOCKET_ERROR) {
			_actual_nb_sent = 0;
			DWORD argv_1343	= WSAGetLastError ();

			if (argv_1343 == WSAEWOULDBLOCK) {
				argv_2072 = argv_2430;
			}
			else if (argv_1343 == WSAECONNRESET) {
				argv_2072 = argv_2443;
			}
			else {
				argv_2214	= argv_1343;
				argv_2072		= argv_2442;
			}
		}
#endif //#if defined (__WIN32_OS__)
#if defined (__LINUX_OS__)
		if (_actual_nb_sent < 0) {
			if( errno != EINTR )  { // real error occured
				if (errno == EWOULDBLOCK) {
					argv_2072 = argv_2430;
					finished = true;
				}
				else {
					argv_2214	= errno;
					argv_2072		= argv_2442;
					finished	= true;
				}
			}
		}
		else {
			finished = true;
		}
	}
#endif // #if defined (__LINUX_OS__)
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_974	
// @@
// @@ FUNCTION		:	argv_4339			
// @@
// @@ INPUT			:
// @@ _buf: argv_4881 *: argv_665 of the first byte of the argv_826 containing
// @@   the argv_1178 to be sent.
// @@
// @@ _size_2_read: argv_4883 : number of argv_837 to read via the connection.
// @@
// @@ _timeout_second: argv_4536: the timeout associated argv_5011 the read operation
// @@   on the argv_1148 argv_2420 argv_4570 (choose -1 for infinite).
// @@
// @@ OUTPUT		:	
// @@ _actual_size: argv_4883& : actual number of argv_837 read (can be lower
// @@  than '_size' in case of non-blocking sockets.
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
// @@ This function permits to receive '_size_2_read' argv_837 from
// @@ the connection established. Notice that when the argv_4570
// @@ are in non-blocking mode, the number of argv_837 actually
// @@ received may be lower than '_size_2_read', so the actual
// @@ number of argv_837 read must be returned via the 
// @@ '_actual_size' argument.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_974::argv_4339 (argv_4881 * _buf, argv_4883 _amount_2_recv, argv_4883& _actual_size, argv_4536 _timeout_second) {
	argv_4536 argv_2072 = argv_2448;

	argv_4536 nb_ready			= 0;
	bool is_finished		= false;
	bool is_infinite		= false;
	if (_timeout_second < 0) {
		is_infinite = true;	
	}
	fd_set			readfds;
	struct timeval	tv;
	tv.tv_sec				= _timeout_second; // expressed in second
	tv.tv_usec				= 0;
	argv_4883 tmp_total_nb_read	= 0;
	argv_4883 tmp_nb_remaining	= _amount_2_recv;
	argv_4883 tmp_nb_read		= 0;
	_actual_size			= 0;

	while ((is_finished == false) && (argv_2072 == argv_2448))  {
		FD_ZERO (&readfds);
		FD_SET  (argv_961, &readfds);
		tv.tv_sec	= _timeout_second; // expressed in second
		tv.tv_usec	= 0;

		if (is_infinite == false) { 
			nb_ready = select (argv_961 + 1, &readfds, NULL, NULL, &tv);
		}
		else {
			nb_ready = select (argv_961 + 1, &readfds, NULL, NULL, NULL);
		}

#if defined (__WIN32_OS__)
		if (nb_ready == SOCKET_ERROR)  { // select error
#endif // #if defined (__WIN32_OS__)
#if defined (__LINUX_OS__)
		if (nb_ready  < 0) { // select error
#endif // #if defined (__LINUX_OS__)
			argv_2072 = argv_2441;
		}
		else if (nb_ready == 0) { // select timed out
			argv_2072 = argv_2438;
		}

		if (argv_2072 == argv_2448) {
			tmp_nb_read = argv_4337 (argv_961, (char *) &_buf[tmp_total_nb_read], tmp_nb_remaining, 0);

#if defined (__WIN32_OS__)
			if (tmp_nb_read == SOCKET_ERROR) {
				DWORD argv_1343 = WSAGetLastError ();
				if (argv_1343 == WSAEWOULDBLOCK) {
					argv_2072 = argv_2430;
				}
				else if (argv_1343 == WSAECONNRESET) {
					argv_2072 = argv_2440;
				}
				else { // real error occured
					argv_2214	= argv_1343;
					argv_2072		= argv_2439;
				}
			}
			else if (tmp_nb_read == 0) { // argv_4570 gracefully closed by peer
				argv_2072 = argv_2440;
			}
			else {
				tmp_nb_remaining	= tmp_nb_remaining -  tmp_nb_read;
				tmp_total_nb_read	= tmp_total_nb_read + tmp_nb_read;
				_actual_size		= _actual_size + tmp_nb_read;
				if (tmp_nb_remaining <= 0) {
					is_finished = true;
				}
			}
#endif // #if defined (__WIN32_OS__)

#if defined (__LINUX_OS__)
			if (_actual_size <= 0)  { 
				if (errno == EINTR)  {
					continue;
				}
				else if ((errno == EAGAIN) || (errno == EWOULDBLOCK)) {
					argv_2072		= argv_2430;
				}
				else if (_actual_size == 0) {
					argv_2072		= argv_2440;
				}
				else {
					argv_2214	= errno;
				}
			}
			else {
				tmp_nb_read
				tmp_nb_remaining	= tmp_nb_remaining -  tmp_nb_read;
				tmp_total_nb_read	= tmp_total_nb_read + tmp_nb_read;
				_actual_size		= _actual_size + tmp_nb_read;
				if (tmp_nb_remaining <= 0) {
					is_finished = true;
				}
			}
#endif // #if defined (__LINUX_OS__)
		}
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_974	
// @@
// @@ FUNCTION		:	argv_969		
// @@
// @@ INPUT			:	none
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
// @@ This function permits to tear down the previously
// @@ established connection, then the argv_972 argv_3656 is resetted
// @@ so that it can be ready for use.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_974::argv_969 () {
	argv_4536 argv_2072 = argv_2448;
#if defined (__WIN32_OS__)
		closesocket (argv_961);
#endif // #if defined (__WIN32_OS__)
#if defined (__LINUX_OS__)
		if (argv_967 (argv_961) < 0) {
			argv_2072 = argv_2446;
		}
#endif // #if defined (__LINUX_OS__)
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_974	
// @@
// @@ FUNCTION		:			
// @@
// @@ INPUT			:
// @@ _descriptor: argv_2338: pointer on the descriptor to argv_967.
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
// @@ This function permits to argv_967 the connection that was
// @@ previously established argv_5011 the descriptor given as 
// @@ the parameter '_descriptor'.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_974::argv_969 (argv_2338 _descriptor) {
	argv_4536 argv_2072 = argv_2448;
	SOCKET * socket_ptr = (SOCKET *) _descriptor;
#if defined (__WIN32_OS__)
	if (closesocket (*socket_ptr) != 0) {
#endif // #if defined (__WIN32_OS__)
#if defined (__LINUX_OS__)
	if (argv_967 (*socket_ptr) < 0) {
#endif // #if defined (__LINUX_OS__)
		argv_2072 = argv_2446;
	}
	return (argv_2072);
}




// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_974	
// @@
// @@ FUNCTION		:	argv_1755			
// @@
// @@ INPUT			:
// @@
// @@ OUTPUT		:	
// @@ _descriptor_ptr: argv_2338&: argv_665 of the descriptor associated
// @@   argv_5011 the argv_972 argv_3656.
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
// @@ This function permits to argv_1397 the descriptor associated
// @@ argv_5011 the argv_972 argv_3656, this descriptor being returned via
// @@ the '_descriptor_ptr' argv_4406 argument.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_974::argv_1755 (argv_2338& _descriptor_ptr) {
	argv_4536 argv_2072 = argv_2448;
	_descriptor_ptr = (argv_2338) &argv_961;
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_974	
// @@
// @@ FUNCTION		:	argv_1771		
// @@
// @@ INPUT			:	none
// @@
// @@ OUTPUT		:	
// @@ _descriptor_ptr: argv_2338&: argv_665 of the descriptor associated
// @@   argv_5011 the argv_972 argv_3656.
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
// @@ This function permits to argv_1397 the descriptor associated
// @@ argv_5011 the argv_974 argv_3656 when this argv_3656 is a server that 
// @@ was previously argv_4257 to listen.
// @@ this descriptor being returned via the '_descriptor_ptr' 
// @@ argv_4406 argument.
// @@
// @@ CONTRACT 		:	none
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_974::argv_1771 (argv_2338& _descriptor_ptr) {
	argv_4536 argv_2072 = argv_2448;
	_descriptor_ptr = (argv_2338) &argv_2273;
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS			:	argv_974	
// @@
// @@ FUNCTION		:	init_with_connected_client_socket			
// @@
// @@ INPUT			:
// @@ _sock: SOCKET&: the argv_4570 to use to initialize the client.
// @@
// @@ OUTPUT		:	none
// @@
// @@ IO			:	none
// @@	
// @@ RETURN VALUE	:	
// @@ argv_4536 : argv_2448 if success,
// @@        another argv_4979 otherwise.	
// @@	
// @@ DISCLOSURE	:	public
// @@	
// @@ DESCRIPTION	:
// @@ This function permits to associate a client argv_4570 that
// @@ was previously connected to a given server argv_5011 a 
// @@ argv_974 argv_3656 to permit the usage of the 
// @@ argv_974 member functions.
// @@
// @@ CONTRACT 		:	
// @@ - 'argv_974' argv_3656 must have been argv_4257 prior to 
// @@   this call.
// @@ - 'argv_974' argv_3656 must not have an established 
// @@   connection prior to this call.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_974::init_with_connected_client_socket (SOCKET& _sock) {
	argv_4536 argv_2072 = argv_2448;
	if (argv_2088 == true) {
		argv_2072 = argv_2432;
	}
	else if (argv_2079 == true) {
		argv_2072 = argv_2431;
	}
	else {
		argv_2088		= true;	
		argv_2079	= true;
		argv_2096		= false;
		argv_961			= _sock;
	}
	return (argv_2072);
}



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1424
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
