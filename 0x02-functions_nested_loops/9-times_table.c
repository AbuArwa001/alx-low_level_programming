#include "main.h"
/**
* procces - procces a times table
* @p: product of i and j
* @i: column of the table
* @j: row of the table
*/
void procces(int p, int i, int j)
{
	for (j = 0; j <= 9; j++)
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
 * times_table - prints 9 times table
 *
 *
 *
 *
 *
 */

void times_table(void)
{	int i = 0, j = 0, p = 0;

	for (; i <= 9; i++)
	{	procces(p, i, j);
	}
}
