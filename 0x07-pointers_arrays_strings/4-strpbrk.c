#include "main.h"
#include <stdlib.h>

/**
 * _strpbrk - slices the string and returns the remaining the rest of the str
 * @s: source string to be spiced
 * @accept: the str used to screen s
 *
 * Return: returns the pointer begining for str spliced after char from s
 *         is found
 *         returns null if not found
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j = 0;

	while (s[i] != '\0')
	{
		j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}

			j++;

		}

		i++;
	}

	return (NULL);
}
