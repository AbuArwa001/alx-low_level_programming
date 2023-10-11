#include "function_pointers.h"

/**
 * int_index - searches for integer
 * @size: is the number of elements in the array array
 * @array: array to be seacrhed
 * @cmp:is a pointer to the function to be used to compare values
 * Return: returns an int found
 */


int int_index(int *array, int size, int (*cmp)(int))
{
	int int_s = 0;

	if (size <= 0)
	{
		return (-1);
	}
	if (array != NULL && cmp != NULL)
	{
		for (; int_s < size ; int_s++)
		{
			if (cmp(array[int_s]) == 1)
			{
				return (int_s);
			}
		}
	}
	return (-1);
}
