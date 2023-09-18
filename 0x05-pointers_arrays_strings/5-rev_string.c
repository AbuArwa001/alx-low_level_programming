#include "main.h"
#include "2-strlen.c"
#include <stdlib.h>
/**
 * rev_string - reverses a string
 * @s: a string to be reversed
 */

void rev_string(char *s)
{
	char *tmp = malloc(sizeof(char));
	int len = _strlen(s) - 1, len1 = _strlen(s), i = 0, j = 0;

	if (_strlen(s) == 0)
	{
		return;
	}
	while (len != 0)
	{
		*(tmp + i) = *(s + len);
		len--;
		i++;
	}
	*(tmp + i) = *(s + len);

	while (len1 > 0)
	{
		s[j] = *(tmp + j);
		j++;
		len1--;
	}
}
