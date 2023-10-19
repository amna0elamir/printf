#include "main.h"
/**
 * _printf-print format
 * @format:what we want toprint
 * Return:intger
*/
int _printf(const char *format, ...)
{
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
				count += printing_char(va_list);
			}
			else if (*format == 's')
			{
				count += printing_string(va_list);
			}	
		}
		else
		{
			count += printing_string(*format);
			format++;
		}
	}
	va_end(args);
	return (count);
>>>>>>> fe2933ca365bf4e99a3cbfcd79039cd61d8e86a0
}
