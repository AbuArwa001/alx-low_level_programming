#include "main.h"

/**
 *  _isdigit - checks if a character is  a digit
 *  @c: charater to be checked
 *  Return: returns 1 if upper
 *          returns 0 if otherwise
 */

int _isdigit(int c)
{

	int i = 48;

	for (; i <= 57; i++)
	{

		if (c == i)
		{

			return (1);
		}
	}

	return (0);
}
