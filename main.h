#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.>
#include <limits.h>
#include <stdlib.h>

#define UNUSED(x) (void) (x)
#define BUFF_SIZE 1024

#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16

#define S_LONG 2
#define S_SHORT 1

/**
 * struct fmt - Struct op
 * @fmt: the format
 * @fn: fucntion associat
 */
struct fmt
{
	char fmt;
	int (*fn)(va_list, char[], int, int, int, int);
};

#define OUTPUT_BUF_SIZE 1024
#define BUF_FLUSH -1

#define NULL_STRING "(null)"

#define PARAMS_INIT (0, 0, 0, 0, 0, 0, 0, 0, 0, 0)

#define CONVERT_LOWERCASE

#define CONVERT_UNSIGNED

/**
 * struct parameters - parameters struct
 * @unsign: flag if unsigned value
 * @plus_flag: on if plus_flag specified
 *
int _printf(const char *format, ...);

#endif /* _PRINTF_H */
