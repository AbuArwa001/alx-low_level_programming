#include "main.h"
/**
 * create_array - creates an aray of size and initializes it to c
 * @size: size of the array
 * @c: character to initialize with
 * Return: returns aray
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *ch = malloc(sizeof(c) * size);
	if (size == 0)
	{
		return (NULL);
	}
	if (ch == NULL)
	{
		return (NULL);
	}

	for (; i < size ; i++)
	{
		ch[i] = c;
	}

	return (ch);
}
