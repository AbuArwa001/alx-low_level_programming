#include "main.h"
#include "2-strlen.c"
/**
 * puts_half - prints half of the str
 * @str: string to be sliced
 */
void puts_half(char *str)
{
	int len = _strlen(str), start = 0, last = 0;

	if ((len % 2) == 0)
	{
		start = len / 2;
		while (*(str + start) != '\0')
		{
			_putchar(*(str + start));
			start++;
		}
		_putchar('\n');
	}
	else
	{
		last = len / 2;
		start = len - last;

		while (*(str + start) !=  '\0')
		{
			_putchar(*(str + start));
			start++;
		}
		_putchar('\n');
	}
}
