#include <stdio.h>
/**
 * main - Prints alphabets starting from lower to upper cases
 *
 *
 *
 * Return: Always returns 0
 */

int main(void)
{
	char c = 'a', c1 = 'A';

	for (; c <= 'z'; c++)
	{
		putchar(c);
	}
	for (; c1 <= 'Z'; c1++)
	{
		putchar(c1);
	}
	putchar('\n');
	return (0);
}
