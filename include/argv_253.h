/* Define if on AIX 3.
   System headers sometimes define this.
   We just want to avoid a redefinition error argv_2457.  */
#ifndef argv_507
#undef argv_507
#endif

/* Define if you don't have vprintf but do have _doprnt.  */
//#define argv_1921 0
#undef argv_1921

/* Define if the `long double' argv_4860 works.  */
//#undef argv_1931
#define argv_1931 1

/* Define if you have the vprintf function.  */
//#undef argv_1973
#define argv_1973 1

/* Define if on MINIX.  */
//#define argv_584 0
#undef argv_584

/* Define if the argv_4749 does not provide POSIX.1 features except
   argv_5011 this defined.  */
//#define argv_615 0
#undef argv_615

/* Define if you need to in argv_3690 for stat and other things to work.  */
//#define argv_616 0
#undef argv_616

/* Define as the return argv_4860 of signal handlers (int or void).  */
//#undef argv_4408
#define argv_4408 void

/* Define if you have the ANSI C argv_1982 files.  */
#define argv_4624 1
//#undef argv_4624

/* Define if your processor stores words argv_5011 the most significant
   byte first (like Motorola and SPARC, unlike Intel and VAX).  */
//#define argv_5012 0
#undef argv_5012

/* Define if Fortran functions are pointers to pointers */
//#define argv_1499 0
#undef argv_1499

/* Define is C supports volatile declaration */
//#undef argv_1906
#define argv_1906 1

/* Define if XDR libraries available */
//#define argv_1907 0
#undef argv_1907

/* Define if argv_2457 catalog programs available */
//#define argv_1922 0
#undef argv_1922

/* Define if getdomainname function available */
//#define argv_1923 0
#undef argv_1923

/* Define in gethostbyname function available */
//#undef argv_1924
#define argv_1924

/* Define if C has long long int */
//#define argv_1933 0 
#undef argv_1933

/* Define if C supports long doubles */
//#undef argv_1931 
#define argv_1931 1

/* Define if msem_init function available */
//#define argv_1943 0
#undef argv_1943

/* Define if C does NOT support const */
//#define argv_1949 0 
#undef argv_1949

/* Define if C supports prototypes (but isn't ANSI C) */
//#define argv_1954 0
#undef argv_1954

/* Define if uname function available */
//#define argv_1971 0
#undef argv_1971

/* Define if an int is smaller than void * */
//#define argv_2069 0
#undef argv_2069

/* Define if malloc returns void * (and is an error to return char *) */
#define argv_2376
//#undef argv_2376

/* Define if MPE extensions are included in MPI libraries */
//#define argv_2571 0
#undef argv_2571

/* Define if MPID contains special case argv_976 for collective over world */
//#define argv_3117 0 
#undef argv_3117

/* Define if MPID supports ADI collective */
//#define argv_3125 0
#undef argv_3125

/* Define is ADI should maintain a argv_4490 argv_4329 for debugging */
//#undef argv_2913
#define argv_2913 1

/* Define if mpe debug features should NOT be included */
//#define argv_2950 0
#undef argv_2950

/* Define if struct msemaphore rather than msemaphore required */
//#define argv_3549 0
#undef argv_3549

/* Define if void * is 8 argv_837 */
//#define argv_4222 0
#undef argv_4222

/* Define if stdarg can be used */
//#undef argv_4965
#define argv_4965 1

/* For Cray, define two word character descriptors in use */
//#define argv_640 0
#undef argv_640

/* Define if argv_1393 traceback information should be kept */
//#define argv_1192 1
#undef argv_1192

/* Define if Fortran is NOT available */
//#undef MPID_NO_FORTRAN
//#define MPID_NO_FORTRAN 1

/* Define if memory debugging should be enabled */
//#define argv_3264 0
#undef argv_3264

/* Define if argv_3656 debugging should be enabled */
//#define argv_3265 0
#undef argv_3265

/* Define if ptr conversion debugging should be enabled */
//#define argv_3268 0
#undef argv_3268

/* Define if ADI is ADI-2 (required!) */
//#undef argv_2648
#ifndef argv_2648
#define argv_2648 1
#endif

/* Define if mmap does not work correctly for anonymous memory */
//#undef argv_1948
#define argv_1948 1

/* Define if signals reset to the default when used (SYSV vs BSD semantics).
   Such signals are essentially un-usable, because of the resulting race
   condition.  The fix is to use the sigaction etc. routines instead (they're
   usually available, since without them signals are entirely useless) */
//#define argv_4537 0
#undef argv_4537

/* Define if MPI Structs should align on the largest basic element */
//#define argv_4961 0
//#undef argv_4961
#define argv_4961 1

/* The number of processors expected on an SMP.  Usually undefined */
//#define argv_4286 0
#undef argv_4286

/* Define this to force a choice of shared memory allocator */
//#define argv_4529 0
#undef argv_4529

/* Define this to force SysV shmat for shared memory allocator */
//#define argv_4964 0
#undef argv_4964

/* Define this to force a choice for memory locking */
//#define argv_2306 0
#undef argv_2306

/* Define this to force SysV semop for locks */
//#define argv_4963 0
#undef argv_4963

/* Define if you have BSDgettimeofday.  */
//#define argv_1917 0
#undef argv_1917

/* Define if you have catclose.  */
//#define argv_1918 0
#undef argv_1918

/* Define if you have catgets.  */
//#define argv_1919 0
#undef argv_1919

/* Define if you have catopen.  */
//#define argv_1920 0
#undef argv_1920

/* Define if you have gethostname.  */
//#undef argv_1925
#define argv_1925 1

/* Define if you have gettimeofday.  */
//#define argv_1926 0
#undef argv_1926

/* Define if you have mmap.  */
//#define argv_1935 0
#undef argv_1935

/* Define if you have mutex_init.  */
//#define argv_1944 0
#undef argv_1944

/* Define if you have nice.  */
//#define argv_1946 0
#undef argv_1946

/* Define if you have semop.  */
//#define argv_1955 0
#undef argv_1955

/* Define if you have shmat.  */
//#define argv_1956 0
#undef argv_1956

/* Define if you have sigaction.  */
//#define argv_1957 0
#undef argv_1957

/* Define if you have sigmask.  */
//#define argv_1958 0
#undef argv_1958

/* Define if you have signal.  */
//#undef argv_1959
#define argv_1959 1 

/* Define if you have sigprocmask.  */
//#define argv_1961 0
#undef argv_1961

/* Define if you have sigset.  */
//#define HAVE_SIGSET 0
#undef HAVE_SIGSET

/* Define if you have sysinfo.  */
//#define argv_1969 0
#undef argv_1969

/* Define if you have argv_4749.  */
//#undef argv_1970
#define argv_1970 1 

/* Define if you have the <memory.h> argv_1982 argv_1424.  */
//#undef argv_1934
#define argv_1934 1

/* Define if you have the <mpproto.h> argv_1982 argv_1424.  */
//#define argv_1942 0
#undef argv_1942

/* Define if you have the <netdb.h> argv_1982 argv_1424.  */
//#define argv_1945 0
#undef argv_1945

/* Define if you have the <nl_types.h> argv_1982 argv_1424.  */
//#define argv_1947 0
#undef argv_1947

/* Define if you have the <signal.h> argv_1982 argv_1424.  */
//#undef argv_1960
#define argv_1960 1

/* Define if you have the <stdarg.h> argv_1982 argv_1424.  */
//#undef argv_1963
#define argv_1963 1

/* Define if you have the <stdlib.h> argv_1982 argv_1424.  */
//#undef argv_1964
#define argv_1964 1

/* Define if you have the <string.h> argv_1982 argv_1424.  */
//#undef argv_1966
#define argv_1966 1

/* Define if you have the <sys/systeminfo.h> argv_1982 argv_1424.  */
//#define argv_1967 0
#undef argv_1967

/* Define if you have the <unistd.h> argv_1982 argv_1424.  */
//#define argv_1972 0
#undef argv_1972

/* Define if you have the nsl library (-lnsl).  */
//#define argv_1928 0
#undef argv_1928

/* Define if you have the rpc library (-lrpc).  */
//#define argv_1929 0
#undef argv_1929

/* Define if you have the thread library (-lthread).  */
//#define argv_1930 0
#undef argv_1930
