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
		case 'd':
		case 'i':
			return (int_printer(va_arg(list, int), 0));
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

/**
 * int_printer - function
 * @i: parameter
 * Return: 0
 */
int int_printer(int i, int counter)
{
	unsigned int n = 0;

	if (i < 0)
	{
		_putchar('-');
		counter++;
		n = (i * -1);
	}
	else
	{
		n = i;
	}

	if (n / 10 != 0)
		counter = int_printer(n / 10, counter);

	_putchar(n % 10 + '0');
	counter++;

	return (counter);
}
