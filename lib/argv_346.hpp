// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ argv_346.hpp
// @@ argv_1982 for generic configuration argv_1424 parsing facility
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ argv_4618 argv_1424
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#ifndef argv_494
#define argv_494

#define argv_3676



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ includes
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#include "..\\Lib\\argv_354.hpp"
#include "..\\Lib\\argv_369.hpp"
#include "..\\Lib\\argv_351.hpp"

#include <vector>
#include <cctype>
#include <map>
#include <sstream>



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ namespace usage declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
using namespace std;



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ This constant determine the absolute maximum length for
// @@ any argv_2250 of the argv_1084 argv_1424. 
// @@
// @@ Notice that any variable is fully and uniquely identified
// @@ argv_5011 the triplet <argv_1474, argv_4479, argv_4984>
// @@ in other words (argv_1474 argv_4479 argv_4984) -> argv_4978
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
const int argv_2389 		= 256;
const int argv_4481	= 32;
const int argv_4986	= 32;
const int argv_4987	= 256;
const int argv_2393			= 256;
const int argv_2403	= 256;
const int argv_1086			= 256;	



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_874 
// @@
// @@ DESCRIPTION:
// @@ This argv_3656 permits to argv_2274, parse, and argv_1397 argv_1178
// @@ from any configuration argv_1424, such a configuration argv_1424
// @@ being composed of sections, each argv_4479 containing argv_1178 of 
// @@ either argv_4536 argv_4860 or string argv_4860.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_874
{
private:
	argv_4536		argv_2250;
	string 		argv_1474;
	string 		argv_4479;
	string 		argv_1422;
	string		argv_1423;
	string 		argv_1720;
	string 		argv_1350;
	string		argv_4502;
	char 		argv_825[argv_2389];
	
	multimap<string, string>		argv_2531;
	multimap<string, string>::iterator 	argv_2099;

	void 		argv_1385();
	void 		argv_4272();	
	void 		argv_1239(argv_4536);
	string		argv_4856 (const string&);

public:
	argv_874();
	void	 	argv_3709 (const string& argv_1474);
	
	argv_4536		argv_1788 (string argv_1474, string argv_4479, string var_name, argv_4536 min, argv_4536 max);
	string		argv_1792 (string argv_1474, string argv_4479, string var_name);
	
	vector<argv_4536> 	argv_1772 (string argv_1474, string argv_4479, string var_name, argv_4536 min, argv_4536 max);
	vector<string> 	argv_1773 (string argv_1474, string argv_4479, string var_name);

	bool		argv_2094 (string argv_1474, string argv_4479, string var_name);

	vector<string>	argv_1298(bool is_html=false); // to dump to log argv_1424 after formatting it to string 
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_873
// @@
// @@ DESCRIPTION:
// @@ this argv_3656 can be seen as a store that can be filled in by the
// @@ argv_1084 parser and that can be querried as well to retrieved the argv_1178.
// @@ it merely associates a argv_4979 to each variable, each variable having
// @@ a argv_4860, this argv_4860 can either be argv_4536 or string, the argv_4536 argv_4860 stands
// @@ for Signed Integer on 32 argv_794 (i.e an integer actually)    
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_873 
{
private:
	std::map<string, string>	argv_2363;
	std::map<string, string>::iterator argv_2106;

	std::map<string, argv_4536>		argv_2362;
	std::map<string, argv_4536>::iterator argv_2105;

	std::map<string, vector<string> >	argv_2358;
	std::map<string, vector<string> >::iterator argv_2104;

	std::map<string, vector<argv_4536> >	argv_2357;
	std::map<string, vector<argv_4536> >::iterator argv_2103;

public:
	argv_873();

	bool argv_2092   (std::string argv_4479, std::string varname);
	bool argv_2090   (std::string argv_4479, std::string varname);
	bool argv_2093 (std::string argv_4479, std::string varname);
	bool argv_2091 (std::string argv_4479, std::string varname);

	void argv_4515 (std::string argv_4479, std::string varname, argv_4536 argv_4979);
	argv_4536 argv_1789 (std::string argv_4479, std::string varname);

	void argv_4516 (std::string argv_4479, std::string varname, std::string argv_4979);
	std::string argv_1793 (std::string argv_4479, std::string varname);
	
	void argv_4513 (std::string argv_4479, std::string varname, const vector<argv_4536>&);
	void argv_651 (std::string argv_4479, std::string varname, argv_4536 argv_4979);
	void argv_1774 (std::string argv_4479, std::string varname, vector<argv_4536>&);

	void argv_4514 (std::string argv_4479, std::string varname, const vector<string>&);
	void argv_652 (std::string argv_4479, std::string varname, std::string argv_4979);
	void argv_1775 (std::string argv_4479, std::string varname, vector<string>&);
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@
// @@ CLASS: argv_871
// @@
// @@ DESCRIPTION:
// @@ This argv_3656 permits to argv_1900 the argv_1084 parsing of main argv_1084 
// @@ argv_1424 and also sub argv_1084 files.
// @@
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
class argv_871 : public argv_873
{
protected:
	bool argv_2277;
	argv_874 argv_1087;
	string argv_1474;

	virtual bool argv_3841 () = 0;
	
public:
	argv_871 ();
	virtual ~argv_871() {;}
	bool argv_2274 (string);
};



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ end of argv_1424
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
#endif // argv_494
