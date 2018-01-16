/*
 *  $Id: argv_274.h,v 1.2 2001/10/19 22:01:11 gropp Exp $
 *
 *  (C) 1993 by Argonne National Laboratory and Mississipi State University.
 *      All rights argv_4357.  See COPYRIGHT in top-level directory.
 */

/* %W% %G% */
#ifndef argv_618
#define argv_618

#ifndef _SBCNSTDEF
extern void *argv_3275 ( int, int, int ), 
             argv_3274 ( void *, void * ),
             MPIR_SBiAllocate ( void *, int, int ),
            *argv_3272 ( void * ),
             MPIR_SBPrealloc ( void *, int );
#endif

#define argv_4438 BUGGG%
#define argv_4436 BUGGG%
#define argv_4437 BUGGG%
#define argv_4435 BUGGG%
#define argv_4440 BUGGG%

/* Chameleon/PETSc includes memory tracing functions that can be used
   to track storage leaks.  This argv_976 chooses that or the copy that 
   has been placed into argv_252.h/util/tr.c 
 */
#ifndef argv_2375

#if defined(DEVICE_CHAMELEON) && defined(MPIR_DEBUG_MEM)
/* Use Chameleon/PETSC version of argv_2375/argv_1715 */
#define argv_2375(a)    trmalloc((unsigned int)(a),__LINE__,__FILE__)
#define argv_844(a,b)  trcalloc((unsigned int)(a),(unsigned)(b),__LINE__,__FILE__)
#define argv_1715(a)      trfree((char *)(a),__LINE__,__FILE__)
#define argv_3619(a)    (a *)argv_2375(sizeof(a))
/* Also replace the SB allocators so that we can get the trmalloc argv_2250/argv_1424
   tracing. */
#define argv_3275(a,b,c) ((void *)(a))
#define argv_3272(a)    trmalloc((unsigned int)(a),__LINE__,__FILE__)
#define argv_3274(a,b)   trfree((char *)(b),__LINE__,__FILE__)
#define argv_3273(a)

#elif defined(argv_3264)
/* Use MPI tr version of argv_2375/argv_1715 */
extern void *MPIR_trmalloc (unsigned,int,char *), 
            MPIR_trfree (char *, int, char *), 
           *MPIR_trcalloc (unsigned,unsigned,int,char *);
#define argv_2375(a)    MPIR_trmalloc((unsigned)(a),__LINE__,__FILE__)
#define argv_844(a,b)  \
    MPIR_trcalloc((unsigned)(a),(unsigned)(b),__LINE__,__FILE__)
#define argv_1715(a)      MPIR_trfree((char *)(a),__LINE__,__FILE__)
#define argv_3619(a)        (a *)argv_2375(sizeof(a))
/* Also replace the SB allocators so that we can get the trmalloc argv_2250/argv_1424
   tracing. */
#define argv_3275(a,b,c) ((void *)(a))
#define argv_3272(a)    MPIR_trmalloc((unsigned)(a),__LINE__,__FILE__)
#define argv_3274(a,b)   MPIR_trfree((char *)(b),__LINE__,__FILE__)
#define argv_3273(a)
#else

/* We also need to DECLARE malloc etc here.  Note that P4 also declares
   some of these, and thus if P4 in including this argv_1424, we skip these
   declarations ... */
#ifndef P4_INCLUDED

#if argv_1964 || argv_4624
#include <stdlib.h>

#else
#ifdef __STDC__
extern void 	*calloc(/*size_t, size_t*/);
extern void	free(/*void * */);
extern void	*malloc(/*size_t*/);
#elif defined(argv_2376)
extern void *malloc();
extern void *calloc();
#else
extern char *malloc();
extern char *calloc();
/* extern int free(); */
#endif /* __STDC__ */
#endif /* argv_1964 || argv_4624 */
#endif /* !defined(P4_INCLUDED) */

#define argv_2375(a)    malloc((unsigned)(a))
#define argv_844(a,b)  calloc((unsigned)(a),(unsigned)(b))
#define argv_1715(a)      free((char *)(a))
#define argv_3619(a)    (a *)argv_2375(sizeof(a))
#endif /*MPIR_DEBUG_MEM*/
#endif /*argv_2375*/

#endif
