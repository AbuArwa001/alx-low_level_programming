#include "search_algos.h"
#include <math.h>
int binary_search_helper(int *array, size_t size, size_t start, size_t end,
int value)
{
	size_t i = 0, mid = 0;

	if (start > end)
		return (-1);

	printf("Searching in array: ");

	for (i = start; i <= end; i++)
	{
		printf("%d", array[i]);

		if (i < end)
			printf(", ");
	}

	printf("\n");

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
	size_t mid, i = 0;

	if (!array)
		return (-1);

	printf("Searching in array: ");

	for (i = 0; i <= size - 1; i++)
	{
		printf("%d", array[i]);

		if (i < size - 1)
			printf(", ");
	}

	printf("\n");

	mid = floor((size) / 2);

	if (array[mid] == value)
		return (mid);

	if (array[mid] < value)
	{
		return  (binary_search_helper(array, size, mid + 1, size - 1, value));
	}
	else
		if (array[mid] > value)
		{
			right = mid - 1;
			return  (binary_search_helper(array, size, 0, right, value));
		}

	idx = binary_search_helper(array, size, left, right, value);
	return (idx);
}
