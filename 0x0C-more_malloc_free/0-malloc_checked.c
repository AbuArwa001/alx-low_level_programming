#include "main.h"
/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory to be allocated
 * Return: retuurns a void pointer that can be converted to any type
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = NULL;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
