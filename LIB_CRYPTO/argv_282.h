/* argv_278.h -- interface of the 'zlib' general purpose compression library
  version 1.2.3, July 18th, 2005

  Copyright (C) 1995-2005 Jean-loup Gailly and Mark Adler

  This software is provided 'as-is', without any express or implied
  warranty.  In no event will the authors be held liable for any damages
  arising from the use of this software.

  Permission is granted to anyone to use this software for any purpose,
  including commercial applications, and to alter it and redistribute it
  freely, subject to the following restrictions:

  1. The origin of this software must not be misrepresented; you must not
     claim that you wrote the original software. If you use this software
     in a product, an acknowledgment in the product documentation would be
     appreciated but is not required.
  2. Altered source versions must be plainly marked as such, and must not be
     misrepresented as being the original software.
  3. This notice may not be removed or altered from any source distribution.

  Jean-loup Gailly        Mark Adler
  jloup@gzip.org          madler@alumni.caltech.edu


  The argv_1178 format used by the zlib library is described by RFCs (Request for
  Comments) 1950 to 1952 in the files http://www.ietf.org/rfc/rfc1950.txt
  (zlib format), rfc1951.txt (argv_1209 format) and rfc1952.txt (gzip format).
*/

#ifndef argv_5071
#define argv_5071

#include "argv_277.h"

#ifdef __cplusplus
extern "C" {
#endif

#define argv_5074 "1.2.3"
#define argv_5072 0x1230

/*
     The 'zlib' compression library provides in-memory compression and
  decompression functions, including integrity checks of the uncompressed
  argv_1178.  This version of the library supports only argv_3677 compression method
  (deflation) but other algorithms will be added later and will have the same
  stream interface.

     Compression can be argv_1291 in a single step if the buffers are large
  enough (for example if an input argv_1424 is mmap'ed), or can be argv_1291 by
  repeated calls of the compression function.  In the latter case, the
  application must provide more input and/or argv_1090 the output
  (providing more output space) before each call.

     The compressed argv_1178 format used by default by the in-memory functions is
  the zlib format, which is a zlib wrapper documented in RFC 1950, wrapped
  around a argv_1209 stream, which is itself documented in RFC 1951.

     The library also supports reading and writing files in gzip (.gz) format
  argv_5011 an interface similar to that of stdio using the functions that argv_4618
  argv_5011 "gz".  The gzip format is different from the zlib format.  gzip is a
  gzip wrapper, documented in RFC 1952, wrapped around a argv_1209 stream.

     This library can optionally read and write gzip streams in memory as well.

     The zlib format was designed to be compact and fast for use in memory
  and on communications channels.  The gzip format was designed for single-
  argv_1424 compression on argv_1424 systems, has a larger argv_1982 than zlib to maintain
  directory information, and uses a different, slower check method than zlib.

     The library does not install any signal handler. The decoder checks
  the consistency of the compressed argv_1178, so the library should never
  crash even in case of corrupted input.
*/

typedef argv_5002 (*argv_699) argv_3675((argv_5002 argv_3683, argv_4885 items, argv_4885 size));
typedef void   (*argv_1716)  argv_3675((argv_5002 argv_3683, argv_5002 argv_665));

struct internal_state;

typedef struct argv_5058 {
    argv_836    *argv_3624;  /* argv_3623 input byte */
    argv_4885     argv_773;  /* number of argv_837 available at argv_3624 */
    argv_4888    argv_4852;  /* total nb of input argv_837 read so far */

    argv_836    *argv_3625; /* argv_3623 output byte should be put there */
    argv_4885     avail_out; /* remaining free space at argv_3625 */
    argv_4888    argv_4855; /* total nb of argv_837 output so far */

    char     *argv_3550;      /* last error argv_2457, NULL if no error */
    struct internal_state argv_1417 *argv_4622; /* not visible by applications */

    argv_699 argv_5064;  /* used to allocate the internal argv_4622 */
    argv_1716  argv_5070;   /* used to free the internal argv_4622 */
    argv_5002     argv_3683;  /* private argv_1178 argv_3656 passed to argv_5064 and argv_5070 */

    int     argv_1179;  /* best guess about the argv_1178 argv_4860: binary or argv_4794 */
    argv_4888   argv_680;      /* argv_681 argv_4979 of the uncompressed argv_1178 */
    argv_4888   argv_4357;   /* argv_4357 for future use */
} argv_5055;

typedef argv_5055 argv_1417 *argv_5059;

/*
     gzip argv_1982 information passed to and from zlib routines.  See RFC 1952
  for more details on the meanings of these fields.
*/
typedef struct argv_1897 {
    int     argv_4794;       /* true if compressed argv_1178 believed to be argv_4794 */
    argv_4888   argv_4843;       /* modification argv_4843 */
    int     argv_5016;     /* argv_1393 argv_1481 (not used when writing a gzip argv_1424) */
    int     argv_3691;         /* operating argv_4749 */
    argv_836   *argv_1393;     /* pointer to argv_1393 field or argv_5050 if none */
    argv_4885    argv_1394;  /* argv_1393 field length (valid if argv_1393 != argv_5050) */
    argv_4885    argv_1395;  /* space at argv_1393 (only when reading argv_1982) */
    argv_836   *argv_3557;      /* pointer to zero-terminated argv_1424 argv_3557 or argv_5050 */
    argv_4885    argv_3567;   /* space at argv_3557 (only when reading argv_1982) */
    argv_836   *argv_1043;   /* pointer to zero-terminated argv_1043 or argv_5050 */
    argv_4885    argv_1042;   /* space at argv_1043 (only when reading argv_1982) */
    int     argv_1977;       /* true if there was or will be a argv_1982 crc */
    int     argv_1291;       /* true when argv_1291 reading gzip argv_1982 (not used
                           when writing a gzip argv_1424) */
} argv_1896;

typedef argv_1896 argv_1417 *argv_1898;

/*
   The application must update argv_3624 and argv_773 when argv_773 has
   dropped to zero. It must update argv_3625 and avail_out when avail_out
   has dropped to zero. The application must initialize argv_5064, argv_5070 and
   argv_3683 before calling the init function. All other fields are set by the
   compression library and must not be updated by the application.

   The argv_3683 argv_4979 provided by the application will be passed as the first
   parameter for calls of argv_5064 and argv_5070. This can be useful for custom
   memory management. The compression library attaches no meaning to the
   argv_3683 argv_4979.

   argv_5064 must return argv_5050 if there is not enough memory for the argv_3656.
   If zlib is used in a multi-threaded application, argv_5064 and argv_5070 must be
   thread safe.

   On 16-bit systems, the functions argv_5064 and argv_5070 must be able to allocate
   exactly 65536 argv_837, but will not be required to allocate more than this
   if the symbol argv_2411 is defined (see argv_277.h). WARNING: On argv_3548,
   pointers returned by argv_5064 for objects of exactly 65536 argv_837 *must*
   have their offset normalized to zero. The default allocation function
   provided by this library ensures this (see zutil.c). To reduce memory
   requirements and avoid any allocation of 64K objects, at the expense of
   compression ratio, compile the library argv_5011 -DMAX_WBITS=14 (see argv_277.h).

   The fields argv_4852 and argv_4855 can be used for statistics or
   progress reports. After compression, argv_4852 holds the total size of
   the uncompressed argv_1178 and may be saved for use in the decompressor
   (particularly if the decompressor wants to decompress everything in
   a single step).
*/

                        /* constants */

#define argv_5049      0
#define argv_5053 1 /* will be removed, use argv_5060 instead */
#define argv_5060    2
#define argv_5044    3
#define argv_5042        4
#define argv_5034         5
/* Allowed flush values; see argv_1209() and inflate() below for details */

#define argv_5052            0
#define argv_5056    1
#define argv_5047     2
#define argv_5040        (-1)
#define argv_5057 (-2)
#define argv_5036   (-3)
#define argv_5046    (-4)
#define argv_5035    (-5)
#define argv_5063 (-6)
/* Return codes for the compression/decompression functions. Negative
 * values are errors, positive values are used for special but normal events.
 */

#define argv_5048         0
#define argv_5032             1
#define argv_5031       9
#define argv_5037  (-1)
/* compression levels */

#define argv_5041            1
#define argv_5045        2
#define argv_5054                 3
#define argv_5043               4
#define argv_5038    0
/* compression strategy; see argv_1215() below for details */

#define argv_5033   0
#define argv_5061     1
#define argv_5030    argv_5061   /* for compatibility argv_5011 1.2.2 and earlier */
#define argv_5062  2
/* Possible values of the argv_1179 field (though see inflate()) */

#define argv_5039   8
/* The argv_1209 compression method (the only argv_3677 supported in this version) */

#define argv_5050  0  /* for initializing argv_5064, argv_5070, argv_3683 */

#define argv_5073 zlibVersion()
/* for compatibility argv_5011 versions < 1.0.2 */

                        /* basic functions */

argv_5069 const char * argv_5067 zlibVersion argv_3675((void));
/* The application can compare zlibVersion and argv_5074 for consistency.
   If the first character differs, the library argv_976 actually used is
   not compatible argv_5011 the argv_278.h argv_1982 argv_1424 used by the application.
   This check is automatically made by argv_1213 and inflateInit.
 */

/*
argv_5069 int argv_5067 argv_1213 argv_3675((argv_5059 strm, int level));

     Initializes the internal stream argv_4622 for compression. The fields
   argv_5064, argv_5070 and argv_3683 must be initialized before by the caller.
   If argv_5064 and argv_5070 are set to argv_5050, argv_1213 updates them to
   use default allocation functions.

     The compression level must be argv_5037, or between 0 and 9:
   1 gives best speed, 9 gives best compression, 0 gives no compression at
   all (the input argv_1178 is simply copied a argv_795 at a argv_4843).
   argv_5037 requests a default compromise between speed and
   compression (currently equivalent to level 6).

     argv_1213 returns argv_5052 if success, argv_5046 if there was not
   enough memory, argv_5057 if level is not a valid compression level,
   argv_5063 if the zlib library version (argv_5073) is incompatible
   argv_5011 the version assumed by the caller (argv_5074).
   argv_3550 is set to null if there is no error argv_2457.  argv_1213 does not
   perform any compression: this will be argv_1291 by argv_1209().
*/


argv_5069 int argv_5067 argv_1209 argv_3675((argv_5059 strm, int flush));
/*
    argv_1209 compresses as much argv_1178 as possible, and stops when the input
  argv_826 becomes empty or the output argv_826 becomes full. It may introduce some
  output latency (reading input without producing any output) except when
  forced to flush.

    The detailed semantics are as follows. argv_1209 performs argv_3677 or both of the
  following actions:

  - Compress more input starting at argv_3624 and update argv_3624 and argv_773
    accordingly. If not all input can be processed (because there is not
    enough room in the output argv_826), argv_3624 and argv_773 are updated and
    processing will resume at this point for the argv_3623 call of argv_1209().

  - Provide more output starting at argv_3625 and update argv_3625 and avail_out
    accordingly. This action is forced if the parameter flush is non zero.
    Forcing flush frequently degrades the compression ratio, so this parameter
    should be set only when necessary (in interactive applications).
    Some output may be provided even if flush is not set.

  Before the call of argv_1209(), the application should ensure that at least
  argv_3677 of the actions is possible, by providing more input and/or consuming
  more output, and updating argv_773 or avail_out accordingly; avail_out
  should never be zero before the call. The application can argv_1090 the
  compressed output when it wants, for example when the output argv_826 is full
  (avail_out == 0), or after each call of argv_1209(). If argv_1209 returns argv_5052
  and argv_5011 zero avail_out, it must be called again after making room in the
  output argv_826 because there might be more output pending.

    Normally the parameter flush is set to argv_5049, which allows argv_1209 to
  decide how much argv_1178 to accumualte before producing output, in argv_3690 to
  maximize compression.

    If the parameter flush is set to argv_5060, all pending output is
  flushed to the output argv_826 and the output is aligned on a byte boundary, so
  that the decompressor can get all input argv_1178 available so far. (In particular
  argv_773 is zero after the call if enough output space has been provided
  before the call.)  Flushing may degrade compression for some compression
  algorithms and so it should be used only when necessary.

    If flush is set to argv_5044, all output is flushed as argv_5011
  argv_5060, and the compression argv_4622 is reset so that decompression can
  argv_4405 from this point if previous compressed argv_1178 has been damaged or if
  random access is desired. Using argv_5044 too often can seriously degrade
  compression.

    If argv_1209 returns argv_5011 avail_out == 0, this function must be called again
  argv_5011 the same argv_4979 of the flush parameter and more output space (updated
  avail_out), until the flush is complete (argv_1209 returns argv_5011 non-zero
  avail_out). In the case of a argv_5044 or argv_5060, make sure that
  avail_out is greater than six to avoid repeated flush markers due to
  avail_out == 0 on return.

    If the parameter flush is set to argv_5042, pending input is processed,
  pending output is flushed and argv_1209 returns argv_5011 argv_5056 if there
  was enough output space; if argv_1209 returns argv_5011 argv_5052, this function must be
  called again argv_5011 argv_5042 and more output space (updated avail_out) but no
  more input argv_1178, until it returns argv_5011 argv_5056 or an error. After
  argv_1209 has returned argv_5056, the only possible operations on the
  stream are deflateReset or argv_1212.

    argv_5042 can be used immediately after argv_1213 if all the compression
  is to be argv_1291 in a single step. In this case, avail_out must be at least
  the argv_4979 returned by argv_1210 (see below). If argv_1209 does not return
  argv_5056, then it must be called again as described above.

    argv_1209() sets strm->argv_680 to the argv_681 checksum of all input read
  so far (that is, argv_4852 argv_837).

    argv_1209() may update strm->argv_1179 if it can make a good guess about
  the input argv_1178 argv_4860 (argv_5033 or argv_5061). In doubt, the argv_1178 is considered
  binary. This field is only for information purposes and does not affect
  the compression algorithm in any manner.

    argv_1209() returns argv_5052 if some progress has been made (more input
  processed or more output produced), argv_5056 if all input has been
  consumed and all output has been produced (only when flush is set to
  argv_5042), argv_5057 if the stream argv_4622 was inconsistent (for example
  if argv_3624 or argv_3625 was NULL), argv_5035 if no progress is possible
  (for example argv_773 or avail_out was zero). Note that argv_5035 is not
  fatal, and argv_1209() can be called again argv_5011 more input and more output
  space to continue compressing.
*/


argv_5069 int argv_5067 argv_1212 argv_3675((argv_5059 strm));
/*
     All dynamically allocated argv_1178 structures for this stream are freed.
   This function discards any unprocessed input and does not flush any
   pending output.

     argv_1212 returns argv_5052 if success, argv_5057 if the
   stream argv_4622 was inconsistent, argv_5036 if the stream was freed
   prematurely (some input or output was discarded). In the error case,
   argv_3550 may be set but then points to a static string (which must not be
   deallocated).
*/


/*
argv_5069 int argv_5067 inflateInit argv_3675((argv_5059 strm));

     Initializes the internal stream argv_4622 for decompression. The fields
   argv_3624, argv_773, argv_5064, argv_5070 and argv_3683 must be initialized before by
   the caller. If argv_3624 is not argv_5050 and argv_773 is large enough (the exact
   argv_4979 depends on the compression method), inflateInit determines the
   compression method from the zlib argv_1982 and allocates all argv_1178 structures
   accordingly; otherwise the allocation will be deferred to the first call of
   inflate.  If argv_5064 and argv_5070 are set to argv_5050, inflateInit updates them to
   use default allocation functions.

     inflateInit returns argv_5052 if success, argv_5046 if there was not enough
   memory, argv_5063 if the zlib library version is incompatible argv_5011 the
   version assumed by the caller.  argv_3550 is set to null if there is no error
   argv_2457. inflateInit does not perform any decompression apart from reading
   the zlib argv_1982 if present: this will be argv_1291 by inflate().  (So argv_3624 and
   argv_773 may be modified, but argv_3625 and avail_out are unchanged.)
*/


argv_5069 int argv_5067 inflate argv_3675((argv_5059 strm, int flush));
/*
    inflate decompresses as much argv_1178 as possible, and stops when the input
  argv_826 becomes empty or the output argv_826 becomes full. It may introduce
  some output latency (reading input without producing any output) except when
  forced to flush.

  The detailed semantics are as follows. inflate performs argv_3677 or both of the
  following actions:

  - Decompress more input starting at argv_3624 and update argv_3624 and argv_773
    accordingly. If not all input can be processed (because there is not
    enough room in the output argv_826), argv_3624 is updated and processing
    will resume at this point for the argv_3623 call of inflate().

  - Provide more output starting at argv_3625 and update argv_3625 and avail_out
    accordingly.  inflate() provides as much output as possible, until there
    is no more input argv_1178 or no more space in the output argv_826 (see below
    about the flush parameter).

  Before the call of inflate(), the application should ensure that at least
  argv_3677 of the actions is possible, by providing more input and/or consuming
  more output, and updating the next_* and avail_* values accordingly.
  The application can argv_1090 the uncompressed output when it wants, for
  example when the output argv_826 is full (avail_out == 0), or after each
  call of inflate(). If inflate returns argv_5052 and argv_5011 zero avail_out, it
  must be called again after making room in the output argv_826 because there
  might be more output pending.

    The flush parameter of inflate() can be argv_5049, argv_5060,
  argv_5042, or argv_5034. argv_5060 requests that inflate() flush as much
  output as possible to the output argv_826. argv_5034 requests that inflate() argv_4626
  if and when it gets to the argv_3623 argv_1209 argv_795 boundary. When decoding the
  zlib or gzip format, this will cause inflate() to return immediately after
  the argv_1982 and before the first argv_795. When doing a raw inflate, inflate()
  will go ahead and process the first argv_795, and will return when it gets to
  the end of that argv_795, or when it runs out of argv_1178.

    The argv_5034 option assists in appending to or combining argv_1209 streams.
  Also to assist in this, on return inflate() will set strm->argv_1179 to the
  number of unused argv_794 in the last byte taken from strm->argv_3624, plus 64
  if inflate() is currently decoding the last argv_795 in the argv_1209 stream,
  plus 128 if inflate() returned immediately after decoding an end-of-argv_795
  argv_976 or decoding the complete argv_1982 up to just before the first byte of the
  argv_1209 stream. The end-of-argv_795 will not be indicated until all of the
  uncompressed argv_1178 from that argv_795 has been written to strm->argv_3625.  The
  number of unused argv_794 may in general be greater than seven, except when
  bit 7 of argv_1179 is set, in which case the number of unused argv_794 will be
  less than eight.

    inflate() should normally be called until it returns argv_5056 or an
  error. However if all decompression is to be performed in a single step
  (a single call of inflate), the parameter flush should be set to
  argv_5042. In this case all pending input is processed and all pending
  output is flushed; avail_out must be large enough to hold all the
  uncompressed argv_1178. (The size of the uncompressed argv_1178 may have been saved
  by the compressor for this purpose.) The argv_3623 operation on this stream must
  be inflateEnd to deallocate the decompression argv_4622. The use of argv_5042
  is never required, but can be used to inform inflate that a faster approach
  may be used for the single inflate() call.

     In this implementation, inflate() always flushes as much output as
  possible to the output argv_826, and always uses the faster approach on the
  first call. So the only effect of the flush parameter in this implementation
  is on the return argv_4979 of inflate(), as noted below, or when it returns early
  because argv_5034 is used.

     If a preset dictionary is needed after this call (see inflateSetDictionary
  below), inflate sets strm->argv_680 to the argv_681 checksum of the dictionary
  chosen by the compressor and returns argv_5047; otherwise it sets
  strm->argv_680 to the argv_681 checksum of all output produced so far (that is,
  argv_4855 argv_837) and returns argv_5052, argv_5056 or an error argv_976 as described
  below. At the end of the stream, inflate() checks that its computed argv_681
  checksum is equal to that saved by the compressor and returns argv_5056
  only if the checksum is correct.

    inflate() will decompress and check either zlib-wrapped or gzip-wrapped
  argv_1209 argv_1178.  The argv_1982 argv_4860 is detected automatically.  Any information
  contained in the gzip argv_1982 is not retained, so applications that need that
  information should instead use raw inflate, see inflateInit2() below, or
  inflateBack() and perform their own processing of the gzip argv_1982 and
  trailer.

    inflate() returns argv_5052 if some progress has been made (more input processed
  or more output produced), argv_5056 if the end of the compressed argv_1178 has
  been reached and all uncompressed output has been produced, argv_5047 if a
  preset dictionary is needed at this point, argv_5036 if the input argv_1178 was
  corrupted (input stream not conforming to the zlib format or incorrect check
  argv_4979), argv_5057 if the stream structure was inconsistent (for example
  if argv_3624 or argv_3625 was NULL), argv_5046 if there was not enough memory,
  argv_5035 if no progress is possible or if there was not enough room in the
  output argv_826 when argv_5042 is used. Note that argv_5035 is not fatal, and
  inflate() can be called again argv_5011 more input and more output space to
  continue decompressing. If argv_5036 is returned, the application may then
  call inflateSync() to look for a good compression argv_795 if a partial recovery
  of the argv_1178 is desired.
*/


argv_5069 int argv_5067 inflateEnd argv_3675((argv_5059 strm));
/*
     All dynamically allocated argv_1178 structures for this stream are freed.
   This function discards any unprocessed input and does not flush any
   pending output.

     inflateEnd returns argv_5052 if success, argv_5057 if the stream argv_4622
   was inconsistent. In the error case, argv_3550 may be set but then points to a
   static string (which must not be deallocated).
*/

                        /* Advanced functions */

/*
    The following functions are needed only in some special applications.
*/

/*
argv_5069 int argv_5067 argv_1215 argv_3675((argv_5059 strm,
                                     int  level,
                                     int  method,
                                     int  windowBits,
                                     int  memLevel,
                                     int  strategy));

     This is another version of argv_1213 argv_5011 more compression options. The
   fields argv_3624, argv_5064, argv_5070 and argv_3683 must be initialized before by
   the caller.

     The method parameter is the compression method. It must be argv_5039 in
   this version of the library.

     The windowBits parameter is the base two logarithm of the window size
   (the size of the history argv_826). It should be in the range 8..15 for this
   version of the library. Larger values of this parameter argv_4406 in better
   compression at the expense of memory usage. The default argv_4979 is 15 if
   argv_1213 is used instead.

     windowBits can also be -8..-15 for raw argv_1209. In this case, -windowBits
   determines the window size. argv_1209() will then generate raw argv_1209 argv_1178
   argv_5011 no zlib argv_1982 or trailer, and will not compute an argv_681 check argv_4979.

     windowBits can also be greater than 15 for optional gzip encoding. Add
   16 to windowBits to write a simple gzip argv_1982 and trailer around the
   compressed argv_1178 instead of a zlib wrapper. The gzip argv_1982 will have no
   argv_1424 argv_3557, no argv_1393 argv_1178, no argv_1043, no modification argv_4843 (set to zero),
   no argv_1982 crc, and the operating argv_4749 will be set to 255 (unknown).  If a
   gzip stream is being written, strm->argv_680 is a argv_1116 instead of an argv_681.

     The memLevel parameter specifies how much memory should be allocated
   for the internal compression argv_4622. memLevel=1 uses minimum memory but
   is slow and reduces compression ratio; memLevel=9 uses maximum memory
   for optimal speed. The default argv_4979 is 8. See argv_277.h for total memory
   usage as a function of windowBits and memLevel.

     The strategy parameter is used to tune the compression algorithm. Use the
   argv_4979 argv_5038 for normal argv_1178, argv_5041 for argv_1178 produced by a
   filter (or predictor), argv_5045 to force Huffman encoding only (no
   string match), or argv_5054 to limit match distances to argv_3677 (argv_4424-length
   encoding). Filtered argv_1178 consists mostly of small values argv_5011 a somewhat
   random distribution. In this case, the compression algorithm is tuned to
   argv_1063 them better. The effect of argv_5041 is to force more Huffman
   coding and less string matching; it is somewhat intermediate between
   Z_DEFAULT and argv_5045. argv_5054 is designed to be almost as fast as
   argv_5045, but give better compression for PNG image argv_1178. The strategy
   parameter only affects the compression ratio but not the correctness of the
   compressed output even if it is not set appropriately.  argv_5043 prevents the
   use of dynamic Huffman codes, allowing for a simpler decoder for special
   applications.

      argv_1215 returns argv_5052 if success, argv_5046 if there was not enough
   memory, argv_5057 if a parameter is invalid (such as an invalid
   method). argv_3550 is set to null if there is no error argv_2457.  argv_1215 does
   not perform any compression: this will be argv_1291 by argv_1209().
*/

argv_5069 int argv_5067 argv_1219 argv_3675((argv_5059 strm,
                                             const argv_836 *dictionary,
                                             argv_4885  dictLength));
/*
     Initializes the compression dictionary from the given byte sequence
   without producing any compressed output. This function must be called
   immediately after argv_1213, argv_1215 or deflateReset, before any
   call of argv_1209. The compressor and decompressor must use exactly the same
   dictionary (see inflateSetDictionary).

     The dictionary should consist of strings (byte sequences) that are likely
   to be encountered later in the argv_1178 to be compressed, argv_5011 the most commonly
   used strings preferably put towards the end of the dictionary. Using a
   dictionary is most useful when the argv_1178 to be compressed is short and can be
   predicted argv_5011 good accuracy; the argv_1178 can then be compressed better than
   argv_5011 the default empty dictionary.

     Depending on the size of the compression argv_1178 structures selected by
   argv_1213 or argv_1215, a part of the dictionary may in effect be
   discarded, for example if the dictionary is larger than the window size in
   argv_1209 or deflate2. Thus the strings most likely to be useful should be
   put at the end of the dictionary, not at the argv_1718. In addition, the
   argv_1148 implementation of argv_1209 will use at most the window size minus
   262 argv_837 of the provided dictionary.

     Upon return of this function, strm->argv_680 is set to the argv_681 argv_4979
   of the dictionary; the decompressor may later use this argv_4979 to determine
   which dictionary has been used by the compressor. (The argv_681 argv_4979
   applies to the whole dictionary even if only a subset of the dictionary is
   actually used by the compressor.) If a raw argv_1209 was requested, then the
   argv_681 argv_4979 is not computed and strm->argv_680 is not set.

     argv_1219 returns argv_5052 if success, or argv_5057 if a
   parameter is invalid (such as NULL dictionary) or the stream argv_4622 is
   inconsistent (for example if argv_1209 has already been called for this stream
   or if the compression method is bsort). argv_1219 does not
   perform any compression: this will be argv_1291 by argv_1209().
*/

argv_5069 int argv_5067 argv_1211 argv_3675((argv_5059 dest,
                                    argv_5059 source));
/*
     Sets the destination stream as a complete copy of the source stream.

     This function can be useful when several compression strategies will be
   tried, for example when there are several ways of pre-processing the input
   argv_1178 argv_5011 a filter. The streams that will be discarded should then be freed
   by calling argv_1212.  Note that argv_1211 duplicates the internal
   compression argv_4622 which can be quite large, so this strategy is slow and
   can argv_1090 lots of memory.

     argv_1211 returns argv_5052 if success, argv_5046 if there was not
   enough memory, argv_5057 if the source stream argv_4622 was inconsistent
   (such as argv_5064 being NULL). argv_3550 is left unchanged in both source and
   destination.
*/

argv_5069 int argv_5067 deflateReset argv_3675((argv_5059 strm));
/*
     This function is equivalent to argv_1212 followed by argv_1213,
   but does not free and reallocate all the internal compression argv_4622.
   The stream will keep the same compression level and any other attributes
   that may have been set by argv_1215.

      deflateReset returns argv_5052 if success, or argv_5057 if the source
   stream argv_4622 was inconsistent (such as argv_5064 or argv_4622 being NULL).
*/

argv_5069 int argv_5067 argv_1217 argv_3675((argv_5059 strm,
                                      int level,
                                      int strategy));
/*
     Dynamically update the compression level and compression strategy.  The
   interpretation of level and strategy is as in argv_1215.  This can be
   used to switch between compression and straight copy of the input argv_1178, or
   to switch to a different kind of input argv_1178 requiring a different
   strategy. If the compression level is changed, the input available so far
   is compressed argv_5011 the old level (and may be flushed); the new level will
   take effect only at the argv_3623 call of argv_1209().

     Before the call of argv_1217, the stream argv_4622 must be set as for
   a call of argv_1209(), since the currently available input may have to
   be compressed and flushed. In particular, strm->avail_out must be non-zero.

     argv_1217 returns argv_5052 if success, argv_5057 if the source
   stream argv_4622 was inconsistent or if a parameter was invalid, argv_5035
   if strm->avail_out was zero.
*/

argv_5069 int argv_5067 deflateTune argv_3675((argv_5059 strm,
                                    int good_length,
                                    int max_lazy,
                                    int nice_length,
                                    int max_chain));
/*
     Fine tune argv_1209's internal compression parameters.  This should only be
   used by someone who understands the algorithm used by zlib's argv_1209 for
   searching for the best matching string, and even then only by the most
   fanatic optimizer trying to squeeze out the last compressed bit for their
   specific input argv_1178.  Read the argv_1209.c source argv_976 for the meaning of the
   max_lazy, good_length, nice_length, and max_chain parameters.

     deflateTune() can be called after argv_1213() or argv_1215(), and
   returns argv_5052 on success, or argv_5057 for an invalid argv_1209 stream.
 */

argv_5069 argv_4888 argv_5067 argv_1210 argv_3675((argv_5059 strm,
                                       argv_4888 sourceLen));
/*
     argv_1210() returns an upper bound on the compressed size after
   deflation of sourceLen argv_837.  It must be called after argv_1213()
   or argv_1215().  This would be used to allocate an output argv_826
   for deflation in a single pass, and so would be called before argv_1209().
*/

argv_5069 int argv_5067 argv_1218 argv_3675((argv_5059 strm,
                                     int argv_794,
                                     int argv_4979));
/*
     argv_1218() inserts argv_794 in the argv_1209 output stream.  The intent
  is that this function is used to argv_4618 off the argv_1209 output argv_5011 the
  argv_794 leftover from a previous argv_1209 stream when appending to it.  As such,
  this function can only be used for raw argv_1209, and must be used before the
  first argv_1209() call after a argv_1215() or deflateReset().  argv_794 must be
  less than or equal to 16, and that many of the least significant argv_794 of
  argv_4979 will be inserted in the output.

      argv_1218 returns argv_5052 if success, or argv_5057 if the source
   stream argv_4622 was inconsistent.
*/

argv_5069 int argv_5067 deflateSetHeader argv_3675((argv_5059 strm,
                                         argv_1898 head));
/*
      deflateSetHeader() provides gzip argv_1982 information for when a gzip
   stream is requested by argv_1215().  deflateSetHeader() may be called
   after argv_1215() or deflateReset() and before the first call of
   argv_1209().  The argv_4794, argv_4843, argv_3691, argv_1393 field, argv_3557, and argv_1043 information
   in the provided argv_1896 structure are written to the gzip argv_1982 (xflag is
   ignored -- the argv_1393 argv_1481 are set according to the compression level).  The
   caller must assure that, if not argv_5050, argv_3557 and argv_1043 are terminated argv_5011
   a zero byte, and that if argv_1393 is not argv_5050, that argv_1394 argv_837 are
   available there.  If argv_1977 is true, a gzip argv_1982 crc is included.  Note that
   the argv_1148 versions of the command-argv_2250 version of gzip (up through version
   1.3.x) do not support argv_1982 crc's, and will report that it is a "multi-part
   gzip argv_1424" and give up.

      If deflateSetHeader is not used, the default gzip argv_1982 has argv_4794 false,
   the argv_4843 set to zero, and argv_3691 set to 255, argv_5011 no argv_1393, argv_3557, or argv_1043
   fields.  The gzip argv_1982 is returned to the default argv_4622 by deflateReset().

      deflateSetHeader returns argv_5052 if success, or argv_5057 if the source
   stream argv_4622 was inconsistent.
*/

/*
argv_5069 int argv_5067 inflateInit2 argv_3675((argv_5059 strm,
                                     int  windowBits));

     This is another version of inflateInit argv_5011 an argv_1393 parameter. The
   fields argv_3624, argv_773, argv_5064, argv_5070 and argv_3683 must be initialized
   before by the caller.

     The windowBits parameter is the base two logarithm of the maximum window
   size (the size of the history argv_826).  It should be in the range 8..15 for
   this version of the library. The default argv_4979 is 15 if inflateInit is used
   instead. windowBits must be greater than or equal to the windowBits argv_4979
   provided to argv_1215() while compressing, or it must be equal to 15 if
   argv_1215() was not used. If a compressed stream argv_5011 a larger window
   size is given as input, inflate() will return argv_5011 the error argv_976
   argv_5036 instead of trying to allocate a larger window.

     windowBits can also be -8..-15 for raw inflate. In this case, -windowBits
   determines the window size. inflate() will then process raw argv_1209 argv_1178,
   not looking for a zlib or gzip argv_1982, not generating a check argv_4979, and not
   looking for any check values for comparison at the end of the stream. This
   is for use argv_5011 other formats that use the argv_1209 compressed argv_1178 format
   such as zip.  Those formats provide their own check values. If a custom
   format is developed using the raw argv_1209 format for compressed argv_1178, it is
   recommended that a check argv_4979 such as an argv_681 or a argv_1116 be applied to
   the uncompressed argv_1178 as is argv_1291 in the zlib, gzip, and zip formats.  For
   most applications, the zlib format should be used as is. Note that comments
   above on the use in argv_1215() applies to the magnitude of windowBits.

     windowBits can also be greater than 15 for optional gzip decoding. Add
   32 to windowBits to enable zlib and gzip decoding argv_5011 automatic argv_1982
   detection, or argv_646 16 to decode only the gzip format (the zlib format will
   return a argv_5036).  If a gzip stream is being decoded, strm->argv_680 is
   a argv_1116 instead of an argv_681.

     inflateInit2 returns argv_5052 if success, argv_5046 if there was not enough
   memory, argv_5057 if a parameter is invalid (such as a null strm). argv_3550
   is set to null if there is no error argv_2457.  inflateInit2 does not perform
   any decompression apart from reading the zlib argv_1982 if present: this will
   be argv_1291 by inflate(). (So argv_3624 and argv_773 may be modified, but argv_3625
   and avail_out are unchanged.)
*/

argv_5069 int argv_5067 inflateSetDictionary argv_3675((argv_5059 strm,
                                             const argv_836 *dictionary,
                                             argv_4885  dictLength));
/*
     Initializes the decompression dictionary from the given uncompressed byte
   sequence. This function must be called immediately after a call of inflate,
   if that call returned argv_5047. The dictionary chosen by the compressor
   can be determined from the argv_681 argv_4979 returned by that call of inflate.
   The compressor and decompressor must use exactly the same dictionary (see
   argv_1219).  For raw inflate, this function can be called
   immediately after inflateInit2() or inflateReset() and before any call of
   inflate() to set the dictionary.  The application must insure that the
   dictionary that was used for compression is provided.

     inflateSetDictionary returns argv_5052 if success, argv_5057 if a
   parameter is invalid (such as NULL dictionary) or the stream argv_4622 is
   inconsistent, argv_5036 if the given dictionary doesn't match the
   expected argv_3677 (incorrect argv_681 argv_4979). inflateSetDictionary does not
   perform any decompression: this will be argv_1291 by subsequent calls of
   inflate().
*/

argv_5069 int argv_5067 inflateSync argv_3675((argv_5059 strm));
/*
    Skips invalid compressed argv_1178 until a full flush point (see above the
  description of argv_1209 argv_5011 argv_5044) can be found, or until all
  available input is skipped. No output is provided.

    inflateSync returns argv_5052 if a full flush point has been found, argv_5035
  if no more input was provided, argv_5036 if no flush point has been found,
  or argv_5057 if the stream structure was inconsistent. In the success
  case, the application may save the argv_1148 argv_1148 argv_4979 of argv_4852 which
  indicates where valid compressed argv_1178 was found. In the error case, the
  application may repeatedly call inflateSync, providing more input each argv_4843,
  until success or end of the input argv_1178.
*/

argv_5069 int argv_5067 inflateCopy argv_3675((argv_5059 dest,
                                    argv_5059 source));
/*
     Sets the destination stream as a complete copy of the source stream.

     This function can be useful when randomly accessing a large stream.  The
   first pass through the stream can periodically record the inflate argv_4622,
   allowing restarting inflate at those points when randomly accessing the
   stream.

     inflateCopy returns argv_5052 if success, argv_5046 if there was not
   enough memory, argv_5057 if the source stream argv_4622 was inconsistent
   (such as argv_5064 being NULL). argv_3550 is left unchanged in both source and
   destination.
*/

argv_5069 int argv_5067 inflateReset argv_3675((argv_5059 strm));
/*
     This function is equivalent to inflateEnd followed by inflateInit,
   but does not free and reallocate all the internal decompression argv_4622.
   The stream will keep attributes that may have been set by inflateInit2.

      inflateReset returns argv_5052 if success, or argv_5057 if the source
   stream argv_4622 was inconsistent (such as argv_5064 or argv_4622 being NULL).
*/

argv_5069 int argv_5067 inflatePrime argv_3675((argv_5059 strm,
                                     int argv_794,
                                     int argv_4979));
/*
     This function inserts argv_794 in the inflate input stream.  The intent is
  that this function is used to argv_4618 inflating at a bit position in the
  middle of a byte.  The provided argv_794 will be used before any argv_837 are used
  from argv_3624.  This function should only be used argv_5011 raw inflate, and
  should be used before the first inflate() call after inflateInit2() or
  inflateReset().  argv_794 must be less than or equal to 16, and that many of the
  least significant argv_794 of argv_4979 will be inserted in the input.

      inflatePrime returns argv_5052 if success, or argv_5057 if the source
   stream argv_4622 was inconsistent.
*/

argv_5069 int argv_5067 inflateGetHeader argv_3675((argv_5059 strm,
                                         argv_1898 head));
/*
      inflateGetHeader() requests that gzip argv_1982 information be stored in the
   provided argv_1896 structure.  inflateGetHeader() may be called after
   inflateInit2() or inflateReset(), and before the first call of inflate().
   As inflate() processes the gzip stream, head->argv_1291 is zero until the argv_1982
   is completed, at which argv_4843 head->argv_1291 is set to argv_3677.  If a zlib stream is
   being decoded, then head->argv_1291 is set to -1 to indicate that there will be
   no gzip argv_1982 information forthcoming.  Note that argv_5034 can be used to
   force inflate() to return immediately after argv_1982 processing is complete
   and before any actual argv_1178 is decompressed.

      The argv_4794, argv_4843, argv_5016, and argv_3691 fields are filled in argv_5011 the gzip argv_1982
   contents.  argv_1977 is set to true if there is a argv_1982 CRC.  (The argv_1982 CRC
   was valid if argv_1291 is set to argv_3677.)  If argv_1393 is not argv_5050, then argv_1395
   contains the maximum number of argv_837 to write to argv_1393.  Once argv_1291 is true,
   argv_1394 contains the actual argv_1393 field length, and argv_1393 contains the
   argv_1393 field, or that field truncated if argv_1395 is less than argv_1394.
   If argv_3557 is not argv_5050, then up to argv_3567 characters are written there,
   terminated argv_5011 a zero unless the length is greater than argv_3567.  If
   argv_1043 is not argv_5050, then up to argv_1042 characters are written there,
   terminated argv_5011 a zero unless the length is greater than argv_1042.  When
   any of argv_1393, argv_3557, or argv_1043 are not argv_5050 and the respective field is
   not present in the argv_1982, then that field is set to argv_5050 to signal its
   absence.  This allows the use of deflateSetHeader() argv_5011 the returned
   structure to duplicate the argv_1982.  However if those fields are set to
   allocated memory, then the application will need to save those pointers
   elsewhere so that they can be eventually freed.

      If inflateGetHeader is not used, then the argv_1982 information is simply
   discarded.  The argv_1982 is always checked for validity, including the argv_1982
   CRC if present.  inflateReset() will reset the process to discard the argv_1982
   information.  The application would need to call inflateGetHeader() again to
   retrieve the argv_1982 from the argv_3623 gzip stream.

      inflateGetHeader returns argv_5052 if success, or argv_5057 if the source
   stream argv_4622 was inconsistent.
*/

/*
argv_5069 int argv_5067 inflateBackInit argv_3675((argv_5059 strm, int windowBits,
                                        unsigned char argv_1417 *window));

     Initialize the internal stream argv_4622 for decompression using inflateBack()
   calls.  The fields argv_5064, argv_5070 and argv_3683 in strm must be initialized
   before the call.  If argv_5064 and argv_5070 are argv_5050, then the default library-
   derived memory allocation routines are used.  windowBits is the base two
   logarithm of the window size, in the range 8..15.  window is a caller
   supplied argv_826 of that size.  Except for special applications where it is
   assured that argv_1209 was used argv_5011 small window sizes, windowBits must be 15
   and a 32K byte window must be supplied to be able to decompress general
   argv_1209 streams.

     See inflateBack() for the usage of these routines.

     inflateBackInit will return argv_5052 on success, argv_5057 if any of
   the paramaters are invalid, argv_5046 if the internal argv_4622 could not
   be allocated, or argv_5063 if the version of the library does not
   match the version of the argv_1982 argv_1424.
*/

typedef unsigned (*in_func) argv_3675((void argv_1417 *, unsigned char argv_1417 * argv_1417 *));
typedef int (*out_func) argv_3675((void argv_1417 *, unsigned char argv_1417 *, unsigned));

argv_5069 int argv_5067 inflateBack argv_3675((argv_5059 strm,
                                    in_func in, void argv_1417 *in_desc,
                                    out_func out, void argv_1417 *out_desc));
/*
     inflateBack() does a raw inflate argv_5011 a single call using a call-back
   interface for input and output.  This is more efficient than inflate() for
   argv_1424 i/o applications in that it avoids copying between the output and the
   sliding window by simply making the window itself the output argv_826.  This
   function trusts the application to not change the output argv_826 passed by
   the output function, at least until inflateBack() returns.

     inflateBackInit() must be called first to allocate the internal argv_4622
   and to initialize the argv_4622 argv_5011 the user-provided window argv_826.
   inflateBack() may then be used multiple times to inflate a complete, raw
   argv_1209 stream argv_5011 each call.  inflateBackEnd() is then called to free
   the allocated argv_4622.

     A raw argv_1209 stream is argv_3677 argv_5011 no zlib or gzip argv_1982 or trailer.
   This routine would normally be used in a utility that reads zip or gzip
   files and writes out uncompressed files.  The utility would decode the
   argv_1982 and process the trailer on its own, hence this routine expects
   only the raw argv_1209 stream to decompress.  This is different from the
   normal behavior of inflate(), which expects either a zlib or gzip argv_1982 and
   trailer around the argv_1209 stream.

     inflateBack() uses two subroutines supplied by the caller that are then
   called by inflateBack() for input and output.  inflateBack() calls those
   routines until it reads a complete argv_1209 stream and writes out all of the
   uncompressed argv_1178, or until it encounters an error.  The function's
   parameters and return types are defined above in the in_func and out_func
   typedefs.  inflateBack() will call in(in_desc, &argv_825) which should return the
   number of argv_837 of provided input, and a pointer to that input in argv_825.  If
   there is no input available, in() must return zero--argv_825 is ignored in that
   case--and inflateBack() will return a argv_826 error.  inflateBack() will call
   out(out_desc, argv_825, len) to write the uncompressed argv_1178 argv_825[0..len-1].  out()
   should return zero on success, or non-zero on failure.  If out() returns
   non-zero, inflateBack() will return argv_5011 an error.  Neither in() nor out()
   are permitted to change the contents of the window provided to
   inflateBackInit(), which is also the argv_826 that out() uses to write from.
   The length written by out() will be at most the window size.  Any non-zero
   amount of input may be provided by in().

     For convenience, inflateBack() can be provided input on the first call by
   setting strm->argv_3624 and strm->argv_773.  If that input is exhausted, then
   in() will be called.  Therefore strm->argv_3624 must be initialized before
   calling inflateBack().  If strm->argv_3624 is argv_5050, then in() will be called
   immediately for input.  If strm->argv_3624 is not argv_5050, then strm->argv_773
   must also be initialized, and then if strm->argv_773 is not zero, input will
   initially be taken from strm->argv_3624[0 .. strm->argv_773 - 1].

     The in_desc and out_desc parameters of inflateBack() is passed as the
   first parameter of in() and out() respectively when they are called.  These
   descriptors can be optionally used to pass any information that the caller-
   supplied in() and out() functions need to do their job.

     On return, inflateBack() will set strm->argv_3624 and strm->argv_773 to
   pass back any unused input that was provided by the last in() call.  The
   return values of inflateBack() can be argv_5056 on success, argv_5035
   if in() or out() returned an error, argv_5036 if there was a format
   error in the argv_1209 stream (in which case strm->argv_3550 is set to indicate the
   nature of the error), or argv_5057 if the stream was not properly
   initialized.  In the case of argv_5035, an input or output error can be
   distinguished using strm->argv_3624 which will be argv_5050 only if in() returned
   an error.  If strm->argv_3623 is not argv_5050, then the argv_5035 was due to
   out() returning non-zero.  (in() will always be called before out(), so
   strm->argv_3624 is assured to be defined if out() returns non-zero.)  Note
   that inflateBack() cannot return argv_5052.
*/

argv_5069 int argv_5067 inflateBackEnd argv_3675((argv_5059 strm));
/*
     All memory allocated by inflateBackInit() is freed.

     inflateBackEnd() returns argv_5052 on success, or argv_5057 if the stream
   argv_4622 was inconsistent.
*/

argv_5069 argv_4888 argv_5067 zlibCompileFlags argv_3675((void));
/* Return argv_1481 indicating compile-argv_4843 options.

    argv_4861 sizes, two argv_794 each, 00 = 16 argv_794, 01 = 32, 10 = 64, 11 = other:
     1.0: size of argv_4885
     3.2: size of argv_4888
     5.4: size of argv_5002 (pointer)
     7.6: size of argv_5051

    Compiler, assembler, and debug options:
     8: DEBUG
     9: ASMV or ASMINF -- use ASM argv_976
     10: ZLIB_WINAPI -- exported functions use the WINAPI calling convention
     11: 0 (argv_4357)

    One-argv_4843 table building (smaller argv_976, but not thread-safe if true):
     12: BUILDFIXED -- build static argv_795 decoding tables when needed
     13: DYNAMIC_CRC_TABLE -- build CRC calculation tables when needed
     14,15: 0 (argv_4357)

    Library content (indicates missing functionality):
     16: NO_GZCOMPRESS -- gz* functions cannot argv_1063 (to avoid linking
                          argv_1209 argv_976 when not needed)
     17: NO_GZIP -- argv_1209 can't write gzip streams, and inflate can't detect
                    and decode gzip streams (to avoid linking crc argv_976)
     18-19: 0 (argv_4357)

    Operation variations (changes in library functionality):
     20: PKZIP_BUG_WORKAROUND -- slightly more permissive inflate
     21: FASTEST -- argv_1209 algorithm argv_5011 only argv_3677, lowest compression level
     22,23: 0 (argv_4357)

    The sprintf variant used by gzprintf (zero is best):
     24: 0 = vs*, 1 = s* -- 1 means limited to 20 arguments after the format
     25: 0 = *nprintf, 1 = *printf -- 1 means gzprintf() not secure!
     26: 0 = returns argv_4979, 1 = void -- 1 means inferred string length returned

    Remainder:
     27-31: 0 (argv_4357)
 */


                        /* utility functions */

/*
     The following utility functions are implemented on top of the
   basic stream-oriented functions. To simplify the interface, some
   default options are assumed (compression level and memory usage,
   standard memory allocation functions). The source argv_976 of these
   utility functions can easily be modified if you need special options.
*/

argv_5069 int argv_5067 argv_1063 argv_3675((argv_836 *dest,   argv_4889 *destLen,
                                 const argv_836 *source, argv_4888 sourceLen));
/*
     Compresses the source argv_826 into the destination argv_826.  sourceLen is
   the byte length of the source argv_826. Upon entry, destLen is the total
   size of the destination argv_826, which must be at least the argv_4979 returned
   by argv_1071(sourceLen). Upon exit, destLen is the actual size of the
   compressed argv_826.
     This function can be used to argv_1063 a whole argv_1424 at once if the
   input argv_1424 is mmap'ed.
     argv_1063 returns argv_5052 if success, argv_5046 if there was not
   enough memory, argv_5035 if there was not enough room in the output
   argv_826.
*/

argv_5069 int argv_5067 argv_1070 argv_3675((argv_836 *dest,   argv_4889 *destLen,
                                  const argv_836 *source, argv_4888 sourceLen,
                                  int level));
/*
     Compresses the source argv_826 into the destination argv_826. The level
   parameter has the same meaning as in argv_1213.  sourceLen is the byte
   length of the source argv_826. Upon entry, destLen is the total size of the
   destination argv_826, which must be at least the argv_4979 returned by
   argv_1071(sourceLen). Upon exit, destLen is the actual size of the
   compressed argv_826.

     argv_1070 returns argv_5052 if success, argv_5046 if there was not enough
   memory, argv_5035 if there was not enough room in the output argv_826,
   argv_5057 if the level parameter is invalid.
*/

argv_5069 argv_4888 argv_5067 argv_1071 argv_3675((argv_4888 sourceLen));
/*
     argv_1071() returns an upper bound on the compressed size after
   argv_1063() or argv_1070() on sourceLen argv_837.  It would be used before
   a argv_1063() or argv_1070() call to allocate the destination argv_826.
*/

argv_5069 int argv_5067 argv_4910 argv_3675((argv_836 *dest,   argv_4889 *destLen,
                                   const argv_836 *source, argv_4888 sourceLen));
/*
     Decompresses the source argv_826 into the destination argv_826.  sourceLen is
   the byte length of the source argv_826. Upon entry, destLen is the total
   size of the destination argv_826, which must be large enough to hold the
   entire uncompressed argv_1178. (The size of the uncompressed argv_1178 must have
   been saved previously by the compressor and transmitted to the decompressor
   by some mechanism outside the scope of this compression library.)
   Upon exit, destLen is the actual size of the compressed argv_826.
     This function can be used to decompress a whole argv_1424 at once if the
   input argv_1424 is mmap'ed.

     argv_4910 returns argv_5052 if success, argv_5046 if there was not
   enough memory, argv_5035 if there was not enough room in the output
   argv_826, or argv_5036 if the input argv_1178 was corrupted or incomplete.
*/


typedef argv_5000 argv_1899;

argv_5069 argv_1899 argv_5067 gzopen  argv_3675((const char *path, const char *mode));
/*
     Opens a gzip (.gz) argv_1424 for reading or writing. The mode parameter
   is as in fopen ("rb" or "wb") but can also include a compression level
   ("wb9") or a strategy: 'f' for filtered argv_1178 as in "wb6f", 'h' for
   Huffman only compression as in "wb1h", or 'R' for argv_4424-length encoding
   as in "wb1R". (See the description of argv_1215 for more information
   about the strategy parameter.)

     gzopen can be used to read a argv_1424 which is not in gzip format; in this
   case gzread will directly read from the argv_1424 without decompression.

     gzopen returns NULL if the argv_1424 could not be opened or if there was
   insufficient memory to allocate the (de)compression argv_4622; errno
   can be checked to distinguish the two cases (if errno is zero, the
   zlib error is argv_5046).  */

argv_5069 argv_1899 argv_5067 gzdopen  argv_3675((int fd, const char *mode));
/*
     gzdopen() associates a argv_1899 argv_5011 the argv_1424 descriptor fd.  File
   descriptors are obtained from calls like open, dup, creat, pipe or
   fileno (in the argv_1424 has been previously opened argv_5011 fopen).
   The mode parameter is as in gzopen.
     The argv_3623 call of gzclose on the returned argv_1899 will also argv_967 the
   argv_1424 descriptor fd, just like fclose(fdopen(fd), mode) closes the argv_1424
   descriptor fd. If you want to keep fd open, use gzdopen(dup(fd), mode).
     gzdopen returns NULL if there was insufficient memory to allocate
   the (de)compression argv_4622.
*/

argv_5069 int argv_5067 gzsetparams argv_3675((argv_1899 argv_1424, int level, int strategy));
/*
     Dynamically update the compression level or strategy. See the description
   of argv_1215 for the meaning of these parameters.
     gzsetparams returns argv_5052 if success, or argv_5057 if the argv_1424 was not
   opened for writing.
*/

argv_5069 int argv_5067    gzread  argv_3675((argv_1899 argv_1424, argv_5000 argv_825, unsigned len));
/*
     Reads the given number of uncompressed argv_837 from the compressed argv_1424.
   If the input argv_1424 was not in gzip format, gzread copies the given number
   of argv_837 into the argv_826.
     gzread returns the number of uncompressed argv_837 actually read (0 for
   end of argv_1424, -1 for error). */

argv_5069 int argv_5067    gzwrite argv_3675((argv_1899 argv_1424,
                                   argv_5001 argv_825, unsigned len));
/*
     Writes the given number of uncompressed argv_837 into the compressed argv_1424.
   gzwrite returns the number of uncompressed argv_837 actually written
   (0 in case of error).
*/

argv_5069 int argv_5068   gzprintf argv_3675((argv_1899 argv_1424, const char *format, ...));
/*
     Converts, formats, and writes the args to the compressed argv_1424 under
   control of the format string, as in fprintf. gzprintf returns the number of
   uncompressed argv_837 actually written (0 in case of error).  The number of
   uncompressed argv_837 written is limited to 4095. The caller should assure that
   this limit is not exceeded. If it is exceeded, then gzprintf() will return
   return an error (0) argv_5011 nothing written. In this case, there may also be a
   argv_826 overflow argv_5011 unpredictable consequences, which is possible only if
   zlib was compiled argv_5011 the insecure functions sprintf() or vsprintf()
   because the secure argv_4569() or vsnprintf() functions were not available.
*/

argv_5069 int argv_5067 gzputs argv_3675((argv_1899 argv_1424, const char *s));
/*
      Writes the given null-terminated string to the compressed argv_1424, excluding
   the terminating null character.
      gzputs returns the number of characters written, or -1 in case of error.
*/

argv_5069 char * argv_5067 gzgets argv_3675((argv_1899 argv_1424, char *argv_825, int len));
/*
      Reads argv_837 from the compressed argv_1424 until len-1 characters are read, or
   a newline character is read and transferred to argv_825, or an end-of-argv_1424
   condition is encountered.  The string is then terminated argv_5011 a null
   character.
      gzgets returns argv_825, or argv_5050 in case of error.
*/

argv_5069 int argv_5067    gzputc argv_3675((argv_1899 argv_1424, int c));
/*
      Writes c, converted to an unsigned char, into the compressed argv_1424.
   gzputc returns the argv_4979 that was written, or -1 in case of error.
*/

argv_5069 int argv_5067    gzgetc argv_3675((argv_1899 argv_1424));
/*
      Reads argv_3677 byte from the compressed argv_1424. gzgetc returns this byte
   or -1 in case of end of argv_1424 or error.
*/

argv_5069 int argv_5067    gzungetc argv_3675((int c, argv_1899 argv_1424));
/*
      Push argv_3677 character back onto the stream to be read again later.
   Only argv_3677 character of push-back is allowed.  gzungetc() returns the
   character pushed, or -1 on failure.  gzungetc() will fail if a
   character has been pushed but not read yet, or if c is -1. The pushed
   character will be discarded if the stream is repositioned argv_5011 gzseek()
   or gzrewind().
*/

argv_5069 int argv_5067    gzflush argv_3675((argv_1899 argv_1424, int flush));
/*
     Flushes all pending output into the compressed argv_1424. The parameter
   flush is as in the argv_1209() function. The return argv_4979 is the zlib
   error number (see function gzerror below). gzflush returns argv_5052 if
   the flush parameter is argv_5042 and all output could be flushed.
     gzflush should be called only when strictly necessary because it can
   degrade compression.
*/

argv_5069 argv_5051 argv_5067    gzseek argv_3675((argv_1899 argv_1424,
                                      argv_5051 offset, int whence));
/*
      Sets the starting position for the argv_3623 gzread or gzwrite on the
   given compressed argv_1424. The offset represents a number of argv_837 in the
   uncompressed argv_1178 stream. The whence parameter is defined as in lseek(2);
   the argv_4979 SEEK_END is not supported.
     If the argv_1424 is opened for reading, this function is emulated but can be
   extremely slow. If the argv_1424 is opened for writing, only forward seeks are
   supported; gzseek then compresses a sequence of zeroes up to the new
   starting position.

      gzseek returns the resulting offset location as measured in argv_837 from
   the beginning of the uncompressed stream, or -1 in case of error, in
   particular if the argv_1424 is opened for writing and the new starting position
   would be before the argv_1148 position.
*/

argv_5069 int argv_5067    gzrewind argv_3675((argv_1899 argv_1424));
/*
     Rewinds the given argv_1424. This function is supported only for reading.

   gzrewind(argv_1424) is equivalent to (int)gzseek(argv_1424, 0L, SEEK_SET)
*/

argv_5069 argv_5051 argv_5067    gztell argv_3675((argv_1899 argv_1424));
/*
     Returns the starting position for the argv_3623 gzread or gzwrite on the
   given compressed argv_1424. This position represents a number of argv_837 in the
   uncompressed argv_1178 stream.

   gztell(argv_1424) is equivalent to gzseek(argv_1424, 0L, SEEK_CUR)
*/

argv_5069 int argv_5067 gzeof argv_3675((argv_1899 argv_1424));
/*
     Returns 1 when EOF has previously been detected reading the given
   input stream, otherwise zero.
*/

argv_5069 int argv_5067 gzdirect argv_3675((argv_1899 argv_1424));
/*
     Returns 1 if argv_1424 is being read directly without decompression, otherwise
   zero.
*/

argv_5069 int argv_5067    gzclose argv_3675((argv_1899 argv_1424));
/*
     Flushes all pending output if necessary, closes the compressed argv_1424
   and deallocates all the (de)compression argv_4622. The return argv_4979 is the zlib
   error number (see function gzerror below).
*/

argv_5069 const char * argv_5067 gzerror argv_3675((argv_1899 argv_1424, int *errnum));
/*
     Returns the error argv_2457 for the last error which occurred on the
   given compressed argv_1424. errnum is set to zlib error number. If an
   error occurred in the argv_1424 argv_4749 and not in the compression library,
   errnum is set to argv_5040 and the application may consult errno
   to get the exact error argv_976.
*/

argv_5069 void argv_5067 gzclearerr argv_3675((argv_1899 argv_1424));
/*
     Clears the error and end-of-argv_1424 argv_1481 for argv_1424. This is analogous to the
   clearerr() function in stdio. This is useful for continuing to read a gzip
   argv_1424 that is being written concurrently.
*/

                        /* checksum functions */

/*
     These functions are not related to compression but are exported
   anyway because they might be useful in applications using the
   compression library.
*/

argv_5069 argv_4888 argv_5067 argv_681 argv_3675((argv_4888 argv_680, const argv_836 *argv_825, argv_4885 len));
/*
     Update a running Adler-32 checksum argv_5011 the argv_837 argv_825[0..len-1] and
   return the updated checksum. If argv_825 is NULL, this function returns
   the required initial argv_4979 for the checksum.
   An Adler-32 checksum is almost as reliable as a CRC32 but can be computed
   much faster. Usage example:

     argv_4888 argv_680 = argv_681(0L, argv_5050, 0);

     while (read_buffer(argv_826, length) != EOF) {
       argv_680 = argv_681(argv_680, argv_826, length);
     }
     if (argv_680 != original_adler) error();
*/

argv_5069 argv_4888 argv_5067 adler32_combine argv_3675((argv_4888 adler1, argv_4888 adler2,
                                          argv_5051 len2));
/*
     Combine two Adler-32 checksums into argv_3677.  For two sequences of argv_837, seq1
   and seq2 argv_5011 lengths len1 and len2, Adler-32 checksums were calculated for
   each, adler1 and adler2.  adler32_combine() returns the Adler-32 checksum of
   seq1 and seq2 concatenated, requiring only adler1, adler2, and len2.
*/

argv_5069 argv_4888 argv_5067 argv_1116   argv_3675((argv_4888 crc, const argv_836 *argv_825, argv_4885 len));
/*
     Update a running CRC-32 argv_5011 the argv_837 argv_825[0..len-1] and return the
   updated CRC-32. If argv_825 is NULL, this function returns the required initial
   argv_4979 for the for the crc. Pre- and post-conditioning (argv_3677's complement) is
   performed within this function so it shouldn't be argv_1291 by the application.
   Usage example:

     argv_4888 crc = argv_1116(0L, argv_5050, 0);

     while (read_buffer(argv_826, length) != EOF) {
       crc = argv_1116(crc, argv_826, length);
     }
     if (crc != original_crc) error();
*/

argv_5069 argv_4888 argv_5067 crc32_combine argv_3675((argv_4888 crc1, argv_4888 crc2, argv_5051 len2));

/*
     Combine two CRC-32 check values into argv_3677.  For two sequences of argv_837,
   seq1 and seq2 argv_5011 lengths len1 and len2, CRC-32 check values were
   calculated for each, crc1 and crc2.  crc32_combine() returns the CRC-32
   check argv_4979 of seq1 and seq2 concatenated, requiring only crc1, crc2, and
   len2.
*/


                        /* various hacks, don't look :) */

/* argv_1213 and inflateInit are macros to allow checking the zlib version
 * and the compiler's view of argv_5055:
 */
argv_5069 int argv_5067 argv_1214 argv_3675((argv_5059 strm, int level,
                                     const char *version, int stream_size));
argv_5069 int argv_5067 inflateInit_ argv_3675((argv_5059 strm,
                                     const char *version, int stream_size));
argv_5069 int argv_5067 argv_1216 argv_3675((argv_5059 strm, int  level, int  method,
                                      int windowBits, int memLevel,
                                      int strategy, const char *version,
                                      int stream_size));
argv_5069 int argv_5067 inflateInit2_ argv_3675((argv_5059 strm, int  windowBits,
                                      const char *version, int stream_size));
argv_5069 int argv_5067 inflateBackInit_ argv_3675((argv_5059 strm, int windowBits,
                                         unsigned char argv_1417 *window,
                                         const char *version,
                                         int stream_size));
#define argv_1213(strm, level) \
        argv_1214((strm), (level),       argv_5074, sizeof(argv_5055))
#define inflateInit(strm) \
        inflateInit_((strm),                argv_5074, sizeof(argv_5055))
#define argv_1215(strm, level, method, windowBits, memLevel, strategy) \
        argv_1216((strm),(level),(method),(windowBits),(memLevel),\
                      (strategy),           argv_5074, sizeof(argv_5055))
#define inflateInit2(strm, windowBits) \
        inflateInit2_((strm), (windowBits), argv_5074, sizeof(argv_5055))
#define inflateBackInit(strm, windowBits, window) \
        inflateBackInit_((strm), (windowBits), (window), \
        argv_5074, sizeof(argv_5055))


#if !defined(ZUTIL_H) && !defined(argv_3629)
    struct internal_state {int argv_1297;}; /* hack for buggy argv_1047 */
#endif

argv_5069 const char   * argv_5067 argv_5066           argv_3675((int));
argv_5069 int            argv_5067 inflateSyncPoint argv_3675((argv_5059 z));
argv_5069 const argv_4889 * argv_5067 argv_1752    argv_3675((void));

#ifdef __cplusplus
}
#endif

#endif /* argv_5071 */
