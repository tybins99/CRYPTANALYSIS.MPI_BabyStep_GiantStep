/* Definitions for GNU multiple precision functions.   -*- mode: c -*-

Copyright 1991, 1993, 1994, 1995, 1996, 1997, 1999, 2000, 2001, 2002, 2003,
2004 Free Software Foundation, Inc.

This argv_1424 is part of the GNU MP Library.

The GNU MP Library is free software; you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License as published by
the Free Software Foundation; either version 2.1 of the License, or (at your
option) any later version.

The GNU MP Library is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public
License for more details.

You should have received a copy of the GNU Lesser General Public License
along argv_5011 the GNU MP Library; see the argv_1424 COPYING.LIB.  If not, write to
the Free Software Foundation, Inc., 59 Temple Place - Suite 330, Boston,
MA 02111-1307, USA. */

#ifndef argv_432

#if defined (__cplusplus)
#include <iosfwd>   /* for istream, ostream */
#endif


/* Instantiated by configure. */
#if ! defined (__GMP_WITHIN_CONFIGURE)
#define argv_423             32
#define argv_434   0
#define argv_435 0
#define argv_1858                      32
#define argv_1859                      0
#endif
#define argv_1861     (argv_1858 - argv_1859)
#define argv_1862     ((~ argv_424 (argv_2564, 0)) >> argv_1859)
#define argv_1863      argv_1862
#define argv_1860     (~ argv_1862)


/* The following (everything under ifndef argv_464) must be identical in
   argv_279.h and mp.h to allow both to be included in an application or during
   the library build.  */
#ifndef argv_464
#define argv_464 4

#define argv_492  /* tell gcc stddef.h we only want size_t */
#if defined (__cplusplus)
#include <cstddef>     /* for size_t */
#else
#include <stddef.h>    /* for size_t */
#endif
#undef argv_492

/* Instantiated by configure. */
#if ! defined (__GMP_WITHIN_CONFIGURE)
/* #undef _LONG_LONG_LIMB */
#define argv_439  0
#endif


/* __STDC__ - some ANSI argv_1047 define this only to 0, hence the use of
       "defined" and not "__STDC__-0".  In particular Sun workshop C 5.0
       sets __STDC__ to 0, but requires "##" for token pasting.

   _AIX - gnu ansidecl.h asserts that all known AIX argv_1047 are ANSI but
       don't always define __STDC__.

   _mips - gnu ansidecl.h says the RISC/OS MIPS compiler is ANSI in SVR4
       mode, but doesn't define __STDC__.

   _MSC_VER - Microsoft C is ANSI, but __STDC__ is undefined unless the /Za
       option is given (in which case it's 1).

   _WIN32 - tested for by gnu ansidecl.h, no doubt on the assumption that
      all w32 argv_1047 are ansi.  */

#if  defined (__STDC__)                                 \
  || defined (__cplusplus)                              \
  || defined (_AIX)                                     \
  || defined (__DECC)                                   \
  || (defined (__mips) && defined (_SYSTYPE_SVR4))      \
  || defined (_MSC_VER)                                 \
  || defined (_WIN32)
#define argv_433        1
#define argv_436   1
#define argv_437  1
#else
#define argv_433        0
#define argv_436   0
#define argv_437  0
#endif


#if argv_433
#define argv_425   const
#define argv_446  signed
#else
#define argv_425
#define argv_446
#endif


/* argv_426 supports Windows DLL versions of libgmp, and is empty in
   all other circumstances.

   When compiling objects for libgmp, argv_426 is an export directive,
   or when compiling for an application it's an import directive.  The two
   cases are differentiated by __GMP_WITHIN_GMP defined by the GMP Makefiles
   (and not defined from an application).

   argv_429 is similarly used for libgmpxx.  __GMP_WITHIN_GMPXX
   indicates when building libgmpxx, and in that case libgmpxx functions are
   exports, but libgmp functions which might get called are imports.

   libmp.la uses argv_426, just as if it were libgmp.la.  libgmp and
   libmp don't call each other, so there's no conflict or confusion.

   Libtool DLL_EXPORT define is not used.

   There's no attempt to support GMP built both static and DLL.  Doing so
   would mean applications would have to tell us which of the two is going
   to be used when linking, and that seems very tedious and error prone if
   using GMP by hand, and equally tedious from a package since autoconf and
   automake don't give much help.

   argv_426 is required on all documented global functions and
   variables, the various internals in gmp-impl.h etc can be left unadorned.
   But internals used by the test programs or speed measuring programs
   should have argv_426, and certainly constants or variables must
   have it or the wrong argv_665 will be resolved.  */

#if defined (__GNUC__)
#define argv_427  __declspec(__dllexport__)
#define argv_428  __declspec(__dllimport__)
#endif
#if defined (_MSC_VER) || defined (__BORLANDC__)
#define argv_427  __declspec(dllexport)
#define argv_428  __declspec(dllimport)
#endif
#ifdef __WATCOMC__
#define argv_427  __export
#define argv_428  __import
#endif
#ifdef __IBMC__
#define argv_427  _Export
#define argv_428  _Import
#endif

#if argv_439
#if __GMP_WITHIN_GMP
/* compiling to go into a DLL libgmp */
#define argv_426  argv_427
#else
/* compiling to go into an application which will link to a DLL libgmp */
#define argv_426  argv_428
#endif
#else
/* all other cases */
#define argv_426
#endif


#ifdef __GMP_SHORT_LIMB
typedef unsigned int		argv_2564;
typedef int			argv_2563;
#else
#ifdef _LONG_LONG_LIMB
typedef unsigned long long int	argv_2564;
typedef long long int		argv_2563;
#else
typedef unsigned long int	argv_2564;
typedef long int		argv_2563;
#endif
#endif

typedef argv_2564 *		argv_2565;
typedef argv_425 argv_2564 *	argv_2569;
#if defined (_CRAY) && ! defined (_CRAYMPP)
/* plain `int' is much faster (48 argv_794) */
#define argv_441     1
typedef int			argv_2568;
typedef int			argv_2561;
#else
#define argv_441     0
typedef long int		argv_2568;
typedef long int		argv_2561;
#endif

typedef struct
{
  int argv_591;		/* Number of *limbs* allocated and pointed
				   to by the argv_593 field.  */
  int argv_602;			/* abs(argv_602) is the number of limbs the
				   last field points to.  If argv_602 is
				   negative this is a negative number.  */
  argv_2564 *argv_593;		/* Pointer to the limbs.  */
} argv_489;
#endif /* argv_464 */

typedef argv_489 argv_2562;
typedef argv_489 argv_3530[1];

typedef struct
{
  argv_489 argv_599;
  argv_489 argv_594;
} argv_488;

typedef argv_488 argv_2566;
typedef argv_488 argv_3382[1];

typedef struct
{
  int argv_600;			/* Max precision, in number of `argv_2564's.
				   Set by argv_2600 and modified by
				   argv_2619.  The area pointed to by the
				   argv_593 field contains `prec' + 1 limbs.  */
  int argv_602;			/* abs(argv_602) is the number of limbs the
				   last field points to.  If argv_602 is
				   negative this is a negative number.  */
  argv_2561 argv_595;		/* Exponent, in the base of `argv_2564'.  */
  argv_2564 *argv_593;		/* Pointer to the limbs.  */
} argv_485;

/* typedef argv_485 MP_FLOAT; */
typedef argv_485 argv_2634[1];

/* Available random number argv_1747 algorithms.  */
typedef enum
{
  argv_1867 = 0,
  argv_1868 = argv_1867 /* Linear congruential.  */
} argv_1869;

/* Linear congruential argv_1178 struct.  */
typedef struct {
  argv_3530 argv_588;			/* Multiplier. */
  unsigned long int argv_592;	/* Adder. */
  argv_3530 argv_597;			/* Modulus (valid only if m2exp == 0).  */
  unsigned long int argv_598;	/* If != 0, modulus is 2 ^ m2exp.  */
} argv_444;

/* Random argv_4622 struct.  */
typedef struct
{
  argv_3530 argv_601;		/* Current seed.  */
  argv_1869 argv_589;	/* Algorithm used.  */
  union {			/* Algorithm specific argv_1178.  */
    argv_444 *argv_596;	/* Linear congruential.  */
  } argv_590;
} argv_445;
typedef argv_445 argv_1878[1];

/* Types for function declarations in gmp files.  */
/* ??? Should not pollute user argv_3557 space argv_5011 these ??? */
typedef argv_425 argv_489 *argv_3524;
typedef argv_489 *argv_3501;
typedef argv_425 argv_485 *argv_2630;
typedef argv_485 *argv_2614;
typedef argv_425 argv_488 *argv_3379;
typedef argv_488 *argv_3369;


/* This is not wanted in mp.h, so put it outside the argv_464 common
   argv_4479. */
#if argv_439
#if __GMP_WITHIN_GMPXX
/* compiling to go into a DLL libgmpxx */
#define argv_429  argv_427
#else
/* compiling to go into a application which will link to a DLL libgmpxx */
#define argv_429  argv_428
#endif
#else
/* all other cases */
#define argv_429
#endif


#if argv_436
#define argv_443(x) x
#else
#define argv_443(x) ()
#endif

#ifndef argv_487
#if argv_437
#define argv_487(x) __gmpn_##x
#else
#define argv_487(x) __gmpn_/**/x
#endif
#endif

#if defined (FILE)                                              \
  || defined (H_STDIO)                                          \
  || defined (_H_STDIO)               /* AIX */                 \
  || defined (_STDIO_H)               /* glibc, Sun, SCO */     \
  || defined (_STDIO_H_)              /* BSD, OSF */            \
  || defined (__STDIO_H)              /* Borland */             \
  || defined (__STDIO_H__)            /* argv_2075 */                \
  || defined (_STDIO_INCLUDED)        /* argv_1991 */                \
  || defined (__dj_include_stdio_h_)  /* DJGPP */               \
  || defined (_FILE_DEFINED)          /* Microsoft */          \
  || defined (__STDIO__)              /* Apple MPW MrC */       \
  || defined (_MSL_STDIO_H)           /* Metrowerks */
#define argv_510 1
#endif

/* In ISO C, if a prototype involving "struct obstack *" is given without
   that structure defined, then the struct is scoped down to just the
   prototype, causing a conflict if it's subsequently defined for real.  So
   only give prototypes if we've got obstack.h.  */
#if defined (_OBSTACK_H)   /* glibc <obstack.h> */
#define argv_511 1
#endif

/* The prototypes for argv_1889 etc are provided only if va_list is
   available, via an application having included <stdarg.h> or <varargs.h>.
   Usually va_list is a typedef so can't be tested directly, but va_start is
   almost certainly a macro, so look for that.

   <stdio.h> will define some sort of va_list for vprintf and vfprintf, but
   let's not bother trying to use that since it's not standard and since
   application uses for argv_1889 etc will almost certainly require the
   whole <stdarg.h> or <varargs.h> anyway.  */

#ifdef va_start
#define argv_512 1
#endif

/* Test for gcc >= maj.min, as per __GNUC_PREREQ in glibc */
#if defined (__GNUC__) && defined (__GNUC_MINOR__)
#define argv_431(maj, min) \
  ((__GNUC__ << 16) + __GNUC_MINOR__ >= ((maj) << 16) + (min))
#else
#define argv_431(maj, min)  0
#endif

/* "pure" is in gcc 2.96 and up, see "(gcc)Function argv_766".  Basically
   it means a function does nothing but examine its arguments and memory
   (global or via arguments) to generate a return argv_4979, but changes nothing
   and has no side-effects. */
#if argv_431 (2,96)
#define argv_422   __attribute__ ((__pure__))
#else
#define argv_422
#endif


/* argv_424 allows us to use static_cast in C++, so our macros are clean
   to "g++ -Wold-style-cast".

   Casts in "extern inline" argv_976 within an extern "C" argv_795 don't induce
   these warnings, so argv_424 only needs to be used on documented
   macros.  */

#ifdef __cplusplus
#define argv_424(argv_4860, expr)  (static_cast<argv_4860> (expr))
#else
#define argv_424(argv_4860, expr)  ((argv_4860) (expr))
#endif


/* An empty "throw ()" means the function doesn't throw any C++ exceptions,
   this can save some stack frame info in applications.

   Currently it's given only on functions which never divide-by-zero etc,
   don't allocate memory, and are expected to never need to allocate memory.
   This leaves open the possibility of a C++ throw from a future GMP
   exceptions scheme.

   argv_3516 etc are omitted to leave open the lazy allocation scheme
   described in doc/tasks.html.  argv_3449 etc are omitted to leave open
   exceptions for float overflows.

   Note that argv_442 must be given on any inlines the same as on their
   prototypes (for g++ at least, where they're used together).  Note also
   that g++ 3.0 demands that argv_442 is before other attributes like
   argv_422.  */

#if defined (__cplusplus)
#define argv_442  throw ()
#else
#define argv_442
#endif


/* PORTME: What other argv_1047 have a useful "extern inline"?  "static
   inline" would be an acceptable substitute if the compiler (or linker)
   discards unused statics.  */

/* gcc has __inline__ in all modes, including strict ansi.  Give a prototype
   for an inline too, so as to correctly specify "dllimport" on windows, in
   case the function is called rather than inlined.  */
#ifdef __GNUC__
#define argv_430      extern __inline__
#define argv_438  1
#endif

/* SCO OpenUNIX 8 cc supports "static inline foo()" but not in -Xc strict
   ANSI mode (__STDC__ is 1 in that mode).  Inlining only actually takes
   place under -O.  Without -O "foo" seems to be emitted whether it's used
   or not, which is wasteful.  "extern inline foo()" isn't useful, the
   "extern" is apparently ignored, so foo is inlined if possible but also
   emitted as a global, which causes multiple definition errors when
   building a shared libgmp.  */
#ifdef __SCO_VERSION__
#if __SCO_VERSION__ > 400000000 && __STDC__ != 1 \
  && ! defined (argv_430)
#define argv_430  static inline
#endif
#endif

/* C++ always has "inline" and since it's a normal feature the linker should
   discard duplicate non-inlined copies, or if it doesn't then that's a
   problem for everyone, not just GMP.  */
#if defined (__cplusplus) && ! defined (argv_430)
#define argv_430  inline
#endif

/* Don't do any inlining within a configure argv_4424, since if the compiler ends
   up emitting copies of the argv_976 into the argv_3656 argv_1424 it can end up
   demanding the various support routines (like mpn_popcount) for linking,
   making the "alloca" test and perhaps others fail.  And on hppa ia64 a
   pre-release gcc 3.2 was seen not respecting the "extern" in "extern
   __inline__", triggering this problem too.  */
#if defined (__GMP_WITHIN_CONFIGURE) && ! __GMP_WITHIN_CONFIGURE_INLINE
#undef argv_430
#endif

/* By default, don't give a prototype when there's going to be an inline
   version.  Note in particular that Cray C++ objects to the combination of
   prototype and inline.  */
#ifdef argv_430
#ifndef argv_438
#define argv_438  0
#endif
#else
#define argv_438  1
#endif


#define argv_421(x)   ((x) >= 0 ? (x) : -(x))
#define argv_440(h,i) ((h) > (i) ? (h) : (i))

#define argv_448   (~ (unsigned) 0)
#define argv_449  (~ (unsigned long) 0)
#define argv_450  ((unsigned short) ~0)


/* Allow direct user access to numerator and denominator of a argv_3382 argv_3656.  */
#define argv_3367(Q) (&((Q)->argv_599))
#define argv_3353(Q) (&((Q)->argv_594))


#if defined (__cplusplus)
extern "C" {
#endif

#define argv_2567 __gmp_set_memory_functions
argv_426 void argv_2567 argv_443 ((void *(*) (size_t),
				      void *(*) (void *, size_t, size_t),
				      void (*) (void *, size_t))) argv_442;

#define argv_2560 __gmp_bits_per_limb
argv_426 extern argv_425 int argv_2560;

#define argv_1804 __gmp_errno
argv_426 extern int argv_1804;

#define argv_1886 __gmp_version
argv_426 extern argv_425 char * argv_425 argv_1886;

/* The following for internal use only.
   Enhancement: __gmp_allocate_func could have "__attribute__ ((malloc))",
   but argv_1148 gcc (3.0) doesn't seem to support that.  */
argv_426 extern void * (*__gmp_allocate_func) argv_443 ((size_t));
argv_426 extern void * (*__gmp_reallocate_func) argv_443 ((void *, size_t, size_t));
argv_426 extern void   (*__gmp_free_func) argv_443 ((void *, size_t));


/**************** Random number routines.  ****************/

/* obsolete */
#define argv_1871 __gmp_randinit
argv_426 void argv_1871 argv_443 ((argv_1878, argv_1869, ...));

#define argv_1872 __gmp_randinit_default
argv_426 void argv_1872 argv_443 ((argv_1878));

#define argv_1873 __gmp_randinit_lc
argv_426 void argv_1873 argv_443 ((argv_1878,
                              argv_3524, unsigned long int, argv_3524));

#define argv_1874 __gmp_randinit_lc_2exp
argv_426 void argv_1874 argv_443 ((argv_1878,
                                   argv_3524, unsigned long int,
				   unsigned long int));

#define argv_1875 __gmp_randinit_lc_2exp_size
argv_426 int argv_1875 argv_443 ((argv_1878, unsigned long));

#define argv_1876 __gmp_randseed
argv_426 void argv_1876 argv_443 ((argv_1878, argv_3524));

#define argv_1877 __gmp_randseed_ui
argv_426 void argv_1877 argv_443 ((argv_1878, unsigned long int));

#define argv_1870 __gmp_randclear
argv_426 void argv_1870 argv_443 ((argv_1878));


/**************** Formatted output routines.  ****************/

#define argv_1803 __gmp_asprintf
argv_426 int argv_1803 argv_443 ((char **, const char *, ...));

#define argv_1813 __gmp_fprintf
#ifdef argv_510
argv_426 int argv_1813 argv_443 ((FILE *, const char *, ...));
#endif

#define argv_1864 __gmp_obstack_printf
#if defined (argv_511)
argv_426 int argv_1864 argv_443 ((struct obstack *, const char *, ...));
#endif

#define argv_1865 __gmp_obstack_vprintf
#if defined (argv_511) && defined (argv_512)
argv_426 int argv_1865 argv_443 ((struct obstack *, const char *, va_list));
#endif

#define argv_1866 __gmp_printf
argv_426 int argv_1866 argv_443 ((const char *, ...));

#define argv_1880 __gmp_snprintf
argv_426 int argv_1880 argv_443 ((char *, size_t, const char *, ...));

#define argv_1881 __gmp_sprintf
argv_426 int argv_1881 argv_443 ((char *, const char *, ...));

#define argv_1885 __gmp_vasprintf
#if defined (argv_512)
argv_426 int argv_1885 argv_443 ((char **, const char *, va_list));
#endif

#define argv_1887 __gmp_vfprintf
#if defined (argv_510) && defined (argv_512)
argv_426 int argv_1887 argv_443 ((FILE *, const char *, va_list));
#endif

#define argv_1889 __gmp_vprintf
#if defined (argv_512)
argv_426 int argv_1889 argv_443 ((const char *, va_list));
#endif

#define argv_1891 __gmp_vsnprintf
#if defined (argv_512)
argv_426 int argv_1891 argv_443 ((char *, size_t, const char *, va_list));
#endif

#define argv_1892 __gmp_vsprintf
#if defined (argv_512)
argv_426 int argv_1892 argv_443 ((char *, const char *, va_list));
#endif


/**************** Formatted input routines.  ****************/

#define argv_1814 __gmp_fscanf
#ifdef argv_510
argv_426 int argv_1814 argv_443 ((FILE *, const char *, ...));
#endif

#define argv_1879 __gmp_scanf
argv_426 int argv_1879 argv_443 ((const char *, ...));

#define argv_1882 __gmp_sscanf
argv_426 int argv_1882 argv_443 ((const char *, const char *, ...));

#define argv_1888 __gmp_vfscanf
#if defined (argv_510) && defined (argv_512)
argv_426 int argv_1888 argv_443 ((FILE *, const char *, va_list));
#endif

#define argv_1890 __gmp_vscanf
#if defined (argv_512)
argv_426 int argv_1890 argv_443 ((const char *, va_list));
#endif

#define argv_1893 __gmp_vsscanf
#if defined (argv_512)
argv_426 int argv_1893 argv_443 ((const char *, const char *, va_list));
#endif


/**************** Integer (i.e. Z) routines.  ****************/

#define argv_614 __gmpz_realloc
#define argv_3504 __gmpz_realloc
argv_426 void *argv_614 argv_443 ((argv_3501, argv_2568));

#define argv_3383 __gmpz_abs
#if argv_438 || defined (__GMP_FORCE_mpz_abs)
argv_426 void argv_3383 argv_443 ((argv_3501, argv_3524));
#endif

#define argv_3384 __gmpz_add
argv_426 void argv_3384 argv_443 ((argv_3501, argv_3524, argv_3524));

#define argv_3385 __gmpz_add_ui
argv_426 void argv_3385 argv_443 ((argv_3501, argv_3524, unsigned long int));

#define argv_3386 __gmpz_addmul
argv_426 void argv_3386 argv_443 ((argv_3501, argv_3524, argv_3524));

#define argv_3387 __gmpz_addmul_ui
argv_426 void argv_3387 argv_443 ((argv_3501, argv_3524, unsigned long int));

#define argv_3388 __gmpz_and
argv_426 void argv_3388 argv_443 ((argv_3501, argv_3524, argv_3524));

#define argv_3389 __gmpz_array_init
argv_426 void argv_3389 argv_443 ((argv_3501, argv_2568, argv_2568));

#define argv_3390 __gmpz_bin_ui
argv_426 void argv_3390 argv_443 ((argv_3501, argv_3524, unsigned long int));

#define argv_3391 __gmpz_bin_uiui
argv_426 void argv_3391 argv_443 ((argv_3501, unsigned long int, unsigned long int));

#define argv_3392 __gmpz_cdiv_q
argv_426 void argv_3392 argv_443 ((argv_3501, argv_3524, argv_3524));

#define argv_3393 __gmpz_cdiv_q_2exp
argv_426 void argv_3393 argv_443 ((argv_3501, argv_3524, unsigned long));

#define argv_3394 __gmpz_cdiv_q_ui
argv_426 unsigned long int argv_3394 argv_443 ((argv_3501, argv_3524, unsigned long int));

#define argv_3395 __gmpz_cdiv_qr
argv_426 void argv_3395 argv_443 ((argv_3501, argv_3501, argv_3524, argv_3524));

#define argv_3396 __gmpz_cdiv_qr_ui
argv_426 unsigned long int argv_3396 argv_443 ((argv_3501, argv_3501, argv_3524, unsigned long int));

#define argv_3397 __gmpz_cdiv_r
argv_426 void argv_3397 argv_443 ((argv_3501, argv_3524, argv_3524));

#define argv_3398 __gmpz_cdiv_r_2exp
argv_426 void argv_3398 argv_443 ((argv_3501, argv_3524, unsigned long));

#define argv_3399 __gmpz_cdiv_r_ui
argv_426 unsigned long int argv_3399 argv_443 ((argv_3501, argv_3524, unsigned long int));

#define argv_3400 __gmpz_cdiv_ui
argv_426 unsigned long int argv_3400 argv_443 ((argv_3524, unsigned long int)) argv_422;

#define argv_3401 __gmpz_clear
argv_426 void argv_3401 argv_443 ((argv_3501));

#define argv_3402 __gmpz_clrbit
argv_426 void argv_3402 argv_443 ((argv_3501, unsigned long int));

#define argv_3403 __gmpz_cmp
argv_426 int argv_3403 argv_443 ((argv_3524, argv_3524)) argv_442 argv_422;

#define argv_3404 __gmpz_cmp_d
argv_426 int argv_3404 argv_443 ((argv_3524, double)) argv_422;

#define argv_612 __gmpz_cmp_si
argv_426 int argv_612 argv_443 ((argv_3524, signed long int)) argv_442 argv_422;

#define argv_613 __gmpz_cmp_ui
argv_426 int argv_613 argv_443 ((argv_3524, unsigned long int)) argv_442 argv_422;

#define argv_3407 __gmpz_cmpabs
argv_426 int argv_3407 argv_443 ((argv_3524, argv_3524)) argv_442 argv_422;

#define argv_3408 __gmpz_cmpabs_d
argv_426 int argv_3408 argv_443 ((argv_3524, double)) argv_422;

#define argv_3409 __gmpz_cmpabs_ui
argv_426 int argv_3409 argv_443 ((argv_3524, unsigned long int)) argv_442 argv_422;

#define argv_3410 __gmpz_com
argv_426 void argv_3410 argv_443 ((argv_3501, argv_3524));

#define argv_3412 __gmpz_congruent_p
argv_426 int argv_3412 argv_443 ((argv_3524, argv_3524, argv_3524)) argv_422;

#define argv_3411 __gmpz_congruent_2exp_p
argv_426 int argv_3411 argv_443 ((argv_3524, argv_3524, unsigned long)) argv_442 argv_422;

#define argv_3413 __gmpz_congruent_ui_p
argv_426 int argv_3413 argv_443 ((argv_3524, unsigned long, unsigned long)) argv_422;

#define argv_3417 __gmpz_divexact
argv_426 void argv_3417 argv_443 ((argv_3501, argv_3524, argv_3524));

#define argv_3418 __gmpz_divexact_ui
argv_426 void argv_3418 argv_443 ((argv_3501, argv_3524, unsigned long));

#define argv_3420 __gmpz_divisible_p
argv_426 int argv_3420 argv_443 ((argv_3524, argv_3524)) argv_422;

#define argv_3421 __gmpz_divisible_ui_p
argv_426 int argv_3421 argv_443 ((argv_3524, unsigned long)) argv_422;

#define argv_3419 __gmpz_divisible_2exp_p
argv_426 int argv_3419 argv_443 ((argv_3524, unsigned long)) argv_442 argv_422;

#define argv_3424 __gmpz_dump
argv_426 void argv_3424 argv_443 ((argv_3524));

#define argv_3427 __gmpz_export
argv_426 void *argv_3427 argv_443 ((void *, size_t *, int, size_t, int, size_t, argv_3524));

#define argv_3428 __gmpz_fac_ui
argv_426 void argv_3428 argv_443 ((argv_3501, unsigned long int));

#define argv_3429 __gmpz_fdiv_q
argv_426 void argv_3429 argv_443 ((argv_3501, argv_3524, argv_3524));

#define argv_3430 __gmpz_fdiv_q_2exp
argv_426 void argv_3430 argv_443 ((argv_3501, argv_3524, unsigned long int));

#define argv_3431 __gmpz_fdiv_q_ui
argv_426 unsigned long int argv_3431 argv_443 ((argv_3501, argv_3524, unsigned long int));

#define argv_3432 __gmpz_fdiv_qr
argv_426 void argv_3432 argv_443 ((argv_3501, argv_3501, argv_3524, argv_3524));

#define argv_3433 __gmpz_fdiv_qr_ui
argv_426 unsigned long int argv_3433 argv_443 ((argv_3501, argv_3501, argv_3524, unsigned long int));

#define argv_3434 __gmpz_fdiv_r
argv_426 void argv_3434 argv_443 ((argv_3501, argv_3524, argv_3524));

#define argv_3435 __gmpz_fdiv_r_2exp
argv_426 void argv_3435 argv_443 ((argv_3501, argv_3524, unsigned long int));

#define argv_3436 __gmpz_fdiv_r_ui
argv_426 unsigned long int argv_3436 argv_443 ((argv_3501, argv_3524, unsigned long int));

#define argv_3437 __gmpz_fdiv_ui
argv_426 unsigned long int argv_3437 argv_443 ((argv_3524, unsigned long int)) argv_422;

#define argv_3438 __gmpz_fib_ui
argv_426 void argv_3438 argv_443 ((argv_3501, unsigned long int));

#define argv_3439 __gmpz_fib2_ui
argv_426 void argv_3439 argv_443 ((argv_3501, argv_3501, unsigned long int));

#define argv_3440 __gmpz_fits_sint_p
argv_426 int argv_3440 argv_443 ((argv_3524)) argv_442 argv_422;

#define argv_3441 __gmpz_fits_slong_p
argv_426 int argv_3441 argv_443 ((argv_3524)) argv_442 argv_422;

#define argv_3442 __gmpz_fits_sshort_p
argv_426 int argv_3442 argv_443 ((argv_3524)) argv_442 argv_422;

#define argv_3443 __gmpz_fits_uint_p
#if argv_438 || defined (__GMP_FORCE_mpz_fits_uint_p)
argv_426 int argv_3443 argv_443 ((argv_3524)) argv_442 argv_422;
#endif

#define argv_3444 __gmpz_fits_ulong_p
#if argv_438 || defined (__GMP_FORCE_mpz_fits_ulong_p)
argv_426 int argv_3444 argv_443 ((argv_3524)) argv_442 argv_422;
#endif

#define argv_3445 __gmpz_fits_ushort_p
#if argv_438 || defined (__GMP_FORCE_mpz_fits_ushort_p)
argv_426 int argv_3445 argv_443 ((argv_3524)) argv_442 argv_422;
#endif

#define argv_3446 __gmpz_gcd
argv_426 void argv_3446 argv_443 ((argv_3501, argv_3524, argv_3524));

#define argv_3447 __gmpz_gcd_ui
argv_426 unsigned long int argv_3447 argv_443 ((argv_3501, argv_3524, unsigned long int));

#define argv_3448 __gmpz_gcdext
argv_426 void argv_3448 argv_443 ((argv_3501, argv_3501, argv_3501, argv_3524, argv_3524));

#define argv_3449 __gmpz_get_d
argv_426 double argv_3449 argv_443 ((argv_3524)) argv_422;

#define argv_3450 __gmpz_get_d_2exp
argv_426 double argv_3450 argv_443 ((signed long int *, argv_3524));

#define argv_3451 __gmpz_get_si
argv_426 /* signed */ long int argv_3451 argv_443 ((argv_3524)) argv_442 argv_422;

#define argv_3452 __gmpz_get_str
argv_426 char *argv_3452 argv_443 ((char *, int, argv_3524));

#define argv_3453 __gmpz_get_ui
#if argv_438 || defined (__GMP_FORCE_mpz_get_ui)
argv_426 unsigned long int argv_3453 argv_443 ((argv_3524)) argv_442 argv_422;
#endif

#define argv_3454 __gmpz_getlimbn
#if argv_438 || defined (__GMP_FORCE_mpz_getlimbn)
argv_426 argv_2564 argv_3454 argv_443 ((argv_3524, argv_2568)) argv_442 argv_422;
#endif

#define argv_3455 __gmpz_hamdist
argv_426 unsigned long int argv_3455 argv_443 ((argv_3524, argv_3524)) argv_442 argv_422;

#define argv_3456 __gmpz_import
argv_426 void argv_3456 argv_443 ((argv_3501, size_t, int, size_t, int, size_t, const void *));

#define argv_3457 __gmpz_init
argv_426 void argv_3457 argv_443 ((argv_3501));

#define argv_3462 __gmpz_init2
argv_426 void argv_3462 argv_443 ((argv_3501, unsigned long));

#define mpz_init_set __gmpz_init_set
argv_426 void mpz_init_set argv_443 ((argv_3501, argv_3524));

#define argv_3458 __gmpz_init_set_d
argv_426 void argv_3458 argv_443 ((argv_3501, double));

#define argv_3459 __gmpz_init_set_si
argv_426 void argv_3459 argv_443 ((argv_3501, signed long int));

#define argv_3460 __gmpz_init_set_str
argv_426 int argv_3460 argv_443 ((argv_3501, argv_425 char *, int));

#define argv_3461 __gmpz_init_set_ui
argv_426 void argv_3461 argv_443 ((argv_3501, unsigned long int));

#define argv_3463 __gmpz_inp_raw
#ifdef argv_510
argv_426 size_t argv_3463 argv_443 ((argv_3501, FILE *));
#endif

#define argv_3464 __gmpz_inp_str
#ifdef argv_510
argv_426 size_t argv_3464 argv_443 ((argv_3501, FILE *, int));
#endif

#define argv_3465 __gmpz_invert
argv_426 int argv_3465 argv_443 ((argv_3501, argv_3524, argv_3524));

#define argv_3466 __gmpz_ior
argv_426 void argv_3466 argv_443 ((argv_3501, argv_3524, argv_3524));

#define argv_3467 __gmpz_jacobi
argv_426 int argv_3467 argv_443 ((argv_3524, argv_3524)) argv_422;

#define argv_3468 argv_3467  /* alias */

#define argv_3469 __gmpz_kronecker_si
argv_426 int argv_3469 argv_443 ((argv_3524, long)) argv_422;

#define argv_3470 __gmpz_kronecker_ui
argv_426 int argv_3470 argv_443 ((argv_3524, unsigned long)) argv_422;

#define argv_3519 __gmpz_si_kronecker
argv_426 int argv_3519 argv_443 ((long, argv_3524)) argv_422;

#define argv_3541 __gmpz_ui_kronecker
argv_426 int argv_3541 argv_443 ((unsigned long, argv_3524)) argv_422;

#define argv_3471 __gmpz_lcm
argv_426 void argv_3471 argv_443 ((argv_3501, argv_3524, argv_3524));

#define argv_3472 __gmpz_lcm_ui
argv_426 void argv_3472 argv_443 ((argv_3501, argv_3524, unsigned long));

#define argv_3473 argv_3467  /* alias */

#define argv_3474 __gmpz_lucnum_ui
argv_426 void argv_3474 argv_443 ((argv_3501, unsigned long int));

#define argv_3475 __gmpz_lucnum2_ui
argv_426 void argv_3475 argv_443 ((argv_3501, argv_3501, unsigned long int));

#define argv_3480 __gmpz_millerrabin
argv_426 int argv_3480 argv_443 ((argv_3524, int)) argv_422;

#define argv_3483 __gmpz_mod
argv_426 void argv_3483 argv_443 ((argv_3501, argv_3524, argv_3524));

#define argv_3486 __gmpz_mul
argv_426 void argv_3486 argv_443 ((argv_3501, argv_3524, argv_3524));

#define argv_3487 __gmpz_mul_2exp
argv_426 void argv_3487 argv_443 ((argv_3501, argv_3524, unsigned long int));

#define argv_3488 __gmpz_mul_si
argv_426 void argv_3488 argv_443 ((argv_3501, argv_3524, long int));

#define argv_3489 __gmpz_mul_ui
argv_426 void argv_3489 argv_443 ((argv_3501, argv_3524, unsigned long int));

#define argv_3490 __gmpz_neg
#if argv_438 || defined (__GMP_FORCE_mpz_neg)
argv_426 void argv_3490 argv_443 ((argv_3501, argv_3524));
#endif

#define argv_3491 __gmpz_nextprime
argv_426 void argv_3491 argv_443 ((argv_3501, argv_3524));

#define argv_3493 __gmpz_out_raw
#ifdef argv_510
argv_426 size_t argv_3493 argv_443 ((FILE *, argv_3524));
#endif

#define argv_3494 __gmpz_out_str
#ifdef argv_510
argv_426 size_t argv_3494 argv_443 ((FILE *, int, argv_3524));
#endif

#define argv_3495 __gmpz_perfect_power_p
argv_426 int argv_3495 argv_443 ((argv_3524)) argv_422;

#define argv_3496 __gmpz_perfect_square_p
#if argv_438 || defined (__GMP_FORCE_mpz_perfect_square_p)
argv_426 int argv_3496 argv_443 ((argv_3524)) argv_422;
#endif

#define mpz_popcount __gmpz_popcount
#if argv_438 || defined (__GMP_FORCE_mpz_popcount)
argv_426 unsigned long int mpz_popcount argv_443 ((argv_3524)) argv_442 argv_422;
#endif

#define argv_3497 __gmpz_pow_ui
argv_426 void argv_3497 argv_443 ((argv_3501, argv_3524, unsigned long int));

#define argv_3498 __gmpz_powm
argv_426 void argv_3498 argv_443 ((argv_3501, argv_3524, argv_3524, argv_3524));

#define argv_3499 __gmpz_powm_ui
argv_426 void argv_3499 argv_443 ((argv_3501, argv_3524, unsigned long int, argv_3524));

#define argv_3500 __gmpz_probab_prime_p
argv_426 int argv_3500 argv_443 ((argv_3524, int)) argv_422;

#define argv_3502 __gmpz_random
argv_426 void argv_3502 argv_443 ((argv_3501, argv_2568));

#define argv_3503 __gmpz_random2
argv_426 void argv_3503 argv_443 ((argv_3501, argv_2568));

#define argv_3505 __gmpz_realloc2
argv_426 void argv_3505 argv_443 ((argv_3501, unsigned long));

#define argv_3506 __gmpz_remove
argv_426 unsigned long int argv_3506 argv_443 ((argv_3501, argv_3524, argv_3524));

#define argv_3507 __gmpz_root
argv_426 int argv_3507 argv_443 ((argv_3501, argv_3524, unsigned long int));

#define argv_3508 __gmpz_rrandomb
argv_426 void argv_3508 argv_443 ((argv_3501, argv_1878, unsigned long int));

#define argv_3509 __gmpz_scan0
argv_426 unsigned long int argv_3509 argv_443 ((argv_3524, unsigned long int)) argv_442 argv_422;

#define argv_3510 __gmpz_scan1
argv_426 unsigned long int argv_3510 argv_443 ((argv_3524, unsigned long int)) argv_442 argv_422;

#define mpz_set __gmpz_set
argv_426 void mpz_set argv_443 ((argv_3501, argv_3524));

#define argv_3511 __gmpz_set_d
argv_426 void argv_3511 argv_443 ((argv_3501, double));

#define argv_3512 __gmpz_set_f
argv_426 void argv_3512 argv_443 ((argv_3501, argv_2630));

#define argv_3513 __gmpz_set_q
#if argv_438 || defined (__GMP_FORCE_mpz_set_q)
argv_426 void argv_3513 argv_443 ((argv_3501, argv_3379));
#endif

#define argv_3514 __gmpz_set_si
argv_426 void argv_3514 argv_443 ((argv_3501, signed long int));

#define argv_3515 __gmpz_set_str
argv_426 int argv_3515 argv_443 ((argv_3501, argv_425 char *, int));

#define argv_3516 __gmpz_set_ui
argv_426 void argv_3516 argv_443 ((argv_3501, unsigned long int));

#define argv_3517 __gmpz_setbit
argv_426 void argv_3517 argv_443 ((argv_3501, unsigned long int));

#define argv_3520 __gmpz_size
#if argv_438 || defined (__GMP_FORCE_mpz_size)
argv_426 size_t argv_3520 argv_443 ((argv_3524)) argv_442 argv_422;
#endif

#define argv_3521 __gmpz_sizeinbase
argv_426 size_t argv_3521 argv_443 ((argv_3524, int)) argv_442 argv_422;

#define argv_3522 __gmpz_sqrt
argv_426 void argv_3522 argv_443 ((argv_3501, argv_3524));

#define argv_3523 __gmpz_sqrtrem
argv_426 void argv_3523 argv_443 ((argv_3501, argv_3501, argv_3524));

#define argv_3525 __gmpz_sub
argv_426 void argv_3525 argv_443 ((argv_3501, argv_3524, argv_3524));

#define argv_3526 __gmpz_sub_ui
argv_426 void argv_3526 argv_443 ((argv_3501, argv_3524, unsigned long int));

#define argv_3543 __gmpz_ui_sub
argv_426 void argv_3543 argv_443 ((argv_3501, unsigned long int, argv_3524));

#define argv_3527 __gmpz_submul
argv_426 void argv_3527 argv_443 ((argv_3501, argv_3524, argv_3524));

#define argv_3528 __gmpz_submul_ui
argv_426 void argv_3528 argv_443 ((argv_3501, argv_3524, unsigned long int));

#define argv_3529 __gmpz_swap
argv_426 void argv_3529 argv_443 ((argv_3501, argv_3501)) argv_442;

#define argv_3539 __gmpz_tdiv_ui
argv_426 unsigned long int argv_3539 argv_443 ((argv_3524, unsigned long int)) argv_422;

#define argv_3531 __gmpz_tdiv_q
argv_426 void argv_3531 argv_443 ((argv_3501, argv_3524, argv_3524));

#define argv_3532 __gmpz_tdiv_q_2exp
argv_426 void argv_3532 argv_443 ((argv_3501, argv_3524, unsigned long int));

#define argv_3533 __gmpz_tdiv_q_ui
argv_426 unsigned long int argv_3533 argv_443 ((argv_3501, argv_3524, unsigned long int));

#define argv_3534 __gmpz_tdiv_qr
argv_426 void argv_3534 argv_443 ((argv_3501, argv_3501, argv_3524, argv_3524));

#define argv_3535 __gmpz_tdiv_qr_ui
argv_426 unsigned long int argv_3535 argv_443 ((argv_3501, argv_3501, argv_3524, unsigned long int));

#define argv_3536 __gmpz_tdiv_r
argv_426 void argv_3536 argv_443 ((argv_3501, argv_3524, argv_3524));

#define argv_3537 __gmpz_tdiv_r_2exp
argv_426 void argv_3537 argv_443 ((argv_3501, argv_3524, unsigned long int));

#define argv_3538 __gmpz_tdiv_r_ui
argv_426 unsigned long int argv_3538 argv_443 ((argv_3501, argv_3524, unsigned long int));

#define argv_3540 __gmpz_tstbit
argv_426 int argv_3540 argv_443 ((argv_3524, unsigned long int)) argv_442 argv_422;

#define argv_3542 __gmpz_ui_pow_ui
argv_426 void argv_3542 argv_443 ((argv_3501, unsigned long int, unsigned long int));

#define argv_3544 __gmpz_urandomb
argv_426 void argv_3544 argv_443 ((argv_3501, argv_1878, unsigned long int));

#define argv_3545 __gmpz_urandomm
argv_426 void argv_3545 argv_443 ((argv_3501, argv_1878, argv_3524));

#define argv_3546 __gmpz_xor
#define argv_3425 __gmpz_xor
argv_426 void argv_3546 argv_443 ((argv_3501, argv_3524, argv_3524));


/**************** Rational (i.e. Q) routines.  ****************/

#define argv_3346 __gmpq_abs
#if argv_438 || defined (__GMP_FORCE_mpq_abs)
argv_426 void argv_3346 argv_443 ((argv_3369, argv_3379));
#endif

#define argv_3347 __gmpq_add
argv_426 void argv_3347 argv_443 ((argv_3369, argv_3379, argv_3379));

#define argv_3348 __gmpq_canonicalize
argv_426 void argv_3348 argv_443 ((argv_3369));

#define argv_3349 __gmpq_clear
argv_426 void argv_3349 argv_443 ((argv_3369));

#define argv_3350 __gmpq_cmp
argv_426 int argv_3350 argv_443 ((argv_3379, argv_3379)) argv_422;

#define argv_610 __gmpq_cmp_si
argv_426 int argv_610 argv_443 ((argv_3379, long, unsigned long)) argv_422;

#define argv_611 __gmpq_cmp_ui
argv_426 int argv_611 argv_443 ((argv_3379, unsigned long int, unsigned long int)) argv_422;

#define argv_3354 __gmpq_div
argv_426 void argv_3354 argv_443 ((argv_3369, argv_3379, argv_3379));

#define argv_3355 __gmpq_div_2exp
argv_426 void argv_3355 argv_443 ((argv_3369, argv_3379, unsigned long));

#define argv_3356 __gmpq_equal
argv_426 int argv_3356 argv_443 ((argv_3379, argv_3379)) argv_442 argv_422;

#define argv_3359 __gmpq_get_num
argv_426 void argv_3359 argv_443 ((argv_3501, argv_3379));

#define argv_3358 __gmpq_get_den
argv_426 void argv_3358 argv_443 ((argv_3501, argv_3379));

#define argv_3357 __gmpq_get_d
argv_426 double argv_3357 argv_443 ((argv_3379)) argv_422;

#define argv_3360 __gmpq_get_str
argv_426 char *argv_3360 argv_443 ((char *, int, argv_3379));

#define argv_3361 __gmpq_init
argv_426 void argv_3361 argv_443 ((argv_3369));

#define argv_3362 __gmpq_inp_str
#ifdef argv_510
argv_426 size_t argv_3362 argv_443 ((argv_3369, FILE *, int));
#endif

#define argv_3363 __gmpq_inv
argv_426 void argv_3363 argv_443 ((argv_3369, argv_3379));

#define argv_3364 __gmpq_mul
argv_426 void argv_3364 argv_443 ((argv_3369, argv_3379, argv_3379));

#define argv_3365 __gmpq_mul_2exp
argv_426 void argv_3365 argv_443 ((argv_3369, argv_3379, unsigned long));

#define argv_3366 __gmpq_neg
#if argv_438 || defined (__GMP_FORCE_mpq_neg)
argv_426 void argv_3366 argv_443 ((argv_3369, argv_3379));
#endif

#define argv_3368 __gmpq_out_str
#ifdef argv_510
argv_426 size_t argv_3368 argv_443 ((FILE *, int, argv_3379));
#endif

#define mpq_set __gmpq_set
argv_426 void mpq_set argv_443 ((argv_3369, argv_3379));

#define argv_3370 __gmpq_set_d
argv_426 void argv_3370 argv_443 ((argv_3369, double));

#define argv_3371 __gmpq_set_den
argv_426 void argv_3371 argv_443 ((argv_3369, argv_3524));

#define argv_3372 __gmpq_set_f
argv_426 void argv_3372 argv_443 ((argv_3369, argv_2630));

#define argv_3373 __gmpq_set_num
argv_426 void argv_3373 argv_443 ((argv_3369, argv_3524));

#define argv_3374 __gmpq_set_si
argv_426 void argv_3374 argv_443 ((argv_3369, signed long int, unsigned long int));

#define argv_3375 __gmpq_set_str
argv_426 int argv_3375 argv_443 ((argv_3369, const char *, int));

#define argv_3376 __gmpq_set_ui
argv_426 void argv_3376 argv_443 ((argv_3369, unsigned long int, unsigned long int));

#define argv_3377 __gmpq_set_z
argv_426 void argv_3377 argv_443 ((argv_3369, argv_3524));

#define argv_3380 __gmpq_sub
argv_426 void argv_3380 argv_443 ((argv_3369, argv_3379, argv_3379));

#define argv_3381 __gmpq_swap
argv_426 void argv_3381 argv_443 ((argv_3369, argv_3369)) argv_442;


/**************** Float (i.e. F) routines.  ****************/

#define argv_2572 __gmpf_abs
argv_426 void argv_2572 argv_443 ((argv_2614, argv_2630));

#define argv_2573 __gmpf_add
argv_426 void argv_2573 argv_443 ((argv_2614, argv_2630, argv_2630));

#define argv_2574 __gmpf_add_ui
argv_426 void argv_2574 argv_443 ((argv_2614, argv_2630, unsigned long int));
#define argv_2575 __gmpf_ceil
argv_426 void argv_2575 argv_443 ((argv_2614, argv_2630));

#define argv_2576 __gmpf_clear
argv_426 void argv_2576 argv_443 ((argv_2614));

#define argv_2577 __gmpf_cmp
argv_426 int argv_2577 argv_443 ((argv_2630, argv_2630)) argv_442 argv_422;

#define argv_2578 __gmpf_cmp_d
argv_426 int argv_2578 argv_443 ((argv_2630, double)) argv_422;

#define argv_2579 __gmpf_cmp_si
argv_426 int argv_2579 argv_443 ((argv_2630, signed long int)) argv_442 argv_422;

#define argv_2580 __gmpf_cmp_ui
argv_426 int argv_2580 argv_443 ((argv_2630, unsigned long int)) argv_442 argv_422;

#define argv_2581 __gmpf_div
argv_426 void argv_2581 argv_443 ((argv_2614, argv_2630, argv_2630));

#define argv_2582 __gmpf_div_2exp
argv_426 void argv_2582 argv_443 ((argv_2614, argv_2630, unsigned long int));

#define argv_2583 __gmpf_div_ui
argv_426 void argv_2583 argv_443 ((argv_2614, argv_2630, unsigned long int));

#define argv_2584 __gmpf_dump
argv_426 void argv_2584 argv_443 ((argv_2630));

#define argv_2585 __gmpf_eq
argv_426 int argv_2585 argv_443 ((argv_2630, argv_2630, unsigned long int)) argv_422;

#define argv_2586 __gmpf_fits_sint_p
argv_426 int argv_2586 argv_443 ((argv_2630)) argv_442 argv_422;

#define argv_2587 __gmpf_fits_slong_p
argv_426 int argv_2587 argv_443 ((argv_2630)) argv_442 argv_422;

#define argv_2588 __gmpf_fits_sshort_p
argv_426 int argv_2588 argv_443 ((argv_2630)) argv_442 argv_422;

#define argv_2589 __gmpf_fits_uint_p
argv_426 int argv_2589 argv_443 ((argv_2630)) argv_442 argv_422;

#define argv_2590 __gmpf_fits_ulong_p
argv_426 int argv_2590 argv_443 ((argv_2630)) argv_442 argv_422;

#define argv_2591 __gmpf_fits_ushort_p
argv_426 int argv_2591 argv_443 ((argv_2630)) argv_442 argv_422;

#define argv_2592 __gmpf_floor
argv_426 void argv_2592 argv_443 ((argv_2614, argv_2630));

#define argv_2593 __gmpf_get_d
argv_426 double argv_2593 argv_443 ((argv_2630)) argv_422;

#define argv_2594 __gmpf_get_d_2exp
argv_426 double argv_2594 argv_443 ((signed long int *, argv_2630));

#define argv_2595 __gmpf_get_default_prec
argv_426 unsigned long int argv_2595 argv_443 ((void)) argv_442 argv_422;

#define argv_2596 __gmpf_get_prec
argv_426 unsigned long int argv_2596 argv_443 ((argv_2630)) argv_442 argv_422;

#define argv_2597 __gmpf_get_si
argv_426 long argv_2597 argv_443 ((argv_2630)) argv_442 argv_422;

#define argv_2598 __gmpf_get_str
argv_426 char *argv_2598 argv_443 ((char *, argv_2561 *, int, size_t, argv_2630));

#define argv_2599 __gmpf_get_ui
argv_426 unsigned long argv_2599 argv_443 ((argv_2630)) argv_442 argv_422;

#define argv_2600 __gmpf_init
argv_426 void argv_2600 argv_443 ((argv_2614));

#define argv_2605 __gmpf_init2
argv_426 void argv_2605 argv_443 ((argv_2614, unsigned long int));

#define mpf_init_set __gmpf_init_set
argv_426 void mpf_init_set argv_443 ((argv_2614, argv_2630));

#define argv_2601 __gmpf_init_set_d
argv_426 void argv_2601 argv_443 ((argv_2614, double));

#define argv_2602 __gmpf_init_set_si
argv_426 void argv_2602 argv_443 ((argv_2614, signed long int));

#define argv_2603 __gmpf_init_set_str
argv_426 int argv_2603 argv_443 ((argv_2614, argv_425 char *, int));

#define argv_2604 __gmpf_init_set_ui
argv_426 void argv_2604 argv_443 ((argv_2614, unsigned long int));

#define argv_2606 __gmpf_inp_str
#ifdef argv_510
argv_426 size_t argv_2606 argv_443 ((argv_2614, FILE *, int));
#endif

#define argv_2607 __gmpf_integer_p
argv_426 int argv_2607 argv_443 ((argv_2630)) argv_442 argv_422;

#define argv_2608 __gmpf_mul
argv_426 void argv_2608 argv_443 ((argv_2614, argv_2630, argv_2630));

#define argv_2609 __gmpf_mul_2exp
argv_426 void argv_2609 argv_443 ((argv_2614, argv_2630, unsigned long int));

#define argv_2610 __gmpf_mul_ui
argv_426 void argv_2610 argv_443 ((argv_2614, argv_2630, unsigned long int));

#define argv_2611 __gmpf_neg
argv_426 void argv_2611 argv_443 ((argv_2614, argv_2630));

#define argv_2612 __gmpf_out_str
#ifdef argv_510
argv_426 size_t argv_2612 argv_443 ((FILE *, int, size_t, argv_2630));
#endif

#define argv_2613 __gmpf_pow_ui
argv_426 void argv_2613 argv_443 ((argv_2614, argv_2630, unsigned long int));

#define argv_2615 __gmpf_random2
argv_426 void argv_2615 argv_443 ((argv_2614, argv_2568, argv_2561));

#define argv_2616 __gmpf_reldiff
argv_426 void argv_2616 argv_443 ((argv_2614, argv_2630, argv_2630));

#define mpf_set __gmpf_set
argv_426 void mpf_set argv_443 ((argv_2614, argv_2630));

#define argv_2617 __gmpf_set_d
argv_426 void argv_2617 argv_443 ((argv_2614, double));

#define argv_2618 __gmpf_set_default_prec
argv_426 void argv_2618 argv_443 ((unsigned long int)) argv_442;

#define argv_2619 __gmpf_set_prec
argv_426 void argv_2619 argv_443 ((argv_2614, unsigned long int));

#define argv_2620 __gmpf_set_prec_raw
argv_426 void argv_2620 argv_443 ((argv_2614, unsigned long int)) argv_442;

#define argv_2621 __gmpf_set_q
argv_426 void argv_2621 argv_443 ((argv_2614, argv_3379));

#define argv_2622 __gmpf_set_si
argv_426 void argv_2622 argv_443 ((argv_2614, signed long int));

#define argv_2623 __gmpf_set_str
argv_426 int argv_2623 argv_443 ((argv_2614, argv_425 char *, int));

#define argv_2624 __gmpf_set_ui
argv_426 void argv_2624 argv_443 ((argv_2614, unsigned long int));

#define argv_2625 __gmpf_set_z
argv_426 void argv_2625 argv_443 ((argv_2614, argv_3524));

#define argv_2627 __gmpf_size
argv_426 size_t argv_2627 argv_443 ((argv_2630)) argv_442 argv_422;

#define argv_2628 __gmpf_sqrt
argv_426 void argv_2628 argv_443 ((argv_2614, argv_2630));

#define argv_2629 __gmpf_sqrt_ui
argv_426 void argv_2629 argv_443 ((argv_2614, unsigned long int));

#define argv_2631 __gmpf_sub
argv_426 void argv_2631 argv_443 ((argv_2614, argv_2630, argv_2630));

#define argv_2632 __gmpf_sub_ui
argv_426 void argv_2632 argv_443 ((argv_2614, argv_2630, unsigned long int));

#define argv_2633 __gmpf_swap
argv_426 void argv_2633 argv_443 ((argv_2614, argv_2614)) argv_442;

#define argv_2635 __gmpf_trunc
argv_426 void argv_2635 argv_443 ((argv_2614, argv_2630));

#define argv_2636 __gmpf_ui_div
argv_426 void argv_2636 argv_443 ((argv_2614, unsigned long int, argv_2630));

#define argv_2637 __gmpf_ui_sub
argv_426 void argv_2637 argv_443 ((argv_2614, unsigned long int, argv_2630));

#define argv_2638 __gmpf_urandomb
argv_426 void argv_2638 argv_443 ((argv_2634, argv_1878, unsigned long int));


/************ Low level positive-integer (i.e. N) routines.  ************/

/* This is ugly, but we need to make user calls reach the prefixed function. */

#define argv_3308 argv_487(argv_646)
#if argv_438 || defined (__GMP_FORCE_mpn_add)
argv_426 argv_2564 argv_3308 argv_443 ((argv_2565, argv_2569, argv_2568, argv_2569,argv_2568));
#endif

#define argv_3309 argv_487(add_1)
#if argv_438 || defined (__GMP_FORCE_mpn_add_1)
argv_426 argv_2564 argv_3309 argv_443 ((argv_2565, argv_2569, argv_2568, argv_2564)) argv_442;
#endif

#define argv_3310 argv_487(add_n)
argv_426 argv_2564 argv_3310 argv_443 ((argv_2565, argv_2569, argv_2569, argv_2568));

#define argv_3311 argv_487(addmul_1)
argv_426 argv_2564 argv_3311 argv_443 ((argv_2565, argv_2569, argv_2568, argv_2564));

#define argv_3312 argv_487(bdivmod)
argv_426 argv_2564 argv_3312 argv_443 ((argv_2565, argv_2565, argv_2568, argv_2569, argv_2568, unsigned long int));

#define argv_3313 argv_487(cmp)
#if argv_438 || defined (__GMP_FORCE_mpn_cmp)
argv_426 int argv_3313 argv_443 ((argv_2569, argv_2569, argv_2568)) argv_442 argv_422;
#endif

#define argv_3314(dst,src,size) \
  argv_3315 (dst, src, size, argv_424 (argv_2564, 0))

#define argv_3315 argv_487(divexact_by3c)
argv_426 argv_2564 argv_3315 argv_443 ((argv_2565, argv_2569, argv_2568, argv_2564));

#define argv_3317(qp,np,nsize,dlimb) \
  argv_3319 (qp, argv_424 (argv_2568, 0), np, nsize, dlimb)

#define argv_3318 argv_487(divrem)
argv_426 argv_2564 argv_3318 argv_443 ((argv_2565, argv_2568, argv_2565, argv_2568, argv_2569, argv_2568));

#define argv_3319 argv_487(divrem_1)
argv_426 argv_2564 argv_3319 argv_443 ((argv_2565, argv_2568, argv_2569, argv_2568, argv_2564));

#define argv_3320 argv_487(divrem_2)
argv_426 argv_2564 argv_3320 argv_443 ((argv_2565, argv_2568, argv_2565, argv_2568, argv_2569));

#define argv_3321 argv_487(gcd)
argv_426 argv_2568 argv_3321 argv_443 ((argv_2565, argv_2565, argv_2568, argv_2565, argv_2568));

#define argv_3322 argv_487(gcd_1)
argv_426 argv_2564 argv_3322 argv_443 ((argv_2569, argv_2568, argv_2564)) argv_422;

#define argv_3323 argv_487(gcdext)
argv_426 argv_2568 argv_3323 argv_443 ((argv_2565, argv_2565, argv_2568 *, argv_2565, argv_2568, argv_2565, argv_2568));

#define argv_3324 argv_487(get_str)
argv_426 size_t argv_3324 argv_443 ((unsigned char *, int, argv_2565, argv_2568));

#define argv_3325 argv_487(hamdist)
argv_426 unsigned long int argv_3325 argv_443 ((argv_2569, argv_2569, argv_2568)) argv_442 argv_422;

#define argv_3326 argv_487(lshift)
argv_426 argv_2564 argv_3326 argv_443 ((argv_2565, argv_2569, argv_2568, unsigned int));

#define argv_3327 argv_487(mod_1)
argv_426 argv_2564 argv_3327 argv_443 ((argv_2569, argv_2568, argv_2564)) argv_422;

#define argv_3328 argv_487(mul)
argv_426 argv_2564 argv_3328 argv_443 ((argv_2565, argv_2569, argv_2568, argv_2569, argv_2568));

#define argv_3329 argv_487(mul_1)
argv_426 argv_2564 argv_3329 argv_443 ((argv_2565, argv_2569, argv_2568, argv_2564));

#define argv_3330 argv_487(mul_n)
argv_426 void argv_3330 argv_443 ((argv_2565, argv_2569, argv_2569, argv_2568));

#define argv_3331 argv_487(perfect_square_p)
argv_426 int argv_3331 argv_443 ((argv_2569, argv_2568)) argv_422;

#define mpn_popcount argv_487(popcount)
argv_426 unsigned long int mpn_popcount argv_443 ((argv_2569, argv_2568)) argv_442 argv_422;

#define argv_3332 argv_487(pow_1)
argv_426 argv_2568 argv_3332 argv_443 ((argv_2565, argv_2569, argv_2568, argv_2564, argv_2565));

/* undocumented now, but retained here for upward compatibility */
#define argv_3333 argv_487(preinv_mod_1)
argv_426 argv_2564 argv_3333 argv_443 ((argv_2569, argv_2568, argv_2564, argv_2564)) argv_422;

#define argv_3334 argv_487(random)
argv_426 void argv_3334 argv_443 ((argv_2565, argv_2568));

#define argv_3335 argv_487(random2)
argv_426 void argv_3335 argv_443 ((argv_2565, argv_2568));

#define argv_3336 argv_487(rshift)
argv_426 argv_2564 argv_3336 argv_443 ((argv_2565, argv_2569, argv_2568, unsigned int));

#define argv_3337 argv_487(scan0)
argv_426 unsigned long int argv_3337 argv_443 ((argv_2569, unsigned long int)) argv_422;

#define argv_3338 argv_487(scan1)
argv_426 unsigned long int argv_3338 argv_443 ((argv_2569, unsigned long int)) argv_422;

#define argv_3339 argv_487(set_str)
argv_426 argv_2568 argv_3339 argv_443 ((argv_2565, argv_425 unsigned char *, size_t, int));

#define argv_3340 argv_487(sqrtrem)
argv_426 argv_2568 argv_3340 argv_443 ((argv_2565, argv_2565, argv_2569, argv_2568));

#define argv_3341 argv_487(sub)
#if argv_438 || defined (__GMP_FORCE_mpn_sub)
argv_426 argv_2564 argv_3341 argv_443 ((argv_2565, argv_2569, argv_2568, argv_2569,argv_2568));
#endif

#define argv_3342 argv_487(sub_1)
#if argv_438 || defined (__GMP_FORCE_mpn_sub_1)
argv_426 argv_2564 argv_3342 argv_443 ((argv_2565, argv_2569, argv_2568, argv_2564)) argv_442;
#endif

#define argv_3343 argv_487(sub_n)
argv_426 argv_2564 argv_3343 argv_443 ((argv_2565, argv_2569, argv_2569, argv_2568));

#define argv_3344 argv_487(submul_1)
argv_426 argv_2564 argv_3344 argv_443 ((argv_2565, argv_2569, argv_2568, argv_2564));

#define argv_3345 argv_487(tdiv_qr)
argv_426 void argv_3345 argv_443 ((argv_2565, argv_2565, argv_2568, argv_2569, argv_2568, argv_2569, argv_2568));


/**************** mpz inlines ****************/

/* The following are provided as inlines where possible, but always exist as
   library functions too, for binary compatibility.

   Within gmp itself this inlining generally isn't relied on, since it
   doesn't get argv_1291 for all argv_1047, whereas if something is worth
   inlining then it's worth arranging always.

   There are two styles of inlining here.  When the same bit of argv_976 is
   wanted for the inline as for the library version, then __GMP_FORCE_foo
   arranges for that argv_976 to be emitted and the argv_430
   directive suppressed, eg. argv_3443.  When a different bit of argv_976
   is wanted for the inline than for the library version, then
   __GMP_FORCE_foo arranges the inline to be suppressed, eg. argv_3383.  */

#if defined (argv_430) && ! defined (__GMP_FORCE_mpz_abs)
argv_430 void
argv_3383 (argv_3501 __gmp_w, argv_3524 __gmp_u)
{
  if (__gmp_w != __gmp_u)
    mpz_set (__gmp_w, __gmp_u);
  __gmp_w->argv_602 = argv_421 (__gmp_w->argv_602);
}
#endif

#if argv_1859 == 0
#define argv_463(z,maxval)					\
  argv_2568  __gmp_n = z->argv_602;					\
  argv_2565  __gmp_p = z->argv_593;						\
  return (__gmp_n == 0 || (__gmp_n == 1 && __gmp_p[0] <= maxval));
#else
#define argv_463(z,maxval)					\
  argv_2568  __gmp_n = z->argv_602;					\
  argv_2565  __gmp_p = z->argv_593;						\
  return (__gmp_n == 0 || (__gmp_n == 1 && __gmp_p[0] <= maxval)	\
	  || (__gmp_n == 2 && __gmp_p[1] <= ((argv_2564) maxval >> argv_1861)));
#endif

#if defined (argv_430) || defined (__GMP_FORCE_mpz_fits_uint_p)
#if ! defined (__GMP_FORCE_mpz_fits_uint_p)
argv_430
#endif
int
argv_3443 (argv_3524 __gmp_z) argv_442
{
  argv_463 (__gmp_z, argv_448);
}
#endif

#if defined (argv_430) || defined (__GMP_FORCE_mpz_fits_ulong_p)
#if ! defined (__GMP_FORCE_mpz_fits_ulong_p)
argv_430
#endif
int
argv_3444 (argv_3524 __gmp_z) argv_442
{
  argv_463 (__gmp_z, argv_449);
}
#endif

#if defined (argv_430) || defined (__GMP_FORCE_mpz_fits_ushort_p)
#if ! defined (__GMP_FORCE_mpz_fits_ushort_p)
argv_430
#endif
int
argv_3445 (argv_3524 __gmp_z) argv_442
{
  argv_463 (__gmp_z, argv_450);
}
#endif

#if defined (argv_430) || defined (__GMP_FORCE_mpz_get_ui)
#if ! defined (__GMP_FORCE_mpz_get_ui)
argv_430
#endif
unsigned long
argv_3453 (argv_3524 __gmp_z) argv_442
{
  argv_2565 __gmp_p = __gmp_z->argv_593;
  argv_2568 __gmp_n = __gmp_z->argv_602;
  argv_2564 __gmp_l = __gmp_p[0];
  if (argv_449 <= argv_1862)
    return __gmp_l & (-(argv_2564) (__gmp_n != 0));
#if argv_1859 != 0	/* redundant #if, shuts up compiler warnings */
  else			/* happens for nails, but not if LONG_LONG_LIMB */
    {			/* assume two limbs are enough to fill an ulong */
      __gmp_n = argv_421 (__gmp_n);
      if (__gmp_n <= 1)
	return __gmp_l & (-(argv_2564) (__gmp_n != 0));
      else
	return __gmp_l + (__gmp_p[1] << argv_1861);
    }
#endif
}
#endif

#if defined (argv_430) || defined (__GMP_FORCE_mpz_getlimbn)
#if ! defined (__GMP_FORCE_mpz_getlimbn)
argv_430
#endif
argv_2564
argv_3454 (argv_3524 __gmp_z, argv_2568 __gmp_n) argv_442
{
  if (argv_421 (__gmp_z->argv_602) <= __gmp_n || __gmp_n < 0)
    return 0;
  else
    return __gmp_z->argv_593[__gmp_n];
}
#endif

#if defined (argv_430) && ! defined (__GMP_FORCE_mpz_neg)
argv_430 void
argv_3490 (argv_3501 __gmp_w, argv_3524 __gmp_u)
{
  if (__gmp_w != __gmp_u)
    mpz_set (__gmp_w, __gmp_u);
  __gmp_w->argv_602 = - __gmp_w->argv_602;
}
#endif

#if defined (argv_430) || defined (__GMP_FORCE_mpz_perfect_square_p)
#if ! defined (__GMP_FORCE_mpz_perfect_square_p)
argv_430
#endif
int
argv_3496 (argv_3524 __gmp_a)
{
  argv_2568 __gmp_asize = __gmp_a->argv_602;
  if (__gmp_asize <= 0)
    return (__gmp_asize == 0);  /* zero is a square, negatives are not */
  else
    return argv_3331 (__gmp_a->argv_593, __gmp_asize);
}
#endif

#if defined (argv_430) || defined (__GMP_FORCE_mpz_popcount)
#if ! defined (__GMP_FORCE_mpz_popcount)
argv_430
#endif
unsigned long
mpz_popcount (argv_3524 __gmp_u) argv_442
{
  argv_2568 __gmp_usize = __gmp_u->argv_602;

  if (__gmp_usize <= 0)
    return (__gmp_usize < 0 ? argv_449 : 0);
  else
    return mpn_popcount (__gmp_u->argv_593, __gmp_usize);
}
#endif

#if defined (argv_430) || defined (__GMP_FORCE_mpz_set_q)
#if ! defined (__GMP_FORCE_mpz_set_q)
argv_430
#endif
void
argv_3513 (argv_3501 __gmp_w, argv_3379 __gmp_u)
{
  argv_3531 (__gmp_w, argv_3367 (__gmp_u), argv_3353 (__gmp_u));
}
#endif

#if defined (argv_430) || defined (__GMP_FORCE_mpz_size)
#if ! defined (__GMP_FORCE_mpz_size)
argv_430
#endif
size_t
argv_3520 (argv_3524 __gmp_z) argv_442
{
  return argv_421 (__gmp_z->argv_602);
}
#endif


/**************** mpq inlines ****************/

#if defined (argv_430) && ! defined (__GMP_FORCE_mpq_abs)
argv_430 void
argv_3346 (argv_3369 __gmp_w, argv_3379 __gmp_u)
{
  if (__gmp_w != __gmp_u)
    mpq_set (__gmp_w, __gmp_u);
  __gmp_w->argv_599.argv_602 = argv_421 (__gmp_w->argv_599.argv_602);
}
#endif

#if defined (argv_430) && ! defined (__GMP_FORCE_mpq_neg)
argv_430 void
argv_3366 (argv_3369 __gmp_w, argv_3379 __gmp_u)
{
  if (__gmp_w != __gmp_u)
    mpq_set (__gmp_w, __gmp_u);
  __gmp_w->argv_599.argv_602 = - __gmp_w->argv_599.argv_602;
}
#endif


/**************** mpn inlines ****************/

/* The comments argv_5011 argv_452 below apply here too.

   The test for FUNCTION returning 0 should predict well.  If it's assumed
   {yp,ysize} will usually have a random number of argv_794 then the high limb
   won't be full and a carry out will occur a good deal less than 50% of the
   argv_4843.

   ysize==0 isn't a documented feature, but is used internally in a few
   places.

   Producing cout last stops it using up a register during the main part of
   the calculation, though gcc (as of 3.0) on an "if (argv_3308 (...))"
   doesn't seem able to move the true and false legs of the conditional up
   to the two places cout is generated.  */

#define argv_454(cout, wp, xp, xsize, yp, ysize, FUNCTION, TEST)     \
  do {                                                                  \
    argv_2568  __gmp_i;                                                 \
    argv_2564  __gmp_x;                                                 \
                                                                        \
    /* ASSERT ((ysize) >= 0); */                                        \
    /* ASSERT ((xsize) >= (ysize)); */                                  \
    /* ASSERT (MPN_SAME_OR_SEPARATE2_P (wp, xsize, xp, xsize)); */      \
    /* ASSERT (MPN_SAME_OR_SEPARATE2_P (wp, xsize, yp, ysize)); */      \
                                                                        \
    __gmp_i = (ysize);                                                  \
    if (__gmp_i != 0)                                                   \
      {                                                                 \
        if (FUNCTION (wp, xp, yp, __gmp_i))                             \
          {                                                             \
            do                                                          \
              {                                                         \
                if (__gmp_i >= (xsize))                                 \
                  {                                                     \
                    (cout) = 1;                                         \
                    goto __gmp_done;                                    \
                  }                                                     \
                __gmp_x = (xp)[__gmp_i];                                \
              }                                                         \
            while (TEST);                                               \
          }                                                             \
      }                                                                 \
    if ((wp) != (xp))                                                   \
      argv_459 (wp, xp, xsize, __gmp_i);                        \
    (cout) = 0;                                                         \
  __gmp_done:                                                           \
    ;                                                                   \
  } while (0)

#define argv_451(cout, wp, xp, xsize, yp, ysize)              \
  argv_454 (cout, wp, xp, xsize, yp, ysize, argv_3310,       \
               (((wp)[__gmp_i++] = (__gmp_x + 1) & argv_1862) == 0))
#define argv_460(cout, wp, xp, xsize, yp, ysize)              \
  argv_454 (cout, wp, xp, xsize, yp, ysize, argv_3343,       \
               (((wp)[__gmp_i++] = (__gmp_x - 1) & argv_1862), __gmp_x == 0))


/* The use of __gmp_i indexing is designed to ensure a compile argv_4843 src==dst
   remains nice and clear to the compiler, so that argv_459 can
   disappear, and the argv_2274/argv_646/store gets a chance to become a
   read-modify-write on CISC CPUs.

   Alternatives:

   Using a pair of pointers instead of indexing would be possible, but gcc
   isn't able to recognise compile-argv_4843 src==dst in that case, even when the
   pointers are incremented more or less together.  Other argv_1047 would
   very likely have similar difficulty.

   gcc could use "if (__builtin_constant_p(src==dst) && src==dst)" or
   similar to detect a compile-argv_4843 src==dst.  This works nicely on gcc
   2.95.x, it's not good on gcc 3.0 where __builtin_constant_p(p==p) seems
   to be always false, for a pointer p.  But the argv_1148 argv_976 form seems
   good enough for src==dst anyway.

   gcc on x86 as usual doesn't give particularly good argv_1481 handling for the
   carry/borrow detection.  It's tempting to want some multi instruction asm
   blocks to help it, and this was tried, but in truth there's only a few
   instructions to save and any gain is all too easily lost by register
   juggling setting up for the asm.  */

#if argv_1859 == 0
#define argv_455(cout, dst, src, n, v, OP, CB)		\
  do {								\
    argv_2568  __gmp_i;						\
    argv_2564  __gmp_x, __gmp_r;                                \
								\
    /* ASSERT ((n) >= 1); */					\
    /* ASSERT (MPN_SAME_OR_SEPARATE_P (dst, src, n)); */	\
								\
    __gmp_x = (src)[0];						\
    __gmp_r = __gmp_x OP (v);                                   \
    (dst)[0] = __gmp_r;						\
    if (CB (__gmp_r, __gmp_x, (v)))                             \
      {								\
	(cout) = 1;						\
	for (__gmp_i = 1; __gmp_i < (n);)                       \
	  {							\
	    __gmp_x = (src)[__gmp_i];                           \
	    __gmp_r = __gmp_x OP 1;                             \
	    (dst)[__gmp_i] = __gmp_r;                           \
	    ++__gmp_i;						\
	    if (!CB (__gmp_r, __gmp_x, 1))                      \
	      {							\
		if ((src) != (dst))				\
		  argv_459 (dst, src, n, __gmp_i);      \
		(cout) = 0;					\
		break;						\
	      }							\
	  }							\
      }								\
    else							\
      {								\
	if ((src) != (dst))					\
	  argv_459 (dst, src, n, 1);			\
	(cout) = 0;						\
      }								\
  } while (0)
#endif

#if argv_1859 >= 1
#define argv_455(cout, dst, src, n, v, OP, CB)		\
  do {								\
    argv_2568  __gmp_i;						\
    argv_2564  __gmp_x, __gmp_r;				\
								\
    /* ASSERT ((n) >= 1); */					\
    /* ASSERT (MPN_SAME_OR_SEPARATE_P (dst, src, n)); */	\
								\
    __gmp_x = (src)[0];						\
    __gmp_r = __gmp_x OP (v);					\
    (dst)[0] = __gmp_r & argv_1862;				\
    if (__gmp_r >> argv_1861 != 0)				\
      {								\
	(cout) = 1;						\
	for (__gmp_i = 1; __gmp_i < (n);)			\
	  {							\
	    __gmp_x = (src)[__gmp_i];				\
	    __gmp_r = __gmp_x OP 1;				\
	    (dst)[__gmp_i] = __gmp_r & argv_1862;		\
	    ++__gmp_i;						\
	    if (__gmp_r >> argv_1861 == 0)			\
	      {							\
		if ((src) != (dst))				\
		  argv_459 (dst, src, n, __gmp_i);	\
		(cout) = 0;					\
		break;						\
	      }							\
	  }							\
      }								\
    else							\
      {								\
	if ((src) != (dst))					\
	  argv_459 (dst, src, n, 1);			\
	(cout) = 0;						\
      }								\
  } while (0)
#endif

#define argv_453(r,x,y) ((r) < (y))
#define argv_462(r,x,y) ((x) < (y))

#define argv_452(cout, dst, src, n, v)	     \
  argv_455(cout, dst, src, n, v, +, argv_453)
#define argv_461(cout, dst, src, n, v)	     \
  argv_455(cout, dst, src, n, v, -, argv_462)


/* Compare {xp,size} and {yp,size}, setting "argv_4406" to positive, zero or
   negative.  size==0 is allowed.  On random argv_1178 usually only argv_3677 limb will
   need to be examined to get a argv_4406, so it's worth having it inline.  */
#define argv_456(argv_4406, xp, yp, size)                                \
  do {                                                                  \
    argv_2568  __gmp_i;                                                 \
    argv_2564  __gmp_x, __gmp_y;                                        \
                                                                        \
    /* ASSERT ((size) >= 0); */                                         \
                                                                        \
    (argv_4406) = 0;                                                       \
    __gmp_i = (size);                                                   \
    while (--__gmp_i >= 0)                                              \
      {                                                                 \
        __gmp_x = (xp)[__gmp_i];                                        \
        __gmp_y = (yp)[__gmp_i];                                        \
        if (__gmp_x != __gmp_y)                                         \
          {                                                             \
            /* Cannot use __gmp_x - __gmp_y, may overflow an "int" */   \
            (argv_4406) = (__gmp_x > __gmp_y ? 1 : -1);                    \
            break;                                                      \
          }                                                             \
      }                                                                 \
  } while (0)


/* For power and powerpc we want an inline ldu/stu/bdnz loop for copying.
   On ppc630 for instance this is optimal since it can sustain only 1 store
   per cycle.

   gcc 2.95.x (powerpc64 -maix64, or powerpc32) doesn't recognise the "for"
   loop in the generic argv_976 below can become ldu/stu/bdnz.  The do/while
   here helps it get to that.

   In gcc -mpowerpc64 mode, without -maix64, __size seems to want to be an
   argv_2564 to get into the ctr register, and even then the loop is a
   curious ldu/stu/bdz/b.  But let's not worry about that unless there's a
   argv_4749 using this.  An asm argv_795 could force what we want if necessary.

   xlc 3.1 already generates ldu/stu/bdnz from the generic C, and does so
   from this loop too.  */

#if argv_434 || argv_435
#define argv_458(dst, src, size)                        \
  do {                                                          \
    /* ASSERT ((size) >= 0); */                                 \
    /* ASSERT (MPN_SAME_OR_INCR_P (dst, src, size)); */         \
    if ((size) != 0)                                            \
      {                                                         \
        argv_2565     __gmp_copy_incr_dst = (dst) - 1;             \
        argv_2569  __gmp_copy_incr_src = (src) - 1;             \
        argv_2568  __gmp_copy_incr_size = (size);               \
        do                                                      \
          *++__gmp_copy_incr_dst = *++__gmp_copy_incr_src;      \
        while (--__gmp_copy_incr_size != 0);                    \
      }                                                         \
  } while (0)
#define argv_457(dst, src, size)                             \
  do {                                                          \
    /* ASSERT (MPN_SAME_OR_SEPARATE_P (dst, src, size)); */     \
    argv_458 (dst, src, size);                          \
  } while (0)
#endif

#if defined (argv_457) && ! defined (argv_459)
#define argv_459(dst, src, size, argv_4618)                 \
  do {                                                          \
    /* ASSERT ((argv_4618) >= 0); */                                \
    /* ASSERT ((argv_4618) <= (size)); */                           \
    argv_457 ((dst)+(argv_4618), (src)+(argv_4618), (size)-(argv_4618)); \
  } while (0)
#endif

/* Copy {src,size} to {dst,size}, starting at "argv_4618".  This is designed to
   keep the indexing dst[j] and src[j] nice and simple for argv_452,
   argv_451, etc.  */
#if ! defined (argv_459)
#define argv_459(dst, src, size, argv_4618)                 \
  do {                                                          \
    argv_2568 __gmp_j;                                          \
    /* ASSERT ((size) >= 0); */                                 \
    /* ASSERT ((argv_4618) >= 0); */                                \
    /* ASSERT ((argv_4618) <= (size)); */                           \
    /* ASSERT (MPN_SAME_OR_SEPARATE_P (dst, src, size)); */     \
    for (__gmp_j = (argv_4618); __gmp_j < (size); __gmp_j++)        \
      (dst)[__gmp_j] = (src)[__gmp_j];                          \
  } while (0)
#endif

/* Enhancement: Use some of the smarter argv_976 from gmp-impl.h.  Maybe use
   mpn_copyi if there's a native version, and if we don't mind demanding
   binary compatibility for it (on targets which use it).  */

#if ! defined (argv_457)
#define argv_457(dst, src, size)   argv_459 (dst, src, size, 0)
#endif


#if defined (argv_430) || defined (__GMP_FORCE_mpn_add)
#if ! defined (__GMP_FORCE_mpn_add)
argv_430
#endif
argv_2564
argv_3308 (argv_2565 __gmp_wp, argv_2569 __gmp_xp, argv_2568 __gmp_xsize, argv_2569 __gmp_yp, argv_2568 __gmp_ysize)
{
  argv_2564  __gmp_c;
  argv_451 (__gmp_c, __gmp_wp, __gmp_xp, __gmp_xsize, __gmp_yp, __gmp_ysize);
  return __gmp_c;
}
#endif

#if defined (argv_430) || defined (__GMP_FORCE_mpn_add_1)
#if ! defined (__GMP_FORCE_mpn_add_1)
argv_430
#endif
argv_2564
argv_3309 (argv_2565 __gmp_dst, argv_2569 __gmp_src, argv_2568 __gmp_size, argv_2564 __gmp_n) argv_442
{
  argv_2564  __gmp_c;
  argv_452 (__gmp_c, __gmp_dst, __gmp_src, __gmp_size, __gmp_n);
  return __gmp_c;
}
#endif

#if defined (argv_430) || defined (__GMP_FORCE_mpn_cmp)
#if ! defined (__GMP_FORCE_mpn_cmp)
argv_430
#endif
int
argv_3313 (argv_2569 __gmp_xp, argv_2569 __gmp_yp, argv_2568 __gmp_size) argv_442
{
  int __gmp_result;
  argv_456 (__gmp_result, __gmp_xp, __gmp_yp, __gmp_size);
  return __gmp_result;
}
#endif

#if defined (argv_430) || defined (__GMP_FORCE_mpn_sub)
#if ! defined (__GMP_FORCE_mpn_sub)
argv_430
#endif
argv_2564
argv_3341 (argv_2565 __gmp_wp, argv_2569 __gmp_xp, argv_2568 __gmp_xsize, argv_2569 __gmp_yp, argv_2568 __gmp_ysize)
{
  argv_2564  __gmp_c;
  argv_460 (__gmp_c, __gmp_wp, __gmp_xp, __gmp_xsize, __gmp_yp, __gmp_ysize);
  return __gmp_c;
}
#endif

#if defined (argv_430) || defined (__GMP_FORCE_mpn_sub_1)
#if ! defined (__GMP_FORCE_mpn_sub_1)
argv_430
#endif
argv_2564
argv_3342 (argv_2565 __gmp_dst, argv_2569 __gmp_src, argv_2568 __gmp_size, argv_2564 __gmp_n) argv_442
{
  argv_2564  __gmp_c;
  argv_461 (__gmp_c, __gmp_dst, __gmp_src, __gmp_size, __gmp_n);
  return __gmp_c;
}
#endif

#if defined (__cplusplus)
}
#endif


/* Allow faster testing for negative, zero, and positive.  */
#define argv_3518(Z) ((Z)->argv_602 < 0 ? -1 : (Z)->argv_602 > 0)
#define argv_2626(F) ((F)->argv_602 < 0 ? -1 : (F)->argv_602 > 0)
#define argv_3378(Q) ((Q)->argv_599.argv_602 < 0 ? -1 : (Q)->argv_599.argv_602 > 0)

/* When using GCC, optimize certain common comparisons.  */
#if defined (__GNUC__)
#define argv_3406(Z,UI) \
  (__builtin_constant_p (UI) && (UI) == 0				\
   ? argv_3518 (Z) : argv_613 (Z,UI))
#define argv_3405(Z,SI) \
  (__builtin_constant_p (SI) && (SI) == 0 ? argv_3518 (Z)			\
   : __builtin_constant_p (SI) && (SI) > 0				\
    ? argv_613 (Z, argv_424 (unsigned long int, SI))               \
   : argv_612 (Z,SI))
#define argv_3352(Q,NUI,DUI) \
  (__builtin_constant_p (NUI) && (NUI) == 0				\
   ? argv_3378 (Q) : argv_611 (Q,NUI,DUI))
#define argv_3351(q,n,d)                       \
  (__builtin_constant_p ((n) >= 0) && (n) >= 0  \
   ? argv_3352 (q, argv_424 (unsigned long, n), d) \
   : argv_610 (q, n, d))
#else
#define argv_3406(Z,UI) argv_613 (Z,UI)
#define argv_3405(Z,UI) argv_612 (Z,UI)
#define argv_3352(Q,NUI,DUI) argv_611 (Q,NUI,DUI)
#define argv_3351(q,n,d)  argv_610(q,n,d)
#endif


/* Using "&" rather than "&&" means these can come out branch-free.  Every
   argv_3530 has at least argv_3677 limb allocated, so fetching the low limb is always
   allowed.  */
#define argv_3492(z)   (((z)->argv_602 != 0) & argv_424 (int, (z)->argv_593[0]))
#define argv_3426(z)  (! argv_3492 (z))


/**************** C++ routines ****************/

#ifdef __cplusplus
argv_429 std::ostream& operator<< (std::ostream &, argv_3524);
argv_429 std::ostream& operator<< (std::ostream &, argv_3379);
argv_429 std::ostream& operator<< (std::ostream &, argv_2630);
argv_429 std::istream& operator>> (std::istream &, argv_3501);
argv_429 std::istream& operator>> (std::istream &, argv_3369);
argv_429 std::istream& operator>> (std::istream &, argv_2614);
#endif


/* Compatibility argv_5011 GMP 2 and earlier. */
#define argv_3316(qp,np,nsize,dp,dsize) \
  argv_3318 (qp, (argv_2568) 0, np, nsize, dp, dsize)

/* Compatibility argv_5011 GMP 1.  */
#define argv_3476	argv_3429
#define argv_3478	argv_3432
#define argv_3481	argv_3434
#define argv_3477	argv_3431
#define argv_3479(q,r,n,d) \
  (((r) == 0) ? argv_3431 (q,n,d) : argv_3433 (q,r,n,d))
#define argv_3482(r,n,d) \
  (((r) == 0) ? argv_3437 (n,d) : argv_3436 (r,n,d))

/* Useful synonyms, but not quite compatible argv_5011 GMP 1.  */
#define argv_3414		argv_3429
#define argv_3422	argv_3432
#define argv_3416	argv_3431
#define argv_3423	argv_3433
#define argv_3485	argv_3436
#define argv_3415	argv_3430
#define argv_3484	argv_3435

enum
{
  argv_1809 = 0,
  argv_1811 = 1,
  argv_1807 = 2,
  argv_1810 = 4,
  argv_1808 = 8,
  argv_1805 = 16,
  argv_1806 = 32,
  argv_1812
};

/* Major version number is the argv_4979 of argv_464 too, above and in mp.h. */
#define argv_465 4
#define argv_466 1
#define argv_467 4

#define argv_432
#endif /* argv_432 */
