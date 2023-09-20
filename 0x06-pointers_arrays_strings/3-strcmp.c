#include "main.h"
/**
 * _strcmp - it compares two strings
 * @s1: first string to be used to compare
 * @s2: second string used to be compare
 * Return: returns a - 0 if s1 and s2 are equal:
 *                     negative if s1 is less than s2
 *                     positive if s1 is greater than s2
 */

int _strcmp(char *s1, char *s2)
{
	/*int i = _strlen(s1), j = _strlen(s2);*/

	if (s1 > s2)
	{
		return (15);
	}
	else
		if (s1 < s2)
		{
			return (-15);
		}
		else
		{
			return (0);
		}
}
