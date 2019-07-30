#include "holberton.h"
/**
* print_numbers - print number
* @n: integer
*
* Return: nothing
*/
void print_numbers(int n)
{
unsigned int up = 0;

if (n % 10 < 0)
{
_putchar('-');
up = -n;
}
else
{
up = n;
}
if (up < 10)
{
_putchar('0' +  (up % 10));
}
else
{
print_numbers(up / 10);
_putchar('0' + up % 10);
}
}

