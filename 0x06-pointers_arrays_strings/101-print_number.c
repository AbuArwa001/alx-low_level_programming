#include "main.h"
#include <limits.h>
/**
 * print_number - prints integers using _putchar
 * @n: is the number to be printed
 */
void print_number(int n)
{
	if (n > INT_MAX || n < INT_MIN)
	{
		_putchar('0');
		return;
	}

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10 != 0)
		print_number(n / 10);

	_putchar(n % 10 + '0');
}
