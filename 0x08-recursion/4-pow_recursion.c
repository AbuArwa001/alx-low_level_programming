#include "main.h"

/**
 * _pow_recursion - Prints a power of a number
 * @x: number to be use
 * @y: power to be used
 * Return: returns the x raised to y
 *         returns -1 if y is less than 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}
