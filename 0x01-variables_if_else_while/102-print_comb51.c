#include <stdio.h>

/**
 * main - Prints all possible combinations of two two-digit numbers,
 *        ranging from 0-99, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n, m, o;

	for (n = 0; n <= 98; n++)
	{
		for (m = n + 1; m <= 9; m++)
		{
			if (n == 9 && m == 8)
				continue;

		for (o = 0; o <= 9 ;o++ )
		{
			putchar((n) + '0');
			putchar((n) + '0');
			putchar(' ');
			putchar((m) + '0');
			putchar((m) + '0');

			if (n == 98 && m == 99)
				continue;
		}

		}

	}

	putchar('\n');

	return (0);
}
