#include "main.h"
/**
 * set_bit - sets the value of a given index to 1
 * @index: index to be set
 * @n: number to be changed
 * Return: returns 1 if success and -1 if fail
 *
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n = (*n | (1UL << index));
	return (1);

}
