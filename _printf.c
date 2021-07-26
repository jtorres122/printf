#include "holberton.h"

/**
 * _printf - function
 * @format: parameter
 * Return: counter
 */
int _printf(const char *format, ...)
{
	int idx, counter = 0;
	va_list list;

	va_start(list, format);

	for (idx = 0 ; format[idx] != '\0' ; idx++)
	{
		if (format[idx] == '%')
		{
			if (format[idx + 1] != 's' && format[idx + 1] != 'c')
			{
				_putchar(format[idx + 1]);
				counter++;
			}
			else
			{
				counter += modifier(format[idx + 1], list);
			}
			idx++;
		}
		else
		{
			_putchar(format[idx]);
			counter++;
		}
	}

	va_end(list);

	return (counter);
}
