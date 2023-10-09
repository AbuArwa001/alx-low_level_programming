#include "main.h"

/**
 * _strncpy - copies a number of characters
 * @dest: the destination of copied charaters
 * @src: the source of characters to be copied
 * @n: number of characters to be copied
 * Return: returns the modified string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (; i < n && *(src + i) != '\0'; i++)
	{
		*(dest + i) = *(src + i);
	}

	for (; i < n; i++)
		dest[i] = '\0';


	return (dest);
}
