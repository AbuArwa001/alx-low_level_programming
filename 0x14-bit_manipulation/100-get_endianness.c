#include "main.h"
/**
 * get_endianness - gets endiannes of a a machine
 * Return: returns 1 if little endian or 0 if big endian
*/
int get_endianness(void)
{
	int tst = 1;

	if (tst & (1 << 31))
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
