#ifndef __DISRUPTOR_UTIL_H__
#define __DISRUPTOR_UTIL_H__

#include <stdint.h>
#include <stddef.h>

/* bool. */
#ifndef bool
typedef int bool;
# define true   1
# define false  0
#endif

/* NULL. */
#ifndef NULL
# define NULL   0
#endif

/* string utilities. */
void strfree( char* str );
char* strclone( const char* str );
char* strformat( const char* fmt, ... );

#endif
