#include <stdio.h>
/**
 * main - prints sum of natural numbers belo 1024
 *        that are multiple of 3, 5,6 ,9
 *
 *
 *
 *
 *
 * Return: ALways return 0
 *
 *
 *
 */

int main(void)
{
	int n, sum = 0;

	for (n = 0; n < 1024; n++)
	{
		if ((n % 3) == 0 || (n % 5) == 0)
		{
			sum += n;
		}
	}
	printf("%d\n", sum);
	return (0);
}
