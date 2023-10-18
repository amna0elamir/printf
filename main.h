#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
int _printf(const char *format, ...);
int printing_char(va_list);
int printing_string(va_list);
int printing_percentage(va_list);
int _putchar(char c);
#endif
