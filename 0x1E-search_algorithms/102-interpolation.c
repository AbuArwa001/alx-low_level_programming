#include "search_algos.h"

/**
 * interpolation_search - search for value in array
 * @array: array to search from
 * @size: size of the array
 * @value: value to search
 * Return: index where value is located
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, pos;

	if (array == NULL)
	{
		return (-1);
	}


	while ((array[high] != array[low]) && (value >= array[low]))
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])) *
(value - array[low]));

		if (pos >= size)
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			return (-1);
		}

		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return (pos);

		if (array[pos] > value)
			high = pos - 1;
		else
			low = pos + 1;
	}
	if (value == array[low])
		return (low);

	printf("Value checked array[%ld] is out of range\n", pos);

	return (-1);
}
