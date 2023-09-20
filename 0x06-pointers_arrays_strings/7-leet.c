#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: string to be incoded
 * Return: returns an encode string
 */
char *leet(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] == 'A' || str[i] == 'a')
			str[i] = '4';

		if (str[i] == 'E' || str[i] == 'e')
			str[i] = '3';

		if (str[i] == 'O' || str[i] == 'o')
			str[i] = '0';

		if (str[i] == 'T' || str[i] == 't')
			str[i] = '7';

		if (str[i] == 'L' || str[i] == 'l')
			str[i] = '1';

		i++;
	}

	return (str);
}
