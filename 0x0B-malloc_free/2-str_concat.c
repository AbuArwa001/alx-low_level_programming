#include "main.h"
#include "2-strlen.c"
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second  string
 * Return: returns a pointer to the result str
 */

char *str_concat(char *s1, char *s2)
{
	char *str = NULL;
	int len = 0, i = 0, j = 0;

	if (s2 == NULL && s1 == NULL)
	{
		s1 = "";
		s2 = "";
	}
	else if (s1 == NULL)
	{
		s1 = "";
	}
	else if (s2 == NULL)
	{
		s2 = "";
	}
	len = _strlen(s1) + _strlen(s2) + 1;
	str = malloc(sizeof(char) * len);
	if (str == NULL)
	{
		return (NULL);
	}
	j = 0;
	while (i < len)
	{
		if (i < _strlen(s1))
		{
			str[i] = s1[i];
		}
		else if (i >= _strlen(s1))
		{
			str[i] = *s2++;
		}
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}
