#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strstr - Finds the first occurrence of the substrin needle in the
 *           str haystack
 * @haystack: strin to be scanned
 * @needle: string to be seacrhed
 * Return: returns the remaining from the needle found
 *         returns null if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0, k = 0;

	if (haystack[0] == '\0')
	{
		return ("NULL");
	}

	while (haystack[i] != '\0')
	{

		k = i;
		j = 0;

		while (haystack[k] == needle[j] && needle[j] != '\0')
		{
			k += 1;
			j++;
		}

		if ((needle[j] != '\0' && j != 0) && (haystack[i + 1] == '\0'))
		{
			return ("NULL");
		}
		else
			if (j != 0 && needle[j] == '\0')
			{
				return (haystack + i);
			}

		i++;

	}

	return (haystack);
}
