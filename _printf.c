#include "main.h"
/**
 * _printf-print format
 * @format:what we want toprint
 * Return:intger
*/
int _printf(char *format, ...)
{
	va_list args;

	va_start(args, format);
	int count = 0;
	
	while (*format)
	{
	if (*format == '%')
	format++;
	if (*format == '%')
	{
	count += printing_percentage();
	}
	else if (*format == 'c')
	{
	count += printing_char(args);
	}
	else if (*format == 's')
	{
	count += printing_string(args);
	}
	}
	else
	count += putchar(*format);
	format++;
}
va_end(args);
return (count);
}
