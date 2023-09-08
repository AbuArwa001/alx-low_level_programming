#include <stdio.h>

/**
* main - Prints all possible combinations of single digit numbers
*
*
* Return: Always returns 0;
*
*/

int main(void)
{
	int i = 0;

	for (; i <= 9; i++)
	{
		putchar(i + '0');
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
