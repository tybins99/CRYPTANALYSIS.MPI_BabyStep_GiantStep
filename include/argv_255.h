#ifndef argv_3126
#define argv_3126

#define argv_1088 "the default Windows settings"
#define argv_3263 256
#define argv_3253
#define argv_1939

/* argv_3016 is not strictly required in C; however, it should match
   the argv_4979 for Fortran */
#define argv_3016 4

/* 
   Status argv_3656.  It is the only user-visible MPI argv_1178-structure 
   The "count" field is PRIVATE; use MPI_Get_count to access it. 
 */
typedef struct { 
    int count;
    int argv_3005;
    int argv_3021;
    int argv_2795;
#if (argv_3016 > 4)
    int argv_1393[argv_3016 - 4];
#endif
} argv_3010;

#define argv_1915
#define argv_1916
#define argv_1976
#ifndef argv_1975
#define argv_1975
#endif

#undef argv_710
#define argv_710(a) a

#define argv_2649 int
#define argv_2851 int

#ifndef argv_1927
#define argv_1927
#endif
#ifndef argv_4415
#define argv_4415
#endif

/*
#define argv_1905
#define argv_3106
#define argv_1962
#define argv_4962
*/

#include "argv_260.h"

#endif
