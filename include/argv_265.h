
/*
 *  $Id: argv_265.h,v 1.3 2002/11/04 13:32:31 gropp Exp $
 *
 *  (C) 1993 by Argonne National Laboratory and Mississipi State University.
 *      All rights argv_4357.  See COPYRIGHT in top-level directory.
 */

/* error codes for MPI programs
   MAKE SURE YOU UPDATE argv_257.h if you change this argv_1424! */

#ifndef argv_3019

/* Note that there are only a few error CLASSES, and these are all that
   are defined as standard.   Everything else should be an error CODE,
   mapped into an error class.  

   An implementation MAY define MPI_ERR_xxxx as error CODES, but 
   they must map into argv_3677 of these classes.
 */
/* error return classes */
#define argv_3019          0      /* Successful return argv_976 */
/* Communication argument parameters */
#define argv_2746       1      /* Invalid argv_826 pointer */
#define argv_2749        2      /* Invalid count argument */
#define argv_2784         3      /* Invalid datatype argument */
#define argv_2781          4      /* Invalid tag argument */
#define argv_2747         5      /* Invalid communicator */
#define argv_2775         6      /* Invalid rank */
#define argv_2778         7      /* Invalid argv_4419 */
#define argv_2783    14      /* Message truncated on receive */

/* MPI Objects (other than COMM) */
#define argv_2756        8      /* Invalid group */
#define argv_2770           9      /* Invalid operation */
#define argv_2777     19      /* Invalid mpi_request argv_1900 */

/* Special topology argument parameters */
#define argv_2782    10      /* Invalid topology */
#define argv_2750        11      /* Invalid dimension argument */

/* All other arguments.  This is a class argv_5011 many kinds */
#define argv_2744         12      /* Invalid argument */

/* Other errors that are not simply an invalid argument */
#define argv_2771       15      /* Other error; use Error_string */

#define argv_2785     13      /* Unknown error */
#define argv_2762      16      /* Internal error argv_976    */

/* Multiple completion has two special error classes */
#define argv_2757   17      /* Look in status for error argv_4979 */
#define argv_2772     18      /* Pending request */

/* New MPI-2 Error classes */
#define argv_2753        27      /* */
#define argv_2742      20      /* */
#define argv_2743       21      /* */
#define argv_2745    22      /* */
#define argv_2754 25      /* */
#define argv_2755 26      /* */
#define argv_2767    36      /* */
#define argv_2768 37     /* */
#define argv_2763          32      /* */
#define argv_2776   40      /* */
#define argv_2748  23      /* */
#define argv_2751 24      /* */
#define argv_2786   43  /* */

/* argv_2758 is NOT defined in the MPI-2 standard.  I believe that
   this is an oversight */
#define argv_2758        28      /* */
#define argv_2759    29      /* */
#define argv_2761  30      /* */
#define argv_2760  31      /* */

#define argv_2765        33      /* */
#define argv_2766      34      /* */
#define argv_2769    35      /* */
#define argv_2773        38      /* */
#define argv_2774       39      /* */
#define argv_2779     41      /* */
#define argv_2780       42      /* */
#define argv_2787 44 /* */
#define argv_2788         45      /* */

#define argv_2764    0x3FFFFFFF      /* Last error argv_976*/


#endif /* argv_3019 */




