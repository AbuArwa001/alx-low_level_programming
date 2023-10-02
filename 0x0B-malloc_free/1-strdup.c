#include "main.h"
#include "2-strlen.c"

/**
 * _strdup - allocates new memory location for the string
 * @str: string to be allocated
 * Return: returns newely allocated memory address
 */
char *_strdup(char *str)
{
	int len = _strlen(str), i = 0;
	char *s = malloc(sizeof(char) * len);

	if (s == NULL)
	{
		return (NULL);
	}
	else
	{
		for (; i < len; i++)
		{
			s[i] = str[i];
		}

		return (s);
	}

}
