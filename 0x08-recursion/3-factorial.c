#include "main.h"
/**
 * factorial - prints factorial of a iven number
 * @n: number to be factord
 * Return: returns a product of factorial
 */
int factorial(int n)
{
	if (n == 1 || n == 0)
	{
		return (1);
	}

	if (n  < 0)
	{
		return (-1);
	}

	return (n * factorial(n - 1));
}
