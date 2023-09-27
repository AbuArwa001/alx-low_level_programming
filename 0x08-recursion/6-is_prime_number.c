#include "main.h"
/**
 * isDivisible - check for divisibility from 2 to 11
 * @n: number to be check
 * @divisor: range to be used
 * Return: returns 1 if devisible and 0 if not
 */
int isDivisible(int n, int divisor)
{
	if (divisor == 1)
	{
		return (0);
	}

	if (n % divisor == 0)
	{
		return (1);
	}

	return (isDivisible(n, divisor - 1));
}

/**
 * is_prime_number - checks if a number is prime
 * @n: a number to be checked
 * Return: returns 1 if true
 *         returns flase if not
 */

int is_prime_number(int n)
{
	if (n <= 0)
	{
		return (0);
	}

	if (n == 2  || n == 3 || n == 5 || n == 7 || n == 11)
	{
		return (1);
	}

	if (isDivisible(n, 11))
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
