/*
 * Collective operations (this allows choosing either an implementation
 * in terms of point-to-point, or a special version exploiting special
 * facilities, in a communicator by communicator fashion).
 */
#ifndef argv_3140
#define argv_3140
struct argv_605 {
    int (*argv_781) (struct MPIR_COMMUNICATOR *);
    int (*argv_788) (void*, int, struct MPIR_DATATYPE *, int, 
			    struct MPIR_COMMUNICATOR * );
    int (*argv_1732) (void*, int, struct MPIR_DATATYPE *, 
		  void*, int, struct MPIR_DATATYPE *, int, 
			     struct MPIR_COMMUNICATOR *); 
    int (*argv_1733) (void*, int, struct MPIR_DATATYPE *, 
			      void*, int *, int *, struct MPIR_DATATYPE *, 
			      int, struct MPIR_COMMUNICATOR *); 
    int (*argv_4472) (void*, int, struct MPIR_DATATYPE *, 
		   void*, int, struct MPIR_DATATYPE *, int, 
			      struct MPIR_COMMUNICATOR *);
    int (*argv_4473) (void*, int *, int *, struct MPIR_DATATYPE *, 
			       void*, int, 
		    struct MPIR_DATATYPE *, int, struct MPIR_COMMUNICATOR *);
    int (*argv_697) (void*, int, struct MPIR_DATATYPE *, 
		     void*, int, struct MPIR_DATATYPE *, 
				struct MPIR_COMMUNICATOR *);
    int (*argv_698) (void*, int, struct MPIR_DATATYPE *, 
		      void*, int *, int *, struct MPIR_DATATYPE *,
				 struct MPIR_COMMUNICATOR *);
    int (*argv_701) (void*, int, struct MPIR_DATATYPE *, 
		    void*, int, struct MPIR_DATATYPE *, 
			       struct MPIR_COMMUNICATOR *);
    int (*argv_702) (void*, int *, int *, 
		     struct MPIR_DATATYPE *, void*, int *, 
		     int *, struct MPIR_DATATYPE *, 
				struct MPIR_COMMUNICATOR *);
    int (*argv_703) (void*, int *, int *, 
		     struct MPIR_DATATYPE *, void*, int *, 
		     int *, struct MPIR_DATATYPE *, 
				struct MPIR_COMMUNICATOR *);
    int (*argv_4348) (void*, void*, int, 
		  struct MPIR_DATATYPE *, argv_2954, int, 
			     struct MPIR_COMMUNICATOR *);
    int (*argv_700) (void*, void*, int, 
		     struct MPIR_DATATYPE *, argv_2954, 
				struct MPIR_COMMUNICATOR *);
    int (*argv_4349) (void*, void*, int *, 
			  struct MPIR_DATATYPE *, argv_2954, 
				     struct MPIR_COMMUNICATOR *);
    int (*argv_4441) (void*, void*, int, struct MPIR_DATATYPE *, argv_2954, 
			   struct MPIR_COMMUNICATOR * );
    int ref_count;     /* So we can share it */
};

/* Predefined function tables for collective routines, the device
 * can also use its own, but these are the defaults.
 */
extern MPIR_COLLOPS MPIR_inter_collops;   /* Simply raises appropriate error */
extern MPIR_COLLOPS MPIR_intra_collops;   /* Do the business using pt2pt     */


#endif
