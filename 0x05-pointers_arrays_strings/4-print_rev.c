#include "main.h"
#include "2-strlen.c"

/**
 * print_rev - prints string in reverse
 * @s: string to be reversed
 */

void print_rev(char *s)
{

	int len = _strlen(s) - 1;

    if (len == 0)
    {
        return;
    }
	while ( len != 0)
	{
		_putchar(*(s + len));
		len--;
	}
	_putchar(*(s + len));
	_putchar('\n');

}
