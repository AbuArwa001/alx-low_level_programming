#include "main.h"

/**
 *  _isupper - checks if a character is upper
 *  @c: charater to be checked
 *  Return: returns 1 if upper
 *          returns 0 if otherwise
 */

int _isupper(int c)
{

	int i = 65;

	for (; i <= 90; i++)
	{

		if (c == i)
		{

			return (1);
		}
	}

	return (0);
}
