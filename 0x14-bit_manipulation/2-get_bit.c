#include "main.h"
/**
 * get_bit - returns the value of a bit ata given index
 * @index: index of a bit in n
 * @n: number to serch s bit
 * Return: returns the value os a bit of a given index
*/
int get_bit(unsigned long int n, unsigned int index)
{
	int _int = n;


	if (index < 0)
	{
		return (-1);
	}
	return ((n & (1 << index) ? 1 : 0));
}
