#include "main.h"
#include "2-strlen.c"
#include <stdio.h>
/**
 * str_conc - concatenates two strings
 * @s1: first string
 * @s2: second  string
 * Return: returns a pointer to the result str
 */

char *str_conc(char *s1, char *s2)
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
		return (NULL);
	while (i < len)
	{
		if (i <= _strlen(s1))
		{
			if (i == _strlen(s1))
				str[i] = '\n';
			else
				str[i] = s1[i];
		}
		else if (i > _strlen(s1))
		{
			str[i] = *s2++;
		}
		i++;
	}
	str[i] = '\0';
	return (str);
}
/**
 * argstostr - conctenate arguments of arguments
 * @ac: argument count
 * @av: aruments vector
 * Return: returs final coctenated string
 */
char *argstostr(int ac, char **av)
{
	char *ch = NULL;
	int i = 1, j = 0, ttl = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (; j < ac; j++)
	{
		ttl += _strlen(av[j]) + 1;
	}

	ch = malloc(sizeof(char) * ttl);

	if (ch == NULL)
	{
		return (NULL);
	}

	ch = av[0];

	for (; i < ac ; i++)
	{
		ch = str_conc(ch, av[i]);
	}

	ch[_strlen(ch)] = '\n';

	return (ch);
}
