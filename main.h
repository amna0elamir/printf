#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

/**
 * struct _format - Typedef struct
 *
 * @type: Format
 * @f: The function associated
 */
typedef struct _format
{
        char type;
        int (*f)(va_list);
} format;
