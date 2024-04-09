#include "search_algos.h"

/**
 * linear_search - search items in lineaar algorith
 * @array: array to search from
 * @size: size of the array
 * @value: value to search
 * Return: index where v<lue is located
 *
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		if (array[i] == value)
		{
			return (i);
		}
	}

	return (-1);
}
