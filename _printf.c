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
}
