#include <stdio.h>

/**
* main - prints lowercase alphabet in reverse
*
*
* Return: Always returns 0
*/

int main(void)
{
	char c = 'z';

	for (; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);

}
