#ifndef argv_504
#define argv_504


#include "../LIB/argv_367.hpp"
#include "../LIB/argv_352.hpp"

#include "../COMMON_PLUGIN/pe_type_detector.hpp"


typedef argv_4536 (* argv_1654)	(argv_2338, argv_2338&);
typedef void (* argv_1657) (argv_2338, argv_2338);
typedef argv_4536 (* argv_1670)				(argv_2338, argv_4881 *, argv_4883, bool&, argv_2338&);

typedef argv_4536 (* argv_1710)				(argv_2338 _kernel_data_ptr, argv_4881 *, argv_4883, bool&, argv_2338&);
typedef argv_4536 (* argv_1662)			(argv_2338, argv_2338, char *&, argv_4883&);
typedef argv_4536 (* argv_1658)					(argv_2338, argv_4881 *, argv_4883&, argv_2338, argv_4536&);

typedef argv_4536 (* argv_1652)					(argv_2338, argv_876);
typedef argv_4536 (* argv_1655)					(argv_2338);



class Ccallback_set
{
private:
	void	argv_907 (argv_963 *, argv_2338, argv_876, bool&);

public:
	argv_1652					argv_1522;
	argv_1655					argv_1530;	
	argv_1654	argv_1526;
	argv_1657	argv_1534;
	argv_1670					argv_1579;
	argv_1710				argv_1644;
	argv_1662			argv_1549;
	argv_1658					argv_1535;

	Ccallback_set ();
	bool argv_901 (argv_963 *);
};

class argv_1147 
{
private:
	argv_4881 *			argv_1429;
	argv_4883			argv_1444;

	argv_891	argv_1798;
	argv_1141	argv_4751;
	argv_4565	argv_2117;
	argv_888	argv_1428;
	bool			init_done;
	Ccallback_set	callback_set;
	bool			argv_4253 ();
	bool			argv_4255 (argv_876, argv_876, argv_876);
	bool			argv_4235 ();
	bool			argv_3840 (argv_876, argv_2338&, bool);

public:
	argv_1147 ();

	bool init (argv_876, argv_876, argv_2338&);
	~argv_1147 ();

	void init_callback__construct					(argv_1652);
	void init_callback__destruct					(argv_1655);		
	void init_callback__create_scan_result_atom		(argv_1654);
	void init_callback__destruct_scan_result_atom	(argv_1657);
	void init_callback__match_type					(argv_1670);
	void init_callback__scan_buffer					(argv_1710);
	void init_callback__get_scan_report				(argv_1662);
	void init_callback__dysinfect					(argv_1658);

	bool argv_4458 (argv_876, argv_876, argv_876, bool);
};

#endif // __MAIN_PE_FAKE_SCAN_FLAG__