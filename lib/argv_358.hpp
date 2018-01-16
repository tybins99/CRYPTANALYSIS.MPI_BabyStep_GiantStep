// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ FILE: argv_358.hpp
// @@ 
// @@ DESCRIPTION:
// @@ 
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ multiple inclusion problem avoidance
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_469
#define argv_469




// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ included files
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "../LIB/argv_354.hpp"
#include "../LIB/argv_369.hpp"
#include "../LIB/argv_381.hpp"
#include "../LIB/argv_359.hpp"



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ namespace usage declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
using namespace std;


class argv_862
{
protected:
	argv_4881			outer_type;
	argv_4881			inner_type;
	argv_4883			argv_1159;
	argv_4883			argv_1158;
	argv_4883			argv_1151;
	argv_4883			argv_1150;

	argv_859		argv_780;
	bool			argv_845;			// permits to argv_4626 the argv_3656
	bool			argv_4630;		// permits to argv_4626 the argv_3656
	bool			interrupt_flag;			// the OR of 2 other conditions

	bool			argv_4938;
	argv_4883			argv_4939;

public:
	argv_862 ();
	virtual			~argv_862 ();
	void			argv_846 (argv_4883, argv_4883);
	void			argv_4356 ();
	void			argv_4519 (argv_4883);
	void			argv_1766 (bool&, bool&, bool&, argv_4883&);
	void			argv_4388 ();
	void			reset ();
};

// You can notice that there exists a 'cancel_current_operation' field
// This field can be accessed and modified by the thread creator. This is
// possible because the thread creator instanciantes the argv_3656, then
// creates a thread giving the instanciated argv_3656's argv_665 to this
// thread, thus even if the argv_3656 runs in a separate thread, the thread
// creator can still have access to the argv_3656.
class argv_929 : public argv_862
{
protected:
	bool			argv_4257;
	string			argv_3694;
	argv_963 *			argv_2316;
	argv_930		inner_port;
	argv_1106			argv_4342;
	argv_1106			argv_4497;

	void			argv_1256 ();
	void			argv_1254 (argv_4536, argv_4536, argv_876);
	argv_4536			argv_4336 ();
	virtual argv_4536	argv_4277 (argv_4881);
	virtual argv_4536	argv_1280 ();
	argv_4536			forge_payload (argv_4881, argv_1106 *, vector<argv_875>&);
	argv_4536			insert_atom_vector (vector<argv_875>&);
	argv_4536			argv_4267 (bool, bool, argv_4881, argv_876);

public:

	argv_929 ();
	virtual			~argv_929 ();
	void			reset ();
	argv_4536			argv_4243 (argv_876, argv_4883, argv_963 *);
	argv_4536			argv_4424 (argv_876, argv_4883, argv_963 *);

	argv_4536			argv_4496 ();
	argv_4536			format_and_send_result (argv_876, argv_4881, argv_1106 *);
	argv_4536			argv_1492 (argv_4881, vector<argv_875>&, argv_876, argv_4881);
	argv_4536			argv_1403 ();
	argv_4536			argv_4332 ();
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1424
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



#endif // argv_469
