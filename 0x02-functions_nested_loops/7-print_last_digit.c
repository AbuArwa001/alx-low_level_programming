#include "main.h"
/**
 * print_last_digit - Prints the last digi of a number
 *
 * @n: the number to be striped off its last digit
 *
 *
 * Retrun: retursn the last digit of n;
 *
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		n *= -1;
		_putchar ((n % 10) + '0');
		return (n % 10);
	}
	else
	{
	         _putchar ((n % 10) + '0');
		 return (n % 10);

	}

}
