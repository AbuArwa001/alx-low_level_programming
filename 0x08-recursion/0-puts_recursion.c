#include "main.h"
/**
 * _puts_recursion - prints a string followed by a new line
 * @s: string to be prited
 */
void _puts_recursion(char *s)
{

	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s++);
	/*s += 1;*/
	_puts_recursion(s);

}
