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

	if (format == NULL)
		return (-1);
	if (format[0] == '%' && format[1] == '\0')
		return (-1);

	va_start(list, format);

	for (idx = 0 ; format[idx] != '\0' ; idx++)
	{
		if (format[idx] == '%' && format[idx + 1] == '%')
		{
			_putchar(format[idx]);
			counter++;
			idx++;
			continue;
		}
		if (format[idx] == '%' && format[idx + 1] != '%')
		{
			if (format[idx + 1] != 's' && format[idx + 1] != 'c')
			{
				_putchar(format[idx]);
				counter++;
			}
			else
			{
				counter += modifiers(format[idx + 1], list);
				idx++;
			}
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
