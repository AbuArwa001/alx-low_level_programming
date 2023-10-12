#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @separator: strin to be printed between numbers
 * @n: number of integers passed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0, num = 0;
	va_list args;

	va_start(args, n);

	for (; i < n; i++)
	{

		printf("%d", num);

		if (separator != NULL && (i + 1 != n))
		{
			printf("%s", separator);
		}

		num = va_arg(args, int);
	}

	printf("\n");
	va_end(args);
}
