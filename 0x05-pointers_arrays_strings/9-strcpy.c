#include <stddef.h>
#include <stdlib.h>
#include "main.h"
#include "2-strlen.c"
/**
 * _strcpy - copies the string pointed by src
 * @src: the source string to be copied
 * @dest: the string pointer to be returned
 *
 * Return: Will return a sttring copied
 */

char *_strcpy(char *dest, char *src)
{
	int len = _strlen(src) + 1, i = 0, j = 0;
	char *tmp = malloc(sizeof(char) * len);


	if (_strlen(src) == 0)
	{
		return (NULL);
	}
	while (*(src + i) != '\0')
	{
		tmp[i] = *(src + i);
		i++;
	}
	*(tmp + i) = '\0';
	while (j <= i)
	{
		dest[j] = *(tmp + j);
		j++;
	}
	return (dest);
}
