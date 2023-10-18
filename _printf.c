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
<<<<<<< HEAD

	count = 0;

	if  (*format)
=======
	int count = 0;
	
	while (*format)
>>>>>>> 9e53da6ed678647bf4c35bfa8e6d9e46f1cd5065
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
			count += _putchar(*format);
			format++;
		}
	}
<<<<<<< HEAD
	else  if(*format == 's')
	{
	count += printing_string(args);
	}
	}
	else
	count += putchar(*format);
	format++;
}
va_end (int args);

=======
va_end(args);
>>>>>>> 9e53da6ed678647bf4c35bfa8e6d9e46f1cd5065
return (count);
}
