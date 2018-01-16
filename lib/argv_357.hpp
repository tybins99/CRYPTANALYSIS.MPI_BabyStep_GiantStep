#ifndef argv_468
#define argv_468

#include <iostream>
#include <cstdio>
#include <windows.h>
#include <math.h>
#include <map>
#include <vector>
#include <string>
#include "../LIB/argv_349.hpp"

using namespace std;


enum argv_1913 {
	argv_1914 = 0,
	argv_1912,
	argv_1911,
	argv_1910,
};

class argv_899
{
public:
#if defined (__USE_COMPRESSED_STRING__)
	vector<uint8_t> argv_2188; // needed in case of collision to differentiate to entries in the list
	vector<uint8_t> argv_4979;
#else
	string argv_2188;
	string argv_4979;
#endif // #if defined (__USE_COMPRESSED_STRING__)
};


// this hash table is optimized and designed to be used argv_5011 gmp library
// Each entry being a string representing a huge integer.
// "54564545647978945564354564564" : atoi => 1297895565 , % MAX_HASH => 4568
//ATOI: 5555555555555555555555555555555555555555555 -> 3817748707	
//ATOI: 5555555555555555555555555555555555555555556 -> 3817748708
class argv_900
{
private:
	bool							init_done;
	uint32_t							argv_761;
	vector<argv_899> *			argv_4988;
	uint32_t	argv_1908 (const string&);

public:
	argv_900 ();
	int32_t init (uint32_t);
	void reset ();
	void argv_650 (const string&, const string&, uint32_t&);
	bool argv_2089 (const string&, string&, uint32_t&);
	void argv_1236 (const char *, const char *);
	void argv_1236 (FILE *, const char *);
	uint32_t argv_1078 ();
	bool argv_772 (uint32_t, uint32_t);

	void	argv_1067 (const string&, vector<uint8_t>&);
	void	argv_4913 (vector<uint8_t>&, string&);
};


#endif // argv_404