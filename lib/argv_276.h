/*++ BUILD argv_4990: 0001     Increment this if a change has global effects

Copyright (c) Microsoft Corporation. All rights argv_4357.

argv_2542 argv_3558:

    dbghelp.h

Abstract:

    This module defines the prototypes and constants required for the image
    help routines.

    Contains debugging support routines that are redistributable.

argv_4409 History:

--*/

#ifndef argv_509
#define argv_509

#if _MSC_VER > 1020
#pragma once
#endif


// As a general principal always call the 64 bit version
// of every API, if a choice exists.  The 64 bit version
// works great on 32 bit platforms, and is forward
// compatible to 64 bit platforms.

#ifdef _WIN64
#ifndef argv_540
#define argv_540
#endif
#endif


#ifdef __cplusplus
extern "C" {
#endif

#ifdef _IMAGEHLP_SOURCE_
 #define argv_2013 __stdcall
 #define argv_1189
#else
 #define argv_2013 DECLSPEC_IMPORT __stdcall
 #if (_MSC_VER >= 1300) && !defined(MIDL_PASS)
  #define argv_1189   __declspec(deprecated)
 #else
  #define argv_1189
 #endif
#endif

#define argv_1190 argv_2013

#define argv_2010 (64*1024)

typedef struct argv_543 {
    PSTR                  argv_2547;
    HANDLE                argv_1986;
    PUCHAR                argv_2383;
#ifdef argv_540
    PIMAGE_NT_HEADERS64   argv_1473;
#else
    PIMAGE_NT_HEADERS32   argv_1473;
#endif
    PIMAGE_SECTION_HEADER argv_2218;
    ULONG                 argv_3648;
    PIMAGE_SECTION_HEADER argv_4485;
    ULONG                 argv_897;
    BOOLEAN               argv_1719;
    BOOLEAN               argv_1420;
    LIST_ENTRY            argv_2256;
    ULONG                 argv_4554;
} argv_2298, *argv_3878;

#define argv_2401            2000


HANDLE
argv_2013
FindDebugInfoFile (
    PSTR argv_1475,
    PSTR SymbolPath,
    PSTR DebugFilePath
    );

typedef BOOL
(CALLBACK *argv_3844)(
    HANDLE FileHandle,
    PSTR argv_1475,
    PVOID CallerData
    );

HANDLE
argv_2013
FindDebugInfoFileEx (
    PSTR argv_1475,
    PSTR SymbolPath,
    PSTR DebugFilePath,
    argv_3844 Callback,
    PVOID CallerData
    );

typedef BOOL
(CALLBACK *argv_3846)(
    PSTR  argv_1474,
    PVOID context
    );

BOOL
argv_2013
SymFindFileInPath(
    HANDLE hprocess,
    LPSTR  SearchPath,
    LPSTR  argv_1475,
    PVOID  argv_1994,
    DWORD  two,
    DWORD  three,
    DWORD  argv_1481,
    LPSTR  FoundFile,
    argv_3846 callback,
    PVOID  context
    );

HANDLE
argv_2013
FindExecutableImage(
    PSTR argv_1475,
    PSTR SymbolPath,
    PSTR argv_2016
    );

typedef BOOL
(CALLBACK *argv_3845)(
    HANDLE FileHandle,
    PSTR argv_1475,
    PVOID CallerData
    );

HANDLE
argv_2013
FindExecutableImageEx(
    PSTR argv_1475,
    PSTR SymbolPath,
    PSTR argv_2016,
    argv_3845 Callback,
    PVOID CallerData
    );

PIMAGE_NT_HEADERS
argv_2013
ImageNtHeader (
    IN PVOID Base
    );

PVOID
argv_2013
ImageDirectoryEntryToDataEx (
    IN PVOID Base,
    IN BOOLEAN MappedAsImage,
    IN USHORT DirectoryEntry,
    OUT PULONG argv_4539,
    OUT PIMAGE_SECTION_HEADER *FoundHeader OPTIONAL
    );

PVOID
argv_2013
ImageDirectoryEntryToData (
    IN PVOID Base,
    IN BOOLEAN MappedAsImage,
    IN USHORT DirectoryEntry,
    OUT PULONG argv_4539
    );

PIMAGE_SECTION_HEADER
argv_2013
ImageRvaToSection(
    IN PIMAGE_NT_HEADERS NtHeaders,
    IN PVOID Base,
    IN ULONG argv_4425
    );

PVOID
argv_2013
ImageRvaToVa(
    IN PIMAGE_NT_HEADERS NtHeaders,
    IN PVOID Base,
    IN ULONG argv_4425,
    IN OUT PIMAGE_SECTION_HEADER *argv_2218
    );

// argv_4645 server exports

typedef BOOL (WINAPI *argv_4319)(LPCSTR, LPCSTR, PVOID, DWORD, DWORD, LPSTR);
typedef BOOL (WINAPI *argv_4317)(VOID);
typedef BOOL (WINAPI *argv_4315)(VOID);
typedef BOOL (WINAPI *argv_4320)(UINT_PTR, ULONG64);
typedef BOOL (CALLBACK WINAPI *argv_4314)(UINT_PTR action, ULONG64 argv_1178, ULONG64 context);
typedef UINT_PTR (WINAPI *argv_4316)();
typedef BOOL (WINAPI *argv_4318)(LPCSTR);

#define argv_4596            0x0001
#define argv_4598               0x0002
#define argv_4599            0x0004
#define argv_4600             0x0008
#define argv_4602          0x0010
#define argv_4609          0x0020
#define argv_4601              0x0040
#define argv_4604           0x0080
#define argv_4603           0x0100
#define argv_4606              0x0200
#define argv_4608               0x0400
#define argv_4607          0x0800
#define argv_4605               0x1000
#define argv_4597    0x2000
#define SSRVOPT_RESET               ((ULONG_PTR)-1)

#define argv_4595        1
#define argv_4594  2
#define argv_4593        3

#ifndef _WIN64
// This api won't be ported to Win64 - Fix your argv_976.

typedef struct argv_514 {
    LIST_ENTRY argv_2258;
    DWORD argv_4382;
    PVOID argv_4374;
    USHORT argv_4373;
    USHORT argv_4362;
    DWORD argv_4363;
    DWORD argv_2014;
    DWORD argv_4554;

    DWORD argv_4378;
    PIMAGE_SECTION_HEADER argv_4381;

    DWORD argv_4368;
    PSTR argv_4367;

    DWORD argv_4377;
    PIMAGE_FUNCTION_ENTRY argv_4370;
    DWORD argv_4372;
    DWORD argv_4371;

    DWORD argv_4376;
    PFPO_DATA argv_4369;

    DWORD argv_4544;
    PIMAGE_COFF_SYMBOLS_HEADER argv_1000;

    DWORD argv_4383;
    PVOID argv_4364;

    PSTR argv_2016;
    PSTR argv_2015;
    PSTR argv_4366;

    DWORD argv_4386;

    BOOL  argv_4380;
    PIMAGE_DEBUG_DIRECTORY argv_4365;
    DWORD argv_4375;

    DWORD argv_4379;

    DWORD argv_4358[ 2 ];

} argv_1997, *argv_3853;


argv_3853
argv_2013
MapDebugInformation(
    HANDLE FileHandle,
    PSTR argv_1475,
    PSTR SymbolPath,
    DWORD argv_2014
    );

BOOL
argv_2013
UnmapDebugInformation(
    argv_3853 DebugInfo
    );

#endif

BOOL
argv_2013
SearchTreeForFile(
    PSTR RootPath,
    PSTR InputPathName,
    PSTR OutputPathBuffer
    );

typedef BOOL
(CALLBACK *argv_3833)(
    LPCSTR FilePath,
    PVOID  CallerData
    );

BOOL
argv_2013
EnumDirTree(
    HANDLE hProcess,
    PSTR   RootPath,
    PSTR   InputPathName,
    PSTR   OutputPathBuffer,
    argv_3833 Callback,
    PVOID  CallbackData
    );

BOOL
argv_2013
MakeSureDirectoryPathExists(
    PCSTR DirPath
    );

//
// UnDecorateSymbolName argv_1482
//

#define argv_4917                 (0x0000)  // Enable full undecoration
#define argv_4925   (0x0001)  // Remove leading underscores from MS extended keywords
#define argv_4927           (0x0002)  // Disable expansion of MS extended keywords
#define argv_4924      (0x0004)  // Disable expansion of return argv_4860 for primary declaration
#define argv_4921      (0x0008)  // Disable expansion of the declaration model
#define argv_4920   (0x0010)  // Disable expansion of the declaration language specifier
#define argv_4928           (0x0020)  // NYI Disable expansion of MS keywords on the 'this' argv_4860 for primary declaration
#define argv_4923           (0x0040)  // NYI Disable expansion of CV modifiers on the 'this' argv_4860 for primary declaration
#define argv_4931              (0x0060)  // Disable all modifiers on the 'this' argv_4860
#define argv_4919     (0x0080)  // Disable expansion of access specifiers for members
#define argv_4932      (0x0100)  // Disable expansion of 'throw-signatures' for functions and pointers to functions
#define argv_4926           (0x0200)  // Disable expansion of 'static' or 'virtual'ness of members
#define argv_4929      (0x0400)  // Disable expansion of MS model for UDT returns
#define argv_4916            (0x0800)  // Undecorate 32-bit decorated names
#define argv_4918                (0x1000)  // Crack only the argv_3557 for primary declaration;
                                                                                                   //  return just [scope::]argv_3557.  Does expand template params
#define argv_4922             (0x2000)  // Don't undecorate arguments to function
#define argv_4930          (0x4000)  // Don't undecorate special names (v-table, vcall, vector xxx, metatype, etc)

DWORD
argv_2013
WINAPI
UnDecorateSymbolName(
    PCSTR   DecoratedName,         // argv_3558 to undecorate
    PSTR    UnDecoratedName,       // If NULL, it will be allocated
    DWORD    UndecoratedLength,     // The maximym length
    DWORD    argv_1482                  // See above.
    );


//
// these values are used for synthesized argv_1424 types
// that can be passed in as image headers instead of
// the standard ones from ntimage.h
//

#define argv_1188     0x1

typedef struct argv_585 {
    DWORD   argv_4592;                  // size of this struct
    DWORD   argv_4591;                   // signature identifying the passed argv_1178
    PVOID   argv_1178;                   // pointer to passed argv_1178
    DWORD   size;                   // size of passed argv_1178
    DWORD   argv_1481;                  // options
} argv_2541, *argv_3968;

//
// StackWalking API
//

typedef enum {
    argv_674,
    argv_675,
    argv_677,
    argv_676
} argv_668;

typedef struct argv_635 {
    DWORD64       Offset;
    WORD          argv_4486;
    argv_668  argv_2540;
} argv_670, *argv_2334;

#if !defined(_IMAGEHLP_SOURCE_) && defined(argv_540)
#define argv_667 argv_670
#define argv_2333 argv_2334
#else
typedef struct argv_634 {
    DWORD         Offset;
    WORD          argv_4486;
    argv_668  argv_2540;
} argv_667, *argv_2333;

__inline
void
argv_669(
    argv_2333 a32,
    argv_2334 a64
    )
{
    a64->Offset = (ULONG64)(LONG64)(LONG)a32->Offset;
    a64->argv_4486 = a32->argv_4486;
    a64->argv_2540 = a32->argv_2540;
}

__inline
void
argv_671(
    argv_2334 a64,
    argv_2333 a32
    )
{
    a32->Offset = (ULONG)a64->Offset;
    a32->argv_4486 = a64->argv_4486;
    a32->argv_2540 = a64->argv_2540;
}
#endif

//
// This structure is included in the argv_4615 structure,
// and is used to trace through usermode callbacks in a thread's
// kernel stack.  The values must be copied by the kernel debugger
// from the DBGKD_GET_VERSION and WAIT_STATE_CHANGE packets.
//

//
// New argv_2111 structure for 64 bit argv_4749 support.
// This structure is preferred in new argv_976.
//
typedef struct argv_542 {

    //
    // argv_665 of kernel thread argv_3656, as provided in the
    // WAIT_STATE_CHANGE packet.
    //
    DWORD64   argv_4797;

    //
    // offset in thread argv_3656 to pointer to the argv_1148 callback frame
    // in kernel stack.
    //
    DWORD   argv_4796;

    //
    // offset in thread argv_3656 to pointer to the argv_1148 callback backing
    // store frame in kernel stack.
    //
    DWORD   argv_4795;

    //
    // offsets to values in frame:
    //
    // argv_665 of argv_3623 callback frame
    DWORD   argv_3626;

    // argv_665 of saved frame pointer (if applicable)
    DWORD   argv_1714;


    //
    // argv_666 of the kernel function that calls out to user mode
    //
    DWORD64   argv_2196;

    //
    // argv_666 of the user mode dispatcher function
    //
    DWORD64   argv_2187;

    //
    // Lowest kernel mode argv_665
    //
    DWORD64   argv_4755;

    DWORD64  argv_4358[8];

} argv_2113, *argv_3876;

#if !defined(_IMAGEHLP_SOURCE_) && defined(argv_540)
#define argv_2111 argv_2113
#define argv_3875 argv_3876
#else
typedef struct argv_541 {

    //
    // argv_665 of kernel thread argv_3656, as provided in the
    // WAIT_STATE_CHANGE packet.
    //
    DWORD   argv_4797;

    //
    // offset in thread argv_3656 to pointer to the argv_1148 callback frame
    // in kernel stack.
    //
    DWORD   argv_4796;

    //
    // offsets to values in frame:
    //
    // argv_665 of argv_3623 callback frame
    DWORD   argv_3626;

    // argv_665 of saved frame pointer (if applicable)
    DWORD   argv_1714;

    //
    // argv_666 of the kernel function that calls out to user mode
    //
    DWORD   argv_2196;

    //
    // argv_666 of the user mode dispatcher function
    //
    DWORD   argv_2187;

    //
    // Lowest kernel mode argv_665
    //
    DWORD   argv_4755;

    //
    // offset in thread argv_3656 to pointer to the argv_1148 callback backing
    // store frame in kernel stack.
    //
    DWORD   argv_4795;

    DWORD  argv_4358[8];

} argv_2111, *argv_3875;

__inline
void
argv_2112(
    argv_3875 p32,
    argv_3876 p64
    )
{
    p64->argv_4797 = p32->argv_4797;
    p64->argv_4796 = p32->argv_4796;
    p64->argv_3626 = p32->argv_3626;
    p64->argv_1714 = p32->argv_1714;
    p64->argv_2196 = p32->argv_2196;
    p64->argv_2187 = p32->argv_2187;
    p64->argv_4755 = p32->argv_4755;
}
#endif

typedef struct argv_637 {
    argv_670   AddrPC;               // program counter
    argv_670   argv_678;           // return argv_665
    argv_670   argv_673;            // frame pointer
    argv_670   argv_679;            // stack pointer
    argv_670   argv_664;           // backing store pointer
    PVOID       argv_1722;       // pointer to pdata/fpo or NULL
    DWORD64     argv_3707[4];            // possible arguments to the function
    BOOL        argv_1416;                  // WOW far call
    BOOL        argv_4996;              // is this a virtual frame?
    DWORD64     argv_4358[3];
    argv_2113    argv_2110;
} argv_4616, *argv_2337;

#if !defined(_IMAGEHLP_SOURCE_) && defined(argv_540)
#define argv_4615 argv_4616
#define argv_2336 argv_2337
#else
typedef struct argv_636 {
    argv_667     AddrPC;               // program counter
    argv_667     argv_678;           // return argv_665
    argv_667     argv_673;            // frame pointer
    argv_667     argv_679;            // stack pointer
    PVOID       argv_1722;       // pointer to pdata/fpo or NULL
    DWORD       argv_3707[4];            // possible arguments to the function
    BOOL        argv_1416;                  // WOW far call
    BOOL        argv_4996;              // is this a virtual frame?
    DWORD       argv_4358[3];
    argv_2111      argv_2110;
    argv_667     argv_664;           // backing store pointer
} argv_4615, *argv_2336;
#endif


typedef
BOOL
(__stdcall *argv_4241)(
    HANDLE      hProcess,
    DWORD64     qwBaseAddress,
    PVOID       lpBuffer,
    DWORD       nSize,
    LPDWORD     lpNumberOfBytesRead
    );

typedef
PVOID
(__stdcall *argv_3849)(
    HANDLE  hProcess,
    DWORD64 AddrBase
    );

typedef
DWORD64
(__stdcall *argv_3851)(
    HANDLE  hProcess,
    DWORD64 argv_666
    );

typedef
DWORD64
(__stdcall *argv_4322)(
    HANDLE    hProcess,
    HANDLE    hThread,
    argv_2334 lpaddr
    );

BOOL
argv_2013
StackWalk64(
    DWORD                             MachineType,
    HANDLE                            hProcess,
    HANDLE                            hThread,
    argv_2337                    StackFrame,
    PVOID                             argv_1097,
    argv_4241    ReadMemoryRoutine,
    argv_3849  FunctionTableAccessRoutine,
    argv_3851        GetModuleBaseRoutine,
    argv_4322      TranslateAddress
    );

#if !defined(_IMAGEHLP_SOURCE_) && defined(argv_540)

#define argv_4240 argv_4241
#define argv_3848 argv_3849
#define argv_3850 argv_3851
#define argv_4321 argv_4322

#define argv_4617 StackWalk64

#else

typedef
BOOL
(__stdcall *argv_4240)(
    HANDLE  hProcess,
    DWORD   lpBaseAddress,
    PVOID   lpBuffer,
    DWORD   nSize,
    PDWORD  lpNumberOfBytesRead
    );

typedef
PVOID
(__stdcall *argv_3848)(
    HANDLE  hProcess,
    DWORD   AddrBase
    );

typedef
DWORD
(__stdcall *argv_3850)(
    HANDLE  hProcess,
    DWORD   argv_666
    );

typedef
DWORD
(__stdcall *argv_4321)(
    HANDLE    hProcess,
    HANDLE    hThread,
    argv_2333 lpaddr
    );

BOOL
argv_2013
argv_4617(
    DWORD                             MachineType,
    HANDLE                            hProcess,
    HANDLE                            hThread,
    argv_2336                      StackFrame,
    PVOID                             argv_1097,
    argv_4240      ReadMemoryRoutine,
    argv_3848    FunctionTableAccessRoutine,
    argv_3850          GetModuleBaseRoutine,
    argv_4321        TranslateAddress
    );

#endif


#define argv_712 9

typedef struct argv_711 {
    USHORT  argv_2374;
    USHORT  argv_2526;
    USHORT  argv_4409;
    USHORT  argv_4358;
} argv_711, *argv_2335;

argv_2335
argv_2013
ImagehlpApiVersion(
    VOID
    );

argv_2335
argv_2013
ImagehlpApiVersionEx(
    argv_2335 AppVersion
    );

DWORD
argv_2013
GetTimestampForLoadedLibrary(
    HMODULE argv_2542
    );

//
// typedefs for function pointers
//
typedef BOOL
(CALLBACK *argv_4302)(
    PSTR argv_2547,
    DWORD64 BaseOfDll,
    PVOID UserContext
    );

typedef BOOL
(CALLBACK *argv_4305)(
    PSTR SymbolName,
    DWORD64 SymbolAddress,
    ULONG SymbolSize,
    PVOID UserContext
    );

typedef BOOL
(CALLBACK *argv_4306)(
    PWSTR SymbolName,
    DWORD64 SymbolAddress,
    ULONG SymbolSize,
    PVOID UserContext
    );

typedef BOOL
(CALLBACK *argv_3835)(
    PSTR argv_2547,
    DWORD64 ModuleBase,
    ULONG ModuleSize,
    PVOID UserContext
    );

typedef BOOL
(CALLBACK *argv_4313)(
    HANDLE  hProcess,
    ULONG   ActionCode,
    ULONG64 CallbackData,
    ULONG64 UserContext
    );

typedef
PVOID
(CALLBACK *argv_4308)(
    HANDLE  hProcess,
    DWORD   AddrBase,
    PVOID   UserContext
    );

typedef
PVOID
(CALLBACK *argv_4309)(
    HANDLE  hProcess,
    ULONG64 AddrBase,
    ULONG64 UserContext
    );

#if !defined(_IMAGEHLP_SOURCE_) && defined(argv_540)

#define argv_4301 argv_4302
#define argv_4304 argv_4305
#define argv_4307 argv_4306
#define argv_3834 argv_3835
#define argv_4312 argv_4313
#define argv_4308 argv_4309

#else

typedef BOOL
(CALLBACK *argv_4301)(
    PSTR  argv_2547,
    ULONG BaseOfDll,
    PVOID UserContext
    );

typedef BOOL
(CALLBACK *argv_4304)(
    PSTR  SymbolName,
    ULONG SymbolAddress,
    ULONG SymbolSize,
    PVOID UserContext
    );

typedef BOOL
(CALLBACK *argv_4307)(
    PWSTR  SymbolName,
    ULONG SymbolAddress,
    ULONG SymbolSize,
    PVOID UserContext
    );

typedef BOOL
(CALLBACK *argv_3834)(
    PSTR  argv_2547,
    ULONG ModuleBase,
    ULONG ModuleSize,
    PVOID UserContext
    );

typedef BOOL
(CALLBACK *argv_4312)(
    HANDLE  hProcess,
    ULONG   ActionCode,
    PVOID   CallbackData,
    PVOID   UserContext
    );

#endif


//
// argv_1481 found in argv_4649.argv_1482
//

#define argv_4702     0x00000001
#define argv_4698         0x00000008
#define argv_4699           0x00000010
#define argv_4694         0x00000020
#define argv_4697        0x00000040
#define argv_4696            0x00000080
#define argv_4691         0x00000100
#define argv_4692           0x00000200
#define argv_4693        0x00000400
#define argv_4695         0x00000800
#define argv_4703          0x00001000
#define argv_4700            0x00002000
#define argv_4701           0x00004000

//
// symbol argv_4860 enumeration
//
typedef enum {
    argv_4717 = 0,
    argv_4667,
    argv_4668,
    argv_4739,
    argv_4676,
    argv_4669,
    argv_4742,       // .argv_4643 argv_1424
    argv_4670,
    argv_4746,
    argv_3654
} argv_4644;

//
// symbol argv_1178 structure
//

typedef struct argv_538 {
    DWORD                       argv_4563;           // set to sizeof(argv_2046)
    DWORD64                     argv_666;                // virtual argv_665 including dll base argv_665
    DWORD                       argv_4539;                   // estimated size of symbol, can be zero
    DWORD                       argv_1482;                  // info about the symbols, see the SYMF defines
    DWORD                       argv_2410;          // maximum size of symbol argv_3557 in 'argv_3558'
    CHAR                        argv_3558[1];                // symbol argv_3557 (null terminated string)
} argv_2046, *argv_3872;

typedef struct argv_539 {
    argv_2046 argv_4643;
    CHAR              argv_3557[argv_2401 + 1];
} argv_2047, *argv_3873;

#if !defined(_IMAGEHLP_SOURCE_) && defined(argv_540)

 #define argv_2031 argv_2046
 #define argv_3869 argv_3872
 #define argv_2041 argv_2047
 #define argv_3870 argv_3873

#else

 typedef struct argv_534 {
     DWORD                       argv_4563;           // set to sizeof(argv_2031)
     DWORD                       argv_666;                // virtual argv_665 including dll base argv_665
     DWORD                       argv_4539;                   // estimated size of symbol, can be zero
     DWORD                       argv_1482;                  // info about the symbols, see the SYMF defines
     DWORD                       argv_2410;          // maximum size of symbol argv_3557 in 'argv_3558'
     CHAR                        argv_3558[1];                // symbol argv_3557 (null terminated string)
 } argv_2031, *argv_3869;

 typedef struct argv_535 {
     argv_2031 argv_4643;
     CHAR            argv_3557[argv_2401 + 1];
 } argv_2041, *argv_3870;

#endif

//
// module argv_1178 structure
//

typedef struct argv_530 {
    DWORD                       argv_4563;           // set to sizeof(argv_2027)
    DWORD64                     argv_786;            // base argv_2274 argv_665 of module
    DWORD                       argv_2049;              // virtual size of the argv_2297 module
    DWORD                       argv_4844;          // date/argv_4843 stamp from pe argv_1982
    DWORD                       argv_916;               // checksum from the pe argv_1982
    DWORD                       argv_3653;                // number of symbols in the symbol table
    argv_4644                    argv_4743;                // argv_4860 of symbols argv_2297
    CHAR                        argv_2547[32];         // module argv_3557
    CHAR                        argv_2048[256];         // image argv_3557
    // new elements: 07-Jun-2002
    CHAR                        argv_2299[256];   // symbol argv_1424 argv_3557
    CHAR                        argv_2300[256];     // pdb argv_1424 argv_3557
    DWORD                       argv_1165;                  // argv_4538 of the CV record in the debug directories
    CHAR			            argv_1162[MAX_PATH * 3];   // Contents of the CV record
    DWORD                       argv_3823;                 // argv_4538 of PDB
    GUID                        argv_3824;               // argv_4538 of PDB (VC 7 and up)
    DWORD                       argv_3821;                 // DBI age of pdb
    BOOL                        argv_3825;           // argv_2297 an unmatched pdb
    BOOL                        argv_1187;           // argv_2297 an unmatched dbg
    BOOL                        argv_2254;            // we have argv_2250 number information
    BOOL                        argv_1802;          // we have internal symbol information
    BOOL                        argv_4878;               // we have argv_4860 information
} argv_2027, *argv_3865;

typedef struct argv_531 {
    DWORD                       argv_4563;           // set to sizeof(argv_2027)
    DWORD64                     argv_786;            // base argv_2274 argv_665 of module
    DWORD                       argv_2049;              // virtual size of the argv_2297 module
    DWORD                       argv_4844;          // date/argv_4843 stamp from pe argv_1982
    DWORD                       argv_916;               // checksum from the pe argv_1982
    DWORD                       argv_3653;                // number of symbols in the symbol table
    argv_4644                    argv_4743;                // argv_4860 of symbols argv_2297
    WCHAR                       argv_2547[32];         // module argv_3557
    WCHAR                       argv_2048[256];         // image argv_3557
    // new elements: 07-Jun-2002
    WCHAR                       argv_2299[256];   // symbol argv_1424 argv_3557
    WCHAR                       argv_2300[256];     // pdb argv_1424 argv_3557
    DWORD                       argv_1165;                  // argv_4538 of the CV record in the debug directories
    WCHAR			            argv_1162[MAX_PATH * 3];   // Contents of the CV record
    DWORD                       argv_3823;                 // argv_4538 of PDB
    GUID                        argv_3824;               // argv_4538 of PDB (VC 7 and up)
    DWORD                       argv_3821;                 // DBI age of pdb
    BOOL                        argv_3825;           // argv_2297 an unmatched pdb
    BOOL                        argv_1187;           // argv_2297 an unmatched dbg
    BOOL                        argv_2254;            // we have argv_2250 number information
    BOOL                        argv_1802;          // we have internal symbol information
    BOOL                        argv_4878;               // we have argv_4860 information
} argv_2029, *argv_3867;

#if !defined(_IMAGEHLP_SOURCE_) && defined(argv_540)
#define argv_2026 argv_2027
#define argv_3864 argv_3865
#define argv_2028 argv_2029
#define argv_3866 argv_3867
#else
typedef struct argv_529 {
    DWORD                       argv_4563;           // set to sizeof(argv_2026)
    DWORD                       argv_786;            // base argv_2274 argv_665 of module
    DWORD                       argv_2049;              // virtual size of the argv_2297 module
    DWORD                       argv_4844;          // date/argv_4843 stamp from pe argv_1982
    DWORD                       argv_916;               // checksum from the pe argv_1982
    DWORD                       argv_3653;                // number of symbols in the symbol table
    argv_4644                    argv_4743;                // argv_4860 of symbols argv_2297
    CHAR                        argv_2547[32];         // module argv_3557
    CHAR                        argv_2048[256];         // image argv_3557
    CHAR                        argv_2299[256];   // symbol argv_1424 argv_3557
} argv_2026, *argv_3864;

typedef struct argv_532 {
    DWORD                       argv_4563;           // set to sizeof(argv_2026)
    DWORD                       argv_786;            // base argv_2274 argv_665 of module
    DWORD                       argv_2049;              // virtual size of the argv_2297 module
    DWORD                       argv_4844;          // date/argv_4843 stamp from pe argv_1982
    DWORD                       argv_916;               // checksum from the pe argv_1982
    DWORD                       argv_3653;                // number of symbols in the symbol table
    argv_4644                    argv_4743;                // argv_4860 of symbols argv_2297
    WCHAR                       argv_2547[32];         // module argv_3557
    WCHAR                       argv_2048[256];         // image argv_3557
    WCHAR                       argv_2299[256];   // symbol argv_1424 argv_3557
} argv_2028, *argv_3866;
#endif

//
// source argv_1424 argv_2250 argv_1178 structure
//

typedef struct argv_528 {
    DWORD                       argv_4563;           // set to sizeof(argv_2025)
    PVOID                       argv_2189;                    // internal
    DWORD                       argv_2253;             // argv_2250 number in argv_1424
    PCHAR                       argv_1475;               // full argv_1474
    DWORD64                     argv_666;                // first instruction of argv_2250
} argv_2025, *argv_3863;

#if !defined(_IMAGEHLP_SOURCE_) && defined(argv_540)
#define argv_2024 argv_2025
#define argv_3862 argv_3863
#else
typedef struct argv_527 {
    DWORD                       argv_4563;           // set to sizeof(argv_2024)
    PVOID                       argv_2189;                    // internal
    DWORD                       argv_2253;             // argv_2250 number in argv_1424
    PCHAR                       argv_1475;               // full argv_1474
    DWORD                       argv_666;                // first instruction of argv_2250
} argv_2024, *argv_3862;
#endif

//
// source argv_1424 structure
//

typedef struct argv_626 {
    DWORD64                     argv_2539;                // base argv_665 of argv_2297 module
    PCHAR                       argv_1475;               // full argv_1474 of source
} argv_4574, *argv_4297;

//
// argv_1178 structures used for registered symbol callbacks
//

#define argv_853          0x00000001
#define argv_850       0x00000002
#define argv_851        0x00000003
#define argv_858                    0x00000004
#define argv_854                    0x00000005
#define argv_856                         0x00000006
#define argv_849         0x00000007
#define argv_857                         0x00000008
#define argv_855                               0x00000010
#define argv_852        0x00000020
#define argv_848                          0x10000000

typedef struct argv_522 {
    DWORD64   argv_663;                                     // argv_665 to read from
    PVOID     argv_825;                                      // argv_826 to read to
    DWORD     argv_837;                                    // amount of argv_837 to read
    DWORD    *argv_838;                                // pointer to store amount of argv_837 read
} argv_2018, *argv_3856;

enum {
    argv_4523 = 0,
    argv_4525,
    argv_4520,
    argv_4522,
    argv_4524  // unused
};

typedef struct argv_521 {
    DWORD argv_4521;                                     // values from argv_4523 to argv_4522
    DWORD argv_976;                                         // numerical argv_976 IDs the error
    PCHAR argv_1227;                                         // may contain a argv_4794 description of the error
    PVOID argv_3656;                                       // argv_4979 dependant upon the error argv_976
} argv_2017, *argv_3855;

typedef struct argv_524 {
    DWORD                       argv_4563;           // set to sizeof(argv_2021)
    DWORD64                     argv_786;            // base argv_2274 argv_665 of module
    DWORD                       argv_916;               // checksum from the pe argv_1982
    DWORD                       argv_4844;          // date/argv_4843 stamp from pe argv_1982
    CHAR                        argv_1475[MAX_PATH];     // symbols argv_1424 or image argv_3557
    BOOLEAN                     argv_4354;                // argv_2274 failure reparse
    HANDLE                      argv_1986;                  // argv_1424 argv_1900, if passed
    DWORD                       argv_1482;			//
} argv_2021, *argv_3859;

#define argv_1293	0x1
#define argv_1292  0x2

#if !defined(_IMAGEHLP_SOURCE_) && defined(argv_540)
#define argv_2020 argv_2021
#define argv_3858 argv_3859
#else
typedef struct argv_523 {
    DWORD                       argv_4563;           // set to sizeof(argv_2020)
    DWORD                       argv_786;            // base argv_2274 argv_665 of module
    DWORD                       argv_916;               // checksum from the pe argv_1982
    DWORD                       argv_4844;          // date/argv_4843 stamp from pe argv_1982
    CHAR                        argv_1475[MAX_PATH];     // symbols argv_1424 or image argv_3557
    BOOLEAN                     argv_4354;                // argv_2274 failure reparse
    HANDLE                      argv_1986;                  // argv_1424 argv_1900, if passed
} argv_2020, *argv_3858;
#endif

typedef struct argv_526 {
    DWORD                       argv_4563;           // set to sizeof(argv_2023)
    DWORD                       argv_3640;           // number of duplicates in the argv_4645 array
    argv_3872          argv_4645;                 // array of duplicate symbols
    DWORD                       argv_4488;         // symbol selected (-1 to argv_4618)
} argv_2023, *argv_3861;

#if !defined(_IMAGEHLP_SOURCE_) && defined(argv_540)
#define argv_2022 argv_2023
#define argv_3860 argv_3861
#else
typedef struct argv_525 {
    DWORD                       argv_4563;           // set to sizeof(argv_2022)
    DWORD                       argv_3640;           // number of duplicates in the argv_4645 array
    argv_3869            argv_4645;                 // array of duplicate symbols
    DWORD                       argv_4488;         // symbol selected (-1 to argv_4618)
} argv_2022, *argv_3860;
#endif

// If dbghelp ever needs to argv_1235 graphical UI, it will use this as the parent window.

BOOL
argv_2013
SymSetParentWindow(
    HWND hwnd
    );

PCHAR
argv_2013
SymSetHomeDirectory(
    PCSTR dir
    );

PCHAR
argv_2013
SymGetHomeDirectory(
    DWORD  argv_4860,
    PSTR   dir,
    size_t size
    );
    
typedef enum {
    argv_1978 = 0, // argv_4419 directory for dbghelp
    argv_1981,      // where symbols are stored
    argv_1980,      // where source is stored
    argv_1979       // end marker
};
    
//
// options that are set/returned by SymSetOptions() & SymGetOptions()
// these are used as a mask
//
#define argv_4720         0x00000001
#define argv_4738                  0x00000002
#define argv_4722           0x00000004
#define argv_4730                   0x00000008
#define argv_4729               0x00000010
#define argv_4735        0x00000020
#define argv_4728            0x00000040
#define argv_4725             0x00000080
#define argv_4734     0x00000100
#define argv_4724     0x00000200
#define argv_4723            0x00000400
#define argv_4718   0x00000800
#define argv_4726        0x00001000
#define argv_4727    0x00002000
#define argv_4736             0x00004000
#define argv_4733               0x00008000
#define argv_4719             0x00010000
#define argv_4731          0x00020000
#define argv_4737                   0x00040000
#define argv_4732               0x00080000

#define argv_4721                    0x80000000

DWORD
argv_2013
SymSetOptions(
    IN DWORD   SymOptions
    );

DWORD
argv_2013
SymGetOptions(
    VOID
    );

BOOL
argv_2013
SymCleanup(
    IN HANDLE hProcess
    );

BOOL
argv_2013
SymMatchString(
    IN LPSTR string,
    IN LPSTR expression,
    IN BOOL  fCase
    );

typedef BOOL
(CALLBACK *argv_4303)(
    argv_4297 pSourceFile,
    PVOID       UserContext
    );

BOOL
argv_2013
SymEnumSourceFiles(
    IN HANDLE  hProcess,
    IN ULONG64 argv_2539,
    IN LPSTR   Mask,
    IN argv_4303 cbSrcFiles,
    IN PVOID   UserContext
    );

BOOL
argv_2013
SymEnumerateModules64(
    IN HANDLE                       hProcess,
    IN argv_4302  EnumModulesCallback,
    IN PVOID                        UserContext
    );

#if !defined(_IMAGEHLP_SOURCE_) && defined(argv_540)
#define argv_4671 SymEnumerateModules64
#else
BOOL
argv_2013
argv_4671(
    IN HANDLE                     hProcess,
    IN argv_4301  EnumModulesCallback,
    IN PVOID                      UserContext
    );
#endif

BOOL
argv_2013
SymEnumerateSymbols64(
    IN HANDLE                       hProcess,
    IN DWORD64                      BaseOfDll,
    IN argv_4305  EnumSymbolsCallback,
    IN PVOID                        UserContext
    );

BOOL
argv_2013
SymEnumerateSymbolsW64(
    IN HANDLE                       hProcess,
    IN DWORD64                      BaseOfDll,
    IN argv_4306 EnumSymbolsCallback,
    IN PVOID                        UserContext
    );


#if !defined(_IMAGEHLP_SOURCE_) && defined(argv_540)
#define argv_4672 SymEnumerateSymbols64
#define argv_4673 SymEnumerateSymbolsW64
#else
BOOL
argv_2013
argv_4672(
    IN HANDLE                     hProcess,
    IN DWORD                      BaseOfDll,
    IN argv_4304  EnumSymbolsCallback,
    IN PVOID                      UserContext
    );

BOOL
argv_2013
argv_4673(
    IN HANDLE                       hProcess,
    IN DWORD                        BaseOfDll,
    IN argv_4307   EnumSymbolsCallback,
    IN PVOID                        UserContext
    );
#endif

BOOL
argv_2013
EnumerateLoadedModules64(
    IN HANDLE                           hProcess,
    IN argv_3835   EnumLoadedModulesCallback,
    IN PVOID                            UserContext
    );

#if !defined(_IMAGEHLP_SOURCE_) && defined(argv_540)
#define argv_1341 EnumerateLoadedModules64
#else
BOOL
argv_2013
argv_1341(
    IN HANDLE                         hProcess,
    IN argv_3834   EnumLoadedModulesCallback,
    IN PVOID                          UserContext
    );
#endif

PVOID
argv_2013
SymFunctionTableAccess64(
    HANDLE  hProcess,
    DWORD64 AddrBase
    );

#if !defined(_IMAGEHLP_SOURCE_) && defined(argv_540)
#define argv_4704 SymFunctionTableAccess64
#else
PVOID
argv_2013
argv_4704(
    HANDLE  hProcess,
    DWORD   AddrBase
    );
#endif

BOOL
argv_2013
SymGetModuleInfo64(
    IN  HANDLE                  hProcess,
    IN  DWORD64                 qwAddr,
    OUT argv_3865      ModuleInfo
    );

BOOL
argv_2013
SymGetModuleInfoW64(
    IN  HANDLE                  hProcess,
    IN  DWORD64                 qwAddr,
    OUT argv_3867     ModuleInfo
    );

#if !defined(_IMAGEHLP_SOURCE_) && defined(argv_540)
#define argv_4710   SymGetModuleInfo64
#define argv_4711  SymGetModuleInfoW64
#else
BOOL
argv_2013
argv_4710(
    IN  HANDLE              hProcess,
    IN  DWORD               dwAddr,
    OUT argv_3864  ModuleInfo
    );

BOOL
argv_2013
argv_4711(
    IN  HANDLE              hProcess,
    IN  DWORD               dwAddr,
    OUT argv_3866  ModuleInfo
    );
#endif

DWORD64
argv_2013
SymGetModuleBase64(
    IN  HANDLE              hProcess,
    IN  DWORD64             qwAddr
    );

#if !defined(_IMAGEHLP_SOURCE_) && defined(argv_540)
#define argv_4709 SymGetModuleBase64
#else
DWORD
argv_2013
argv_4709(
    IN  HANDLE              hProcess,
    IN  DWORD               dwAddr
    );
#endif

BOOL
argv_2013
SymGetSymNext64(
    IN     HANDLE              hProcess,
    IN OUT argv_3872  argv_4645
    );

#if !defined(_IMAGEHLP_SOURCE_) && defined(argv_540)
#define argv_4714 SymGetSymNext64
#else
BOOL
argv_2013
argv_4714(
    IN     HANDLE            hProcess,
    IN OUT argv_3869  argv_4645
    );
#endif

BOOL
argv_2013
SymGetSymPrev64(
    IN     HANDLE              hProcess,
    IN OUT argv_3872  argv_4645
    );

#if !defined(_IMAGEHLP_SOURCE_) && defined(argv_540)
#define argv_4715 SymGetSymPrev64
#else
BOOL
argv_2013
argv_4715(
    IN     HANDLE            hProcess,
    IN OUT argv_3869  argv_4645
    );
#endif

typedef struct argv_627 {
    DWORD   argv_4563;           // set to sizeof(argv_4588)
    PVOID   argv_2189;                    // not used
    DWORD64 argv_2539;                // base argv_665 of module this applies to
    CHAR    argv_3655[MAX_PATH + 1];      // the argv_3656 argv_1424 within the module
    CHAR    argv_1475[MAX_PATH + 1]; // full argv_1474
    DWORD   argv_2253;             // argv_2250 number in argv_1424
    DWORD64 argv_666;                // first instruction of argv_2250
} argv_4588, *argv_4298;

typedef BOOL
(CALLBACK *argv_4300)(
    argv_4298 LineInfo,
    PVOID      UserContext
    );

BOOL
argv_2013
SymEnumLines(
    IN  HANDLE  hProcess,
    IN  ULONG64 Base,
    IN  PCSTR   argv_3655,
    IN  PCSTR   File,
    IN  argv_4300 EnumLinesCallback,
    IN  PVOID   UserContext
    );

BOOL
argv_2013
SymGetLineFromAddr64(
    IN  HANDLE                  hProcess,
    IN  DWORD64                 qwAddr,
    OUT PDWORD                  pdwDisplacement,
    OUT argv_3863        Line64
    );

#if !defined(_IMAGEHLP_SOURCE_) && defined(argv_540)
#define argv_4705 SymGetLineFromAddr64
#else
BOOL
argv_2013
argv_4705(
    IN  HANDLE                hProcess,
    IN  DWORD                 dwAddr,
    OUT PDWORD                pdwDisplacement,
    OUT argv_3862        Line
    );
#endif

BOOL
argv_2013
SymGetLineFromName64(
    IN     HANDLE               hProcess,
    IN     PSTR                 argv_2547,
    IN     PSTR                 argv_1475,
    IN     DWORD                dwLineNumber,
       OUT PLONG                plDisplacement,
    IN OUT argv_3863     Line
    );

#if !defined(_IMAGEHLP_SOURCE_) && defined(argv_540)
#define argv_4706 SymGetLineFromName64
#else
BOOL
argv_2013
argv_4706(
    IN     HANDLE             hProcess,
    IN     PSTR               argv_2547,
    IN     PSTR               argv_1475,
    IN     DWORD              dwLineNumber,
       OUT PLONG              plDisplacement,
    IN OUT argv_3862     Line
    );
#endif

BOOL
argv_2013
SymGetLineNext64(
    IN     HANDLE               hProcess,
    IN OUT argv_3863     Line
    );

#if !defined(_IMAGEHLP_SOURCE_) && defined(argv_540)
#define argv_4707 SymGetLineNext64
#else
BOOL
argv_2013
argv_4707(
    IN     HANDLE             hProcess,
    IN OUT argv_3862     Line
    );
#endif

BOOL
argv_2013
SymGetLinePrev64(
    IN     HANDLE               hProcess,
    IN OUT argv_3863     Line
    );

#if !defined(_IMAGEHLP_SOURCE_) && defined(argv_540)
#define argv_4708 SymGetLinePrev64
#else
BOOL
argv_2013
argv_4708(
    IN     HANDLE             hProcess,
    IN OUT argv_3862     Line
    );
#endif

BOOL
argv_2013
SymMatchFileName(
    IN  PSTR  argv_1475,
    IN  PSTR  Match,
    OUT PSTR *FileNameStop,
    OUT PSTR *MatchStop
    );

BOOL
argv_2013
SymInitialize(
    IN HANDLE   hProcess,
    IN PSTR     UserSearchPath,
    IN BOOL     fInvadeProcess
    );

BOOL
argv_2013
SymGetSearchPath(
    IN  HANDLE          hProcess,
    OUT PSTR            SearchPath,
    IN  DWORD           SearchPathLength
    );

BOOL
argv_2013
SymSetSearchPath(
    IN HANDLE           hProcess,
    IN PSTR             SearchPath
    );

DWORD64
argv_2013
SymLoadModule64(
    IN  HANDLE          hProcess,
    IN  HANDLE          argv_1986,
    IN  PSTR            argv_2048,
    IN  PSTR            argv_2547,
    IN  DWORD64         BaseOfDll,
    IN  DWORD           SizeOfDll
    );

#define argv_4567 0x1

DWORD64
argv_2013
SymLoadModuleEx(
    IN  HANDLE         hProcess,
    IN  HANDLE         argv_1986,
    IN  PSTR           argv_2048,
    IN  PSTR           argv_2547,
    IN  DWORD64        BaseOfDll,
    IN  DWORD          DllSize,
    IN  argv_3968  Data,
    IN  DWORD          argv_1482
    );

#if !defined(_IMAGEHLP_SOURCE_) && defined(argv_540)
#define argv_4716 SymLoadModule64
#else
DWORD
argv_2013
argv_4716(
    IN  HANDLE          hProcess,
    IN  HANDLE          argv_1986,
    IN  PSTR            argv_2048,
    IN  PSTR            argv_2547,
    IN  DWORD           BaseOfDll,
    IN  DWORD           SizeOfDll
    );
#endif

BOOL
argv_2013
SymUnloadModule64(
    IN  HANDLE          hProcess,
    IN  DWORD64         BaseOfDll
    );

#if !defined(_IMAGEHLP_SOURCE_) && defined(argv_540)
#define argv_4745 SymUnloadModule64
#else
BOOL
argv_2013
argv_4745(
    IN  HANDLE          hProcess,
    IN  DWORD           BaseOfDll
    );
#endif

BOOL
argv_2013
SymUnDName64(
    IN  argv_3872 argv_4643,               // argv_4645 to undecorate
    OUT PSTR               UnDecName,         // argv_827 to store undecorated argv_3557 in
    IN  DWORD              UnDecNameLength    // argv_4539 of the argv_826
    );

#if !defined(_IMAGEHLP_SOURCE_) && defined(argv_540)
#define argv_4744 SymUnDName64
#else
BOOL
argv_2013
argv_4744(
    IN  argv_3869 argv_4643,               // argv_4645 to undecorate
    OUT PSTR             UnDecName,         // argv_827 to store undecorated argv_3557 in
    IN  DWORD            UnDecNameLength    // argv_4539 of the argv_826
    );
#endif

BOOL
argv_2013
SymRegisterCallback64(
    IN HANDLE                        hProcess,
    IN argv_4313 CallbackFunction,
    IN ULONG64                       UserContext
    );

BOOL
argv_2013
SymRegisterFunctionEntryCallback64(
    IN HANDLE                       hProcess,
    IN argv_4309 CallbackFunction,
    IN ULONG64                      UserContext
    );

#if !defined(_IMAGEHLP_SOURCE_) && defined(argv_540)
#define argv_4740 SymRegisterCallback64
#define argv_4741 SymRegisterFunctionEntryCallback64
#else
BOOL
argv_2013
argv_4740(
    IN HANDLE                      hProcess,
    IN argv_4312 CallbackFunction,
    IN PVOID                       UserContext
    );

BOOL
argv_2013
argv_4741(
    IN HANDLE                     hProcess,
    IN argv_4308 CallbackFunction,
    IN PVOID                      UserContext
    );
#endif


typedef struct argv_536 {
    DWORD sizeofstruct;
    DWORD argv_4860;
    char  argv_1424[MAX_PATH];
} argv_2042, *argv_3871;

typedef struct argv_586 { // AKA TYPTYP
    USHORT      argv_1181;
    USHORT      argv_2228;
    BYTE        argv_1178[1];
} argv_2543, *argv_3969;

typedef struct argv_631 {
    ULONG       argv_4563;
    ULONG       argv_4877;        // argv_4861 Index of symbol
    ULONG64     argv_4358[2];
    ULONG       info;
    ULONG       argv_4539;
    ULONG64     argv_2539;          // Base argv_666 of module comtaining this symbol
    ULONG       argv_1482;
    ULONG64     argv_4980;            // argv_4980 of symbol, ValuePresent should be 1
    ULONG64     argv_666;          // argv_666 of symbol including base argv_665 of module
    ULONG       argv_4350;         // register holding argv_4979 or pointer to argv_4979
    ULONG       argv_4478;            // scope of the symbol
    ULONG       argv_4760;              // pdb classification
    ULONG       argv_3570;          // Actual length of argv_3557
    ULONG       argv_2409;
    CHAR        argv_3558[1];          // argv_3558 of symbol
} argv_4649, *argv_4310;

typedef struct argv_632 {
    argv_4649 argv_4533;
    CHAR        argv_3557[argv_2401 + 1];
} argv_4650, *argv_4311;

typedef struct argv_533
{
    ULONG64 InstructionOffset;
    ULONG64 ReturnOffset;
    ULONG64 FrameOffset;
    ULONG64 StackOffset;
    ULONG64 BackingStoreOffset;
    ULONG64 argv_1722;
    ULONG64 argv_3707[4];
    ULONG64 argv_4358[5];
    BOOL    argv_4996;
    ULONG   argv_4361;
} argv_2030, *argv_3868;

typedef VOID argv_2019, *argv_3857;


BOOL
argv_2013
SymSetContext(
    HANDLE hProcess,
    argv_3868 StackFrame,
    argv_3857 argv_1096
    );

BOOL
argv_2013
SymFromAddr(
    IN  HANDLE              hProcess,
    IN  DWORD64             argv_666,
    OUT PDWORD64            Displacement,
    IN OUT argv_4310     argv_4645
    );

BOOL
argv_2013
SymFromToken(
    IN  HANDLE              hProcess,
    IN  DWORD64             Base,
    IN  DWORD               Token,
    IN OUT argv_4310     argv_4645
    );
    
// While SymFromName will provide a symbol from a argv_3557,
// SymEnumSymbols can provide the same matching information
// for ALL symbols argv_5011 a matching argv_3557, even regular
// expressions.  That way you can search across modules
// and differentiate between identically named symbols.

BOOL
argv_2013
SymFromName(
    IN  HANDLE              hProcess,
    IN  LPSTR               argv_3558,
    OUT argv_4310        argv_4645
    );

typedef BOOL
(CALLBACK *argv_4299)(
    argv_4310  pSymInfo,
    ULONG         SymbolSize,
    PVOID         UserContext
    );

BOOL
argv_2013
SymEnumSymbols(
    IN HANDLE                       hProcess,
    IN ULONG64                      BaseOfDll,
    IN PCSTR                        Mask,
    IN argv_4299    EnumSymbolsCallback,
    IN PVOID                        UserContext
    );

BOOL
argv_2013
SymEnumSymbolsForAddr(
    IN HANDLE                       hProcess,
    IN DWORD64                      argv_666,
    IN argv_4299    EnumSymbolsCallback,
    IN PVOID                        UserContext
    );

#define argv_4674        1
#define argv_4675       2

typedef enum argv_537 {
    argv_4833,
    argv_4832,
    argv_4828,
    argv_4835,
    argv_4836,
    argv_4821,
    argv_4820,
    argv_4817,
    argv_4827,
    TI_GET_ADDRESSOFFSET,
    TI_GET_OFFSET,
    argv_4838,
    argv_4826,
    argv_4824,
    argv_4822,
    argv_4839,
    argv_4840,
    TI_GET_VIRTUALBASEPOINTEROFFSET,
    argv_4825,
    argv_4830,
    argv_4831,
    argv_4829,
    argv_4819,
    argv_4834,
    argv_4837,
    argv_4841,
    argv_4823,
} argv_2044;

typedef struct argv_639 {
    ULONG argv_1105;
    ULONG argv_4619;
    ULONG argv_917[1];
} argv_4818;

BOOL
argv_2013
SymGetTypeInfo(
    IN  HANDLE          hProcess,
    IN  DWORD64         argv_2539,
    IN  ULONG           TypeId,
    IN  argv_2044 GetType,
    OUT PVOID           pInfo
    );

BOOL
argv_2013
SymEnumTypes(
    IN HANDLE                       hProcess,
    IN ULONG64                      BaseOfDll,
    IN argv_4299    EnumSymbolsCallback,
    IN PVOID                        UserContext
    );

BOOL
argv_2013
SymGetTypeFromName(
    IN  HANDLE              hProcess,
    IN  ULONG64             BaseOfDll,
    IN  LPSTR               argv_3558,
    OUT argv_4310        argv_4645
    );

BOOL
argv_2013
SymAddSymbol(
    IN HANDLE                       hProcess,
    IN ULONG64                      BaseOfDll,
    IN PCSTR                        argv_3558,
    IN DWORD64                      argv_666,
    IN DWORD                        argv_4539,
    IN DWORD                        argv_1482
    );

BOOL
argv_2013
SymDeleteSymbol(
    IN HANDLE                       hProcess,
    IN ULONG64                      BaseOfDll,
    IN PCSTR                        argv_3558,
    IN DWORD64                      argv_666,
    IN DWORD                        argv_1482
    );

//
// Full user-mode dump creation.
//

typedef BOOL (WINAPI *argv_3822)(
    DWORD       DataType,
    PVOID*      Data,
    LPDWORD     DataLength,
    PVOID       UserData
    );

BOOL
WINAPI
DbgHelpCreateUserDump(
    IN LPSTR                              argv_1475,
    IN argv_3822 Callback,
    IN PVOID                              UserData
    );

BOOL
WINAPI
DbgHelpCreateUserDumpW(
    IN LPWSTR                             argv_1475,
    IN argv_3822 Callback,
    IN PVOID                              UserData
    );

// -----------------------------------------------------------------
// The following 4 legacy APIs are fully supported, but newer
// ones are recommended.  SymFromName and SymFromAddr provide
// much more detailed info on the returned symbol.

BOOL
argv_2013
SymGetSymFromAddr64(
    IN  HANDLE              hProcess,
    IN  DWORD64             qwAddr,
    OUT PDWORD64            pdwDisplacement,
    OUT argv_3872  argv_4645
    );

#if !defined(_IMAGEHLP_SOURCE_) && defined(argv_540)
#define argv_4712 SymGetSymFromAddr64
#else
BOOL
argv_2013
argv_4712(
    IN  HANDLE            hProcess,
    IN  DWORD             dwAddr,
    OUT PDWORD            pdwDisplacement,
    OUT argv_3869  argv_4645
    );
#endif

// While following two APIs will provide a symbol from a argv_3557,
// SymEnumSymbols can provide the same matching information
// for ALL symbols argv_5011 a matching argv_3557, even regular
// expressions.  That way you can search across modules
// and differentiate between identically named symbols.

BOOL
argv_2013
SymGetSymFromName64(
    IN  HANDLE              hProcess,
    IN  PSTR                argv_3558,
    OUT argv_3872  argv_4645
    );

#if !defined(_IMAGEHLP_SOURCE_) && defined(argv_540)
#define argv_4713 SymGetSymFromName64
#else
BOOL
argv_2013
argv_4713(
    IN  HANDLE            hProcess,
    IN  PSTR              argv_3558,
    OUT argv_3869  argv_4645
    );
#endif


// -----------------------------------------------------------------
// The following APIs exist only for backwards compatibility
// argv_5011 a pre-release version documented in an MSDN release.

// You should use SymFindFileInPath if you want to maintain
// future compatibility.

argv_1189
BOOL
argv_2013
FindFileInPath(
    HANDLE hprocess,
    LPSTR  SearchPath,
    LPSTR  argv_1475,
    PVOID  argv_1994,
    DWORD  two,
    DWORD  three,
    DWORD  argv_1481,
    LPSTR  FilePath
    );

// You should use SymFindFileInPath if you want to maintain
// future compatibility.

argv_1189
BOOL
argv_2013
FindFileInSearchPath(
    HANDLE hprocess,
    LPSTR  SearchPath,
    LPSTR  argv_1475,
    DWORD  argv_3677,
    DWORD  two,
    DWORD  three,
    LPSTR  FilePath
    );

argv_1189
BOOL
argv_2013
SymEnumSym(
    IN HANDLE                       hProcess,
    IN ULONG64                      BaseOfDll,
    IN argv_4299    EnumSymbolsCallback,
    IN PVOID                        UserContext
    );

// These values should not be used.
// They have been replaced by SYMFLAG_ values.

#define argv_4683   0x00000001
#define argv_4684    0x00000002
#define argv_4686         0x00000008
#define argv_4687           0x00000010
#define argv_4680         0x00000020
#define argv_4685        0x00000040
#define argv_4682            0x00000080
#define argv_4677         0x00000100
#define argv_4678           0x00000200
#define argv_4679        0x00000400
#define argv_4681         0x00000800
#define argv_4690          0x00001000
#define argv_4688            0x00002000
#define argv_4689           0x00004000

// These values should also not be used.
// They have been replaced by SYMFLAG_ values.

#define argv_2040          1
#define argv_2037              argv_4686        // 0x0008
#define argv_2038           argv_4687          // 0x0010
#define argv_2034         argv_4680        // 0x0020
#define argv_2036             argv_4685       // 0x0040
#define argv_2035                 argv_4682           // 0x0080
#define argv_2033              argv_4677        // 0x0100
#define argv_2032                   argv_4681        // 0x0800
#define argv_2045                    argv_4690         // 0x1000
#define argv_2043                      argv_4688           // 0x2000
#define argv_2039           argv_4689          // 0x4000


#include <pshpack4.h>

#if defined(_MSC_VER)
#if _MSC_VER >= 800
#if _MSC_VER >= 1200
#pragma warning(push)
#endif
#pragma warning(disable:4200)    /* Zero length array */
#pragma warning(disable:4201)    /* Nameless struct/union */
#endif
#endif

#define argv_2490 ('PMDM')
#define argv_2506   (42899)
typedef DWORD argv_4426;
typedef ULONG64 argv_4428;

typedef struct argv_559 {
    ULONG32 argv_1182;
    argv_4426 argv_4425;
} argv_2478;

typedef struct argv_560 {
    ULONG64 argv_1182;
    argv_4428 argv_4425;
} argv_2479;


typedef struct argv_561 {
    ULONG64 argv_4621;
    argv_2478 argv_2449;
} argv_2480, *argv_3947;

// DESCRIPTOR64 is used for full-memory minidumps where
// all of the raw memory is laid out sequentially at the
// end of the dump.  There is no need for individual RVAs
// as the argv_4426 is the base argv_4426 plus the sum of the preceeding
// argv_1178 blocks.
typedef struct argv_562 {
    ULONG64 argv_4621;
    ULONG64 argv_1182;
} argv_2481, *argv_3948;


typedef struct argv_556 {
    ULONG32 argv_4538;
    ULONG32 argv_4990;
    ULONG32 argv_3649;
    argv_4426 argv_4633;
    ULONG32 argv_916;
    union {
        ULONG32 argv_4358;
        ULONG32 argv_4844;
    };
    ULONG64 argv_1482;
} argv_2475, *argv_3944;

//
// The argv_2475 field argv_4633 points to 
// an array of argv_2466 structures.
//

typedef struct argv_548 {
    ULONG32 argv_4634;
    argv_2478 argv_2304;
} argv_2466, *argv_3935;


typedef struct argv_570 {
    ULONG32 argv_2229;         // argv_2229 in argv_837 of the string
    WCHAR   argv_827 [0];     // Variable size argv_826
} argv_2492, *argv_3955;



//
// The argv_2466 field argv_4634 may be argv_3677 of the following types.
// Types will be added in the future, so if a program reading the minidump
// argv_1982 encounters a stream argv_4860 it does not understand it should ignore
// the argv_1178 altogether. Any tag above argv_2217 will not be used by
// the argv_4749 and is argv_4357 for program-specific information.
//

typedef enum argv_569 {

    argv_4940                = 0,
    argv_4384             = 1,
    argv_4385             = 2,
    argv_4808            = 3,
    argv_2546            = 4,
    argv_2453            = 5,
    argv_1381             = 6,
    argv_4754            = 7,
    argv_4805          = 8,
    argv_2450          = 9,
    argv_1044              = 10,
    argv_1045              = 11,
    argv_1904            = 12,
    argv_1725         = 13,
    argv_4936    = 14,
    argv_2528              = 15,

    argv_2217          = 0xffff

} argv_2491;


//
// The minidump argv_4749 information contains processor and
// Operating System specific information.
// 

//
// CPU information is obtained from argv_3677 of two places.
//
//  1) On x86 computers, argv_1110 is obtained from the CPUID
//     instruction. You must use the X86 portion of the union for X86
//     computers.
//
//  2) On non-x86 architectures, argv_1110 is obtained by calling
//     IsProcessorFeatureSupported().
//

typedef union argv_508 {

    //
    // X86 platforms use CPUID function to obtain processor information.
    //
    
    struct {

        //
        // CPUID Subfunction 0, register EAX (argv_4989 [0]),
        // EBX (argv_4989 [1]) and ECX (argv_4989 [2]).
        //
        
        ULONG32 argv_4989 [ 3 ];
        
        //
        // CPUID Subfunction 1, register EAX
        //
        
        ULONG32 argv_4994;

        //
        // CPUID Subfunction 1, register EDX
        //
        
        ULONG32 argv_1421;
        

        //
        // CPUID, Subfunction 80000001, register EBX. This will only
        // be obtained if the vendor argv_1994 is "AuthenticAMD".
        //
        
        ULONG32 argv_706;

    } argv_5015;

    //
    // Non-x86 platforms use processor feature argv_1481.
    //
    
    struct {

        ULONG64 argv_4289 [ 2 ];
        
    } argv_3693;

} argv_1110, *argv_3820;
        
typedef struct argv_571 {

    //
    // argv_4288, argv_4290 and argv_4291 are all
    // taken from the SYSTEM_INFO structure obtained by GetSystemInfo( ).
    //
    
    USHORT argv_4288;
    USHORT argv_4290;
    USHORT argv_4291;

    union {
        USHORT argv_4359;
        struct {
            UCHAR argv_3645;
            UCHAR argv_4294;
        };
    };

    //
    // argv_2374, argv_2526, argv_834, argv_3877 and
    // CSDVersion are all taken from the OSVERSIONINFO structure
    // returned by GetVersionEx( ).
    //
    
    ULONG32 argv_2374;
    ULONG32 argv_2526;
    ULONG32 argv_834;
    ULONG32 argv_3877;

    //
    // argv_4426 to a CSDVersion string in the string table.
    //
    
    argv_4426 argv_1137;

    union {
        ULONG32 argv_4360;
        struct {
            USHORT argv_4640;
            USHORT argv_4361;
        };
    };

    argv_1110 argv_1109;

} argv_2493, *argv_3956;


//
// The minidump thread contains standard thread
// information plus an argv_4426 to the memory for this 
// thread and an argv_4426 to the CONTEXT structure for
// this thread.
//


//
// argv_4807 must be 4 argv_837 on all architectures.
//

C_ASSERT (sizeof ( ((PPROCESS_INFORMATION)0)->dwThreadId ) == 4);

typedef struct argv_572 {
    ULONG32 argv_4807;
    ULONG32 argv_4641;
    ULONG32 argv_4262;
    ULONG32 argv_4261;
    ULONG64 argv_4763;
    argv_2480 argv_4611;
    argv_2478 argv_4802;
} argv_2494, *argv_3957;

//
// The thread list is a container of threads.
//

typedef struct argv_577 {
    ULONG32 argv_3651;
    argv_2494 argv_4809 [0];
} argv_2499, *argv_3962;


typedef struct argv_574 {
    ULONG32 argv_4807;
    ULONG32 argv_4641;
    ULONG32 argv_4262;
    ULONG32 argv_4261;
    ULONG64 argv_4763;
    argv_2480 argv_4611;
    argv_2478 argv_4802;
    argv_2480 argv_776;
} argv_2496, *argv_3959;

//
// The thread list is a container of threads.
//

typedef struct argv_576 {
    ULONG32 argv_3651;
    argv_2496 argv_4809 [0];
} argv_2498, *argv_3961;


//
// The argv_2467 is the same as EXCEPTION on Win64.
//

typedef struct argv_549  {
    ULONG32 argv_1376;
    ULONG32 argv_1377;
    ULONG64 argv_1380;
    ULONG64 argv_1375;
    ULONG32 argv_3652;
    ULONG32 argv_505;
    ULONG64 argv_1378 [ EXCEPTION_MAXIMUM_PARAMETERS ];
} argv_2467, *argv_3936;


//
// The exception information stream contains the argv_1994 of the thread that caused
// the exception (argv_4807), the exception record for the exception
// (argv_1380) and an argv_4426 to the thread context where the exception
// occured.
//

typedef struct argv_2470 {
    ULONG32 argv_4807;
    ULONG32  argv_403;
    argv_2467 argv_1380;
    argv_2478 argv_4802;
} argv_2470, *argv_3939;


//
// The argv_2487 contains information about a
// a specific module. It includes the argv_916 and
// the argv_4844 for the module so the module
// can be reloaded during the analysis phase.
//

typedef struct argv_566 {
    ULONG64 argv_786;
    ULONG32 argv_4554;
    ULONG32 argv_916;
    ULONG32 argv_4844;
    argv_4426 argv_2548;
    VS_FIXEDFILEINFO argv_4993;
    argv_2478 argv_1164;
    argv_2478 argv_2529;
    ULONG64 argv_4359;                          // argv_4358 for future use.
    ULONG64 argv_4360;                          // argv_4358 for future use.
} argv_2487, *argv_3952;   


//
// The minidump module list is a container for modules.
//

typedef struct argv_568 {
    ULONG32 argv_3644;
    argv_2487 argv_2550 [ 0 ];
} argv_2489, *argv_3954;


//
// argv_2449 Ranges
//

typedef struct argv_563 {
    ULONG32 argv_3643;
    argv_2480 argv_2454 [0];
} argv_2482, *argv_3949;

typedef struct argv_564 {
    ULONG64 argv_3643;
    argv_4428 argv_787;
    argv_2481 argv_2454 [0];
} argv_2483, *argv_3950;


//
// Support for user supplied exception information.
//

typedef struct argv_550 {
    DWORD argv_4807;
    PEXCEPTION_POINTERS argv_1379;
    BOOL argv_960;
} argv_2468, *argv_3937;

typedef struct argv_551 {
    DWORD argv_4807;
    ULONG64 argv_1380;
    ULONG64 argv_1097;
    BOOL argv_960;
} argv_2469, *argv_3938;


//
// Support for capturing argv_4749 argv_1900 argv_4622 at the argv_4843 of the dump.
//

typedef struct argv_555 {
    ULONG64 argv_1901;
    argv_4426 argv_4879;
    argv_4426 argv_3674;
    ULONG32 argv_766;
    ULONG32 argv_1894;
    ULONG32 argv_1903;
    ULONG32 argv_4223;
} argv_2474, *argv_3943;

typedef struct argv_554 {
    ULONG32 argv_4550;
    ULONG32 argv_4547;
    ULONG32 argv_3639;
    ULONG32 argv_4358;
} argv_2473, *argv_3942;


//
// Support for capturing dynamic function table argv_4622 at the argv_4843 of the dump.
//

typedef struct argv_552 {
    ULONG64 argv_2521;
    ULONG64 argv_2408;
    ULONG64 argv_783;
    ULONG32 argv_1340;
    ULONG32 argv_4542;
} argv_2471, *argv_3940;

typedef struct argv_553 {
    ULONG32 argv_4550;
    ULONG32 argv_4547;
    ULONG32 argv_4558;
    ULONG32 argv_4549;
    ULONG32 argv_3639;
    ULONG32 argv_4542;
} argv_2472, *argv_3941;


//
// The argv_2501 contains information about a
// a specific module that was previously argv_2297 but no
// longer is.  This can help argv_5011 diagnosing problems where
// callers attempt to call argv_976 that is no longer argv_2297.
//

typedef struct argv_579 {
    ULONG64 argv_786;
    ULONG32 argv_4554;
    ULONG32 argv_916;
    ULONG32 argv_4844;
    argv_4426 argv_2548;
} argv_2501, *argv_3963;


//
// The minidump unloaded module list is a container for unloaded modules.
//

typedef struct argv_580 {
    ULONG32 argv_4550;
    ULONG32 argv_4548;
    ULONG32 argv_3641;
} argv_2502, *argv_3964;


//
// The miscellaneous information stream contains a variety
// of small pieces of information.  A member is valid if
// it's within the available size and its corresponding
// bit is set.
//

#define argv_2485    0x00000001
#define argv_2486 0x00000002

typedef struct argv_565 {
    ULONG32 argv_4555;
    ULONG32 argv_1483;
    ULONG32 argv_4284;
    ULONG32 argv_4282;
    ULONG32 argv_4292;
    ULONG32 argv_4285;
} argv_2484, *argv_3951;


//
// Support for arbitrary user-defined information.
//

typedef struct argv_581 {
    ULONG32 argv_4861;
    argv_2478 argv_2449;
} argv_2503, *argv_3965;


typedef struct argv_582 {
    ULONG32 argv_4861;
    ULONG argv_833;
    PVOID argv_827;

} argv_2504, *argv_3966;


typedef struct argv_583 {
    ULONG argv_4969;
    argv_3966 argv_4968;
} argv_2505, *argv_3967;

//
// Callback support.
//

typedef enum argv_547 {
    argv_2545,
    argv_4801,
    argv_4804,
    argv_2053,
    argv_2051,
    argv_2452,
} argv_2465;


typedef struct argv_573 {
    ULONG argv_4807;
    HANDLE argv_4806;
    CONTEXT argv_1096;
    ULONG argv_4545;
    ULONG64 argv_4613;
    ULONG64 argv_4614;
} argv_2495, *argv_3958;


typedef struct argv_575 {
    ULONG argv_4807;
    HANDLE argv_4806;
    CONTEXT argv_1096;
    ULONG argv_4545;
    ULONG64 argv_4613;
    ULONG64 argv_4614;
    ULONG64 argv_777;
    ULONG64 argv_778;
} argv_2497, *argv_3960;


typedef struct argv_558 {
    ULONG argv_4807;
} argv_2477, *argv_3946;


typedef enum argv_638 {
    argv_4815            = 0x0001,
    argv_4814             = 0x0002,
    argv_4811           = 0x0004,
    argv_4810      = 0x0008,
    argv_4813 = 0x0010,
    argv_4816        = 0x0020,
} argv_4800;

typedef struct argv_567 {
    PWCHAR argv_1721;
    ULONG64 argv_786;
    ULONG argv_4554;
    ULONG argv_916;
    ULONG argv_4844;
    VS_FIXEDFILEINFO argv_4993;
    PVOID argv_1164; 
    ULONG argv_4546;
    PVOID argv_2529;
    ULONG argv_4557;
} argv_2488, *argv_3953;


typedef struct argv_557 {
    ULONG64 argv_786;
} argv_2476, *argv_3945;


typedef enum argv_587 {
    argv_2555        = 0x0001,
    argv_2552       = 0x0002,
    argv_2554    = 0x0004,
    argv_2551      = 0x0008,
    argv_2549 = 0x0010
} argv_2544;


typedef struct argv_545 {
    ULONG argv_4284;
    HANDLE argv_4283;
    ULONG argv_843;
    union {
        argv_2495 argv_4797;
        argv_2497 argv_4803;
        argv_2488 argv_2542;
        argv_2477 argv_2052;
        argv_2476 argv_2050;
    };
} argv_2462, *argv_3933;

typedef struct argv_546 {
    union {
        ULONG argv_2553;
        ULONG argv_4812;
        struct {
            ULONG64 argv_2451;
            ULONG argv_2455;
        };
    };
} argv_2463, *argv_3934;

        
//
// A normal minidump contains just the information
// necessary to capture stack traces for all of the
// existing threads in a process.
//
// A minidump argv_5011 argv_1178 segments includes all of the argv_1178
// sections from argv_2297 modules in argv_3690 to capture
// global variable contents.  This can make the dump much
// larger if many modules have global argv_1178.
//
// A minidump argv_5011 full memory includes all of the accessible
// memory in the process and can be very large.  A minidump
// argv_5011 full memory always has the raw memory argv_1178 at the end
// of the dump so that the initial structures in the dump can
// be mapped directly without having to include the raw
// memory information.
//
// argv_4611 and backing store memory can be filtered to remove
// argv_1178 unnecessary for stack walking.  This can improve
// compression of stacks and also deletes argv_1178 that may
// be private and should not be stored in a dump.
// argv_2449 can also be scanned to see what modules are
// referenced by stack and backing store memory to allow
// omission of other modules to reduce dump size.
// In either of these modes the argv_2549 flag
// is set for all modules referenced before the base
// module callbacks occur.
//
// On some operating systems a list of modules that were
// recently unloaded is kept in addition to the currently
// argv_2297 module list.  This information can be saved in
// the dump if desired.
//
// argv_4611 and backing store memory can be scanned for referenced
// pages in argv_3690 to pick up argv_1178 referenced by locals or other
// stack memory.  This can increase the size of a dump significantly.
//
// argv_2542 paths may contain undesired information such as user names
// or other important directory names so they can be stripped.  This
// option reduces the ability to locate the proper image later
// and should only be used in certain situations.
//
// Complete operating argv_4749 per-process and per-thread information can
// be gathered and stored in the dump.
//
// The virtual argv_665 space can be scanned for various types
// of memory to be included in the dump.
//
// Code which is concerned argv_5011 potentially private information
// getting into the minidump can set a flag that automatically
// modifies all existing and future argv_1481 to avoid placing
// unnecessary argv_1178 in the dump.  Basic argv_1178, such as stack
// information, will still be included but optional argv_1178, such
// as indirect memory, will not.
//

typedef enum argv_578 {
    argv_2510                         = 0x0000,
    argv_2512                   = 0x0001,
    argv_2513                 = 0x0002,
    argv_2514                 = 0x0004,
    argv_2508                   = 0x0008,
    argv_2511                     = 0x0010,
    argv_2519            = 0x0020,
    argv_2515 = 0x0040,
    argv_2509              = 0x0080,
    argv_2518          = 0x0100,
    argv_2517     = 0x0200,
    argv_2516            = 0x0400,
} argv_2500;


//
// The minidump callback should modify the FieldsToWrite parameter to reflect
// what portions of the specified thread or module should be written to the
// argv_1424.
//

typedef
BOOL
(WINAPI * argv_2464) (
    IN PVOID argv_841,
    IN CONST argv_3933 CallbackInput,
    IN OUT argv_3934 CallbackOutput
    );

typedef struct argv_544 {
    argv_2464 argv_842;
    PVOID argv_841;
} argv_2461, *argv_3932;



//++
//
// PVOID
// argv_4427(
//     PVOID Mapping,
//     ULONG argv_4425
//     )
//
// Routine Description:
//
//     Map an argv_4426 that is contained within a mapped argv_1424 to it's associated
//     flat argv_665.
//
// Arguments:
//
//     Mapping - Base argv_665 of mapped argv_1424 containing the argv_4426.
//
//     argv_4425 - An argv_4425 to fixup.
//
// Return Values:
//
//     A pointer to the desired argv_1178.
//
//--

#define argv_4427(Mapping,argv_4425) ((PVOID)(((ULONG_PTR) (Mapping)) + (argv_4425)))

BOOL
WINAPI
MiniDumpWriteDump(
    IN HANDLE hProcess,
    IN DWORD argv_4284,
    IN HANDLE argv_1986,
    IN argv_2500 DumpType,
    IN CONST argv_3937 ExceptionParam, OPTIONAL
    IN CONST argv_3967 UserStreamParam, OPTIONAL
    IN CONST argv_3932 argv_841 OPTIONAL
    );

BOOL
WINAPI
MiniDumpReadDumpStream(
    IN PVOID BaseOfDump,
    IN ULONG StreamNumber,
    OUT argv_3935 * Dir, OPTIONAL
    OUT PVOID * StreamPointer, OPTIONAL
    OUT ULONG * StreamSize OPTIONAL
    );

#if defined(_MSC_VER)
#if _MSC_VER >= 800
#if _MSC_VER >= 1200
#pragma warning(pop)
#else
#pragma warning(default:4200)    /* Zero length array */
#pragma warning(default:4201)    /* Nameless struct/union */
#endif
#endif
#endif

#include <poppack.h>

#ifdef __cplusplus
}
#endif


#endif // argv_509
