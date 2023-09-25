#include "main.h"
#include <stdio.h>
/**
 * _strspn - eturns the length of the initial substring of the string
 *           pointed to
 *           by s that is made up of only those character contained in the
 *           string pointed to by accept.
 * @s: string to be scanned
 * @accept: array of chars to be checked
 * Return:  returns the number of characters
 *          in the initial segment of swhich consist
 *          only of characters from ccept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j = 0, k = 0;
	int flag = 0;

	while (s[j] != '\0')
	{
		k = 0;
		flag = 0;

		while (accept[k] != '\0')
		{
			if (s[j] == accept[k])
			{
				i++;
				flag = 1;
				break;
			}

			k++;
		}

		if (flag == 0)
		{
			break;
		}

		j++;
	}

	return (i);
}
