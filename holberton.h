#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>

int _putchar(char c);
int _printf(const char *format, ...);
int modifiers(char modifier, va_list list);
int sprinter(char *str);
int cprinter(char c);
int int_printer(int i);

#endif /* _HOLBERTON_H_ */
