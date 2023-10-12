#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strings followed by anew line
 * @separator: string to be printed between the strings
 * @n: is the number of strings passed tto the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *str = 0;
	va_list args;

	va_start(args, n);

	for (; i < n; i++)
	{
		str = va_arg(args, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}

		if (separator != NULL && (i + 1) != n)
		{
			printf("%s", separator);
		}

	}

	printf("\n");
}
