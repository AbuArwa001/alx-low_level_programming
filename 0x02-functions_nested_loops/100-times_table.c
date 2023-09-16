#include "main.h"
void print_times_cell(int cell);
void print_times_row(int row, int n);

/**
 * print_times_table - prints the times table up to n
 * @n: the number up to which to print the times table
 */

void print_times_table(int n)
{
	int i = 0;

	if (n >= 15 || n <= 0)
	{

		return;
	}

	for (i = 0; i <= n; i++)
	{
		print_times_row(i, n);
	}
}

/**
 * print_times_row - prints a single row of the times table
 * @row: the row number
 * @n: the maximum value for the table
 */
void print_times_row(int row, int n)
{
	int j = 0;

	for (j = 0; j <= n; j++)
	{
		print_times_cell(row * j);
		if (row == 0 && j != n)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar(' ');
			continue;
		}
		if (j != n)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}

/**
 * print_times_cell - prints a single cell of the times table
 * @cell: the value of the cell
 */
void print_times_cell(int cell)
{
	if (cell <= 9)
	{
		if (cell != 0)
		{
			_putchar(' ');
			_putchar(' ');
		}
		_putchar(cell + '0');
	}
	else
		if (cell <= 99)
		{
			_putchar(' ');
			_putchar((cell / 10) + '0');
			_putchar((cell % 10) + '0');
		}
		else
		{
			_putchar((cell / 100) + '0');
			_putchar(((cell / 10) % 10) + '0');
			_putchar((cell % 10) + '0');
		}
}
