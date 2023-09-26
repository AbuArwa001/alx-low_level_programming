#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of diagonals of a square matrix
 * @a: 2-dimensional square array
 * @size: size of the array (number of rows/columns)
 */
void print_diagsums(int *a, int size)
{
	int row, col;
	int sum_diag1 = 0;
	int sum_diag2 = 0;

	for (row = 0; row < size; row++)
	{
		for (col = 0; col < size; col++)
		{
			if (row == col)
				sum_diag1 += a[row * size + col];

			if (row == size - col - 1)
				sum_diag2 += a[row * size + col];
		}
	}

	printf("%d, %d\n", sum_diag1, sum_diag2);
}
