#include "main.h"

/*******_putchar.c*********/

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/********_strlen**********/
/**
 * _strlen - func that returned the lenght of string
 * @s: input string
 *
 * Return: len
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i)
		;
	return (i);
}
/****format_conversion********/
/**
 * format_conversion - func for format specifier
 * @var: variadic arg
 * @format: input string
 * @count: counter
 *
 * Return: no of printed
 */
int format_conversion(va_list var, const char *format, int count)
{
	int conv;
	char *s;

	conv = count;
	switch (*format)
	{
		case 'c':
			conv = _putchar(va_arg(var, int));
			format++;
			break;
		case 's':
			s = va_arg(var, char *);
			conv = _putchar(*s);
			format++;
			break;
		case '%':
			conv = putchar('%');
			format++;
			break;
		default:
			/*conv = other_conversion(var, format, count);*/
			break;
	}
	return (conv);
}
