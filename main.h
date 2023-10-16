#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
int _printf(const char *format, ...);
/**
 * struct format - Typedef struct
 *
 * @type: Format
 * @f: The function associated
 */
typedef struct format_specifier
{
        char type;
        int (*f)(va_list);
} format;
#endif
