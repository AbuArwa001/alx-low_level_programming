#include "search_algos.h"
#include <math.h>

/**
 * jump_search - a function that searches for a value in a sorted
 * array of integers using the Jump search algorithm
 * @array: array to search from
 * @size: size of the array
 * @value: value to search
 * Return: index where value is located
 */
int jump_search(int *array, size_t size, int value)
{
	size_t left = 0, jmp = sqrt(size), right = jmp + left;
	size_t i = 0;

	if (!array)
		return (-1);

	printf("Value checked array[%ld] = [%d]\n", left, array[left]);

	while (right < size && value > array[right])
	{
		printf("Value checked array[%ld] = [%d]\n", right, array[right]);
		left = right;
		right += jmp;
		if (right > size - 1)
			right = size;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", left, right);

	for (i = left; i < right && i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
