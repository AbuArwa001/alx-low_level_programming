#include "main.h"
#include "2-strlen_recursion.c"
/**
 * palindrome - checks if a strin is a palindrom
 * @s1: string to be checked
 * @s2: original string to keep track
 * @len: original length of the original string
 * @len2: decremented length to 0
 * Return: returns 1 if palindrom and 0 if not
 */
int palindrome(char *s1, char *s2, int len, int len2)
{
	char chck = s2[len2];

	if (*s1 == '\0' && chck != '\0')
	{
		return (0);
	}

	if (*s1 != chck)
	{
		return (0);
	}

	if (*s1 == '\0' && chck == '\0')
	{
		return (1);
	}

	return (palindrome(s1 + 1, s2, len, len2 - 1));
}
int is_palindrome(char *s)
{
	int len =  _strlen_recursion(s) - 1;

	return (palindrome(s, s, len, len));

}
