#include "main.h"
#include <stdio.h>
#include <stdbool.h>
#include "9-strcpy.c"
#include <ctype.h>
int power(unsigned int a, unsigned int b);
char *trimstr(char *str);
/**
 * _atoi - converts string to integer
 *
 *@s: string to be converted
 * Return: returns an int for string converted
 */

int _atoi(char *s)
{
	int result = 0, j = 0, i = 0;
	bool neg = false;
	char *st = trimstr(s);


	j = power(10, (_strlen(st) - 1));

	if (_strlen(st) == 0)
	{
		return (0);
	}
	if (*(st + 0)  == '-')
	{
		i = 1;
		j /= 10;
		neg = true;
	}
	while (*(s + i) != '\0')
	{
		result += ((*(st + i) - '0') * j);
		i++;
		j /= 10;
	}
	if (neg)
	{
		result = -result;
	}

	return (result);
}
/**
 * power - finds the power of a number
 * @base: the base to be used
 * @expo: exponential to be used
 * Return: returns the power of base to expo
 */
int power(unsigned int base, unsigned int expo)
{
	unsigned int i = 1;
	int res = 1;

	for (; i <= expo; i++)
	{
		res *=  base;
	}

	return (res);
}
/**
 * trimstr - trims the string to get only digits
 * @str: string to be trimmed
 * Return: returns a string of only numbers
 */
char *trimstr(char *str)
{
	bool flag = false;
	int j = 0, k = 1, l = 0;
	char *tmp = malloc(sizeof(char) * _strlen(str));


	for (; j <= _strlen(str); j++)
	{
		for (k = 0; k <= 9 ; k++)
		{

			if ((str[j - 1] == '-') && ((str[j] - '0') == k))
			{
				tmp[l] = str[j - 1];
				l++;
				tmp[l] = str[j];
				flag = true;
				l++;
				break;
			}
			else
			{
				if (str[j] - '0' == k)
				{
					if (flag == true && l != 0)
					{
						tmp[l] = str[j];
						l++;
						break;
					}
					else if (flag == false && l == 0)
					{
						tmp[l] = str[j];
						l++;
						flag = true;
						break;
					}
					else if (flag == false)
					{
						tmp[l] = '\0';
						return (tmp);
					}

				}
				if ((str[j] + '0' != k) && (k == 9))
				{

					flag = false;
				}

			}
		}
	}
	tmp[l] = '\0';
	return (tmp);
}
