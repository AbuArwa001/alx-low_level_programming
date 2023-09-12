#include "main.h"
#include "6-abs.c"
#include <stdio.h>
/**
 * print_last_digit - Prints the last digi of a number
 *
 * @n: the number to be striped off its last digit
 *
 *
 * Return: retursn the last digit of n;
 *
 */

int print_last_digit(int n)
{

	int r;

	if (n < 0)
	{
		r = n % 10;
		r *= -1;
		_putchar (r + '0');
		return (r);
	}
	else
	{	_putchar ((n % 10) + '0');
		return (n % 10);

	}

}
