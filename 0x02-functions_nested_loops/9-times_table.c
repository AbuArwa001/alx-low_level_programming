#include "main.h"
/**
* procces - procces a times table
* @p: product of i and j
* @i: column of the table
* @j: row of the table
*/
void procces(int p, int i, int j, int n)
{
	for (j = 0; j <= n; j++)
	{	p = i * j;
		if (p > 9)
		{	_putchar((p / 10) + '0');
			_putchar((p % 10)  + '0');
			if (j == 9)
			{	_putchar('\n');
				continue;
			}
			_putchar(',');
			_putchar(' ');
		}
		else
		{	_putchar(p + '0');
			if (j == 9)
			{	_putchar('\n');
				continue;
			}
			if (p == 0 || (p == 8 && i == 1))
			{	_putchar(',');
				_putchar(' ');
				_putchar(' ');
				continue;
			}
			if (i >= 5 || p >= 8)
			{	_putchar(',');
				_putchar(' ');
				continue;
			}
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
	}
}
/**
 * print_times_table - prints 9 times table
 *
 * @n: size of the times table
 *
 *
 *
 */

void print_times_table(int n)
{
	int i = 0, j = 0, p = 0;
	for (; i <= n; i++)
	{	procces(p, i, j, n);
	}
}
