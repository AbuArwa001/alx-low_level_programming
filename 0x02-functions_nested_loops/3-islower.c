#include "main.h"
/**                                                               * _islower - Write a function that checks for lowercase charac 
  *       Prototype: int _islower(int c)
  *               Returns 1 if c is lowercase
  * Returns: returns 0  otherwise
  *          returns 1 if c is lowercase
  *
  */
int _islower(int c)
{
	char ch = 'a';

	for (; c <='z'; c++)
	{
		if (c == ch )
		{
			return (0);
		}
	}

	return (1);
}
