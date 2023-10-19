#include "main.h"
/**
 * _printf- function to implement printf format
 * @format:what we want to print
 *
 * Return: no of outputs
*/
int _printf(const char *format, ...)
{
	int count;
	va_list var;

	va_start(var, format);
	if ((format == NULL) || (strlen(format) == 0))
		return (-1);
	for (; *format != '\0'; format++)
	{
		if (*format == '%')
		{
			format++;
			count = format_conversion(var, format, count);
		}
		else
		{
			count = _putchar(*format);
		}
	}
	return (count);
}
