#ifndef __SONIC
#define __SONIC

#define SONIC_MAGIC 42

#include <zlib.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/* Return Codes */
#ifndef RETURN_SUCCESS
#define RETURN_SUCCESS 1
#define RETURN_ERROR 0
#define EXIT_FILE_OPEN_ERROR 5
#define EXIT_SONIC 7
/* Maximum filename length */
#define MAX_LENGTH 1024
#endif

int  make_sonic(char *, char *, char *, char *, char *);

int load_sonic(char *);

FILE* sonic_fopen( char*, char*);
gzFile sonic_fopen_gz( char*, char*);
int count_bed_lines(FILE *);


#endif
