#include "function_pointers.h"

/**
 * array_iterator - execute every element in the using function pointer
 * @array: array to be used
 * @size: size of the array
 * @action: the fuction used to execute element
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL)
	{
		for (; i < size; i++)
		{
			action(array[i]);
		}
	}
}
