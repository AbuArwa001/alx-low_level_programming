#include <stdio.h>

/**
* main - prints simgle digits of base 10 followd by new line
*
* Return: Always returns 0
*/
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
