#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <stdarg.h>

int _printf(const char *format, ...);
int strlength(char *);
int _putchar(char);
unsigned int  print_number(int);
int checkFlag(int *contador, const char **format, va_list chars);
int length_number(int);

#endif
