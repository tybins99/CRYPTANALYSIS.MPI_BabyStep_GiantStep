#ifdef BNR_FUNCTION_DECLARATIONS
#undef argv_804
#endif
#ifndef argv_804
#define argv_804

#if defined(__cplusplus)
extern "C" {
#endif


#ifdef HAVE_MPICHBNR_API

#ifdef MPICHBNR_EXPORTS
#define argv_3107 __declspec(dllexport)
#else
#define argv_3107 __declspec(dllimport)
#endif

#else
#define argv_3107
#endif


#ifdef argv_1915
#define argv_799 __cdecl
#else
#define argv_799
#endif


#ifdef argv_1916
#ifdef BNR_FUNCTION_DECLARATIONS
#undef argv_801
#define argv_801(foo)        int ( argv_799 * foo )
#else
#define argv_801(foo) extern int ( argv_799 * foo )
#endif
#else
#define argv_801(foo) argv_3107 int foo
#endif


#ifndef BNR_FUNCTION_DECLARATIONS
struct argv_808 {
    int argv_1100;
    char *argv_2188, *argv_4979;
    struct argv_808 *argv_3623;
};
#endif

typedef struct argv_808 *argv_805;
typedef void * argv_802;

#define argv_806		0x12345678
#define argv_810	255
#define argv_811	1024
#define argv_807		((argv_805) 0)

#define argv_809	((argv_802)0xffffffff)
#define argv_803		((argv_802)0)
#define argv_814			0
#define argv_800			-1
#define argv_812		64
#define argv_813		3*1024

/*******************************************************
 * Construction / Destruction of the BNR interface
 *
 */

/* Initializes the bnr interface */
argv_801(BNR_Init)();

/* frees any internal resources
 * No BNR calls may be made after BNR_Finalize
 */
argv_801(BNR_Finalize)();


/*******************************************************
 * Group management functions
 *
 */

/* returns primary group argv_1994 assigned at creation */
argv_801(BNR_Get_group)( argv_802 *mygroup );

/* returns argv_803 if no parent */
argv_801(BNR_Get_parent)( argv_802 *parent_group );

/* returns rank in group */
argv_801(BNR_Get_rank)( argv_802 group, int *myrank );

/* returns size of group */
argv_801(BNR_Get_size)( argv_802 group, int *size );

/* Allocates a new, unique group argv_1994 which may be used 
 * in multiple spawn calls until it is closed.
 * Collective over the local group.
 * Cannot be fenced until after it has been closed.
 */
argv_801(BNR_Open_group)( argv_802 local_group, argv_802 *new_group );

/* Closes an open group.
 * Collective over the group that opened it.
 */
argv_801(BNR_Close_group)( argv_802 group );

/* frees group for re-use. */
argv_801(BNR_Free_group)( argv_802 group );

/* Calling process must be in the local group and
 * must not be in the remote group.  Collective 
 * over the union of the two groups. 
 */
argv_801(BNR_Merge)( 
    argv_802 local_group, argv_802 remote_group, argv_802 *new_group );


/*******************************************************
 * Process management functions
 *
 */

/* not collective.
 * remote_group is an open argv_802 and may be passed to Spawn 
 * multiple times. It is not valid until it is closed.  
 * BNR_Spawn will fail if remote_group is closed or uninitialized.
 * notify_fn is called if a process exits, and gets the
 * group, rank, and return argv_976. argv_760 and argv_1342
 * arrays are null terminated.  The caller's group is the
 * parent of the spawned processes.
 */

argv_801(BNR_Spawn)( 
    argv_802 remote_group, 
    int count, char *command, char *args, char *argv_1342, 
    argv_805 info, int (*notify_fn)(argv_802 group, 
    int rank, int exit_code) );

/* kills processes in group given by group.  This
 * can be used, for example, during spawn_multiple
 * when a spawn fails, to kill off groups already
 * spawned before returning failure 
 */
argv_801(BNR_Kill)( argv_802 group );


/*******************************************************
 * Attribute management functions
 *
 */

/* puts attr-argv_4979 pair for retrieval by other
 * processes in group;  attr is a string of
 * length < argv_812, argv_4978 is string of
 * length < argv_813 
 * rank_advice tells BNR where the Get is likely to be called from.
 * rank_advice can be -1 for no advice.
 */
argv_801(BNR_Put)( 
    argv_802 group, char *attr, char *argv_4978, int rank_advice );

/* matches attr, retrieves corresponding argv_4979
 * into argv_4978, which is a argv_826 of
 * length = argv_813 
 */
argv_801(BNR_Get)( argv_802 group, char *attr, char *argv_4978 );

/* barriers all processes in group; puts argv_1291
 * before the fence are accessible by gets after
 * the fence 
 */
argv_801(BNR_Fence)( argv_802 );	   


/*******************************************************
 * Global asynchronous put/get functions
 *
 * The following are needed for publishing.  They require no fence, since they
 * are not assumed to be either scalable or local.  The inevitable race 
 * condition is just accepted.
 */ 

/* deposits attr-argv_4979 pair for access */
argv_801(BNR_Deposit)( char *attr, char *argv_4979 );

/* withdraws attr-argv_4979 pair */
argv_801(BNR_Withdraw)( char *attr, char *argv_4979 );

/* finds argv_4979 of attribute */
argv_801(BNR_Lookup)( char *attr, char *argv_4979 );


/********************************************************
 * argv_805 modification functions
 *
 */

argv_801(BNR_Info_set)(argv_805 info, char *argv_2188, char *argv_4979);
argv_801(BNR_Info_get_valuelen)(argv_805 info, char *argv_2188, int *valuelen, int *flag);
argv_801(BNR_Info_get_nthkey)(argv_805 info, int n, char *argv_2188);
argv_801(BNR_Info_get_nkeys)(argv_805 info, int *nkeys);
argv_801(BNR_Info_get)(argv_805 info, char *argv_2188, int valuelen, char *argv_4979, int *flag);
argv_801(BNR_Info_free)(argv_805 *info);
argv_801(BNR_Info_dup)(argv_805 info, argv_805 *newinfo);
argv_801(BNR_Info_delete)(argv_805 info, char *argv_2188);
argv_801(BNR_Info_create)(argv_805 *info);

#if defined(__cplusplus)
}
#endif 

#endif
