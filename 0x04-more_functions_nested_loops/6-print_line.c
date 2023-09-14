#include "main.h"

/**
 * print_line - prints line the code
 * @n: is number of times "_" should be printed
 *
 */
void print_line(int n)
{	int i;

	if (n <= 0)
	{

		_putchar('\n');
		return;
	}

	else
	{

		for (i = 1; i <= n; i++)
		{

			_putchar('_');
		}
	}

	_putchar('\n');
}
