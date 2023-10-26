#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0
 * @index: index to be set
 * @n: number to be set
 * Return: returns 1 if success and -1 if failed
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n = (*n & ~(1UL << index));
	return (1);
}
