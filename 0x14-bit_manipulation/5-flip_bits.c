#include "main.h"
#include "2-get_bit.c"
#include "3-set_bit.c"
#include "4-clear_bit.c"

/**
 * flip_bits - counts number of bits to be flipe for nums to be equal
 * @n: num1
 * @m: num2
 * Return: returns number of bits to be fliped
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int  i = 0, idx1 = 0, idx2 = 0, count = 0;


	while (i < 32)
	{
		idx1 = get_bit(n, i);
		idx2 = get_bit(m, i);

		if (idx1 == -1 || idx2 - 1)
		{
			return (-1);
		}

		if (idx1 != idx2)
		{
			if (idx2 == 0)
			{
				clear_bit(&n, i);
			}
			else
			{
				set_bit(&n, i);
			}

			count++;
		}

		i++;
	}

	return (count);
}
