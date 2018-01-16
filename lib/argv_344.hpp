// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_344.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1424 contains the functions that permit
// @@ to communicate argv_5011 the service scanner either
// @@ from remote, or from a local client 
// @@ independantly.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_408
#define argv_408



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_374.hpp"
#include "../LIB/argv_378.hpp"
#include "../LIB/argv_381.hpp"
#include "../LIB_AVX/general_avx.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ namespace usage declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
using namespace std;



#if defined (__WIN32_OS__)
	#ifdef SYSTEM_DLL_EXPORTS
		#define argv_4750 __declspec(dllexport)
	#else
		#define argv_4750 __declspec(dllimport)
	#endif
#endif // #if defined (__WIN32_OS__)



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ C version of the stateful com client 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
/*
typedef struct argv_620 {
	argv_974	*	argv_2437;
	argv_1106			*	argv_3761;	
	argv_4536				argv_2214;
} argv_4475;
*/


// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ com client functions
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
/*
extern "C" {
	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	bool argv_1040 ();

	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	bool argv_1041 ();

	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	argv_4536 argv_1009 (argv_2338 *, bool&);

	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	bool argv_1010 (argv_2338);

	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	bool argv_1008 (argv_2338, argv_876, argv_4883);

	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	bool argv_1018 (argv_2338, argv_876, bool);

	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	bool argv_1019 (argv_2338, argv_876, bool);

	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	bool com_client_get_local_result (argv_2338, argv_4536, bool&, bool&, bool&, argv_1108, bool&, bool&);

	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	bool com_client_get_remote_result (argv_2338, argv_4536, argv_876, bool&, bool&, bool&, argv_1108, bool&, bool&);

	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	bool argv_1011 (argv_2338);

	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	argv_4536 com_client_get_last_error (argv_2338, argv_1108);
}
*/
// =============================================================
// =============================================================
// =============================================================
// =============================================================
// =============================================================
// =============================================================

// argv_3677 client connected to the service.
typedef struct argv_622 {
	argv_974		argv_2420;
	argv_1106				argv_3762;
	argv_1106				argv_3766;
	SOCKET 				argv_4570;
} argv_4477;

typedef struct argv_629 {
	fd_set			readfds;
	fd_set			readfds_dirty;
	argv_4536			argv_2407;
} argv_4590;

// 3 connections (argv_1397, argv_1063, scan).
typedef struct argv_620 {
	string				argv_4849;
	argv_4883				argv_4850; // for the temporary argv_1424 argv_1747
	argv_4536				argv_4571;
	argv_4477	argv_758;
	argv_4477	argv_4471;
	argv_4590		argv_4487;
} argv_4475;


typedef struct argv_621 {
	argv_4881	argv_4860;			// answer argv_4860
	argv_4536	argv_2072;

	// general operation related argv_1178
	argv_4881	argv_3682;

	// argv_1397 list argv_4406
	argv_4883	argv_3608;
	argv_4883	argv_3605;
	argv_4883	argv_1152;
	string	argv_1406;

	// scan related argv_1178
	bool 	argv_4470;
	bool	infected;
	bool	argv_1305;
	char	argv_4999[MAX_PATH];
	bool	argv_1304;
	bool	argv_1306;
	argv_4536	argv_1307;
	char	argv_1230[MAX_PATH];
	char	argv_1154[MAX_PATH];
} argv_4476;



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ Internal tool functions (not exported by the DLL).
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 internal_connect_unit (argv_4477&,  argv_876, argv_4883);
argv_4536 internal_prepare_packet (argv_1106&, vector<argv_875>&, argv_4881);
argv_4536 internal_update_maxfd (argv_2338);
argv_4536 internal_check_select_return_code (argv_4536, bool&);
argv_4536 internal_process_ready_descriptors (argv_2338, argv_4536, argv_4476 *);
argv_4536 internal_process_received_packet (argv_1106&, argv_4476 *);

argv_4536 internal_process_packet_PCK_TYPE_ARCHIVE_EXTRACT_LIST_RESULT		(argv_2338, argv_4477&, argv_4476 *);
argv_4536 internal_process_packet_PCK_TYPE_SCAN_REMOTE_RESULT				(argv_2338, argv_4477&, argv_4476 *);
argv_4536 internal_process_packet_PCK_TYPE_SCAN_LOCAL_RESULT					(argv_2338, argv_4477&, argv_4476 *);
argv_4536 internal_process_packet_PCK_TYPE_SCAN_AND_DYSINFECT_LOCAL_RESULT	(argv_2338, argv_4477&, argv_4476 *);
argv_4536 internal_process_packet_PCK_TYPE_ARCHIVE_EXTRACT_RESULT			(argv_2338, argv_4477&, argv_4476 *);
argv_4536 internal_process_packet_PCK_TYPE_ARCHIVE_CREATE_RESULT				(argv_2338, argv_4477&, argv_4476 *);
void internal_generate_unique_tmp_filename (argv_876, argv_4883&, argv_1108);
void internal_reset_result (argv_4476&);

extern "C" {
	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	argv_4536 argv_1040 ();

	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	argv_4536 argv_1041 ();

	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	argv_4536 argv_1009 (argv_2338 *, argv_876);

	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	argv_4536 argv_1010 (argv_2338);

	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	argv_4536 argv_1008 (argv_2338, argv_876, argv_4883, argv_4883);

	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	argv_4536 argv_1018 (argv_2338, argv_876, bool);

	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	argv_4536 argv_1019 (argv_2338, argv_876, bool);

	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	argv_4536 argv_1012 (argv_2338, argv_876, argv_876);

	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	argv_4536 argv_1007 (argv_2338, argv_876, argv_876);

	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	argv_4536 argv_1006 (argv_2338);

	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	argv_4536 argv_1005 (argv_2338);

	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	argv_4536 argv_4328 (argv_2338, argv_4476 *);

	#if defined (__WIN32_OS__) 
	__declspec(dllexport) 
	#endif // #if defined (__WIN32_OS__)
	argv_4536 argv_1011 (argv_2338);
}



#endif // argv_408



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ end of argv_1424
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
