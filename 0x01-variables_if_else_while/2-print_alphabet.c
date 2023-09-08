#include <stdio.h>

/**
 * main - prints alphabets a to z
 *
 *
 * Return: Always return 0
 *
 *
 */

int main(void)
{
	char c = 'a';

	for (; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
