#include "main.h"
/**
 * _printf- function to implement printf format
 * @format:what we want to print
 *
 * Return: no of outputs
*/
int _printf(const char *format, ...)
{
	int buffer_id = count = p_count = 0;
	va_list var;
	char buffer[BUFF_SIZE];

	va_start(var, format);
	if ((format == NULL) || (strlen(format) == 0))
		return (-1);
	for (; *format != '\0'; format++)
	{
		if (*format == '%')
		{
			format++;
			count = format_conversion(var, format, count, buffer);
		}
		else
		{
			buffer[buffer_id] = *format;
			if (buffer_id == BUFF_SIZE)
			{
				printbuffer(buffer, &buffer_id);
				count += buffer_id;
			}

		}
	}
	return (count);
}
