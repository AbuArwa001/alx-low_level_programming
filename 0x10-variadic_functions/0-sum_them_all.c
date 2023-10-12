#include "variadic_functions.h"
/**
 * sum_them_all - sums all the parameters of variadic func
 * @n: number of arguments
 * Return: retursn the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, i = 0;

	va_list args;

	va_start(args, n);

	for (; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);
	return (sum);

}
