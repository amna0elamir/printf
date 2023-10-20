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
	int conv, ch, buffer_id;
	char *s, buffer[BUFF_SIZE];

	conv = count;
	switch (*format)
	{
		case 'c':
			ch = (va_arg(var, int));
			buffer[buffer_id++] = ch;
			if (buff_ind == BUFF_SIZE)
				printbuffer(buffer, &buffer_id);
				conv += buffer_id;
			break;
		case 's':
			s = va_arg(var, char *);
			while (*s)
			{
				buffer[buffer_id++] = *s;
				s++;
				if (buffer_id == BUFF_SIZE)
					printbuffer(buffer, &buffer_id);
					conv += buffer_id;
			}
			break;
		case '%':
			buffer[buffer_id] = '%';
			if (buffer_id == BUFF_SIZE)
				printbuffer(buffer, &buffer_id);
				conv += buffer_id;
			break;
		default:
			/*conv = other_conversion(var, format, count);*/
			break;
	}
	return (conv);
}
/*********printbuffer************/
/**
 * printbuffer - func that print the buffer content
 * @buffer: buffer array
 * @buffer_id: the buffer index
 *
 * Return: nothing
 */
void printbuffer(char buffer[], int *buffer_id)
{
	int i;

	if (*buffer_id > 0)
	{
		for (i = 0; i < *buffer_id; i++)
		{
			_putchar(buffer[i]);
		}
	}
	*buffer_id = 0;
}
