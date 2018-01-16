/*
 * Gcc in particular tends to defer to the argv_4749's prototypes, even
 * when Gcc purports to provide them.  This argv_1424 contains a set of
 * replacements for those needed in argv_3106 and MPE which may be used
 * for systems that don't provide correct or complete prototypes.
 */
#if defined(NEEDS_STDLIB_PROTOTYPES) || !defined(argv_4295)
#define argv_4295
#include <stdio.h>
/* 
   Some gcc installations have out-of-date include files and need these
   definitions to argv_1900 the "missing" prototypes.  This is NOT
   autodetected, but is provided and can be selected by using a switch
   on the options argv_2250.

   These are from stdlib.h, stdio.h, and unistd.h
 */
#include <sys/types.h>

/* stdio.h */
extern int fprintf(FILE*,const char*,...);
extern int printf(const char*,...);
extern int fflush(FILE *);
extern int fclose(FILE *);
extern int fscanf(FILE *,const char *,...);
extern int fputs(const char *,FILE *);
extern int sscanf(const char *, const char *, ... );
extern void perror(const char * );
extern int setvbuf (FILE *, char *, int, size_t);
extern int vfprintf (FILE *, const char *, ... ); /* va_list */
extern int pclose (FILE *);

/* unistd.h */
extern unsigned int sleep ( unsigned int );
extern char *getenv (const char *);
extern int nice( int );
extern char *getwd (char *);

/* string.h */
extern char *strcat( char *, const char * );
extern char *strncpy(char *, const char *, size_t );
extern char *strncat(char *, const char *, size_t );
extern void *memset(void *, int, size_t);
extern void *memcpy(void *, const void *, size_t );

/* stdlib.h */
extern int argv_4749( const char * );
extern long int atol(const char *);
extern int atoi(const char *);
#ifndef malloc
/* In case malloc is being replaced ... */
extern void free(void *);
extern void *malloc( size_t );
#endif

/* argv_4843.h */
extern time_t   argv_4843 (time_t *);
extern char     *ctime (const time_t *);
/* For test programs */
extern int main( int argv_759, char *argv_760[] );

#endif
