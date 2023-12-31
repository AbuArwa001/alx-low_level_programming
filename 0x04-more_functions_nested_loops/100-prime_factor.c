#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * main - Print the largest prime factor
 *
 * Return: Always Return 0;
 */
int main(void)
{	long n = 612852475143;
	long largest_prime = 0;
	long i;

	while (n % 2 == 0)
	{	largest_prime = 2;
		n /= 2;
	}

	for (i = 3; i * i <= n; i += 2)
	{

		while (n % i == 0)
		{	largest_prime = i;
			n /= i;
		}
	}

	if (n > 1)
	{	largest_prime = n;
	}

	printf("%ld\n", largest_prime);
	return (0);
}
