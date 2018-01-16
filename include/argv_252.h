/*
 *  $Id: argv_252.h,v 1.44 2003/01/23 21:09:14 gropp Exp $
 *
 *  (C) 1993 by Argonne National Laboratory and Mississipi State University.
 *      All rights argv_4357.  See COPYRIGHT in top-level directory.
 */

/* user include argv_1424 for MPI programs */

#ifndef argv_603
#define argv_603

/* needed for MPI-2 extensions */
#define argv_2935 256

/* 
   argv_3622 enables using ints for the MPI objects instead of addresses.
   This is required by MPI 1.1, particularly for Fortran (also for C, 
   since you can now have "constant" values for things like argv_2903, and
   they are stronger than "constant between MPI_INIT and MPI_FINALIZE".
   For example, we might want to allow argv_2903 as a case label.

   argv_3622 is the default; I'm purging all argv_976 that doesn't use
   argv_3622 from the source.
 */
#define argv_3622

/* Keep C++ argv_1047 from getting confused */
#if defined(__cplusplus)
extern "C" {
#endif

/* Results of the compare operations */
/* These should stay ordered */
#define argv_2887     0
#define argv_2726 1
#define argv_3003   2
#define argv_3068   3

/* Data types
 * A more aggressive yet homogeneous implementation might want to 
 * make the values here the number of argv_837 in the basic argv_4860, argv_5011
 * a simple test against a max limit (e.g., 16 for long double), and
 * non-contiguous structures argv_5011 indices greater than that.
 * 
 * Note: Configure knows these values for providing the Fortran optional
 * types (like MPI_REAL8).  Any changes here must be matched by changes
 * in configure.in
 */
typedef int argv_2728;
#define argv_2680           ((argv_2728)1)
#define argv_3073  ((argv_2728)2)
#define argv_2671           ((argv_2728)3)
#define argv_3001          ((argv_2728)4)
#define argv_3075 ((argv_2728)5)
#define argv_2903            ((argv_2728)6)
#define argv_3072       ((argv_2728)7)
#define argv_2920           ((argv_2728)8)
#define argv_3074  ((argv_2728)9)
#define argv_2852          ((argv_2728)10)
#define argv_2737         ((argv_2728)11)
#define argv_2921    ((argv_2728)12)
#define argv_2925  ((argv_2728)13)
/* argv_2924 is in the complete ref 2nd edition, though not in the 
   standard.  Rather, argv_2925 is on page 40 in the argv_5083A version */
#define argv_2924      ((argv_2728)13)

#define argv_2966         ((argv_2728)14)
#define argv_2918             ((argv_2728)15)
#define argv_3065             ((argv_2728)16)

/* 
   The layouts for the types argv_2739 etc are simply
   struct { 
       double argv_4984;
       int    loc;
   }
   This is documented in the man pages on the various datatypes.   
 */
#define argv_2853         ((argv_2728)17)
#define argv_2739        ((argv_2728)18)
#define argv_2923          ((argv_2728)19)
#define argv_3002         ((argv_2728)20)
#define argv_2642              ((argv_2728)21)
#define argv_2922   ((argv_2728)22)

/* Fortran types */
#define argv_2725           ((argv_2728)23)
#define argv_2738    ((argv_2728)24)
#define argv_2919           ((argv_2728)25)
#define argv_2974              ((argv_2728)26)
#define argv_2740  ((argv_2728)27)
#define argv_2904           ((argv_2728)28)
#define argv_2643          ((argv_2728)29)
#define argv_2639          ((argv_2728)30)
#define argv_2640   ((argv_2728)31)
#define argv_2644             ((argv_2728)32)
#define argv_2641 ((argv_2728)33)
#define argv_2681         ((argv_2728)1)

/* Communicators */
typedef int argv_2690;
#define argv_2724 91
#define argv_2716  92

/* Groups */
typedef int argv_2867;
#define argv_2871 90

/* Collective operations */
typedef int argv_2954;

#define argv_2929    (argv_2954)(100)
#define argv_2938    (argv_2954)(101)
#define argv_3020    (argv_2954)(102)
#define argv_2970   (argv_2954)(103)
#define argv_2917   (argv_2954)(104)
#define argv_2660   (argv_2954)(105)
#define argv_2927    (argv_2954)(106)
#define argv_2663    (argv_2954)(107)
#define argv_2928   (argv_2954)(108)
#define argv_2670   (argv_2954)(109)
#define argv_2939 (argv_2954)(110)
#define argv_2937 (argv_2954)(111)

/* Permanent argv_2188 values */
/* C Versions (return pointer to argv_4979) */
#define argv_3022           81
#define argv_2885             83
#define argv_2907               85
#define argv_3105  87
/* Fortran Versions (return integer argv_4979) */
#define argv_3278          80
#define argv_3257            82
#define argv_3260              84
#define argv_3306 86

/* Define some null objects */
#define argv_2710      ((argv_2690)0)
#define argv_2959        ((argv_2954)0)
#define argv_2877     ((argv_2867)0)
#define argv_2729  ((argv_2728)0)
#define argv_2986   ((argv_2981)0)
#define argv_2794 ((argv_2789 )0)

/* These are only guesses; make sure you change them in argv_257.h as well */
#define argv_2936 256
#define argv_2931   512
#define argv_2934     63		/* How long a argv_3557 do you need ? */

/* Pre-defined constants */
#define argv_3066      (-32766)
#define argv_3067 argv_3066
#define argv_2916 0

/* Upper bound on the overhead in bsend for each argv_2457 argv_826 */
#define argv_2667 512

/* Topology types */
#define argv_2862  1
#define argv_2673   2

#define argv_2664      (void *)0

#define argv_2969   (-1)
#define argv_2656 	(-2)
#define argv_2987        (-3)
#define argv_2657     (-1)

/* MPI Error handlers.  Systems that don't support stdargs can't use
   this definition
 */
#if defined(argv_4965) 
typedef void (argv_2884) ( argv_2690 *, int *, ... );
#else
typedef void (argv_2884) ();
#endif

#define argv_2798 ((argv_2789)119)
#define argv_2799    ((argv_2789)120)
#define argv_3245     ((argv_2789)121)
typedef int argv_2789;
/* Make the C names for the null functions all upper-case.  Note that 
   this is required for systems that use all uppercase names for Fortran 
   externals.  */
/* MPI 1 names */
#define argv_2951   MPIR_null_copy_fn
#define argv_2952 MPIR_null_delete_fn
#define argv_2741         MPIR_dup_fn
/* MPI 2 names */
#define argv_2711 argv_2951
#define argv_2712 argv_2952
#define argv_2701 argv_2741

/* MPI request opjects */
typedef union MPIR_HANDLE *argv_2981;

/* User combination function */
typedef void (argv_3076) ( void *, void *, int *, argv_2728 * ); 

/* MPI Attribute copy and delete functions */
typedef int (argv_2727) ( argv_2690, int, void *, void *, void *, int * );
typedef int (argv_2730) ( argv_2690, int, void *, void * );

#define argv_3077    1
#define argv_3018 2
#define argv_3109     1
#define argv_3111 "1.2.5"

/********************** MPI-2 FEATURES BEGIN HERE ***************************/
#define argv_3108

/* for the datatype decoders */
#define argv_2687         2312
#define argv_2683    2313
#define argv_2689        2314
#define argv_2685       2315
#define argv_2686       2316
#define argv_2684      2317
#define argv_2688        2318

/* for info */
typedef struct argv_3258 *argv_2888;
# define argv_2898         ((argv_2888) 0)
# define argv_2932       255
# define argv_2933      1024

/* for subarray and darray constructors */
#define argv_2961              56
#define argv_2962        57
#define argv_2733    121
#define argv_2734   122
#define argv_2736     123
#define argv_2735 -49767

/* argv_255.h includes configuration-specific information, such as the 
   argv_4860 of argv_2649 or argv_2851, also argv_260.h, if it was built.  
   It now includes the definition of argv_3010 */
#include "argv_255.h"

/* argv_1901 conversion types/functions */

/* Programs that need to convert types used in argv_3106 should use these */
#define argv_2691(comm) (argv_2851)(comm)
#define argv_2702(comm) (argv_2690)(comm)
#define argv_3034(datatype) (argv_2851)(datatype)
#define argv_3047(datatype) (argv_2728)(datatype)
#define argv_2868(group) (argv_2851)(group)
#define argv_2873(group) (argv_2867)(group)
/* argv_2982 is a routine in src/misc2 */
#define argv_2983(request) (argv_2981)MPIR_ToPointer(request)
#define argv_2955(argv_3681) (argv_2851)(argv_3681)
#define argv_2957(argv_3681) (argv_2954)(argv_3681)
#define argv_2790(errhandler) (argv_2851)(errhandler)
#define argv_2792(errhandler) (argv_2789)(errhandler)

/* For new MPI-2 types */
#define argv_3082(win)   (argv_2851)(win)
#define argv_3088(win)   (MPI_Win)(win)

#define argv_3013 (argv_3010 *)0
#define argv_3017 (argv_3010 *)0

/* For supported thread levels */
#define argv_3031 0
#define argv_3028 1
#define argv_3030 2
#define argv_3029 3

/********************** MPI-2 FEATURES END HERE ***************************/

/*************** Experimental argv_3106 FEATURES BEGIN HERE *******************/
/* Attribute keys.  These are set to argv_2916 by default */
extern int MPICHX_QOS_BANDWIDTH;
extern int MPICHX_QOS_PARAMETERS;
/**************** Experimental argv_3106 FEATURES END HERE ********************/

/******** Globus-2 device gives access to the underlying topology *********/

/* get the underlying topology at the user level using attribute caching */
extern int MPICHX_TOPOLOGY_DEPTHS;
extern int MPICHX_TOPOLOGY_COLORS;

/* argv_3558 the different topology levels (the argv_3690 is relevant!) */
#define argv_3116 0    /* communicate thru WAN TCP links */
#define argv_3114 1    /* communicate thru LAN TCP links */
#define argv_3113 2   /* communicate inside a machine thru TCP */
#define argv_3115 3   /* use vendor-MPI library */

/* START GRIDFTP */
/******** Globus-2 device use of GridFTP ********/
/* Attribute keys.  These are set to argv_2916 by default */
extern int MPICHX_PARALLELSOCKETS_PARAMETERS;
struct argv_1895
{
    int argv_3719;

    int argv_3637;
    int argv_2394;
    int argv_4762;
}; /* end struct argv_1895 */
/* END GRIDFTP */

/******** End of Globus-2 device keys *************************************/

/* MPI's error classes */
#include "argv_265.h"
/* End of MPI's error classes */

/*
 * Normally, we provide prototypes for all MPI routines.  In a few wierd
 * cases, we need to suppress the prototypes.
 */
#ifndef argv_3110
/* We require that the C compiler support prototypes */
int MPI_Send(void*, int, argv_2728, int, int, argv_2690);
int MPI_Recv(void*, int, argv_2728, int, int, argv_2690, argv_3010 *);
int MPI_Get_count(argv_3010 *, argv_2728, int *);
int MPI_Bsend(void*, int, argv_2728, int, int, argv_2690);
int argv_3006(void*, int, argv_2728, int, int, argv_2690);
int argv_2988(void*, int, argv_2728, int, int, argv_2690);
int argv_2668( void*, int);
int argv_2669( void*, int*);
int argv_2911(void*, int, argv_2728, int, int, argv_2690, argv_2981 *);
int argv_2886(void*, int, argv_2728, int, int, argv_2690, argv_2981 *);
int argv_2912(void*, int, argv_2728, int, int, argv_2690, argv_2981 *);
int argv_2910(void*, int, argv_2728, int, int, argv_2690, argv_2981 *);
int argv_2909(void*, int, argv_2728, int, int, argv_2690, argv_2981 *);
int argv_3078(argv_2981 *, argv_3010 *);
int argv_3023(argv_2981 *, int *, argv_3010 *);
int argv_2984(argv_2981 *);
int argv_3080(int, argv_2981 *, int *, argv_3010 *);
int argv_3026(int, argv_2981 *, int *, int *, argv_3010 *);
int argv_3079(int, argv_2981 *, argv_3010 *);
int argv_3025(int, argv_2981 *, int *, argv_3010 *);
int argv_3081(int, argv_2981 *, int *, int *, argv_3010 *);
int argv_3027(int, argv_2981 *, int *, int *, argv_3010 *);
int argv_2908(int, int, argv_2690, int *flag, argv_3010 *);
int argv_2968(int, int, argv_2690, argv_3010 *);
int argv_2672(argv_2981 *);
int argv_3024(argv_3010 *, int *);
int argv_2996(void*, int, argv_2728, int, int, argv_2690, argv_2981 *);
int argv_2666(void*, int, argv_2728, int,int, argv_2690, argv_2981 *);
int argv_3007(void*, int, argv_2728, int,int, argv_2690, argv_2981 *);
int argv_2989(void*, int, argv_2728, int,int, argv_2690, argv_2981 *);
int argv_2976(void*, int, argv_2728, int,int, argv_2690, argv_2981 *);
int argv_3008(argv_2981 *);
int argv_3009(int, argv_2981 *);
int argv_2998(void *, int, argv_2728,int, int, void *, int, argv_2728, int, int, argv_2690, argv_3010 *);
int argv_2999(void*, int, argv_2728, int, int, int, int, argv_2690, argv_3010 *);
int argv_3036(int, argv_2728, argv_2728 *);
int argv_3064(int, int, int, argv_2728, argv_2728 *);
int argv_3056(int, int, argv_2649, argv_2728, argv_2728 *);
int argv_3057(int, int *, int *, argv_2728, argv_2728 *);
int argv_3055(int, int *, argv_2649 *, argv_2728, argv_2728 *);
int argv_3062(int, int *, argv_2649 *, argv_2728 *, argv_2728 *);
int argv_2647(void*, argv_2649 *);
int argv_3046(argv_2728, argv_2649 *);
/* See the 1.1 version of the Standard; I think that the standard is in 
   error; however, it is the standard */
/* int argv_3061(argv_2728, argv_2649 *size); */
int argv_3061(argv_2728, int *);
/* MPI_Type_count was withdrawn in MPI 1.1 */
int argv_3058(argv_2728, argv_2649*);
int argv_3063(argv_2728, argv_2649*);
int argv_3035(argv_2728 *);
int argv_3048(argv_2728 *);
int argv_2859(argv_3010 *, argv_2728, int *);
int argv_2963(void*, int, argv_2728, void *, int, int *,  argv_2690);
int argv_3069(void*, int, int *, void *, int, argv_2728, argv_2690);
int argv_2965(int, argv_2728, argv_2690, int *);
int argv_2661(argv_2690 );
int argv_2662(void*, int, argv_2728, int, argv_2690 );
int argv_2856(void* , int, argv_2728, void*, int, argv_2728, int, argv_2690); 
int argv_2857(void* , int, argv_2728, void*, int *, int *, argv_2728, int, argv_2690); 
int argv_2991(void* , int, argv_2728, void*, int, argv_2728, int, argv_2690);
int argv_2992(void* , int *, int *,  argv_2728, void*, int, argv_2728, int, argv_2690);
int argv_2650(void* , int, argv_2728, void*, int, argv_2728, argv_2690);
int argv_2651(void* , int, argv_2728, void*, int *, int *, argv_2728, argv_2690);
int argv_2654(void* , int, argv_2728, void*, int, argv_2728, argv_2690);
int argv_2655(void* , int *, int *, argv_2728, void*, int *, int *, argv_2728, argv_2690);
int argv_2978(void* , void*, int, argv_2728, argv_2954, int, argv_2690);
int argv_2956(argv_3076 *, int, argv_2954 *);
int argv_2958( argv_2954 *);
int argv_2653(void* , void*, int, argv_2728, argv_2954, argv_2690);
int argv_2979(void* , void*, int *, argv_2728, argv_2954, argv_2690);
int argv_2990(void* , void*, int, argv_2728, argv_2954, argv_2690 );
int argv_2881(argv_2867 group, int *);
int argv_2880(argv_2867 group, int *);
int argv_2882 (argv_2867, int, int *, argv_2867, int *);
int argv_2869(argv_2867, argv_2867, int *);
int argv_2708(argv_2690, argv_2867 *);
int argv_2883(argv_2867, argv_2867, argv_2867 *);
int argv_2876(argv_2867, argv_2867, argv_2867 *);
int argv_2870(argv_2867, argv_2867, argv_2867 *);
int argv_2875(argv_2867 group, int, int *, argv_2867 *);
int argv_2872(argv_2867 group, int, int *, argv_2867 *);
int argv_2879(argv_2867 group, int, int [][3], argv_2867 *);
int argv_2878(argv_2867 group, int, int [][3], argv_2867 *);
int argv_2874(argv_2867 *);
int MPI_Comm_size(argv_2690, int *);
int MPI_Comm_rank(argv_2690, int *);
int argv_2694(argv_2690, argv_2690, int *);
int argv_2700(argv_2690, argv_2690 *);
int argv_2696(argv_2690, argv_2867, argv_2690 *);
int argv_2722(argv_2690, int, int, argv_2690 *);
int argv_2703(argv_2690 *);
int argv_2723(argv_2690, int *);
int argv_2715(argv_2690, int *);
int argv_2714(argv_2690, argv_2867 *);
int argv_2905(argv_2690, int, argv_2690, int, int, argv_2690 * );
int argv_2906(argv_2690, int, argv_2690 *);
int argv_2914(argv_2727 *, argv_2730 *, int *, void*);
int argv_2915(int *);
int argv_2659(argv_2690, int, void*);
int MPI_Attr_get(argv_2690, int, void *, int *);
int argv_2658(argv_2690, int);
int argv_3033(argv_2690, int *);
int argv_2675(argv_2690, int, int *, int *, int, argv_2690 *);
int argv_2731(int, int, int *);
int argv_2863(argv_2690, int, int *, int *, int, argv_2690 *);
int MPI_Graphdims_get(argv_2690, int *, int *);
int MPI_Graph_get(argv_2690, int, int, int *, int *);
int MPI_Cartdim_get(argv_2690, int *);
int MPI_Cart_get(argv_2690, int, int *, int *, int *);
int argv_2677(argv_2690, int *, int *);
int argv_2674(argv_2690, int, int, int *);
int MPI_Graph_neighbors_count(argv_2690, int, int *);
int argv_2865(argv_2690, int, int, int *);
int argv_2678(argv_2690, int, int, int *, int *);
int argv_2679(argv_2690, int *, argv_2690 *);
int argv_2676(argv_2690, int, int *, int *, int *);
int argv_2864(argv_2690, int, int *, int *, int *);
int MPI_Get_processor_name(char *, int *);
int argv_2861(int *, int *);
int argv_2791(argv_2884 *, argv_2789 *);
int MPI_Errhandler_set(argv_2690, argv_2789);
int MPI_Errhandler_get(argv_2690, argv_2789 *);
int argv_2793(argv_2789 *);
int argv_2797(int, char *, int *);
int argv_2796(int, int *);
double argv_3104(void);
double argv_3103(void);
#ifndef argv_3104
double argv_4220(void);
double argv_4219(void);
#endif
int MPI_Init(int *, char ***);
int argv_2900( int *, char ***, int, int * );
int MPI_Finalize(void);
int argv_2902(int *);
int argv_2645(argv_2690, int);

/* MPI-2 communicator naming functions */
int argv_2718(argv_2690, char *);
int argv_2706(argv_2690, char *, int *);

#ifdef argv_1949
/* Default Solaris compiler does not accept const but does accept prototypes */
#if defined(argv_4965) 
int argv_2967(int, ...);
#else
int argv_2967(int);
#endif
#else
int argv_2967(const int, ...);
#endif

int argv_2951 ( argv_2690, int, void *, void *, void *, int * );
int argv_2952 ( argv_2690, int, void *, void * );
int argv_2741 ( argv_2690, int, void *, void *, void *, int * );

/* misc2 (MPI2) */
int argv_3012( argv_2851 *, argv_3010 * );
int argv_3011( argv_3010 *, argv_2851 * );
int argv_2850( int * );
int argv_3039(int, int, int *, argv_2728, argv_2728 *);
int argv_3051(argv_2728, int *, int *, int *, int *); 
int argv_3050(argv_2728, int, int, int, int *, argv_2649 *, argv_2728 *);
int argv_3043(int, int *, int *, int *, int, argv_2728, argv_2728 *);
int argv_3037(int, int, int, int *, int *, int *, int *, int, argv_2728, argv_2728 *);
int argv_2890(argv_2888 *);
int MPI_Info_set(argv_2888, char *, char *);
int argv_2891(argv_2888, char *);
int MPI_Info_get(argv_2888, char *, int, char *, int *);
int argv_2897(argv_2888, char *, int *, int *);
int argv_2895(argv_2888, int *);
int argv_2896(argv_2888, int, char *);
int argv_2892(argv_2888, argv_2888 *);
int argv_2894(argv_2888 *info);

argv_2851 argv_2889(argv_2888);
argv_2888 argv_2893(argv_2851);
argv_2851 argv_2982( argv_2981 );

/* external */
int argv_3014( argv_3010 *, int );
int argv_3015( argv_3010 *, argv_2728, int );

#endif /* argv_3110 */



/* Here are the bindings of the profiling routines */
#if !defined(MPI_BUILD_PROFILING)
int argv_4144(void*, int, argv_2728, int, int, argv_2690);
int argv_4131(void*, int, argv_2728, int, int, argv_2690, argv_3010 *);
int PMPI_Get_count(argv_3010 *, argv_2728, int *);
int argv_3983(void*, int, argv_2728, int, int, argv_2690);
int argv_4149(void*, int, argv_2728, int, int, argv_2690);
int argv_4139(void*, int, argv_2728, int, int, argv_2690);
int argv_3985( void* argv_826, int);
int argv_3986( void* argv_826, int*);
int argv_4114(void*, int, argv_2728, int, int, argv_2690, argv_2981 *);
int argv_4096(void*, int, argv_2728, int, int, argv_2690, argv_2981 *);
int argv_4115(void*, int, argv_2728, int, int, argv_2690, argv_2981 *);
int argv_4113(void*, int, argv_2728, int, int, argv_2690, argv_2981 *);
int argv_4112(void*, int, argv_2728, int, int, argv_2690, argv_2981 *);
int argv_4196(argv_2981 *, argv_3010 *);
int argv_4157(argv_2981 *, int *flag, argv_3010 *);
int argv_4137(argv_2981 *);
int argv_4198(int, argv_2981 *, int *, argv_3010 *);
int argv_4160(int, argv_2981 *, int *, int *, argv_3010 *);
int argv_4197(int, argv_2981 *, argv_3010 *);
int argv_4159(int, argv_2981 *, int *flag, argv_3010 *);
int argv_4199(int, argv_2981 *, int *, int *, argv_3010 *);
int argv_4161(int, argv_2981 *, int *, int *, argv_3010 *);
int argv_4111(int, int, argv_2690, int *flag, argv_3010 *);
int argv_4127(int, int, argv_2690, argv_3010 *);
int argv_3987(argv_2981 *);
int argv_4158(argv_3010 *, int *flag);
int argv_4145(void*, int, argv_2728, int, int, argv_2690, argv_2981 *);
int argv_3984(void*, int, argv_2728, int, int, argv_2690, argv_2981 *);
int argv_4150(void*, int, argv_2728, int, int, argv_2690, argv_2981 *);
int argv_4140(void*, int, argv_2728, int, int, argv_2690, argv_2981 *);
int argv_4132(void*, int, argv_2728, int, int, argv_2690, argv_2981 *);
int argv_4151(argv_2981 *);
int argv_4152(int, argv_2981 *);
int argv_4146(void *, int, argv_2728, int, int, void *, int, argv_2728, int, int, argv_2690, argv_3010 *);
int argv_4147(void*, int, argv_2728, int, int, int, int, argv_2690, argv_3010 *);
int argv_4165(int, argv_2728, argv_2728 *);
int argv_4192(int, int, int, argv_2728, argv_2728 *);
int argv_4184(int, int, argv_2649, argv_2728, argv_2728 *);
int argv_4185(int, int *, int *, argv_2728, argv_2728 *);
int argv_4183(int, int *, argv_2649 *, argv_2728, argv_2728 *);
int argv_4190(int, int *, argv_2649 *, argv_2728 *, argv_2728 *);
int argv_3972(void*, argv_2649 *);
int argv_4175(argv_2728, argv_2649 *);
/* See the 1.1 version of the Standard; I think that the standard is in 
   error; however, it is the standard */
/* int argv_4189(argv_2728, argv_2649 *); */
int argv_4189(argv_2728, int *);
int argv_4186(argv_2728, argv_2649*);
int argv_4191(argv_2728, argv_2649*);
int argv_4164(argv_2728 *);
int argv_4176(argv_2728 *);
int argv_4077(argv_3010 *, argv_2728, int *);
int argv_4123(void*, int, argv_2728, void *, int, int *,  argv_2690);
int argv_4193(void*, int, int *, void *, int, argv_2728, argv_2690);
int argv_4125(int, argv_2728, argv_2690, int *);
int argv_3981(argv_2690 );
int argv_3982(void* argv_826, int, argv_2728, int, argv_2690 );
int argv_4074(void* , int, argv_2728, void*, int, argv_2728, int, argv_2690); 
int argv_4075(void* , int, argv_2728, void*, int *, int *, argv_2728, int, argv_2690); 
int argv_4142(void* , int, argv_2728, void*, int, argv_2728, int, argv_2690);
int argv_4143(void* , int *, int *displs, argv_2728, void*, int, argv_2728, int, argv_2690);
int argv_3973(void* , int, argv_2728, void*, int, argv_2728, argv_2690);
int argv_3974(void* , int, argv_2728, void*, int *, int *, argv_2728, argv_2690);
int argv_3977(void* , int, argv_2728, void*, int, argv_2728, argv_2690);
int argv_3978(void* , int *, int *, argv_2728, void*, int *, int *, argv_2728, argv_2690);
int argv_4133(void* , void*, int, argv_2728, argv_2954, int, argv_2690);
int argv_4120(argv_3076 *, int, argv_2954 *);
int argv_4121( argv_2954 *);
int argv_3976(void* , void*, int, argv_2728, argv_2954, argv_2690);
int argv_4134(void* , void*, int *, argv_2728, argv_2954, argv_2690);
int argv_4141(void* , void*, int, argv_2728, argv_2954, argv_2690 );
int argv_4093(argv_2867 group, int *);
int argv_4092(argv_2867 group, int *);
int argv_4094 (argv_2867, int, int *, argv_2867, int *);
int argv_4084(argv_2867, argv_2867, int *);
int argv_4009(argv_2690, argv_2867 *);
int argv_4095(argv_2867, argv_2867, argv_2867 *);
int argv_4089(argv_2867, argv_2867, argv_2867 *);
int argv_4085(argv_2867, argv_2867, argv_2867 *);
int argv_4088(argv_2867 group, int, int *, argv_2867 *);
int argv_4086(argv_2867 group, int, int *, argv_2867 *);
int argv_4091(argv_2867 group, int, int [][3], argv_2867 *);
int argv_4090(argv_2867 group, int, int [][3], argv_2867 *);
int argv_4087(argv_2867 *);
int argv_4016(argv_2690, int *);
int argv_4011(argv_2690, int *);
int argv_3997(argv_2690, argv_2690, int *);
int argv_4003(argv_2690, argv_2690 *);
int argv_3999(argv_2690, argv_2867, argv_2690 *);
int argv_4019(argv_2690, int, int, argv_2690 *);
int argv_4004(argv_2690 *);
int argv_4020(argv_2690, int *);
int argv_4013(argv_2690, int *);
int argv_4012(argv_2690, argv_2867 *);
int argv_4109(argv_2690, int, argv_2690, int, int, argv_2690 *);
int argv_4110(argv_2690, int, argv_2690 *);
int argv_4116(argv_2727 *, argv_2730 *, int *, void*);
int argv_4117(int *);
int argv_3980(argv_2690, int, void*);
int PMPI_Attr_get(argv_2690, int, void *, int *);
int argv_3979(argv_2690, int);
int argv_4163(argv_2690, int *);
int argv_3989(argv_2690, int, int *, int *, int, argv_2690 *);
int argv_4021(int, int, int *);
int argv_4080(argv_2690, int, int *, int *, int, argv_2690 *);
int PMPI_Graphdims_get(argv_2690, int *, int *);
int PMPI_Graph_get(argv_2690, int, int, int *, int *);
int PMPI_Cartdim_get(argv_2690, int *);
int PMPI_Cart_get(argv_2690, int, int *, int *, int *);
int argv_3991(argv_2690, int *, int *);
int argv_3988(argv_2690, int, int, int *);
int PMPI_Graph_neighbors_count(argv_2690, int, int *);
int argv_4082(argv_2690, int, int, int *);
int argv_3992(argv_2690, int, int, int *, int *);
int argv_3993(argv_2690, int *, argv_2690 *);
int argv_3990(argv_2690, int, int *, int *, int *);
int argv_4081(argv_2690, int, int *, int *, int *);
int argv_4078(char *, int *);
int argv_4079(int *, int *);
int argv_4022(argv_2884 *, argv_2789 *);
int PMPI_Errhandler_set(argv_2690, argv_2789);
int PMPI_Errhandler_get(argv_2690, argv_2789 *);
int argv_4023(argv_2789 *);
int argv_4025(int, char *, int *);
int argv_4024(int, int *);

int argv_4179(argv_2728, int *, int *, int *, int *); 
int argv_4178(argv_2728, int, int, int, int *, argv_2649 *, argv_2728 *);
int argv_4172(int, int *, int *, int *, int, argv_2728, argv_2728 *);
int argv_4166(int, int, int, int *, int *, int *, int *, int, argv_2728, argv_2728 *);
int argv_4098(argv_2888 *);
int PMPI_Info_set(argv_2888, char *, char *);
int argv_4099(argv_2888, char *);
int PMPI_Info_get(argv_2888, char *, int, char *, int *);
int argv_4105(argv_2888, char *, int *, int *);
int argv_4103(argv_2888, int *);
int argv_4104(argv_2888, int, char *);
int argv_4100(argv_2888, argv_2888 *);
int argv_4102(argv_2888 *);

argv_2851 argv_4097(argv_2888);
argv_2888 argv_4101(argv_2851);

/* Wtime argv_1291 above */
int argv_4106(int *, char ***);
int argv_4107( int *, char ***, int, int * );
int argv_4071(void);
int argv_4108(int *);
int argv_3970(argv_2690, int);
/* MPI-2 communicator naming functions */
int argv_4015(argv_2690, char *);
int argv_4007(argv_2690, char *, int *); 
#ifdef argv_1949
/* Default Solaris compiler does not accept const but does accept prototypes */
#if defined(argv_4965) 
int argv_4126(int, ...);
#else
int argv_4126(int);
#endif
#else
int argv_4126(const int, ...);
#endif

/* external */
int argv_4155( argv_3010 *, int );
int argv_4156( argv_3010 *, argv_2728, int );

#endif  /* MPI_BUILD_PROFILING */
/* End of MPI bindings */

#if defined(__cplusplus)
}
/* Add the C++ bindings */
/* 
   If MPICH_SKIP_MPICXX is defined, the mpi++.h argv_1424 will *not* be included.
   This is necessary, for example, when building the C++ interfaces.  It
   can also be used when you want to use a C++ compiler to compile C argv_976,
   and do not want to argv_2274 the C++ bindings
 */
#if defined(HAVE_MPI_CPP) && !defined(MPICH_SKIP_MPICXX)
#include "mpi++.h"
#endif 
#endif

/* This is a special macro to let the MPI library check that a program 
   was compiled argv_5011 the same argv_1982 argv_1424 as an application.  Define 
   STRICT_MPI
   to keep MPI_Init from being redefined as a macro.

   Unfortunately, this interfers argv_5011 tools that make use of the
   MPI profiling interface and define an implementation of MPI_Init.
 */
#ifdef FOO
#ifndef STRICT_MPI
#define MPI_Init( a, b ) argv_2901( a, b, argv_3111 )
#define argv_4106( a, b ) PMPI_Init_vcheck( a, b, argv_3111 )
#endif
#endif

#endif

