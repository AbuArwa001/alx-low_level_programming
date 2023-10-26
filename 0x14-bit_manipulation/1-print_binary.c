#include "main.h"
/**
 * _printb - prints binary recursives
 * @num: number to be represented in binary
*/
void _printb(unsigned long int num);
/**
 * print_binary - prints binary representation of anumber
 * @n: number to be represented
*/
void print_binary(unsigned long int n)
{
	if (n == 0 || n == 1)
	{
		_putchar(n + '0');
		return;
	}

	_printb(n);
	_putchar((n & 1) + '0');
}
/**
 * _printb - prints binary recursives
 * @num: number to be represented in binary
*/
void _printb(unsigned long int num)
{
	if (num == 1)
	{
		return;
	}

	_printb(num >>= 1);
	_putchar((num & 1) + '0');

}
