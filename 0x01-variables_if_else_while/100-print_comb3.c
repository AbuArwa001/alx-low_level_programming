#include <stdio.h>

/**
* main - Program prints all possible different combinations
*
*
*
* Return: Always returns 0
*/

int main(void)
{
	int i, j, k = 1;

	for (i = 0; i < 9; i++)
	{
		for (j = k; j <= 9; j++)
		{
			if (i == j)
			{
				continue;
			}
			putchar(i + '0');
			putchar(j + '0');
			if (i != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
		k++;
	}
	putchar('\n');
	return (0);
}
