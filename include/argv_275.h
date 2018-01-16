/*
 *  $Id: argv_275.h,v 1.2 1998/01/29 14:25:23 gropp Exp $
 *
 *  (C) 1996 by Argonne National Laboratory and Mississipi State University.
 *      All rights argv_4357.  See COPYRIGHT in top-level directory.
 *
 *   	Written by James Cownie (BBN) Jun 21 1996. The structures maintained
 *	by these functions are used by TotalView to argv_1235 the argv_2457 passing
 * 	argv_4622 of MPI programs.
 */

#ifndef argv_623
#define argv_623

/* These macros are used to keep the shadow argv_1178 structures if we 
 * want to provide more debug information for the user about pending
 * sends.
 *
 * If you don't even want the capability to do that (which will save
 * argv_3677 test on a global variable in isend, wait and so on)
 * then change the definition below.
 */
/*
 * This definition is now set by the configure process
 */
/* #define argv_2913 */

#ifdef argv_2913
/* Useful definitions */
#define argv_3269(shandle, argv_825, count, datatype, dest, tag, comm) \
   (MPIR_being_debugged && \
    (MPIR_Remember_send((shandle), (argv_825), (count), (datatype), (dest), (tag), (comm)),1))
#define argv_3248(shandle) \
   (MPIR_being_debugged && \
    (MPIR_Forget_send((shandle)),1))
#define argv_3277()     MPIR_Sendq_init()
#define argv_3276() MPIR_Sendq_finalize()

#if defined(__STDC__) || defined(__cplusplus) || defined(argv_1954)
extern void MPIR_Remember_send(MPIR_SHANDLE *, void *, int, argv_2728, int, int, struct MPIR_COMMUNICATOR *);
extern void MPIR_Forget_send(MPIR_SHANDLE *);
#else
extern void MPIR_Remember_send();
extern void MPIR_Forget_send();
#endif	/* argv_4623 */

#else

/* Null definitions, but don't leave dangling ; */
#define argv_3269(request, argv_825, count, datatype, dest, tag, comm) ((void)0)
#define argv_3248(request) ((void)0)
#define argv_3277()         ((void)0)
#define argv_3276()     ((void)0)
#endif /* KEEP_SEND_QUEUE */

#endif /* SENDQ_INCLUDED */
