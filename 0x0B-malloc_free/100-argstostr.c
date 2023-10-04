#include "main.h"
#include "2-strlen.c"
#include <stdio.h>

/**
 * argstostr - conctenate arguments of arguments
 * @ac: argument count
 * @av: aruments vector
 * Return: returs final coctenated string
 */
char *argstostr(int ac, char **av)
{
	char *ch = NULL, *temp = NULL;
	int i = 0, j = 0, ttl = 0, k = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (; j < ac; j++)
	{
		for (k = 0; av[j][k] ; k++)
			ttl++;
		ttl++;
	}
	ch = malloc(sizeof(char) * ttl);

	if (ch == NULL)
	{
		return (NULL);
	}

	temp = ch;

	for (; i < ac ; i++)
	{
		for (j = 0; av[i][j] ; j++)
		{
			*temp++ = av[i][j];
		}

		*temp++ = '\n';
	}

	*temp = '\0';

	return (ch);
}
