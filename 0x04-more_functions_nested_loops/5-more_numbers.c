#include "main.h"

/**
 *  more_numbers - print numbers from 0 - 14 10times
 *
 */

void more_numbers(void)
{

	int i = 0, j = 0, tmp = 0;

	for (; i <= 9; i++)
	{	tmp = 0;

		for (j = 0; j <= 14; j++)
		{	/*
			*if (j >= 10)
			*{
				*	continue;
			*  _putchar((j % 10) + '0');
			*
				*/
			if (j >= 10)
			{

				tmp = j;
				j /= 10;
			}

			_putchar(j  + '0');

			if (tmp >= 10)
			{

				_putchar((tmp % 10) + '0');
				j = tmp;
			}
		}

		_putchar('\n');
	}

}
