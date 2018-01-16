#ifndef argv_2413
#define argv_2413



#include <string>
#include <string.h>		
#include <iostream>
#include <cstdio>
#include <cstdlib>


#define argv_4569 _snprintf



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@ namespace usage declaration
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
using namespace std;

#ifdef __alpha
typedef unsigned int argv_4886;
#else
typedef unsigned long argv_4886;
#endif

#define argv_4536			signed int
#define argv_1734	-1
#define argv_1115	32

const argv_4536	argv_2406		= 65536;

struct argv_2414 {
	argv_4886 argv_825[4];
	argv_4886 argv_794[2];
	unsigned char in[64];
};

void argv_2416(struct argv_2414 *context);
void argv_2419(struct argv_2414 *context, unsigned char const *argv_825,
	       unsigned len);
void argv_2415(unsigned char digest[16], struct argv_2414 *context);
void argv_2418(argv_4886 argv_825[4], argv_4886 const in[16]);

typedef struct argv_2414 argv_2412;


string argv_1077 (const char *);


#endif /* !argv_2413 */



// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// @@  end of argv_1424
// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

