#include "main.h"
/**
 * repeat - iterate through numbers to find square root of sqt
 * @sqt: number to find its square
 * @num: decremental number used to search for square root
 * Return: returns the square root or -1 if s non-nautural number
 */
long int repeat(long int sqt, long int num)
{
	long int square = num * num;

	if (num <= 0)
	{
		return (-1);
	}

	if (square == sqt)
	{
		return (num);
	}

	if (square > sqt && sqt >= 1000)
	{
		return (repeat(sqt, num / 2));
	}
	else
		if (square > sqt && sqt < 1000)
		{
			return (repeat(sqt, num - 1));
		}

	return (-1);
}
/**
 * _sqrt_recursion - it calculates the square root of a number
 * @n: number to find its sqr root
 * Return: returns the squre root of q number
 *         returns -1 if the squre root is a non integer
 */

int _sqrt_recursion(int n)
{
	int sqrt_to = repeat(n, n);

	return (sqrt_to);
}
