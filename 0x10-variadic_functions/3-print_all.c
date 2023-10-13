#include "variadic_functions.h"
#include "0-strcat.c"
#include <stdio.h>
/**
 * print - prints the current format string
 * @c: format char to be checke after %
 * @ch: format string
 * @args: va_slist
 **/
void print(char c, char *sep, va_list args)
{
	char *cha, charac;
	float f = 0;

	switch (c)
	{
		case 'c':
			charac = va_arg(args, int);
			printf("%c%s", charac, sep);
			break;

		case 'i':
			printf("%d%s", va_arg(args, int), sep);
			break;

		case 'f':
			f = va_arg(args, int);
			printf("%f%s", f, sep);
			break;

		case 's':
			cha = va_arg(args, char *);

			if (cha == NULL)
				cha = "(nil)";

			printf("%s%s", cha, sep);
			break;

		default:
			break;
	}
}


/**
 * print_all - prints anything
 * @format: a list of types of arguments
 */
void print_all(const char *const format, ...)
{
	int i = 0;
	char *sep = ", ";
	va_list args;

	va_start(args, format);

	while (format[i])
	{
		if (format[i + 1] == '\0')
			sep = "";
		print(format[i], sep, args);
		i++;
	}

	printf("\n");
	va_end(args);
}
