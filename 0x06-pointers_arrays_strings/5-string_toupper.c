#include "main.h"
#include <stdio.h>
/**
 * string_toupper - Changes all lowercase to upper
 * @str: string to be converted
 * Return: returns string that is coverted
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{

		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}

		i++;
	}

	return (str);
}
