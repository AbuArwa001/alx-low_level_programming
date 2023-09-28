#include "main.h"
#include <stdbool.h>
/**
 * wildcmp_helper - help compare 2 strings
 * @s1: firts strin to be scanned
 * @s2: second string to be scanned
 * Return: RETURNS TRUE Or FALSE
 */
bool wildcmp_helper(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (true);
	}

	if (*s2 == '*')
	{
		return (wildcmp_helper(s1, s2 + 1) || (*s1 != '\0' &&
wildcmp_helper(s1 + 1, s2)));
	}

	if (*s1 == *s2)
	{
		return (wildcmp_helper(s1 + 1, s2 + 1));
	}

	return (false);
}
/**
 * wildcmp - checks if two strings are equal
 * @s1: first string to be used
 * @s2: second string to be used
 * Return: returns 1 if equal and 0 if not equal
 */
int wildcmp(char *s1, char *s2)
{
	return (wildcmp_helper(s1, s2) ? 1 : 0);
}
