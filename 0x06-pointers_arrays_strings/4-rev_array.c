#include "main.h"
#include <stdio.h>
/**
 * reverse_array - rverse the contents of an integer array
 * @a: the array to be reversed
 * @n: number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int tmp = 0, i = 0;

	for (; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}
}
