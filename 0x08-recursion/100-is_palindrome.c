#include "main.h"
#include "2-strlen_recursion.c"
/**
 * is_palindrome_recursive - checks if a string is a palidrome
 * @s:string to be scanned
 * @left: position be scanned from left
 * @right: position from from right
 * Return: returns 1 if palindrome and 0 if not
 */


int is_palindrome_recursive(char *s, int left, int right)
{
	if (left >= right)
	{
		return (1);
	}

	if (s[left] != s[right])
	{
		return (0);
	}

	return (is_palindrome_recursive(s, left + 1, right - 1));
}
/**
 * is_palindrome - checks if a string is a palidrome
 * @s: string to be scanned
 * Return: returns 1 if palindrome and 0 if not
 */


int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (is_palindrome_recursive(s, 0, len - 1));
}
