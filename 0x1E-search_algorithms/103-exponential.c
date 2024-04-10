#include "search_algos.h"
#include <math.h>

/**
 * min - search items in lineaar algorith
 * @a: value to check
 * @b: value to check
 * Return: min value
 *
*/
int min(int a, int b)
{
	if (a > b)
		return (b);
	else
		return (a);
}
/**
 * binary_search_exponent - search items in lineaar algorith
 * @array: array to search from
 * @start: start of the array
 * @end: end of the array
 * @value: value to search
 * Return: index where v<lue is located
 *
*/
int binary_search_exponent(int *array, size_t start, size_t end, int value)
{
	size_t i = 0, mid = 0, left = 0, right = 0;

	if (!array)
		return (-1);

	left = start;
	right = end;

	while (left <= right)
	{
		printf("Searching in array: ");

		for (i = left; i <= right; i++)
		{
			if (i == right)
			{
				printf("%d", array[i]);
			}
			else
			{
				printf("%d, ", array[i]);
			}


		}

		printf("\n");

		mid = floor((left + right) / 2);

		if (array[mid] < value)
			left = mid + 1;
		else
			if (array[mid] > value)
				right = mid - 1;
			else
				return (mid);
	}

	return (-1);
}

/**
 * exponential_search -  a function that searches for a value in a
 * sorted array of integers using the Exponential search algorithm
 * @array: array to search from
 * @size: size of the array
 * @value: value to search
 * Return: index where value is located
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1;

	if (!array)
		return (-1);

	if (array[0] == value)
	{
		return (0);
	}

	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i *= 2;
	}

	printf("Value found between indexes [%ld] and [%d]\n",
	       i / 2, min(i, size - 1));
	return (binary_search_exponent(array, i / 2, min(i, size - 1), value));
}
