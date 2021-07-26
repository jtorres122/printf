#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <stdio.h>
#include <stdarg.h>
#include <limits.h>

int _putchar(char c);
int _printf(const char *format, ...);
int modifiers(char modifier, va_list list);
int sprinter(char *str);
int cprinter(char c);

#endif /* _HOLBERTON_H_ */
