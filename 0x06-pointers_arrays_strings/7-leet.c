#include "main.h"
#include "2-strlen.c"
/**
 * leet - encodes a string into 1337
 * @str: string to be incoded
 * Return: returns an encode string
 */
char *leet(char *str)
{
	int i = 0;
	char leetMap[256] = {0};

	leetMap['a'] = leetMap['A'] = '4';
	leetMap['e'] = leetMap['E'] = '3';
	leetMap['o'] = leetMap['O'] = '0';
	leetMap['t'] = leetMap['T'] = '7';
	leetMap['l'] = leetMap['L'] = '1';

	while (str[i])
	{
		if (leetMap[(unsigned char)str[i]])
		{
			str[i] = leetMap[(unsigned char)str[i]];
		}

		i++;
	}

	return (str);
}
