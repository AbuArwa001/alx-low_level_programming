#include "main.h"
#include <stdio.h>
/**
 *  main - finds multiples of 3 , 5 and bothnumbers from 0 -9
 *
 *  Return: Always returns 0;
 */

int main(void)
{	int i = 1;

	for (; i <= 100; i++)
	{

		if (i % 15 == 0)
		{	printf("%s ", "FizzBuzz");
			continue;
		}

		else if (i % 5 == 0)
		{	printf("%s ", "Buzz");
			continue;
		}

		else if (i % 3 == 0)
		{	printf("%s ", "Fizz");
			continue;
		}

		printf("%d ", i);
	}

	printf("\n");
	return (0);
}
