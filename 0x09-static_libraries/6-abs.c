#include "main.h"
/**
* _abs - computes absolute value of an integer
* @in: the integer to be converted
*
* Return: it returns an absolute value
*/

int _abs(int in)
{
	if (in < 0)
	{
		return (in * -1);
	}
	else
		return (in);
}
