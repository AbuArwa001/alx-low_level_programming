#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - prints random numbers and checks if its negative or positive
*
* Return: Always returns 0
*/
void positive_or_negative(int n)
{
	if (n == 0)
	{
		printf("%d is zero\n", n);
	} else if (n < 0)
	{
		printf("%d is negative\n", n);
	} else
	{
		printf("%d is positive\n", n);
	}

}
