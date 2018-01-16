/* 
 *   $Id: argv_260.h,v 1.1 2001/12/03 23:42:23 ashton Exp $    
 *
 *   Copyright (C) 1997 University of Chicago. 
 *   See COPYRIGHT notice in top-level directory.
 */

/* user include argv_1424 for MPI-IO programs */

#ifndef argv_3129
#define argv_3129

#include "argv_252.h"

#if defined(__cplusplus)
extern "C" {
#endif

#define argv_4418 102      /* argv_4990 1.0.2 */

/* define MPI-IO datatypes and constants */

typedef struct ADIOI_FileD *argv_2801;

/* no generalized requests as yet */
typedef struct ADIOI_RequestD *argv_3130;  

#ifdef argv_4415
#ifdef argv_1927
typedef __int64 MPI_Offset;
#else
typedef long MPI_Offset;
#endif
#else
typedef long long MPI_Offset;
#endif

#ifndef NEEDS_MPI_FINT

#endif
#ifdef NEEDS_MPI_FINT
typedef int argv_2851; 
#endif

#ifndef argv_1940
#define argv_1940
#endif
#ifndef argv_1940
  typedef struct argv_3258 *argv_2888;
# define argv_2898         ((argv_2888) 0)
# define argv_2932       255
# define argv_2933      1024
#endif

#define argv_2944              2  /* ADIO_RDONLY */
#define argv_2945                8  /* ADIO_RDWR  */
#define argv_2948              4  /* ADIO_WRONLY  */
#define argv_2941              1  /* ADIO_CREATE */ 
#define argv_2943               64  /* ADIO_EXCL */
#define argv_2942    16  /* ADIO_DELETE_ON_CLOSE */
#define argv_2947        32  /* ADIO_UNIQUE_OPEN */
#define argv_2940            128  /* ADIO_APPEND */
#define argv_2946        256  /* ADIO_SEQUENTIAL */

#define argv_2732   -54278278

#define argv_2824           ((argv_2801) 0)
#define argv_3131       ((argv_3130) 0)

#define MPI_SEEK_SET            600
#define argv_2993            602
#define argv_2994            604

#define argv_2930  128

#ifndef argv_1938
#define argv_1938
#endif
#ifndef argv_1938
#  define argv_2961             56
#  define argv_2962       57
#  define argv_2733    121
#  define argv_2734   122
#  define argv_2736     123
#  define argv_2735 -49767
#endif


/* MPI-IO function prototypes */

/* The compiler must support ANSI C style prototypes, otherwise 
   long long constants (e.g. 0) may get passed as ints. */

#ifndef argv_1951

/* Section 9.2 */
int argv_2825(argv_2690 comm, char *argv_1474, int amode, 
                          argv_2888 info, argv_2801 *fh);
int argv_2804(argv_2801 *fh);
int argv_2806(char *argv_1474, argv_2888 info);
int argv_2839(argv_2801 fh, MPI_Offset size);
int argv_2826(argv_2801 fh, MPI_Offset size);
int argv_2815(argv_2801 fh, MPI_Offset *size);
int argv_2811(argv_2801 fh, argv_2867 *group);
int argv_2808(argv_2801 fh, int *amode);
int argv_2838(argv_2801 fh, argv_2888 info);
int argv_2812(argv_2801 fh, argv_2888 *info_used);

/* Section 9.3 */
int argv_2840(argv_2801 fh, MPI_Offset disp, argv_2728 etype,
	         argv_2728 filetype, char *datarep, argv_2888 info);
int argv_2817(argv_2801 fh, MPI_Offset *disp, 
                 argv_2728 *etype, argv_2728 *filetype, char *datarep);

/* Section 9.4.2 */
int argv_2829(argv_2801 fh, MPI_Offset offset, void *argv_825,
	      int count, argv_2728 datatype, argv_3010 *status);
int MPI_File_read_at_all(argv_2801 fh, MPI_Offset offset, void *argv_825,
	      int count, argv_2728 datatype, argv_3010 *status);
int argv_2844(argv_2801 fh, MPI_Offset offset, void *argv_825,
	      int count, argv_2728 datatype, argv_3010 *status);
int MPI_File_write_at_all(argv_2801 fh, MPI_Offset offset, void *argv_825,
	      int count, argv_2728 datatype, argv_3010 *status);

/* nonblocking calls currently use argv_3130, because generalized
   requests not yet implemented. For the same reason, MPIO_Test and 
   MPIO_Wait are used to test and wait on nonblocking I/O requests */ 

int argv_2819(argv_2801 fh, MPI_Offset offset, void *argv_825,
	      int count, argv_2728 datatype, argv_3130 *request);
int argv_2822(argv_2801 fh, MPI_Offset offset, void *argv_825,
	      int count, argv_2728 datatype, argv_3130 *request);

/* Section 9.4.3 */
int argv_2827(argv_2801 fh, void *argv_825, int count, argv_2728
	     datatype, argv_3010 *status); 
int MPI_File_read_all(argv_2801 fh, void *argv_825, int count, argv_2728
	     datatype, argv_3010 *status); 
int argv_2842(argv_2801 fh, void *argv_825, int count, argv_2728
	      datatype, argv_3010 *status);
int MPI_File_write_all(argv_2801 fh, void *argv_825, int count, argv_2728
	      datatype, argv_3010 *status);

/* nonblocking calls currently use argv_3130, because generalized
   requests not yet implemented. For the same reason, MPIO_Test and 
   MPIO_Wait are used to test and wait on nonblocking I/O requests */ 

int argv_2818(argv_2801 fh, void *argv_825, int count, argv_2728
	     datatype, argv_3130 *request); 
int argv_2821(argv_2801 fh, void *argv_825, int count, argv_2728
	      datatype, argv_3130 *request);

int argv_2834(argv_2801 fh, MPI_Offset offset, int whence);
int argv_2813(argv_2801 fh, MPI_Offset *offset);
int MPI_File_get_byte_offset(argv_2801 fh, MPI_Offset offset, 
                                     MPI_Offset *disp);

/* Section 9.4.4 */
int argv_2833(argv_2801 fh, void *argv_825, int count, 
                         argv_2728 datatype, argv_3010 *status);
int argv_2848(argv_2801 fh, void *argv_825, int count, 
                          argv_2728 datatype, argv_3010 *status);
int argv_2820(argv_2801 fh, void *argv_825, int count, 
                          argv_2728 datatype, argv_3130 *request);
int argv_2823(argv_2801 fh, void *argv_825, int count, 
                           argv_2728 datatype, argv_3130 *request);
int argv_2831(argv_2801 fh, void *argv_825, int count, 
                          argv_2728 datatype, argv_3010 *status);
int argv_2846(argv_2801 fh, void *argv_825, int count, 
                           argv_2728 datatype, argv_3010 *status);
int argv_2835(argv_2801 fh, MPI_Offset offset, int whence);
int argv_2814(argv_2801 fh, MPI_Offset *offset);

/* Section 9.4.5 */
int argv_2830(argv_2801 fh, MPI_Offset offset, void *argv_825,
                               int count, argv_2728 datatype);
int MPI_File_read_at_all_end(argv_2801 fh, void *argv_825, argv_3010 *status);
int argv_2845(argv_2801 fh, MPI_Offset offset, void *argv_825,
                                int count, argv_2728 datatype);
int MPI_File_write_at_all_end(argv_2801 fh, void *argv_825, argv_3010 *status);
int argv_2828(argv_2801 fh, void *argv_825, int count, 
                            argv_2728 datatype);
int MPI_File_read_all_end(argv_2801 fh, void *argv_825, argv_3010 *status);
int argv_2843(argv_2801 fh, void *argv_825, int count, 
                             argv_2728 datatype);
int MPI_File_write_all_end(argv_2801 fh, void *argv_825, argv_3010 *status);
int argv_2832(argv_2801 fh, void *argv_825, int count, 
                                argv_2728 datatype);
int MPI_File_read_ordered_end(argv_2801 fh, void *argv_825, argv_3010 *status);
int argv_2847(argv_2801 fh, void *argv_825, int count, 
                                 argv_2728 datatype);
int MPI_File_write_ordered_end(argv_2801 fh, void *argv_825, argv_3010 *status);

/* Section 9.5.1 */
int argv_2816(argv_2801 fh, argv_2728 datatype, 
                                     argv_2649 *extent);

/* Section 9.6.1 */
int argv_2836(argv_2801 fh, int flag);
int argv_2809(argv_2801 fh, int *flag);
int argv_2841(argv_2801 fh);

#ifndef argv_1938
/* Section 4.14.4 */
int argv_3043(int ndims, int *array_of_sizes, int
                      *array_of_subsizes, int *array_of_starts, int argv_3690, 
                      argv_2728 oldtype, argv_2728 *newtype);

/* Section 4.14.5 */
int argv_3037(int size, int rank, int ndims, 
                    int *array_of_gsizes, int *array_of_distribs, 
                    int *array_of_dargs, int *array_of_psizes, 
                    int argv_3690, argv_2728 oldtype, argv_2728 *newtype);
#endif

/* Section 4.12.4 */
#ifdef argv_2807
#undef argv_2807
#endif
#ifdef argv_2802
#undef argv_2802
#endif
/* above needed for some versions of argv_252.h in argv_3106!! */
argv_2801 argv_2807(argv_2851 fh);
argv_2851 argv_2802(argv_2801 fh);


/* The foll. functions are required, because an argv_3130 argv_3656
   is currently used for nonblocking I/O. These functions will go away
   after generalized requests are implemented. */
int MPIO_Test(argv_3130 *request, int *flag, argv_3010 *status);
int MPIO_Wait(argv_3130 *request, argv_3010 *status);
argv_2851 MPIO_Request_c2f(argv_3130 request);
argv_3130 MPIO_Request_f2c(argv_2851 request);


/* info functions if not defined in the MPI implementation */
#ifndef argv_1940

int argv_2890(argv_2888 *info);
int MPI_Info_set(argv_2888 info, char *argv_2188, char *argv_4979);
int argv_2891(argv_2888 info, char *argv_2188);
int MPI_Info_get(argv_2888 info, char *argv_2188, int valuelen, 
                         char *argv_4979, int *flag);
int argv_2897(argv_2888 info, char *argv_2188, int *valuelen, 
                                  int *flag);
int argv_2895(argv_2888 info, int *nkeys);
int argv_2896(argv_2888 info, int n, char *argv_2188);
int argv_2892(argv_2888 info, argv_2888 *newinfo);
int argv_2894(argv_2888 *info);

#ifdef argv_2893
#undef argv_2893
#endif
#ifdef argv_2889
#undef argv_2889
#endif
/* above needed for some versions of argv_252.h in argv_3106!! */
argv_2851 argv_2889(argv_2888 info);
argv_2888 argv_2893(argv_2851 info);
#endif

#endif   /* argv_1951 */


/**************** BINDINGS FOR THE PROFILING INTERFACE ***************/


/* Section 9.2 */
int argv_4047(argv_2690 comm, char *argv_1474, int amode, 
                           argv_2888 info, argv_2801 *fh);
int argv_4028(argv_2801 *fh);
int argv_4030(char *argv_1474, argv_2888 info);
int argv_4061(argv_2801 fh, MPI_Offset size);
int argv_4048(argv_2801 fh, MPI_Offset size);
int argv_4038(argv_2801 fh, MPI_Offset *size);
int argv_4034(argv_2801 fh, argv_2867 *group);
int argv_4031(argv_2801 fh, int *amode);
int argv_4060(argv_2801 fh, argv_2888 info);
int argv_4035(argv_2801 fh, argv_2888 *info_used);

/* Section 9.3 */
int argv_4062(argv_2801 fh, MPI_Offset disp, 
    argv_2728 etype, argv_2728 filetype, char *datarep, argv_2888 info);
int argv_4040(argv_2801 fh, MPI_Offset *disp, 
      argv_2728 *etype, argv_2728 *filetype, char *datarep);

/* Section 9.4.2 */
int argv_4051(argv_2801 fh, MPI_Offset offset, void *argv_825,
	      int count, argv_2728 datatype, argv_3010 *status);
int PMPI_File_read_at_all(argv_2801 fh, MPI_Offset offset, void *argv_825,
	      int count, argv_2728 datatype, argv_3010 *status);
int argv_4066(argv_2801 fh, MPI_Offset offset, void *argv_825,
	      int count, argv_2728 datatype, argv_3010 *status);
int PMPI_File_write_at_all(argv_2801 fh, MPI_Offset offset, void *argv_825,
	      int count, argv_2728 datatype, argv_3010 *status);

/* nonblocking calls currently use argv_3130, because generalized
   requests not yet implemented. For the same reason, MPIO_Test and 
   MPIO_Wait are used to test and wait on nonblocking I/O requests */ 

int argv_4042(argv_2801 fh, MPI_Offset offset, void *argv_825,
	      int count, argv_2728 datatype, argv_3130 *request);
int argv_4045(argv_2801 fh, MPI_Offset offset, void *argv_825,
	      int count, argv_2728 datatype, argv_3130 *request);

/* Section 9.4.3 */
int argv_4049(argv_2801 fh, void *argv_825, int count, argv_2728
                           datatype, argv_3010 *status); 
int PMPI_File_read_all(argv_2801 fh, void *argv_825, int count, argv_2728
	                       datatype, argv_3010 *status); 
int argv_4064(argv_2801 fh, void *argv_825, int count, argv_2728
	                    datatype, argv_3010 *status);
int PMPI_File_write_all(argv_2801 fh, void *argv_825, int count, argv_2728
	                        datatype, argv_3010 *status);

/* nonblocking calls currently use argv_3130, because generalized
   requests not yet implemented. For the same reason, MPIO_Test and 
   MPIO_Wait are used to test and wait on nonblocking I/O requests */ 

int argv_4041(argv_2801 fh, void *argv_825, int count, argv_2728
	                    datatype, argv_3130 *request); 
int argv_4044(argv_2801 fh, void *argv_825, int count, argv_2728
	                     datatype, argv_3130 *request);

int argv_4056(argv_2801 fh, MPI_Offset offset, int whence);
int argv_4036(argv_2801 fh, MPI_Offset *offset);
int PMPI_File_get_byte_offset(argv_2801 fh, MPI_Offset offset, 
                                      MPI_Offset *disp);

/* Section 9.4.4 */
int argv_4055(argv_2801 fh, void *argv_825, int count, 
                         argv_2728 datatype, argv_3010 *status);
int argv_4070(argv_2801 fh, void *argv_825, int count, 
                          argv_2728 datatype, argv_3010 *status);
int argv_4043(argv_2801 fh, void *argv_825, int count, 
                          argv_2728 datatype, argv_3130 *request);
int argv_4046(argv_2801 fh, void *argv_825, int count, 
                           argv_2728 datatype, argv_3130 *request);
int argv_4053(argv_2801 fh, void *argv_825, int count, 
                          argv_2728 datatype, argv_3010 *status);
int argv_4068(argv_2801 fh, void *argv_825, int count, 
                           argv_2728 datatype, argv_3010 *status);
int argv_4057(argv_2801 fh, MPI_Offset offset, int whence);
int argv_4037(argv_2801 fh, MPI_Offset *offset);

/* Section 9.4.5 */
int argv_4052(argv_2801 fh, MPI_Offset offset, void *argv_825,
                               int count, argv_2728 datatype);
int PMPI_File_read_at_all_end(argv_2801 fh, void *argv_825, argv_3010 *status);
int argv_4067(argv_2801 fh, MPI_Offset offset, void *argv_825,
                                int count, argv_2728 datatype);
int PMPI_File_write_at_all_end(argv_2801 fh, void *argv_825, argv_3010 *status);
int argv_4050(argv_2801 fh, void *argv_825, int count, 
                            argv_2728 datatype);
int PMPI_File_read_all_end(argv_2801 fh, void *argv_825, argv_3010 *status);
int argv_4065(argv_2801 fh, void *argv_825, int count, 
                             argv_2728 datatype);
int PMPI_File_write_all_end(argv_2801 fh, void *argv_825, argv_3010 *status);
int argv_4054(argv_2801 fh, void *argv_825, int count, 
                                argv_2728 datatype);
int PMPI_File_read_ordered_end(argv_2801 fh, void *argv_825, argv_3010 *status);
int argv_4069(argv_2801 fh, void *argv_825, int count, 
                                 argv_2728 datatype);
int PMPI_File_write_ordered_end(argv_2801 fh, void *argv_825, argv_3010 *status);

/* Section 9.5.1 */
int argv_4039(argv_2801 fh, argv_2728 datatype, 
                                      argv_2649 *extent);

/* Section 9.6.1 */
int argv_4058(argv_2801 fh, int flag);
int argv_4032(argv_2801 fh, int *flag);
int argv_4063(argv_2801 fh);

#ifndef argv_1938
/* Section 4.14.4 */
int argv_4172(int ndims, int *array_of_sizes, int
                      *array_of_subsizes, int *array_of_starts, int argv_3690, 
                      argv_2728 oldtype, argv_2728 *newtype);

/* Section 4.14.5 */
int argv_4166(int size, int rank, int ndims, 
                    int *array_of_gsizes, int *array_of_distribs, 
                    int *array_of_dargs, int *array_of_psizes, 
                    int argv_3690, argv_2728 oldtype, argv_2728 *newtype);
#endif

/* Section 4.12.4 */
argv_2801 PMPI_File_f2c(argv_2851 fh);
argv_2851 PMPI_File_c2f(argv_2801 fh);

/* Section 4.13.3 */
int argv_2837(argv_2801 fh, argv_2789 errhandler);
int argv_2810(argv_2801 fh, argv_2789 *errhandler);


/* The foll. functions are required, because an argv_3130 argv_3656
   is currently used for nonblocking I/O. These functions will go away
   after generalized requests are implemented. */
int PMPIO_Test(argv_3130 *request, int *flag, argv_3010 *status);
int PMPIO_Wait(argv_3130 *request, argv_3010 *status);
argv_2851 PMPIO_Request_c2f(argv_3130 request);
argv_3130 PMPIO_Request_f2c(argv_2851 request);


/* info functions if not defined in the MPI implementation */
#ifndef argv_1940

int argv_4098(argv_2888 *info);
int PMPI_Info_set(argv_2888 info, char *argv_2188, char *argv_4979);
int argv_4099(argv_2888 info, char *argv_2188);
int PMPI_Info_get(argv_2888 info, char *argv_2188, int valuelen, 
                         char *argv_4979, int *flag);
int argv_4105(argv_2888 info, char *argv_2188, int *valuelen, 
                                  int *flag);
int argv_4103(argv_2888 info, int *nkeys);
int argv_4104(argv_2888 info, int n, char *argv_2188);
int argv_4100(argv_2888 info, argv_2888 *newinfo);
int argv_4102(argv_2888 *info);

argv_2851 argv_4097(argv_2888 info);
argv_2888 argv_4101(argv_2851 info);
#endif

#if defined(__cplusplus)
}
#endif

#endif
