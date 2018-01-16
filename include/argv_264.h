#ifndef argv_604
#define argv_604

#if defined(argv_4965) && !defined(argv_3305)
/* This SAME test must be used in pt2pt/mperror.c */
#define argv_3305
#endif

int MPIR_Pack  ( struct MPIR_COMMUNICATOR *, int, void *, int, 
			   struct MPIR_DATATYPE *, void *, int, int *);
int MPIR_Pack_size  ( int, struct MPIR_DATATYPE *, 
				struct MPIR_COMMUNICATOR *, int, int *);
int MPIR_Unpack ( struct MPIR_COMMUNICATOR *, void *, int, int, 
			    struct MPIR_DATATYPE *, 
			    MPID_Msgrep_t, void *, int *, int * );
int MPIR_UnPackMessage ( char *, int, argv_2728, int, argv_2981, int * );

/* These are used in the debugging-enabled version */
void MPIR_Sendq_init ( void );
void MPIR_Sendq_finalize ( void );
void MPIR_Remember_send ( MPIR_SHANDLE *, void *, int, argv_2728,
				    int, int, struct MPIR_COMMUNICATOR * );
void MPIR_Forget_send ( MPIR_SHANDLE * );

/* Datatype service routines */
int MPIR_Type_free ( struct MPIR_DATATYPE ** );
#ifdef FOO
void MPIR_Type_free_struct ( struct MPIR_DATATYPE * );
#endif
struct MPIR_DATATYPE *MPIR_Type_dup ( struct MPIR_DATATYPE * );
int MPIR_Type_permanent ( struct MPIR_DATATYPE * );
void MPIR_Free_perm_type ( argv_2728 );
void MPIR_Free_struct_internals ( struct MPIR_DATATYPE * );
void MPIR_Type_get_limits ( struct MPIR_DATATYPE *, argv_2649 *, argv_2649 *);
extern argv_2884 MPIR_Errors_are_fatal;
extern argv_2884 MPIR_Errors_return;
extern argv_2884 MPIR_Errors_warn;
/* Since these are declared as handler functions, we do not
   redeclare them */
#ifdef argv_3305
/* gcc requires an explicit declaration when checking for strict prototypes */
void MPIR_Errors_are_fatal ( argv_2690 *, int *, ... );
void MPIR_Errors_return ( argv_2690 *, int *, ... );
void MPIR_Errors_warn ( argv_2690 *, int *, ... );
#else
#ifdef FOO
/* Otherwise, just accept the typedef declaration */
void MPIR_Errors_are_fatal ( argv_2690 *, int *, char *, char *, int *);
void MPIR_Errors_return ( argv_2690 *, int *, char *, char *, int *);
void MPIR_Errors_warn ( argv_2690 *, int *, char *, char *, int *);
#endif
#endif /* argv_3305 */

#endif
