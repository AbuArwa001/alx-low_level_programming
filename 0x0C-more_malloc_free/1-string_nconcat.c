#include "main.h"
#include "2-strlen.c"
/**
 * string_nconcat - concatenates two string of s2 t n bytes
 * @s1: string one
 * @s2: string 2 to be used
 * @n: number of bytes to concatenate to s2
 * Return: returns the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, ttl = 0, i = 0;
	char *str = NULL;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	if (n > len2)
	{
		n = len2;
	}

	ttl = len1 + n;
	str = malloc(sizeof(char) * ttl + 1);

	if (str == NULL)
		return (NULL);

	for (; i < ttl; i++)
	{
		if (i < len1)
			str[i] = s1[i];
		else
			str[i] = *s2++;
	}

	str[i] = '\0';
	return (str);
}
