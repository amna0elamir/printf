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

/****** printing_char******/

/**
 * printing_char - function to print character
 * @args: list args
 *
 * Return: 1
 */
int printing_char(va_list args)
{
	int c;

	c = va_arg(args, int);
	_putchar(c);
	return (1);
}

/*********Printing_string******/

/**
 * printing_string - func that print strings
 * @args: list of arg
 *
 * Return: count of printed string
*/
int printing_string(va_list args)
{
	char *s;
	int i;

	s = va_arg(args, char*);
	if (s == NULL)
		return (-1);
	for (i = 0; s[i] != '\0'; ++i)
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
}

/*******Printing_integer.c******/
/**
 * printing_integer - func to print integer in base of 10
 * @args: list of arg
 *
 * Return: count of number print
 */
int printing_integer(va_list args)
{
	int num, count = 0;

	num = va_arg(args, int);

	if (num < 0)
	{
	_putchar('-');
	num = -num;
	count++;
	}
	if (num / 10)
	{
	count += printing_integer(args);
	count++;
	}
	_putchar((num % 10) + '0');
	count++;
	return (count);
}

/*****Percentage*****/
/**
 * printing_percentage - func that print %
 * @args: list of args
 *
 * Return: count of printed
 */
int printing_percentage(va_list args)
{
	return (_putchar('%'));
}
