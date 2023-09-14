#include "main.h"

/**
 * print_square - prints the square of size 'size'
 * @size: is size of the square of "#" should be printed
 *
 */
void print_square(int size)
{	int i, j;


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
			{
				_putchar('\n');
				return;
			}
			for (j = 1; j <= size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}

}
