#include "main.h"

/**
 *  print_diagonal- prints line the code
 * @n: is number of times "\" should be printed
 *
 */
void print_diagonal(int n)
{	int i, j;


	if (n <= 0)
	{

		_putchar('\n');
		return;
	}

	else
	{

		for (i = 1; i <= n; i++)
		{
			if (i < 0)
			{
				_putchar('\n');
				return;
			}
			for (j = 1; j <= i; j++)
			{
				_putchar(' ');
			}

			_putchar('\\');
			_putchar('\n');
		}
	}

}
