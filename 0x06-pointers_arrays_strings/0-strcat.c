#include "main.h"
#include "2-strlen.c"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strcat - it concantenates two strings
 * @dest: string to be appended to
 * @src: string to be appended from
 * Return: retursns combined strins
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int new_length = 0;

	if (src == NULL)
	{
		return (dest);
	}
	else if (dest == NULL)
	{
		return (src);
	}
	i =  _strlen(dest);
	new_length = i + _strlen(src);
	while (*src != '\0')
	{
		*(dest + i) = *src;
		src++;
	}

	*(dest + new_length) = '\0';

	return (dest);
}
