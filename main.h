#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
int _printf(const char *format, ...);
int print_char(va_list);
int print_string(va_list);
int print_integer(va_list);
#endif
