#include "holberton.h"
/**
* print_number - Prints an integer.
* @numb: integer to be printed.
* @value: If number is signed or unsigned.
* Return: Number of chars printed.
*/
unsigned int print_number(int numb, short value)
{
	unsigned int result;
	unsigned int diference = 1;
	unsigned int ch;
	unsigned int chars = 0;

	if (value)
	{
		if (numb < 0)
		{
			numb *= -1;
			_putchar('-');
			chars++;
		}
		ch = numb;
	}
	else
	{
		ch = (unsigned int)numb;
	}
	while (ch / 10)
	{
		diference *= 10;
		ch /= 10;
	}
	_putchar(ch + '0');
	chars++;
	while (diference >= 10)
	{
		result = numb % diference;
		diference /= 10;
		_putchar(result / diference + '0');
		chars++;
	}
	return (chars);
}
