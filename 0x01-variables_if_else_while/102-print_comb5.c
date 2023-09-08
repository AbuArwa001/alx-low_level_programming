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
	int i, j, m, h;

	for (h = 0; h <= 9; h++)
	{
		for (i = 0; i <= 9; i++)
		{

			for (j = 0; j <= 9; j++)
			{
				for (m = 0; m <= 9; m++)
				{
					if ((h + '0') == 0 || (j + '0') == 0 || (m + '0') == 0)
					{
						continue;
					}
					putchar(h + '0');
					putchar(i + '0');
					putchar(' ');
					putchar(j + '0');
					putchar(m + '0');
					if (h == 9 && i == 9 && j == 9 && m == 9)
					{
						continue;
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}

	}
	putchar('\n');
	return (0);
}
