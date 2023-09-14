#include "main.h"
/**
 * print_number - prints integers using _putchar
 *               it checks the size of the digit then  prints
 * @n: is the number to be printed
 */
void print_number(int n)
{	int tmp;

	if (n == 0)
	{	_putchar(n + '0');

	}

	else
	{

		if (n < 0)
		{	n *= -1;
			_putchar('-');
		}

		if (n < 10)
		{	_putchar(n + '0');
		}

		else if (n >= 10 && n <= 99)
		{	_putchar((n / 10)  + '0');
			_putchar((n % 10) + '0');
		}

		else if (n >= 100 && n <= 999)
		{	tmp = n / 10;
			_putchar((n / 100) + '0');
			_putchar((tmp % 10) + '0');
			_putchar((n % 10) + '0');
		}

		else if (n >= 1000 && n <= 9999)
		{

			_putchar((n / 1000) + '0');
			_putchar(((n / 100) % 10) + '0');
			_putchar(((n % 100) / 10) + '0');
			_putchar((n % 10) + '0');
		}
	}
}
