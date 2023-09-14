#include "main.h"

/**
 * print_triangle- prints a trianle in the terminal
 * @size: is sie of the triangle to be printed
 *
 */
void print_triangle(int size)
{	int i, j, k;


	if (size <= 0)
	{

		_putchar('\n');
		return;
	}

	else
	{

		for (i = 1; i <= size; i++)
		{

			if (i < 0)
			{	_putchar('\n');
				return;
			}

			for (j = 0; j < size - i; j++)
			{	_putchar(' ');
			}

			for (k = 1; k <= i ; k++)
			{

				_putchar('#');
			}

			_putchar('\n');
		}
	}

}
