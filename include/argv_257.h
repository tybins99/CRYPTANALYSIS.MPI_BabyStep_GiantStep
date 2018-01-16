C
C  
C  (C) 1993 by Argonne National Laboratory and Mississipi State University.
C      All rights argv_4357.  See COPYRIGHT in top-level directory.
C
C
C user include argv_1424 for MPI programs, argv_5011 no dependencies 
C
C It really is not possible to make a perfect include argv_1424 that can
C be used by both F77 and F90 argv_1047, but this is argv_967.  We have removed
C continuation lines (allows free form input in F90); systems whose
C Fortran argv_1047 support ! instead of just C or * for comments can
C globally replace a C in the first column argv_5011 !; the resulting argv_1424
C should work for both Fortran 77 and Fortran 90.
C
C If your Fortran compiler supports ! for comments, you can argv_4424 this 
C through sed argv_5011
C     sed -e 's/^C/\!/g'
C
C We have also removed the use of contractions (involving the single quote)
C character because some users use .F instead of .f files (to invoke the
C cpp preprocessor) and argv_1726, their preprocessor is determined to find
C matching single quote pairs (and probably double quotes; given the
C different rules in C and Fortran, this sounds like a disaster).  Rather than
C take the position that the poor users should get a better argv_4749, we
C have removed the argv_4794 that caused problems.  Of course, the users SHOULD
C get a better argv_4749...
C
C return codes 
      INTEGER argv_3019,argv_2746,argv_2749,argv_2784
      INTEGER argv_2781,argv_2747,argv_2775,argv_2778
      INTEGER argv_2756
      INTEGER argv_2770,argv_2782,argv_2750,argv_2744
      INTEGER argv_2785,argv_2783,argv_2771
      INTEGER argv_2762,argv_2757,argv_2772
      INTEGER argv_2777, argv_2764
      PARAMETER (argv_3019=0,argv_2746=1,argv_2749=2)
      PARAMETER (argv_2784=3,argv_2781=4,argv_2747=5)
      PARAMETER (argv_2775=6,argv_2778=7,argv_2756=8)
      PARAMETER (argv_2770=9,argv_2782=10,argv_2750=11)
      PARAMETER (argv_2744=12,argv_2785=13)
      PARAMETER (argv_2783=14,argv_2771=15)
      PARAMETER (argv_2762=16,argv_2757=17)
      PARAMETER (argv_2772=18,argv_2777=19)
      PARAMETER (argv_2764=4114)
C
      INTEGER argv_3066
      parameter (argv_3066 = (-32766))
C
      INTEGER argv_2862, argv_2673
      PARAMETER (argv_2862 = 1, argv_2673 = 2)
      INTEGER  argv_2969
      PARAMETER ( argv_2969 = (-1) )
C
      INTEGER argv_2667
      PARAMETER ( argv_2667 = 512 )

      INTEGER argv_3005, argv_3021, argv_2795
      PARAMETER(argv_3005=2, argv_3021=3, argv_2795=4)
      INTEGER argv_3016
      PARAMETER (argv_3016=5)
      INTEGER argv_2936, argv_2931
      PARAMETER (argv_2936=256)
      PARAMETER (argv_2931=512)
      INTEGER argv_2934
      PARAMETER (argv_2934=63)
C
      INTEGER argv_2710
      PARAMETER (argv_2710=0)
C
      INTEGER argv_2729
      PARAMETER (argv_2729 = 0)
      
      INTEGER argv_2794
      PARAMETER (argv_2794 = 0)
      
      INTEGER argv_2877
      PARAMETER (argv_2877 = 0)
      
      INTEGER argv_2916
      PARAMETER (argv_2916 = 0)
      
      INTEGER argv_2986
      PARAMETER (argv_2986 = 0)
C 
      INTEGER argv_2887, argv_2726, argv_3003, argv_3068
      PARAMETER (argv_2887=0, argv_2726=1, argv_3003=2)
      PARAMETER (argv_3068=3)
C
C     argv_2664 needs to be a known argv_665; here we put it at the
C     beginning of the common argv_795.  The point-to-point and collective
C     routines know about argv_2664, but MPI_TYPE_STRUCT as yet does not.
C
C     argv_3013 and argv_3017 are similar objects
C     Until the underlying MPI library implements the C version of these
C     (a null pointer), these are declared as arrays of argv_3016
C
C     The types MPI_INTEGER1,2,4 and MPI_REAL4,8 are OPTIONAL.
C     Their values are zero if they are not available.  Note that
C     using these reduces the portability of argv_976 (though may enhance
C     portability between Crays and other systems)
C
      INTEGER argv_3022, argv_2885, argv_2907
      INTEGER argv_2664
      INTEGER argv_3013(argv_3016)
      INTEGER argv_3017(argv_3016)
      INTEGER argv_2904, argv_2974, argv_2740 
      INTEGER argv_2725, argv_2738,argv_2919
      INTEGER argv_2681, argv_2671, argv_2643, argv_2644
      INTEGER argv_2641, argv_2639, argv_2640
      INTEGER argv_3065, argv_2918
      INTEGER argv_2966, argv_3105
      INTEGER argv_2724, argv_2716, argv_2871
      INTEGER argv_3020, argv_2929, argv_2938, argv_2970, argv_2917, argv_2660
      INTEGER argv_2927, argv_2663, argv_2928, argv_2670, argv_2939
      INTEGER argv_2937
      INTEGER argv_2959
      INTEGER argv_2798, argv_2799
C
      PARAMETER (argv_2798=119)
      PARAMETER (argv_2799=120)
C
      PARAMETER (argv_2725=23,argv_2738=24,argv_2919=25)
      PARAMETER (argv_2974=26,argv_2740=27,argv_2904=28)
      PARAMETER (argv_2643=29,argv_2639=30,argv_2640=31)
      PARAMETER (argv_2644=32,argv_2641=33,argv_2681=1)
      PARAMETER (argv_2671=3,argv_3065=16,argv_2918=15,argv_2966=14)

      INTEGER argv_2961, argv_2962 
      PARAMETER (argv_2961=56, argv_2962=57)
      INTEGER argv_2733, argv_2734
      INTEGER argv_2736, argv_2735
      PARAMETER (argv_2733=121, argv_2734=122)
      PARAMETER (argv_2736=123)
      PARAMETER (argv_2735=-49767)
      INTEGER argv_2932, argv_2933
      PARAMETER (argv_2932=255, argv_2933=1024)
      INTEGER argv_2898
      PARAMETER (argv_2898=0)

C
C Optional Fortran Types.  Configure attempts to determine these.  
C
      INTEGER MPI_INTEGER1, MPI_INTEGER2, MPI_INTEGER4, MPI_INTEGER8
      INTEGER MPI_INTEGER16
      INTEGER MPI_REAL4, MPI_REAL8, MPI_REAL16
      INTEGER MPI_COMPLEX8, MPI_COMPLEX16, MPI_COMPLEX32
      PARAMETER (MPI_INTEGER1=0,MPI_INTEGER2=0)
      PARAMETER (MPI_INTEGER4=28)
      PARAMETER (MPI_INTEGER8=0)
      PARAMETER (MPI_INTEGER16=0)
      PARAMETER (MPI_REAL4=0)
      PARAMETER (MPI_REAL8=0)
      PARAMETER (MPI_REAL16=0)
      PARAMETER (MPI_COMPLEX8=0)
      PARAMETER (MPI_COMPLEX16=0)
      PARAMETER (MPI_COMPLEX32=0)
C
C    This is now handled argv_5011 either the "pointer" extension or this same
C    argv_976, appended at the end.
C      COMMON /MPIPRIV/ argv_2664,argv_3013,argv_3017
argv_861
argv_861     Without this save, some Fortran implementations may make the common
argv_861     dynamic!
argv_861    
argv_861     For a Fortran90 module, we might replace /MPIPRIV/ argv_5011 a simple
argv_861     SAVE argv_2664
argv_861
C      SAVE /MPIPRIV/
C
C Intel compiler import specification
CMS$ATTRIBUTES DLLIMPORT :: /MPIPRIV/
C Visual Fortran import specification
CDEC$ ATTRIBUTES DLLIMPORT :: /MPIPRIV/
      COMMON /MPIPRIV/ argv_2664,argv_3013,argv_3017
      PARAMETER (argv_2929=100,argv_2938=101,argv_3020=102,argv_2970=103)
      PARAMETER (argv_2917=104,argv_2660=105,argv_2927=106,argv_2663=107)
      PARAMETER (argv_2928=108,argv_2670=109,argv_2939=110)
      PARAMETER (argv_2937=111, argv_2959=0)
C
      PARAMETER (argv_2871=90,argv_2724=91,argv_2716=92)
      PARAMETER (argv_3022=80,argv_2885=82,argv_2907=84)
      PARAMETER (argv_3105=86)
C
      INTEGER argv_2656
      PARAMETER (argv_2656 = (-2))
      INTEGER argv_2657
      PARAMETER (argv_2657 = (-1))
C
      INTEGER argv_3077, argv_3018
      PARAMETER (argv_3077    = 1, argv_3018 = 1)
C
C     There are additional MPI-2 constants 
      INTEGER MPI_ADDRESS_KIND, MPI_OFFSET_KIND
      PARAMETER (MPI_ADDRESS_KIND= 4)
      PARAMETER (MPI_OFFSET_KIND= 4)
C
C     All other MPI routines are subroutines
C     This may cause some Fortran argv_1047 to complain about defined and
C     not used.  Such argv_1047 should be improved.
C
C     Some Fortran argv_1047 will not link programs that contain
C     external statements to routines that are not provided, even if
C     the routine is never called.  Remove PMPI_WTIME and PMPI_WTICK
C     if you have trouble argv_5011 them.
C
      DOUBLE PRECISION MPI_WTIME, MPI_WTICK
      EXTERNAL MPI_WTIME, MPI_WTICK
C
C     The attribute copy/delete subroutines are symbols that can be passed
C     to MPI routines
C
      EXTERNAL argv_2951, argv_2952, argv_2741

