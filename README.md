# _printf

The printf() function sends formatted output to the standard output (screen).

## Description

Our own version of C printf() function from stdio library. Our function _printf() replicate t\
he process the original printf function does, it takes a string as a first arg and makes use \
of variadic functions to take multiple args. This project is part of the curriculum for Holbe\
rton School.

## Usage

This project should be compiled with the following command:
```bash
gcc -Wall -Wextra -Werror -pedantic -Wno-format *.c
```

## Code Samples

```c
#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
        int len;
        int len2;
        char *p;

        p = NULL;
        len = _printf("Let's try to printf a simple sentence.\n");
        len2 = printf("Let's try to printf a simple sentence.\n");
        _printf("Character:[%c] TEXT\n", 'H');
        printf("Character:[%c]\n", 'H');
        len = _printf("String:[%s]\n", "I am a string !");
        len2 = printf("String:[%s]\n", "I am a string !");
        _printf("Len:[%d]\n", len);
        printf("Len:[%d]\n", len2);
        printf("counter: [%d]\n", len);
        printf("Counter: [%d]\n", len2);
        len = _printf("%s", p);
        len2 = printf("Percent:[%%%]\n");
        _printf("Len:[%d]\n", len);
        printf("Len:[%d]\n", len2);
        _printf("Unknown:[%r]\n");
        printf("Unknown:[%r]\n");
        return (0);
}
```

## Contributors

* Jhon Arias
* Juan Quintero

## Contributing
Pull requests are welcome.

## Characters

Special characters that can be passed in the string to be formatted:

* %d or %i got replaced by the value of an integer variable
* %c got replaced by the value of a character variable
* %s got replaced by the value of a string variable

