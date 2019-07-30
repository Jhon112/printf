#include "holberton.h"
#include <stdarg.h>
#include <unistd.h>
/**
 * checkFlag - check the first char next to a % char
 * @contador: address to counter
 * @format: next address after %'s address
 * @chars: va_list initialized
 *
 * Return: 0 if error, 1 otherwise
 */
int checkFlag(int *contador, const char *format, va_list chars)
{
	char caracter;
	char *string;
	int length;

	switch (*format)
	{
	case 'c':
		caracter = (char)va_arg(chars, int);
		write(1, &caracter, 1);
		*contador += 1;
		return (1);
	case 's':
		string = va_arg(chars, char *);
		if (string == NULL)
			return (0);
		length = strlength(string);
		write(1, string, length);
		*contador += length;
		return (1);
	default:
		return (0);
	}
}