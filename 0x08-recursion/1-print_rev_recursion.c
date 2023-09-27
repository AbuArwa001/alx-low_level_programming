#include "main.h"
#include "2-strlen.c"
/**
 * _print_rev_recursion - Prints string in reverse
 * @s: string to be reversed
 */
void _print_rev_recursion(char *s)
{

	if (*s == '\0')
	{
		return;
	}

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
