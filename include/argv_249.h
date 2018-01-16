#ifndef argv_3254

#include "comm.h"

typedef union {
    int (*argv_839) ( argv_2690, int, void *, void *, void *, 
				 int * );
    void (*argv_1413) ( int *, int *, int *, int *, int *, 
				    int *, int * );
} argv_3144;
typedef union {
    int (*argv_840) ( argv_2690, int, void *, void * );
    void (*argv_1414) ( int *, int *, int *, void *, int * );
} argv_3145;

typedef struct  {
    MPIR_COOKIE                    /* Cookie to help detect valid items */
    argv_3144 argv_1104;
    argv_3145 argv_1223;
    void  *argv_1396;
    int    argv_1500;        /* Used to indicate whether Fortran or
				     C calling conventions are used for
				     argv_1104 (attribute_in is passed by 
				     argv_4979 in C, must be passed by reference
				     in Fortran); the underlying argv_976
				     must also understand what a 
				     Fortran logical looks like */
    int    ref_count;
    int    argv_3842;             /* Used to mark the argv_3842 attributes of
				     argv_2724 */
    int    argv_4489;                  /* External argv_4979 for argv_2195 */
} argv_3136;

#define argv_3135 0xa774c003

typedef struct argv_608 {
  MPIR_COOKIE                    /* Cookie to help detect valid items */
  void                  *argv_4979;
  argv_3136         *argv_2195;
  short                 argv_779;
  struct argv_608 *left;
  struct argv_608 *right;
} argv_3255;
#define argv_3256 0x03b740de

struct argv_607 {
  MPIR_COOKIE                    /* Cookie to help detect valid items */
  unsigned int   argv_1983;
  int            ref_count;
  argv_3255 *argv_4419;
};
#define argv_3254 0x03b7c007

int MPIR_Attr_copy_node ( struct MPIR_COMMUNICATOR *, 
				    struct MPIR_COMMUNICATOR *, 
				    argv_3255 * );
int MPIR_Attr_copy_subtree ( struct MPIR_COMMUNICATOR *, 
				       struct MPIR_COMMUNICATOR *, MPIR_HBT, 
				       argv_3255 * );
int MPIR_Attr_free_node ( struct MPIR_COMMUNICATOR *, argv_3255 * );
int MPIR_Attr_free_subtree ( struct MPIR_COMMUNICATOR *, 
				       argv_3255 * );

int MPIR_HBT_new_tree ( MPIR_HBT * );
int MPIR_HBT_new_node ( argv_3136 *, void *, argv_3255 ** );
int MPIR_HBT_free_node ( argv_3255 * );
int MPIR_HBT_free_subtree ( argv_3255 * );
int MPIR_HBT_free_tree ( MPIR_HBT );
int MPIR_HBT_lookup ( MPIR_HBT, int, argv_3255 ** );
int MPIR_HBT_insert ( MPIR_HBT, argv_3255 * );
int MPIR_HBT_delete ( MPIR_HBT, int, argv_3255 ** );
void MPIR_HBT_Init (void);
void MPIR_HBT_Free (void);

#define argv_3250(idx) \
    (argv_3136 *)MPIR_ToPointer( idx )
#define argv_3290(idx,ptr) \
   (!(ptr) || ((ptr)->argv_1100 != argv_3135))
#define argv_3291(idx,ptr,comm,routine_name) \
if (!(ptr)) {\
 mpi_errno = MPIR_Err_setmsg( argv_2744, argv_3206,myname,(char*)0,(char *)0);}\
else if ((ptr)->argv_1100 != argv_3135) {\
mpi_errno = MPIR_Err_setmsg( argv_2762, argv_3152, myname,\
(char*)0,(char *)0,(ptr)->argv_1100);}
#endif
