#include "search_algos.h"
#include <math.h>
#include <stdio.h>

/**
 * print_array - Print elements of an array within a specified range
 * @array: Pointer to the first element of the array
 * @start: Index of the first element to print
 * @end: Index of the last element to print
 *
 * Description: This function prints the elements of the array within the
 * specified range [start, end] in the format "Searching in array: element1,
 * element2, ..., elementN".
 */
void print_array(int *array, size_t start, size_t end)
{
	size_t i = 0;

	printf("Searching in array: ");

	for (i = start; i <= end; i++)
	{
		printf("%d", array[i]);

		if (i < end)
			printf(", ");
	}

	printf("\n");
}

int binary_search_helper(int *array, size_t size, size_t start, size_t end,
int value)
{
	size_t mid = 0;

	if (start > end)
		return (-1);

	print_array(array, start, end);

	mid = floor((end + start) / 2);
	size = mid - 1;

	if (array[mid] < value)
	{
		start = mid + 1;
		mid = binary_search_helper(array, size, start, end, value);
	}
	else
		if (array[mid] > value)
		{
			end = mid - 1;
			mid = binary_search_helper(array, size, start, end, value);
		}
		else
			if (array[mid] == value)
			{
				return (mid);
			}

	return (mid);
}
/**
 * advanced_binary -  function that searches for a
 * value in a sorted array of integers.
 * @array: array to search from
 * @size: size of the array
 * @value: value to search
 * Return: index where value is located
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, idx = 0;
	size_t mid;

	if (!array)
		return (-1);

	print_array(array, left, right);

	mid = floor((size) / 2);

	if (array[mid] == value)
		return (mid);

	if (array[mid] < value)
	{
		return (binary_search_helper(array, size, mid + 1, size - 1, value));
	}
	else if (array[mid] > value)
	{
		right = mid - 1;
		return (binary_search_helper(array, size, 0, right, value));
	}

	idx = binary_search_helper(array, size, left, right, value);
	return (idx);
}
