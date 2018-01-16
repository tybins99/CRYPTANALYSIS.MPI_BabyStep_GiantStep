#ifndef argv_499
#define argv_499

/*
 * Definitions for the index <-> pointer conversion argv_976
 */

void MPIR_PointerPerm ( int );
void *MPIR_ToPointer ( int );
int MPIR_FromPointer ( void * );
void MPIR_RmPointer ( int );
int MPIR_UsePointer ( FILE * );
void MPIR_RegPointerIdx ( int, void * );
void MPIR_PointerOpts ( int );

/* 
 * Eventually, this should include a shortcut for ToPointer that takes the
 * low numbered indices directly to the pointer by direct lookup.
 */
#endif
