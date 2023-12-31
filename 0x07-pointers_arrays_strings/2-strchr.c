#include "main.h"
/**
 * _strchr - splices the string by returning the matching charcter of s
 * @s: string to be used
 * @c: charcter to be searched
 * Return: returns the first occurnce of c to the end of the string
 *         returns NULL if the character not found
 */

char *_strchr(char *s, char c)
{
	while (*s++ != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
	}

	return (s);
}
