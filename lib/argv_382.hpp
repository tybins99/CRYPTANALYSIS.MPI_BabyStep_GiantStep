// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_382.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1424 contains all the functions and argv_1178
// @@ structures necessary for the scan daemon to
// @@ work properly. 
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_501
#define argv_501



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

#include "../LIB/argv_354.hpp"
#include "../LIB/argv_348.hpp"
#include "../LIB/argv_358.hpp"
#include "../LIB/argv_345.hpp"
#include "../LIB_ARCHIVE/argv_715.hpp"
#include "../LIB_ARCHIVE/argv_728.hpp"
#include "../LIB_AVX/argv_4578.hpp"
#include "../LIB_AVX/argv_4459.hpp"
#include "../LIB_AVX/argv_4941.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ constants
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#define argv_2402  5000 


// at thread creation argv_4843, these argv_1178 are saved up so that we can monitor
// the thread's death later.
class argv_1144
{
public:
	string		argv_3557;
	DWORD		argv_4799;
	HANDLE		argv_4798;
};


class Cscan_dameon_log_set
{
public:
	argv_963					argv_2311;
	argv_963					argv_2307;
	argv_963					argv_2308;
	argv_963					argv_2320;
	argv_963					argv_2319;
	argv_963					argv_2326;
};

class argv_1136
{
public:
	argv_868			argv_1023;
	Carchive_creator		argv_715;
	Carchive_extractor		argv_728;
	Cspyware_manager		argv_4578;
	Cscan_gateway			argv_4459;
	Cupdate_manager			argv_4941;
};


class Cscan_daemon_data_set
{
public:
	string	internal_servname;
	string	argv_1391;

	argv_4883	argv_1389;
	argv_4883	argv_1390;
	argv_4883	argv_1388;
	argv_4883	argv_1392;

	argv_4883	internal_archive_creator_port;
	argv_4883	internal_archive_extractor_port;
	argv_4883	internal_spyware_manager_port;
	argv_4883	internal_scan_gateway_port;
	argv_4883	internal_update_manager_port;
	argv_4883	internal_admin_port;

	argv_4883	argv_2392;

	string	argv_4420;
	string	argv_2120;
	string	argv_705;
	string	argv_704;
};


class argv_1135
{
public:
	Cscan_daemon_data_set		data_set;
	argv_1136	inner_objects;
	Cscan_dameon_log_set		log_set;
	vector<argv_962>			argv_4971;
};


class argv_1134 : public argv_879
{
private:
	argv_1135			argv_1342;
		
	vector<argv_974>		argv_4972;
	vector<argv_1144>	argv_4977;
	argv_1144			argv_1038; 

	argv_4536						argv_2226 (argv_876 _name, argv_2338 _callback_ptr, argv_2338 _param_ptr, bool _is_com_manager=false);
	argv_4536						argv_2222 ();
	argv_4536						argv_2220 ();
	argv_4536						argv_2221 ();
	argv_4536						argv_2224 ();
	argv_4536						argv_2223 ();
	argv_4536						argv_2227 ();

	argv_4536						argv_2219 ();
	argv_4536						argv_4244 ();
	argv_4536						argv_4250 (argv_876, argv_876, argv_4883, argv_4881);
	void						argv_1254 (argv_876, argv_4536, argv_4536);

	argv_4536						argv_1401 ();
	void						argv_1259 ();
	argv_4536						argv_1121 ();
	argv_4536						argv_2199 ();
	argv_4536						argv_5004 (argv_876, HANDLE, argv_4536);
	argv_4536						argv_5003 ();
	argv_4536						argv_3685 ();
	argv_4536						argv_2197 (argv_929&);

public:
	void						reset ();
	argv_1134 ();
	~argv_1134 ();
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ necessary functions forward declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

#if defined (__WIN32_OS__) 
	typedef unsigned long					(__stdcall * argv_1712)	(void *);
	void	WINAPI	service_main			(DWORD argv_759, LPTSTR argv_760[]);
	void			argv_4506	(DWORD);
#endif // #if defined (__WIN32_OS__) 



#endif // argv_501



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1424
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
