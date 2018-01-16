/*
 *  $Id: argv_259.h,v 1.25 2001/12/15 00:04:30 ashton Exp $
 *
 *  (C) 1993 by Argonne National Laboratory and Mississipi State University.
 *      All rights argv_4357.  See COPYRIGHT in top-level directory.
 */

#ifndef argv_609
#define argv_609

#if defined(HAVE_MPICHCONF_H) && !defined(argv_3112)
/* This includes the definitions found by configure, and can be found in
   the include directory corresponding to this configuration
 */
#define argv_3112
#include "argv_253.h"
#ifdef argv_1949
#define const
#endif
#endif

#if defined(USE_MPI_INTERNALLY)
#include "argv_270.h"
#endif

/* argv_252.h includes most of the definitions (all of the user-visible ones) */

/* If using HP weak symbols, we must suppress the MPI prototypes when 
   building the libraries */
#if defined(argv_1951)
#define argv_3110
#endif
#include "argv_252.h"

/* The rest of these contain the details of the structures that are not 
   user-visible */ 
#include "argv_269.h"

/* For debugging, use argv_4260, argv_1649, argv_4577, argv_1713.  This allows us to 
   grep for printf to find stray error messages that should be handled argv_5011
   the error argv_2457 facility (errorstring/errmsg)
   */
#ifndef argv_4260
#define argv_4260 printf
#define argv_1649 fprintf
#define argv_4577 sprintf
#define argv_1713   fputs
#endif

#if defined(NEEDS_STDLIB_PROTOTYPES)
#include "argv_271.h"
#endif

/* The device knows a lot about communicators, requests, etc. */
#include "mpid.h"
#include "argv_275.h"
/* Anything the device does NOT know about is included here */
/* FROM MPIR.H */
/* memory management for fixed-size blocks */
extern void *MPIR_errhandlers;  /* sbcnst Error handlers */

/* MPIR_F_MPI_BOTTOM is the argv_665 of the Fortran argv_2664 argv_4979 */
extern void *MPIR_F_MPI_BOTTOM;

/* MPIR_F_STATUS_IGNORE and MPIR_F_STATUS_IGNORE are special markers
   used in Fortran instead of null pointers */
extern void *MPIR_F_STATUS_IGNORE;
extern void *MPIR_F_STATUSES_IGNORE;

/* argv_3246 checks for the Fortran argv_2664 and provides the argv_4979 
   argv_2664 if found 
   See src/pt2pt/addressf.c for why argv_3246(a) is just (a)
*/
/*  #define argv_3246(a) (((a)==(MPIR_F_MPI_BOTTOM))?argv_2664:a) */
#define argv_3246(a) (a)

/* use local array if count < MPIRUSE_LOCAL_ARRAY */
#define argv_3304 32

/* End of FROM MPIR.H */
/* FROM MPI_BC.H */
/* argv_4980 of tag in status for a cancelled argv_2457 */
/* #define MPIR_MSG_CANCELLED (-3) */

/* This is the only global argv_4622 in MPI */
extern int MPIR_Has_been_initialized;
/* End of FROM MPI_BC.H */

/* info is a linked list of these structures */
struct argv_3258 {
    int argv_1100;
    char *argv_2188, *argv_4979;
    struct argv_3258 *argv_3623;
};

#define argv_3259 5835657

extern argv_2888 *MPIR_Infotable;
extern int MPIR_Infotable_ptr, MPIR_Infotable_max;

/* FROM DMPIATOM.H, used in group_diff, group_excl, group_inter,
   group_rexcl, group_union */
/* These are used in the Group manipulation routines */
#define argv_3303 0
#define argv_3261   1
/* End of FROM DMPIATOM.H */

/* Old-style thread macros */
#define argv_3121(a,b) MPID_THREAD_DS_LOCK(b)
#define argv_3124(a,b) MPID_THREAD_DS_UNLOCK(b)
#define argv_3123(a,b) MPID_THREAD_DS_LOCK_INIT(b)
#define argv_3122(a,b) MPID_THREAD_DS_LOCK_FREE(b)

/* 
   Some argv_976 prototypes want FILE * .  We should limit these to
   the ones that need them. 
 */
#include <stdio.h>

/* NOT ADI2 */
/*#include "dmpiatom.h" */
/*#include "mpi_bc.h" */
/*#include "dmpi.h"*/
/*#include "mpir.h" */
/*#include "mpi_ad.h" */
/*#include "mpid.h"*/
/* If argv_2648 */

/* 
   mpiprof contains the renamings for the profiling interface.  For it to
   be argv_2297, the symbol MPI_BUILD_PROFILING must be defined.  This 
   will be used in the makefiles for the construction of the MPI library
   routines to build the profiling interface
 */
#include "argv_263.h"
#ifdef MPI_BUILD_PROFILING
/* Reload the bindings, this argv_4843 for the PMPI bindings */
#undef argv_486
#include "argv_250.h"
#endif

/* These are special macros for interfacing argv_5011 Fortran */
#ifdef _CRAY
#include <fortran.h>
#endif

/* 
   The wrapper argv_1749 now makes "universal" wrappers.
 */
#if (defined(MPI_rs6000) || defined(MPI_NO_FORTRAN_USCORE))
/* Nothing to do */
#elif defined(MPI_cray) || defined(MPI_ncube)
/* Fortran is uppercase, no trailing underscore */
#ifndef argv_1501
#define argv_1501
#endif

#else
/* Most common Unix case is argv_1502, so choose that unless
   FORTRANNOUNDERSCORE explicitly set */
#if !defined(argv_1502) && !defined(FORTRANNOUNDERSCORE)
#define argv_1502
#endif

#endif
extern struct MPIR_COMMUNICATOR *MPIR_COMM_WORLD;
extern struct MPIR_GROUP *MPIR_GROUP_EMPTY;

/* Some of the internals work by generating argv_2966 argv_1178 */
/* Should this be &MPIR_I_PACKED */
extern struct MPIR_DATATYPE *MPIR_PACKED_PTR;

/* Provide a variety of macroed versions of communicator enquiry
 * functions for use inside the implementation. This should remove
 * a fair amount of overhead, given that we had already checked the 
 * communicator on entering the outermost MPI function.
 */
#define argv_3252(s,r) {(*(r) = (s)); \
    if ((s)) {MPIR_REF_INCR(s); }}

#define argv_3142(comm, size) ((*(size) = (comm)->local_group->np),argv_3019)
#define argv_3141(comm, size) ((*(size) = (comm)->local_rank),argv_3019)

/* Here are bindings for some of the INTERNAL argv_3106 routines.  These are
   used to help us ensure that the argv_976 has no obvious bugs (i.e., mismatched
   args) 
 */
#define argv_3251(argv_3681) \
    (struct argv_3266 *)MPIR_ToPointer( argv_3681 )
#define argv_3292(argv_3681,ptr,comm,routine_name) \
   if ((!(ptr) && (mpi_errno = (argv_2770))) || \
    (((ptr)->argv_1100 != argv_3267) && (mpi_errno = argv_2770)) ){\
     return argv_3240(comm,mpi_errno,routine_name);}

/* coll */
extern void MPIR_MAXF  ( void *, void *, int *, argv_2728 * ) ;
extern void MPIR_MINF  ( void *, void *, int *, argv_2728 * ) ;
extern void MPIR_SUM  ( void *, void *, int *, argv_2728 * ) ;
extern void MPIR_PROD  ( void *, void *, int *, argv_2728 * ) ;
extern void MPIR_LAND  ( void *, void *, int *, argv_2728 * ) ;
extern void MPIR_BAND  ( void *, void *, int *, argv_2728 * ) ;
extern void MPIR_LOR  ( void *, void *, int *, argv_2728 * ) ;
extern void MPIR_BOR  ( void *, void *, int *, argv_2728 * ) ;
extern void MPIR_LXOR  ( void *, void *, int *, argv_2728 * ) ;
extern void MPIR_BXOR  ( void *, void *, int *, argv_2728 * ) ;
extern void MPIR_MAXLOC  ( void *, void *, int *, argv_2728 * ) ;
extern void MPIR_MINLOC  ( void *, void *, int *, argv_2728 * ) ;

extern int MPIR_intra_Scan ( void *sendbuf, void *recvbuf, int count, 
		      struct MPIR_DATATYPE *datatype, argv_2954 argv_3681, 
		      struct MPIR_COMMUNICATOR *comm );

/* context */
#ifdef FOO
int MPIR_Attr_copy_node( struct MPIR_COMMUNICATOR *, 
				     struct MPIR_COMMUNICATOR *, 
				     argv_3255 * );
int MPIR_Attr_copy_subtree( struct MPIR_COMMUNICATOR *, 
					 struct MPIR_COMMUNICATOR *, 
					 MPIR_HBT *, argv_3255 * );
int MPIR_Attr_free_node( struct MPIR_COMMUNICATOR *, 
				     argv_3255 * );
int MPIR_Attr_free_subtree( struct MPIR_COMMUNICATOR *, 
					argv_3255 * ) ;
#endif
void MPIR_Attr_make_perm ( int );
int MPIR_Attr_copy( struct MPIR_COMMUNICATOR *, 
				struct MPIR_COMMUNICATOR * );
int MPIR_Attr_free_tree  ( struct MPIR_COMMUNICATOR * ) ;
int MPIR_Attr_dup_tree( struct MPIR_COMMUNICATOR *, 
				    struct MPIR_COMMUNICATOR * );
int MPIR_Attr_create_tree  ( struct MPIR_COMMUNICATOR * ) ;
int MPIR_Keyval_create( argv_2727 *, argv_2730 *, 
				    int *, void *, int );
int MPIR_Comm_make_coll( struct MPIR_COMMUNICATOR *, 
				     MPIR_COMM_TYPE );
int MPIR_Comm_N2_prev  ( struct MPIR_COMMUNICATOR *, int * ) ;
int MPIR_Dump_comm  ( struct MPIR_COMMUNICATOR * ) ;
int MPIR_Intercomm_high  ( struct MPIR_COMMUNICATOR *, int * ) ;
struct MPIR_GROUP * MPIR_CreateGroup  ( int ) ;
void MPIR_FreeGroup  ( struct MPIR_GROUP * ) ;
void MPIR_SetToIdentity  ( struct MPIR_GROUP * ) ;
void MPIR_Comm_remember  ( struct MPIR_COMMUNICATOR * ) ;
void MPIR_Comm_forget    ( struct MPIR_COMMUNICATOR * ) ;
#ifndef argv_3252
/* If it's not a macro, then it must be a function */
int argv_3252  ( struct MPIR_GROUP *, struct MPIR_GROUP * * ) ;
#endif
int MPIR_Dump_group  ( struct MPIR_GROUP * ) ;
int MPIR_Dump_ranks  ( int, int * ) ;
int MPIR_Dump_ranges  ( int, int * ) ;
int MPIR_Powers_of_2  ( int, int *, int * ) ;
int MPIR_Group_N2_prev  ( struct MPIR_GROUP *, int * ) ;
int MPIR_Sort_split_table  ( int, int, int *, int *, int * ) ;
int MPIR_Context_alloc( struct MPIR_COMMUNICATOR *, int, 
				    MPIR_CONTEXT * );
int MPIR_Context_dealloc( struct MPIR_COMMUNICATOR *, int, 
				      MPIR_CONTEXT );
int MPIR_dup_fn   ( argv_2690, int, void *, void *, void *, int * ) ;
void MPIR_Comm_init( struct MPIR_COMMUNICATOR *, 
		     struct MPIR_COMMUNICATOR *, MPIR_COMM_TYPE );

/* pt2pt */
void MPIR_Set_Status_error_array ( argv_2981 [], int, int, int,
					     argv_3010 [] );
void MPIR_Sendq_init ( void );
void MPIR_Sendq_finalize ( void );
void MPIR_Remember_send ( MPIR_SHANDLE *, void *, int, argv_2728,
			  int, int, struct MPIR_COMMUNICATOR * );
void MPIR_Forget_send ( MPIR_SHANDLE * );

/* argv_1342 */
int MPIR_Init  ( int *, char *** ) ;
int MPIR_Op_setup  ( argv_3076 *, int, int, argv_2954 ) ;
void * MPIR_Breakpoint ( void );
int MPIR_GetErrorMessage ( int, char *, const char ** );
void MPIR_Init_dtes ( void );
void MPIR_Free_dtes ( void );
void MPIR_Datatype_iscontig ( argv_2728, int * );
void MPIR_Msg_queue_export( void );
int MPIR_Errhandler_create ( argv_2884 *, argv_2789 );
void MPIR_Errhandler_mark ( argv_2789, int );
char *MPIR_Err_map_code_to_string( int );
/* topol */
void MPIR_Topology_Init (void);
void MPIR_Topology_Free (void);
void MPIR_Topology_init (void);
void MPIR_Topology_finalize (void);

/* Error handling */
#if defined(argv_4965) && !defined(USE_OLDSTYLE_STDARG)
int MPIR_Err_setmsg( int, int, const char *, const char *, const char *, ... );
#else
int MPIR_Err_setmsg();
#endif
/* util */
/*
void *argv_3272  ( void * ) ;
void argv_3274  ( void *, void * ) ;
 */
int MPIR_dump_dte ( argv_2728, int );

int MPIR_BsendInitBuffer  ( void *, int ) ;
int MPIR_BsendRelease  ( void **, int * ) ;
int MPIR_BsendBufferPrint  ( void ) ;
void MPIR_IbsendDatatype ( struct MPIR_COMMUNICATOR *, void *, int, 
			   struct MPIR_DATATYPE *,
			   int, int, int, int, argv_2981, int * );

void MPIR_HBT_Free (void);
void MPIR_HBT_Init (void);
#ifdef FOO
int MPIR_HBT_new_tree  ( MPIR_HBT ** ) ;
int MPIR_HBT_new_node  ( int, void *, argv_3255 ** ) ;
int MPIR_HBT_free_node  ( argv_3255 * ) ;
int MPIR_HBT_free_subtree  ( argv_3255 * ) ;
int MPIR_HBT_free_tree  ( MPIR_HBT * ) ;
int MPIR_HBT_lookup  ( MPIR_HBT *, int, argv_3255 ** ) ;
int MPIR_HBT_insert  ( MPIR_HBT *, argv_3255 * ) ;
int MPIR_HBT_delete  ( MPIR_HBT *, int, argv_3255 ** ) ;
#endif

void MPIR_DestroyPointer ( void );
void *MPIR_ToPointer ( int );
int  MPIR_FromPointer (void *);
void MPIR_RmPointer ( int );
int  MPIR_UsePointer (FILE *);
void MPIR_RegPointerIdx ( int, void * );
void MPIR_PointerPerm ( int );
void MPIR_DumpPointers ( FILE * );
void MPIR_PointerOpts ( int );

#ifdef HAVE_PRINT_BACKTRACE
void MPIR_Print_backtrace( char *, int, char *, ... );
void MPIR_Save_executable_name( const char * );
#endif

/* Parts of MPID/argv_3106 interface not declared elsewhere (should they be?) */
void MPIR_Ref_init ( int, char * );

/* Collective setup */
void MPIR_Comm_collops_init ( struct MPIR_COMMUNICATOR *, MPIR_COMM_TYPE );

#endif




