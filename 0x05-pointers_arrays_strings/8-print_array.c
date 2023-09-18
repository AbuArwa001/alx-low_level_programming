#include "main.h"
#include <stdio.h>
/**
 * print_array - Prints n elements of array of integers
 * @a: array to be used
 * @n: n elements to be printed
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n ; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("%d", a[i]);
	printf("\n");
}
