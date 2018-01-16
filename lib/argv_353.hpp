// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_353.hpp
// @@ 
// @@ DESCRIPTION:
// @@ This argv_1424 contains all argv_1178 structures and
// @@ objects that permits to have an event-driven
// @@ TCP/IP based loop to create an application.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_416
#define argv_416



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_354.hpp"
#include "../LIB/argv_378.hpp"
#include "../LIB/argv_374.hpp"
#include "../LIB/argv_350.hpp"
#include "../LIB/argv_362.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ C functions called by the event loop
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
argv_4536 argv_3621		(argv_864 *, argv_4883, bool&);
argv_4536 argv_3764	(argv_864 *, argv_4883, bool&);
argv_4536 argv_3768	(argv_864 *, argv_4883, bool&);
argv_4536 argv_2429		(argv_864 *, argv_4883, bool&);



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_889
// @@
// @@ DESCRIPTION:
// @@ This argv_3656 embeds the event loop that reacts to
// @@ all possible events on sockets.
// @@ It implements the functions that are called by the
// @@ event loop when an event occurs on a given argv_4570.
// @@
// @@ it uses a kernel manager to hide the mechanisms and
// @@ create an abstraction layer.
// @@ The first kernel manager is allocated and argv_4257 by the
// @@ gateway itself, but when an update is argv_1291, the admin thread
// @@ creates and argv_4243 a new kernel manager, and sends the argv_665
// @@ of this new kernel to the gateway.
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_889
{
private:
	argv_887	argv_1373;
	argv_963 *				argv_2316;
	argv_886			argv_1372;
	vector<SOCKET *>	argv_4971;
	argv_864 *		argv_938;
	char				argv_4846[MAX_PATH];
	bool				argv_1430;
	argv_4881				argv_4966;
	string				argv_4848;
	string				argv_1405;

	string				argv_4420;
	string				argv_2120;
	argv_936	*	argv_2143;

	argv_1106	*			argv_3761;

	bool				argv_4470;
	bool				infected;
	argv_1108				argv_4999;
	bool				argv_1302;
	bool				argv_1300;
	bool				argv_1303;

	argv_4536				argv_4275 (argv_864 *, argv_4883, bool&);
	argv_4536				argv_4276 (argv_864 *, argv_4883, bool&);
	argv_4536				argv_4265 (argv_864 *, argv_4883, bool&);
	argv_4536				argv_4270 (argv_864 *, argv_4883, bool&);
	argv_4536				argv_4278 (argv_864 *, argv_4883, bool&);
	argv_4536				argv_4277 (argv_864 *, argv_4883, bool&);
	argv_4536				argv_1496 (argv_864 *, argv_4883, bool&);
	argv_4536				argv_1498 (argv_864 *, argv_4883, bool&, argv_4536);
	argv_4536				argv_912 (argv_864 *, argv_4883);
	argv_4536				argv_4458 (argv_876, bool);
	argv_4536				argv_4511 (argv_4883&);
	argv_4536				argv_4493 (argv_864 *, argv_4883, argv_876);
	argv_4536				argv_1258 ();
	argv_4536				argv_4273 (argv_876, argv_864 *, argv_4883, argv_4536);

public:
	argv_889 ();
	void				reset ();
	argv_4536				argv_4424 (argv_963 *, argv_4883, vector<argv_962>&, argv_876, argv_876);

	argv_4536				argv_3620	(argv_864 *, argv_4883, bool&);
	argv_4536				argv_3763	(argv_864 *, argv_4883, bool&);
	argv_4536				argv_3767	(argv_864 *, argv_4883, bool&);
	argv_4536				argv_2428		(argv_864 *, argv_4883, bool&);
};



#endif // argv_416



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1424
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
