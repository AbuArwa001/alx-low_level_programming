#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 *
 * @c: character to be checked
 *
 * Return: returns 1 if c is a letter,lowercase or upper
 *         returns 0 otherwise
 */

int _isalpha(int c)
{
	char ch = 'a';
	char chr = 'A';

	for (; ch <= 'z'; ch++)
	{
		for (; chr <= 'Z'; chr++)
		{
			if (c == chr)
			{
				return (1);
			}
		}

		if (ch == c)
		{
			return (1);
		}
	}
	return (0);
}
