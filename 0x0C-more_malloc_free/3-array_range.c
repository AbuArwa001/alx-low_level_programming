#include "main.h"
/**
 * array_range - creates an arrray of ints from min to max
 * @min: starting element
 * @max: last element
 * Return: returns the array created
 */
int *array_range(int min, int max)
{
	int *arr = NULL, len = (max - min) + 1, i = 0;

	if (min > max)
	{
		return (NULL);
	}

	arr = malloc(sizeof(int) * len);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (; min <= max; min++)
	{
		arr[i++] = min;
	}

	return (arr);
}
