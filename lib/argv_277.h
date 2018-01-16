/* argv_277.h -- configuration of the zlib compression library
 * Copyright (C) 1995-2005 Jean-loup Gailly.
 * For conditions of distribution and use, see copyright notice in argv_278.h
 */

/* @(#) $Id$ */

#ifndef argv_5065
#define argv_5065

/*
 * If you *really* need a unique prefix for all types and library functions,
 * compile argv_5011 -DZ_PREFIX. The "standard" zlib should be compiled without it.
 */
#ifdef Z_PREFIX
#  define argv_1214          z_deflateInit_
#  define argv_1209               z_deflate
#  define argv_1212            z_deflateEnd
#  define inflateInit_          z_inflateInit_
#  define inflate               z_inflate
#  define inflateEnd            z_inflateEnd
#  define argv_1216         z_deflateInit2_
#  define argv_1219  z_deflateSetDictionary
#  define argv_1211           z_deflateCopy
#  define deflateReset          z_deflateReset
#  define argv_1217         z_deflateParams
#  define argv_1210          z_deflateBound
#  define argv_1218          z_deflatePrime
#  define inflateInit2_         z_inflateInit2_
#  define inflateSetDictionary  z_inflateSetDictionary
#  define inflateSync           z_inflateSync
#  define inflateSyncPoint      z_inflateSyncPoint
#  define inflateCopy           z_inflateCopy
#  define inflateReset          z_inflateReset
#  define inflateBack           z_inflateBack
#  define inflateBackEnd        z_inflateBackEnd
#  define argv_1063              z_compress
#  define argv_1070             z_compress2
#  define argv_1071         z_compressBound
#  define argv_4910            z_uncompress
#  define argv_681               z_adler32
#  define argv_1116                 z_crc32
#  define argv_1752         z_get_crc_table
#  define argv_5066                z_zError

#  define argv_699            z_alloc_func
#  define argv_1716             z_free_func
#  define in_func               z_in_func
#  define out_func              z_out_func
#  define argv_835                  z_Byte
#  define argv_4885                  z_uInt
#  define argv_4888                 z_uLong
#  define argv_836                 z_Bytef
#  define argv_898                 z_charf
#  define intf                  z_intf
#  define argv_4887                 z_uIntf
#  define argv_4889                z_uLongf
#  define argv_5002                z_voidpf
#  define argv_5000                 z_voidp
#endif

#if defined(__MSDOS__) && !defined(argv_3548)
#  define argv_3548
#endif
#if (defined(OS_2) || defined(__OS2__)) && !defined(argv_3692)
#  define argv_3692
#endif
#if defined(_WINDOWS) && !defined(argv_5010)
#  define argv_5010
#endif
#if defined(_WIN32) || defined(_WIN32_WCE) || defined(__WIN32__)
#  ifndef argv_5007
#    define argv_5007
#  endif
#endif
#if (defined(argv_3548) || defined(argv_3692) || defined(argv_5010)) && !defined(argv_5007)
#  if !defined(__GNUC__) && !defined(__FLAT__) && !defined(__386__)
#    ifndef argv_4748
#      define argv_4748
#    endif
#  endif
#endif

/*
 * Compile argv_5011 -DMAXSEG_64K if the alloc function cannot allocate more
 * than 64k argv_837 at a argv_4843 (needed on systems argv_5011 16-bit int).
 */
#ifdef argv_4748
#  define argv_2411
#endif
#ifdef argv_3548
#  define argv_4909
#endif

#ifdef __STDC_VERSION__
#  ifndef argv_4623
#    define argv_4623
#  endif
#  if __STDC_VERSION__ >= 199901L
#    ifndef argv_4625
#      define argv_4625
#    endif
#  endif
#endif
#if !defined(argv_4623) && (defined(__STDC__) || defined(__cplusplus))
#  define argv_4623
#endif
#if !defined(argv_4623) && (defined(__GNUC__) || defined(__BORLANDC__))
#  define argv_4623
#endif
#if !defined(argv_4623) && (defined(argv_3548) || defined(argv_5010) || defined(argv_5007))
#  define argv_4623
#endif
#if !defined(argv_4623) && (defined(argv_3692) || defined(__HOS_AIX__))
#  define argv_4623
#endif

#if defined(__OS400__) && !defined(argv_4623)    /* iSeries (formerly AS/400). */
#  define argv_4623
#endif

#ifndef argv_4623
#  ifndef const /* cannot use !defined(argv_4623) && !defined(const) on Mac */
#    define const       /* note: need a more gentle solution here */
#  endif
#endif

/* Some Mac argv_1047 merge all .h files incorrectly: */
#if defined(__MWERKS__)||defined(applec)||defined(THINK_C)||defined(__SC__)
#  define argv_3629
#endif

/* Maximum argv_4979 for memLevel in argv_1215 */
#ifndef argv_2391
#  ifdef argv_2411
#    define argv_2391 8
#  else
#    define argv_2391 9
#  endif
#endif

/* Maximum argv_4979 for windowBits in argv_1215 and inflateInit2.
 * WARNING: reducing argv_2404 makes minigzip unable to argv_1397 .gz files
 * created by gzip. (Files created by minigzip can still be extracted by
 * gzip.)
 */
#ifndef argv_2404
#  define argv_2404   15 /* 32K LZ77 window */
#endif

/* The memory requirements for argv_1209 are (in argv_837):
            (1 << (windowBits+2)) +  (1 << (memLevel+9))
 that is: 128K for windowBits=15  +  128K for memLevel = 8  (default values)
 plus a few kilobytes for small objects. For example, if you want to reduce
 the default memory requirements from 256K to 128K, compile argv_5011
     make CFLAGS="-O -DMAX_WBITS=14 -DMAX_MEM_LEVEL=7"
 Of course this will generally degrade compression (there's no free lunch).

   The memory requirements for inflate are (in argv_837) 1 << windowBits
 that is, 32K for windowBits=15 (default argv_4979) plus a few kilobytes
 for small objects.
*/

                        /* argv_4861 declarations */

#ifndef argv_3675 /* function prototypes */
#  ifdef argv_4623
#    define argv_3675(args)  args
#  else
#    define argv_3675(args)  ()
#  endif
#endif

/* The following definitions for argv_1417 are needed only for argv_3548 mixed
 * model programming (small or medium model argv_5011 some far allocations).
 * This was tested only argv_5011 MSC; for other argv_3548 argv_1047 you may have
 * to define NO_MEMCPY in zutil.h.  If you don't need the mixed model,
 * just define argv_1417 to be empty.
 */
#ifdef argv_4748
#  if defined(M_I86SM) || defined(M_I86MM)
     /* MSC small or medium model */
#    define argv_4568
#    ifdef _MSC_VER
#      define argv_1417 _far
#    else
#      define argv_1417 far
#    endif
#  endif
#  if (defined(__SMALL__) || defined(__MEDIUM__))
     /* Turbo C small or medium model */
#    define argv_4568
#    ifdef __BORLANDC__
#      define argv_1417 _far
#    else
#      define argv_1417 far
#    endif
#  endif
#endif

#if defined(argv_5010) || defined(argv_5007)
   /* If building or using zlib as a DLL, define ZLIB_DLL.
    * This is not mandatory, but it offers a little performance increase.
    */
#  ifdef ZLIB_DLL
#    if defined(argv_5007) && (!defined(__BORLANDC__) || (__BORLANDC__ >= 0x500))
#      ifdef ZLIB_INTERNAL
#        define argv_5069 extern __declspec(dllexport)
#      else
#        define argv_5069 extern __declspec(dllimport)
#      endif
#    endif
#  endif  /* ZLIB_DLL */
   /* If building or using zlib argv_5011 the WINAPI/WINAPIV calling convention,
    * define ZLIB_WINAPI.
    * Caution: the standard ZLIB1.DLL is NOT compiled using ZLIB_WINAPI.
    */
#  ifdef ZLIB_WINAPI
#    ifdef argv_1417
#      undef argv_1417
#    endif
#    include <windows.h>
     /* No need for _export, use ZLIB.DEF instead. */
     /* For complete Windows compatibility, use WINAPI, not __stdcall. */
#    define argv_5067 WINAPI
#    ifdef argv_5007
#      define argv_5068 WINAPIV
#    else
#      define argv_5068 argv_1417 CDECL
#    endif
#  endif
#endif

#if defined (__BEOS__)
#  ifdef ZLIB_DLL
#    ifdef ZLIB_INTERNAL
#      define argv_5067   __declspec(dllexport)
#      define argv_5068 __declspec(dllexport)
#    else
#      define argv_5067   __declspec(dllimport)
#      define argv_5068 __declspec(dllimport)
#    endif
#  endif
#endif

#ifndef argv_5069
#  define argv_5069 extern
#endif
#ifndef argv_5067
#  define argv_5067
#endif
#ifndef argv_5068
#  define argv_5068
#endif

#ifndef argv_1417
#  define argv_1417
#endif

#if !defined(__MACTYPES__)
typedef unsigned char  argv_835;  /* 8 argv_794 */
#endif
typedef unsigned int   argv_4885;  /* 16 argv_794 or more */
typedef unsigned long  argv_4888; /* 32 argv_794 or more */

#ifdef argv_4568
   /* Borland C/C++ and some old MSC versions ignore argv_1417 inside typedef */
#  define argv_836 argv_835 argv_1417
#else
   typedef argv_835  argv_1417 argv_836;
#endif
typedef char  argv_1417 argv_898;
typedef int   argv_1417 intf;
typedef argv_4885  argv_1417 argv_4887;
typedef argv_4888 argv_1417 argv_4889;

#ifdef argv_4623
   typedef void const *argv_5001;
   typedef void argv_1417   *argv_5002;
   typedef void       *argv_5000;
#else
   typedef argv_835 const *argv_5001;
   typedef argv_835 argv_1417   *argv_5002;
   typedef argv_835       *argv_5000;
#endif

#if 0           /* argv_1972 -- this argv_2250 is updated by ./configure */
#  include <sys/types.h> /* for off_t */
#  include <unistd.h>    /* for SEEK_* and off_t */
#  ifdef VMS
#    include <unixio.h>   /* for off_t */
#  endif
#  define argv_5051 off_t
#endif
#ifndef SEEK_SET
#  define SEEK_SET        0       /* Seek from beginning of argv_1424.  */
#  define SEEK_CUR        1       /* Seek from argv_1148 position.  */
#  define SEEK_END        2       /* Set argv_1424 pointer to EOF plus "offset" */
#endif
#ifndef argv_5051
#  define argv_5051 long
#endif

#if defined(__OS400__)
#  define argv_3632
#endif

#if defined(__MVS__)
#  define argv_3632
#  ifdef argv_1417
#    undef argv_1417
#  endif
#endif

/* MVS linker does not support external names larger than 8 argv_837 */
#if defined(__MVS__)
#   pragma map(argv_1214,"DEIN")
#   pragma map(argv_1216,"DEIN2")
#   pragma map(argv_1212,"DEEND")
#   pragma map(argv_1210,"DEBND")
#   pragma map(inflateInit_,"ININ")
#   pragma map(inflateInit2_,"ININ2")
#   pragma map(inflateEnd,"INEND")
#   pragma map(inflateSync,"INSY")
#   pragma map(inflateSetDictionary,"INSEDI")
#   pragma map(argv_1071,"CMBND")
#   pragma map(inflate_table,"INTABL")
#   pragma map(inflate_fast,"INFA")
#   pragma map(inflate_copyright,"INCOPY")
#endif

#endif /* argv_5065 */
