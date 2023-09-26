#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints sum of diagnal
 * @a: 2 dimensional array
 * @size: size of the array
 * Return: returns sum of daignals;
 */


void print_diagsums(int *a, int size)
{

	int i = 0, sum = 0, sum1 = 0;


	for (; i < size * size ; i++)
	{
		if (size > 3 && i % 6 == 0)
		{
			sum += *(a + i);

		}
		else
			if (size <= 3 && i % 4 == 0)
			{
				sum += *(a + i);
				if (i  != (size * size) - 1)
				{
					sum1 += *(a + i);
				}
			}
			else
				if (size <= 3 && i % 2 == 0)
				{
					sum1 += *(a + i);
				}
				else
					if (size > 3 && i % 4 == 0)
					{
						sum1 += *(a + i);
					}

		if (i == 12)
		{
			sum1 += *(a + i);
		}
	}
	printf("%d , %d\n", sum, sum1);
}
