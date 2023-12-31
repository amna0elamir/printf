#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <limits.h>

#define BUFF_SIZE 1024

int _printf(const char *format, ...);
int format_conversion(va_list var, const char *format, int count);
int _putchar(char c);
int _strlen(char *s);
void print_buffer(char buffer[], int *buffer_id);
#endif
