#include "main.h"
/**
 * _puts - Prints a String followed by a new line
 * @str: string to be printed
 */
void _puts(char *str)
{

	_putchar(*str);

	while (*(++str))
	{
		_putchar(*str);
	}
	_putchar('\n');
}
