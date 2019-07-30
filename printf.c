#include <stdarg.h>
#include "holberton.h"
#include <unistd.h>
/**
 * _printf - produces output according to a format
 * @format: string to be printed. Might have directives
 *
 * Return: number of chars printed
 */
int _printf(const char *format, ...)
{
	va_list chars;
	int contador;

	contador = 0;
	if (format)
	{
		va_start(chars, format);
		while (*format != '\0')
		{
			if (*format == '%')
			{
				format++;
				checkFlag(&contador, &format, chars);
			}
			else
			{
				contador += write(1, format, 1);
				format++;
			}
		}
		va_end(chars);
		return (contador);
	}
	return (0);
}
