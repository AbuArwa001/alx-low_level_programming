#include <stdio.h>
/**
* main - prints all possible different combinations of three digits
*
*
*
* Return: Always returns 0
*
*/

int main(void)
{
	int i, n, j, k = 1, l = 2, m;

	for (i = 0; i <= 7; i++)
	{
		n = l;
		for (j = k; j <= 8; j++)
		{
			for (m = n; m <= 9; m++)
			{
				if (j == m)
				{
					continue;
				}
				putchar(i + '0');
				putchar(j + '0');
				putchar(m + '0');
				if (i != 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
			n++;
		}
		l++;
		k++;
	}
	putchar('\n');
	return (0);
}
