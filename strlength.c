/**
 * strlength - returns length of a str
 * @str: str to be evaluated
 *
 * Return: length of str
 */
int strlength(char *str)
{
	int length;

	length = 0;
	while (*(str + length) != 0)
		length++;

	return (length);
}
