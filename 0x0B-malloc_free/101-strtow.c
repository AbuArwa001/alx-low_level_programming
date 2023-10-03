#include "main.h"
#include <stdio.h>
/**
 * dealloc - deallocates previousey allocated memory
 *           if the current array is null
 * @newStr: array to be checked
 * @k: current arry number
 * Return: retirns 1 deleted and 0 if not deleted
 */
int dealloc(char **newStr, int k)
{
	int i = 0;

	if (newStr[k] == NULL)
	{
		for (i = 0; i < k; i++)
			free(newStr[k]);
		free(newStr);
		return (1);
	}
	return (0);
}
/**
 * size_of_str - claculates the size of a sring
 * @st: the string to be calculated
 * Return: returns the length of the string
 */
int size_of_str(char *st)
{
	int length = 0, i = 0;

	while (*(st + i) != '\0' && st[i] != ' ')
	{
		length += 1;
		i++;
	}

	return (length);
}
/**
 * find_2d_length - finds the length of 2d array
 * @st:string to be split to form 2 d array
 * Return: number of words in the string
 */
int find_2d_length(char *st)
{
	int length = 0, i = 0, flag = 0;

	while (*(st + i) != '\0')
	{
		flag = 0;

		while (st[i] != ' ' && st[i] != '\0')
		{
			flag = 1;
			i++;
		}

		if (flag == 1)
		{
			length += 1;
		}
		else
			i++;
	}

	return (length);
}
/**
 * strtow - creates a 2d array from str
 * @str: string to be used
 * Return: returns the 2D array
 */
char **strtow(char *str)
{
	char **newStr = NULL;
	int  i = 0, j = 0, k = 0, wd = 0, flag = 0, len = 0;

	if (*str == '\0' || str == NULL)
		return (NULL);

	wd = find_2d_length(str) + 1;
	if (wd == 1)
		return (NULL);
	newStr = malloc(sizeof(char *) * wd);

	if (newStr == NULL)
		return (NULL);
	while (*(str + i) != '\0')
	{
		flag = 0;
		j = 0;
		len = size_of_str(str + i) + 1;
		if (len > 0)
		{
			newStr[k] = malloc(sizeof(char) * len);
			if (dealloc(newStr, k) == 1)
				return (NULL);
		}
		while (str[i] != ' ' && str[i] != '\0')
		{
			newStr[k][j] = str[i++];
			j++;
			flag = 1;
		}
		if (flag == 1)
		{
			newStr[k][j] = '\0';
			k++;
		}
		else
			i++;
	}
	newStr[wd - 1] = NULL;
	return (newStr);
}
