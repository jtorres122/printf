#include "holberton.h"

/**
 * modifiers - function
 * @modifier: parameter
 * @list: parameter
 * Return: 0
 */
int modifiers(char modifier, va_list list)
{
	switch (modifier)
	{
		case 's':
			return (sprinter(va_arg(list, char *)));
		case 'c':
			return (cprinter(va_arg(list, int)));
	}

	return (0);
}

/**
 * sprinter - function
 * @str: parameter
 * Return: idx -1
 */
int sprinter(char *str)
{
	int idx;

	if (str == NULL)
		str = "(null)";

	for (idx = 0 ; str[idx] != '\0' ; idx++)
		_putchar(str[idx]);

	return (idx);
}

/**
 * cprinter - function
 * @c: parameter
 * Return: 1
 */
int cprinter(char c)
{
	_putchar(c);

	return (1);
}
