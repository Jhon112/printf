#include "holberton.h"
/**
* length_number - return length of number
* @n: number
*
* Return: length
*/
int length_number(int n)
{
int totalDigits = 0;
while (n != 0)
{
n = n / 10;
totalDigits++;
}
return (totalDigits);
}
