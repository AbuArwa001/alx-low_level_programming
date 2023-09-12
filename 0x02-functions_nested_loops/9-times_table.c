#include "main.h"

/**
 * times_table - prints 9 times table
 *
 *
 *
 *
 *
 */

void times_table(void)
{
	int i = 0, j, p;

	for (; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			p = i * j;

			if (p >= 10)
			{
				_putchar((p / 10) + '0');
				_putchar((p % 10)  + '0');
				if (j == 9)
				{
					_putchar( '\n');
					continue;
				}

			        _putchar(',');
			        _putchar(' ');

			}else
			{
				_putchar(p + '0');

				if (j == 9)
				{
					_putchar( '\n');
					continue;
				}

				_putchar(',');
				_putchar(' ');
				_putchar(' ');

			}


		}
	}
}
