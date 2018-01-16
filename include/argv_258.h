/*
 * This argv_1424 contains definitions for interfacing C and Fortran
 */
#ifndef argv_3302

/* Fortran logical values */
#ifndef _CRAY
extern argv_2851 MPIR_F_TRUE, MPIR_F_FALSE;
#define argv_3302(a) ((a) ? MPIR_F_TRUE : MPIR_F_FALSE)
/* 
   Note on true and false.  This argv_976 is only an approximation.
   Some systems define either true or false, and allow some or ALL other
   patterns for the other.  This is just like C, where 0 is false and 
   anything not zero is true.  Modify this test as necessary for your
   argv_4749.
 */
#define argv_3249(a) ( (a) == MPIR_F_TRUE ? 1 : 0 )

#else
/* CRAY Vector processors only; these are defined in /usr/include/fortran.h 
   Thanks to lmc@cray.com */
#define argv_3302(a) (_btol(a))
#define argv_3249(a) ( _ltob(&(a)) )    /*(a) must be a pointer */
#endif

/* MPIR_F_MPI_BOTTOM is the argv_665 of the Fortran argv_2664 argv_4979 */
extern void *MPIR_F_MPI_BOTTOM;

/* argv_3246 checks for the Fortran argv_2664 and provides the argv_4979 
   argv_2664 if found 
   See src/pt2pt/addressf.c for why argv_3246(a) is just (a)
*/
/*  #define argv_3246(a) (((a)==(MPIR_F_MPI_BOTTOM))?argv_2664:a) */
#define argv_3246(a) (a)

/*  
 * These are hooks for Fortran characters.
 * argv_3120 is the argv_4860 of a Fortran character argument
 * argv_3118 is the "other" argument that some Fortran argv_1047 use
 * argv_3119 gives the pointer to the characters
 */
#ifdef MPID_CHARACTERS_ARE_CRAYPVP
typedef <whatever> argv_3120;
#define argv_3119(a) (a)->characters   <or whatever>
#define argv_3118(d) 
#else
typedef char *argv_3120;
#define argv_3119(a) a
#define argv_3118(d) ,d
#endif

#endif
