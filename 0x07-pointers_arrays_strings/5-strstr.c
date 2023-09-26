#include "main.h"
#include <stdio.h>

/**
 * _strstr - Finds the first occurrence of the substring
 *           needle in the string haystack
 * @haystack: String to be searched
 * @needle: Substring to search for
 * Return: Pointer to the first occurrence
 *         of needle in haystack, or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (needle == NULL)
		return (NULL);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0' && haystack[i + j] == needle[j]; j++)
		{
		}

		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
	}

	return (NULL);
}
