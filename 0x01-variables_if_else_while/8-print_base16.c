#include <stdio.h>
/**
* main - Prints all numbers of base 16
*
* Return: Always returns 0
*
*/

int main(void)
{
	int h = 0;
	char c = 'a';

	for (; h <= 9; h++)
	{
		putchar(h + '0');
	}
	for (; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
