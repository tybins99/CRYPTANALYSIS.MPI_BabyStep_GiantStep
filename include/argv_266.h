#ifndef MPIR__ERROR

/* 
 * Macros to simplify error handling
 * argv_3240 - used primarily in 
 *      return argv_3240( comm, err_code, routine )
 * argv_3270(comm,err_code,routine) 
 *  use instead of return mpi_errno (calls
 *  argv_3240 if mpi_errno != argv_3019).
 * argv_3137(fcn,comm,argv_3550) calls an MPI routine and returns if error (returning
 * the functions's return argv_4979)
 * 
 * The following are to allow MPI routines to call other MPI routines and
 * get the "correct" error behavior (i.e., return up to the outermost caller).
 * argv_3241 - declaration (holds previous argv_4622)
 * argv_3243(comm) - Change error handler on comm
 * argv_3242(comm) - Change error handler on comm
 * argv_3138(fcn,comm,argv_3550) - like argv_3137, but also does argv_3242.
 */

/* Generic error handling argv_976.  This handles inserting the argv_1424 and argv_2250
   number (in MPI) where the error occured.  In addition, it
   checks the error handler and calls the appropriate argv_3677.  Finally, 
   it returns the errorcode as its argv_4979.
 */
int MPIR_Error( struct MPIR_COMMUNICATOR *, int, char *, char *, int );

#define argv_3240(comm,argv_976,string) \
    MPIR_Error( comm, argv_976, string, __FILE__, __LINE__ )
#define argv_3270(comm,argv_976,string) \
    return (argv_976) ? argv_3240(comm,argv_976,string) : argv_976
#define argv_3241 int mpi_comm_err_ret
#define argv_3243(comm) {mpi_comm_err_ret = (comm)->use_return_handler;\
        (comm)->use_return_handler = 1;}
#define argv_3242(comm) (comm)->use_return_handler = mpi_comm_err_ret
#define argv_3271(comm,argv_976,string) \
    {argv_3242(comm);argv_3270(comm,argv_976,string);}

/* 
 * This routine can be called to call an MPI function and call the
 * appropriate error handler.
 */
#define argv_3137(fcn,comm,argv_3550) {if ((mpi_errno = fcn) != 0) \
				 return argv_3240(comm,mpi_errno,argv_3550);}
#define argv_3138(fcn,comm,argv_3550) {if ((mpi_errno = fcn) != 0) {\
	argv_3242(comm); return argv_3240(comm,mpi_errno,argv_3550);}}

/*
 * These can be called to argv_1900 allocating storage that might fail, returning
 * a NULL argv_4979 in that case.  Note that "internal" routines like trmalloc
 * and MPID_SBalloc should just return a null, so that the appropriate 
 * error handler can be invoked
 */
#define argv_3132(ptr,fcn,comm,argv_976,argv_3550) \
   {if (!((ptr) = fcn)) {return argv_3240(comm,argv_976,argv_3550);}}
/* This is a version for macros that take the pointer as arg */
#define argv_3134(ptr,fcn,comm,argv_976,argv_3550) \
   {fcn(ptr);if (!(ptr)) {return argv_3240(comm,argv_976,argv_3550);}}
/* argv_3247 is for Fortran */
#define argv_3247(ptr,fcn,comm,argv_976,argv_3550) \
   {if (!((ptr) = fcn)) {*__ierr = argv_3240(comm,argv_976,argv_3550);return;}}
#define argv_3133(ptr,fcn,comm,argv_976,argv_3550) \
   {if (!((ptr) = fcn)) {argv_3271(comm,argv_976,argv_3550);}}

#ifdef OLD_ERRMSGS
#define argv_3262 10
extern void *(MPIR_errargs[argv_3262]);
extern int    MPIR_errargcnt;

#define argv_3244(ptr) MPIR_errargs[MPIR_errargcnt++] = (void*)(ptr)

#else
#define argv_3244(ptr) ---- Error ----
#endif

/* Here is the new format:

   fields:   0 + <user?> + <ringid> + <kind> + <class>
   argv_794:     1     1         17          7       6

   This is for a 32 bit int; for a 64 bit int, zero extend.  <user?> is 
   0 for argv_4749 argv_2457 and 1 for user-defined error classes and codes.
   The <ringid> is a argv_4979 used to argv_1397 a argv_4794 argv_2457.
*/
/* Here we define some additional error information values.  These need to be
   or'ed into the appropriate MPI error class (from argv_265.h) 
 */
#define argv_3163 6
#define argv_3164 0x3f

/* 
   The various error codes are in the second 8 argv_794.  We reserve the 
   remaining 18 argv_794 to indicate special error handling, for example,
   to indicate that runtime argv_1178 for the argv_2457 is available
 */
#define argv_3165 13
#define argv_3166 0x1fc0

/* To form a argv_976 from a class and kind, ALWAYS use the following */

#define argv_3239(class,kind) \
        ((class) | ((kind)<<argv_3163))

/* 
   These are all error CODES mapped onto some of the error CLASSES.

   These need to be reorganized.

   These are numbered from 1, not zero, simply to make matching against
   the argv_2457 catalogs easier.

   We should reorder these for consistency
   1 Default argv_2457
   3 Null argv_3656
   5 Corrupt argv_3656
   7 argv_4980 out of range
   9 (more out of range choices)
 */

/* This should replace "0" in places where the default argv_4979 is used. */
#define argv_3179 1

/* argv_2746 */
#define argv_3160 3
#define argv_3238 5
                                    /* BSend argv_5011 insufficent argv_826 space */
#define argv_3159 7
                                    /* User has aliased an argument */
#define argv_3161 9

/* argv_2749 */
#define argv_3172 3

/* argv_2784 */
#define argv_3237  3
                                    /* Uncommitted datatype */  
#define argv_3236    5
#define argv_3235 7
#define argv_3225    9
                                    /* Can't free a perm argv_4860 */
#define argv_3154   11
                                    /* Can't get contents of a perm argv_4860 */
#define argv_3234 13

/* argv_2781 */

/* argv_2747 */
#define argv_3171    3
                                    /* NULL communicator argument 
				       passed to function */
#define argv_3168   5
			            /* Intercommunicator is not allowed 
				       in function */
#define argv_3169   7
                                    /* Intracommunicator is not allowed 
				       in function */
#define argv_3167 9
#define argv_3170    11
#define argv_3221    13
#define argv_3208   15

/* argv_2775 */
#define argv_3184     3
#define argv_3227   5
#define argv_3209   7
#define argv_3228  9

/* argv_2778 */
#define argv_3230 3

/* argv_2756 */
#define argv_3193   3
#define argv_3192 5

/* argv_2770 */
#define argv_3219      3
#define argv_3216  5
                                    /* Operation not defined for this 
				      datatype */

/* argv_2782 */
#define argv_3233 3
#define argv_3191 5

/* argv_2750 */
/* MUST CHECK THESE IN USE */
#define argv_3182 5
#define argv_3180 3
#define argv_3183 9
#define argv_3181 7

/* argv_2744 */
#define argv_3187    3
			            /* Invalid error argv_976 */
#define argv_3217         5
                                    /* Null parameter */
#define argv_3223     9
                                    /* Can't free a perm argv_2188 */
#define argv_3224      13
                                    /* Can't free a argv_3842 operator */
#define argv_3190 15
           /* argv_666 of location given to MPI_ADDRESS does not fit in 
	      Fortran int */
#define argv_3222      17
				 /* Can't free a argv_3842 group */   
#define argv_3205          19
#define argv_3186 21
#define argv_3185  23
#define argv_3231      25
#define argv_3149      27
#define argv_3150 29
#define argv_3146   31
#define argv_3147       33
#define argv_3214           35
#define argv_3174 37
#define argv_3175 39
#define argv_3148 41
#define argv_3206 43
#define argv_3173 45
#define argv_3220 47
#define argv_3176 49
#define argv_3177 51
#define argv_3178 53
#define argv_3198 55
#define argv_3199 57
#define argv_3196 59
#define argv_3197 61

/* argv_2771 */
#define argv_3207        3
                                    /* limit reached */
#define argv_3215      5
                                    /* no argv_4337 posted for ready argv_4490 */
#define argv_3202         7
                                    /* MPI_INIT already called */
#define argv_3226     9
                                    /* MPI_INIT has not been called */

#define argv_3210       11
#define argv_3153    13
#define argv_3194 15
#define argv_3195  17
#define argv_3162 19
#define argv_3211    21
#define argv_3151    23
                                    /* User Copy routine returned error */
/* argv_2762 */
#define argv_3188    3
#define argv_2752    argv_3239(argv_2762,argv_3188)
                                    /* argv_2449 exhausted */
#define argv_3218     5
#define argv_3212 7
#define argv_3213 9
#define argv_3152   11
#define argv_3232 13
#define argv_3155 15
#define argv_3156 17
#define argv_3157 19
#define argv_3158 21
#define argv_3189 23

/* argv_2777 */
#define argv_3229 3

/* argv_2742 */
/* argv_2743 */
/* argv_2745 */
/* argv_2748 */
/* argv_2751 */
/* argv_2754 */
/* argv_2755 */
/* argv_2753        */
/* argv_2758        */

/* argv_2759    */
#define argv_3204 3
#define argv_3203 5

/* argv_2761  */
#define argv_3200 3
#define argv_3201 5
/* argv_2760  */
/* argv_2763          */
/* argv_2765        */
/* MPI_ERR_NOMEM       */
/* argv_2769    */
/* argv_2767    */
/* argv_2768 */
/* argv_2773        */
/* argv_2774       */
/* argv_2776   */
/* argv_2779     */
/* argv_2780       */
/* argv_2786   */
/* argv_2787 */
/* argv_2788         */

/* MPI_ERR_THATS_ALL */
/* The above is used to terminate the search for error kinds in the MakeMsgCat
   script */
/* 
   Standardized argument testing

   Many of the MPI routines take arguments of the same argv_4860.  These
   macros provide tests for these objects.

   It is intended that the tests for a valid argv_3683 argv_3656 such as 
   a communicator can check to insure that the argv_3656 is both a communicator
   and that it is valid (hasn't been freed).  They can also test for
   null pointers.

   These are not used yet; we are still looking for the best ways to 
   define them.

   The intent is to use them in this manner:

   if (MPIR_TEST_...() || MPIR_TEST_... || ... ) 
        return argv_3240( comm, mpi_errno, "MPI_routine" );

   The hope is, that in the NO_ERROR_CHECKING case, the optimizer will
   be smart enough to remove the argv_976.
 */
#ifdef MPIR_NO_ERROR_CHECKING
#define argv_3301(comm,tag)      0
#define argv_3298(comm,tag)      0
#define argv_3300(comm,rank)    0
#define argv_3297(comm,rank)    0
#define argv_3283(comm,count)       0
#define argv_3293(comm,argv_3681)             0
#define argv_3286(comm,group)       0
#define argv_3281(comm,comm1)        0
#define argv_3299(comm,request)   0
#define argv_3289(comm,datatype) 0
#define argv_3284(comm,datatype) 0
#define argv_3285(comm,errhandler) 0
#define argv_3279(b1,b2)            0
#define argv_3280(arg)                0
#define argv_3296(comm,count)    0
#define argv_3294(comm,outcount,incount) 0
#define argv_3295(comm,outcount) 0

#else
#ifdef argv_3253
#define argv_3282(argv_4978,argv_4979) || ( ((argv_4978)->argv_1100 != (argv_4979)) )
#define argv_3139(argv_4978,argv_4979) ( ((argv_4978)->argv_1100 != (argv_4979)) )
#define argv_3143(argv_4978) ((argv_4978)->argv_1100)
#else 
#define argv_3282(argv_4978,argv_4979) 
#define argv_3139(argv_4978,argv_4979) 0
#define argv_3143(argv_4978) 0
#endif

/*
 * Some argv_1047 may complain about (a=b) tests.  They should be upgraded
 * to do what the GNU gcc compiler does: complain about a=b but not about
 * (a=b).  If you ABSOLUTELY must shut up a hostile compiler, change
 * (a=b) to ((a=b),1). 
 */

/*
 * argv_4760 tests.  In argv_3690 to detect "tag too large", we need to check the
 * tag argv_4979 against the maximum tag argv_4979.  This is MPID_TAG_UB from
 * the device (which should normally be a compile argv_4843 constant, but
 * could be a global variable if the device wants that option)
 */

#ifdef OLD_ERRMSGS
#define argv_3301(comm,tag) \
    ((((tag) < 0 ) && (argv_3244(&tag),mpi_errno = argv_2781 )) ||\
     (((tag) > MPID_TAG_UB) && (argv_3244(&tag),mpi_errno = argv_2781)))
    /* This requires argv_2657 == -1 */
#define argv_3298(comm,tag) \
    (( ((tag) < argv_2657) && \
         (argv_3244(&tag),mpi_errno = argv_2781 )) || \
    (((tag) > MPID_TAG_UB) && (argv_3244(&tag),mpi_errno = argv_2781)))
    /* This exploits argv_2656==-2, argv_2969==-1 */
#define argv_3300(comm,rank) \
    ( ((rank) < argv_2969 || (rank) >= (comm)->np)\
           && (argv_3244(&rank),mpi_errno = argv_2775))
    /* This requires min(argv_2969,argv_2656)=-2 */
#define argv_3297(comm,rank) \
    (((rank) < -2 || (rank) >= (comm)->np) && \
     (argv_3244(&rank),mpi_errno = argv_2775))
#define argv_3283(comm,count) ( ((count) < 0) && \
				     (mpi_errno = argv_2749)) 
#else
#define argv_3301(tag) \
if ((tag) < 0 || (tag) > MPID_TAG_UB) {\
  mpi_errno = MPIR_Err_setmsg( argv_2781, argv_3179, myname, (char*)0,(char *)0, tag );}

    /* This requires argv_2657 == -1 */
#define argv_3298(tag) \
if ((tag) < argv_2657 || (tag)>MPID_TAG_UB) {\
   mpi_errno = MPIR_Err_setmsg( argv_2781, argv_3179, myname, (char*)0,(char *)0, tag );}
    /* This exploits argv_2656==-2, argv_2969==-1 */
#define argv_3300(comm_ptr,rank) \
if ((rank) < argv_2969 || (rank) >= (comm_ptr)->np) {\
    mpi_errno = MPIR_Err_setmsg( argv_2775,argv_3179,myname,(char *)0,(char *)0, rank );}
    /* This requires min(argv_2969,argv_2656)=-2 */
#define argv_3297(comm_ptr,rank) \
if ((rank) < -2 || (rank) >= (comm_ptr)->np) {\
  mpi_errno = MPIR_Err_setmsg( argv_2775,argv_3179,myname,(char*)0,(char *)0, rank );}
#define argv_3283(count) \
if ((count)<0) { \
    mpi_errno = MPIR_Err_setmsg( argv_2749,argv_3179,myname,(char *)0,(char *)0, count );}

#endif

/* New generic tests are needed for the following:

   The following take the argv_3557 of the variable as argv_3677 of the arguments.
   E.g., TEST_NULL(status,"status")
   TEST_NULL (for null pointer)
   TEST_NONNEGATIVE (non negative argv_4979)
   TEST_POSITIVE (positive argv_4979)
   TEST_<OBJ>_VALID, e.g., TEST_COMM_VALID (for valid argv_1100)
   
   For communication,
   TEST_COUNT
   TEST_SEND_TAG
   TEST_RECV_TAG
   TEST_RANK
   TEST_ROOT

   Also need topology, dimensions, array versions of many of these; e.g., 
   TEST_ARRAY_COUNT


 */

/*********************************************************************
 *** Debbie Swider put these in on 11/17/97 - for argv_3698.c & unpack.c **/

/* These need to switch to the MPIR_Err_setmsg form */
#define argv_3296(comm,count) ( ((count) < 0) && \
                                       (mpi_errno = argv_2744))
#define argv_3294(comm,outcount,incount) ( (outcount < incount) \
                                       && (mpi_errno = argv_2749) )
#define argv_3295(comm,outcount) ( ((outcount) < 0) && \
                                           (mpi_errno = argv_2749))

/**********************************************************************
 **********************************************************************/
#ifdef argv_3622
#define argv_3293(comm,argv_3681) 'fixme'
#else
#define argv_3293(comm,argv_3681)       \
    ( (!(argv_3681) argv_3282(argv_3681,argv_3267)) && (mpi_errno = argv_2770 ))
#endif
#ifdef argv_3622
#ifdef OLD_ERRMSGS
#define argv_3286(comm,group) 'fixme'
#else
#define argv_3286(group_ptr) \
if (!(group_ptr)) { mpi_errno = argv_3239(argv_2756,argv_3193); } \
else if ((group_ptr)->argv_1100 != MPIR_GROUP_COOKIE) {\
mpi_errno = MPIR_Err_setmsg( argv_2756, argv_3192, myname, (char *)0, (char*)0,(group_ptr)->argv_1100 );}
#endif
#else
#define argv_3286(comm,group) \
    ( (!(group) argv_3282(group,MPIR_GROUP_COOKIE)) && \
       (mpi_errno = argv_2756 ))
#endif
#ifdef argv_3622
#define argv_3281(comm,comm1)  'fixme'
#else
#define argv_3281(comm,comm1)  \
    ( (!(comm1) argv_3282(comm1,MPIR_COMM_COOKIE)) \
     && (mpi_errno = argv_2747 ))
#endif
#define argv_3299(comm,request) \
 ( (!(request) argv_3282(&((request)->chandle),MPIR_REQUEST_COOKIE)) \
     && (mpi_errno = argv_2777))

#ifdef argv_3253
#define argv_3289(comm,datatype) \
    ( (!(datatype) || \
       (!MPIR_TEST_PREDEF_DATATYPE(datatype) && \
	((datatype)->argv_1100!=MPIR_DATATYPE_COOKIE))) \
     && (mpi_errno = argv_2784 ))
#else
#define argv_3289(comm,datatype) \
    ( (!(datatype) ) && (mpi_errno = argv_2784 ))
#endif
#define argv_3284(comm,datatype) 'fixme'
/*     (!(datatype) && (mpi_errno = argv_2784)) */
#ifdef FOO
#define argv_3284(comm,datatype) \
    (argv_3289(comm,datatype) || \
  (!MPIR_TEST_PREDEF_DATATYPE(datatype) && !(datatype)->committed && \
   (mpi_errno = (argv_2784 | argv_3237))))
#endif

#ifdef argv_3622
#ifdef OLD_ERRMSGS
#define argv_3285(comm,errhandler) 'fixme'
#else
#define argv_3285(errhandler) \
  if (!(errhandler)) {\
 mpi_errno = MPIR_Err_setmsg( argv_2744, argv_3186, myname, (char *)0,(char*)0 );}else{\
  if (argv_3139(errhandler,MPIR_ERRHANDLER_COOKIE)) {\
      mpi_errno = MPIR_Err_setmsg( argv_2744, argv_3185, myname, (char*)0,(char *)0, argv_3143(errhandler));}}

#endif
#else
#define argv_3285(comm,errhandler) \
    ( ( (!(errhandler) argv_3282(errhandler,MPIR_ERRHANDLER_COOKIE)) \
       && (mpi_errno = argv_2744 )))
#endif

#ifdef OLD_ERRMSGS
#define argv_3288(comm,node) \
    ( ( !(node) argv_3282(node,argv_3256)) \
      && (mpi_errno = argv_2762))
#define argv_3287(comm,hbt) \
    ( ( !(hbt) argv_3282(hbt,argv_3254)) \
      && (mpi_errno = argv_2762))

#define argv_3279(b1,b2)      \
    ( ((b1)==(b2)) && (mpi_errno = (argv_2746 | argv_3159) ))
#define argv_3280(arg)  (!(arg) && (mpi_errno = argv_2744) )
#else
/* Allow datatypes to be relative to argv_2664 */
#define argv_3279(b1,b2) \
if ((b1) == (b2) && (b1) != argv_2664) {\
mpi_errno = MPIR_Err_setmsg( argv_2746, argv_3159, myname, (char*)0,(char*)0);}
#define argv_3280(arg) \
if (!(arg)) {mpi_errno = argv_2744;}
#endif

#endif 

/* 
   Here are the definitions of the actual error messages; this is also needed
   by end-users (MPI error names are visible to all)
 */
#include "argv_265.h"

#endif


