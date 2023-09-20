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
{str[i] = (str[i] == 'A' || str[i] == 'a') ? '4' :
(str[i] == 'E' || str[i] == 'e') ? '3' :
(str[i] == 'O' || str[i] == 'o') ? '0' :
(str[i] == 'L' || str[i] == 'l') ? '1' :
(str[i] == 'T' || str[i] == 't') ? '7' :
str[i];
i++;
}

	return (str);
}
