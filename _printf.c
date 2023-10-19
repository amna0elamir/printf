#include "main.h"
/**
 * _printf- function to implement printf format
 * @format:what we want to print
 *
 * Return: no of outputs
*/
int _printf(const char *format, ...)
{
<<<<<<< HEAD
	unsigned int count;
	va_list args;
	va_start(args, format);
	count = 0;
<<<<<<< HEAD

	if  (*format)
	{
	while (*format)
	{
	if (*format == '%')
	{
	format++;
	if (*format == '%')
	{
	count += printing_percentage();
	}
	else if (*format == 'c')
	{		
	count += printing_char(args);
	}
	else  if(*format == 's')
	{
	count += printing_string(args);
	}
	}
	else
	count += putchar(*format);
	format++;
}
va_end(int args);
return (count);
=======
	while (*format)
=======
	int count;
	va_list var;

	va_start(var, format);
	if ((format == NULL) || (strlen(format) == 0))
		return (-1);
	for (; *format != '\0'; format++)
>>>>>>> df0ae87e9b078b042a9ab787f7b3a75e2d6d08e1
	{
		if (*format == '%')
		{
			count = format_conversion(var, format + 1, count);
		}
		else
		{
			count = putchar(*format);
		}
	}
	return (count);
>>>>>>> fe2933ca365bf4e99a3cbfcd79039cd61d8e86a0
}
