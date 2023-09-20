#include "main.h"
#include "2-strlen.c"
/**
 * leet - encodes a string into 1337
 * @str: string to be incoded
 * Return: returns an encode string
 */
char *leet(char *str)
{
	int i = 0, k;
	char *cipher = "AaEeOoTtLl";

	while (str[i] != '\0')
	{
		for (k = 0; k < _strlen(cipher); k++)
		{
			while (cipher[k] == str[i])
			{
				while ((k / 2) == 0)
				{
					str[i] = '4';
					break;
				}
				while ((k / 2) == 1)
				{
					str[i] = '3';
					break;
				}
				while ((k / 2) == 2)
				{
					str[i] = '0';
					break;
				}
				while ((k / 2) == 3)
				{
					str[i] = '7';
					break;
				}
				while ((k / 2) == 4)
				{
					str[i] = '1';
					break;
				}
			}
		}
		i++;
	}
	return (str);
}
