#include "variadic_functions.h"
#include "0-strcat.c"
#include <stdio.h>
/**
 * print - prints the current format string
 * @c: format char to be checke after %
 * @ch: format string
 * @args: va_slist
 */
void print(char c, char *ch, va_list args)
{
	char *cha, charac;
	float f = 0;

	switch (c)
	{
		case 'c':
			charac = va_arg(args, int);
			printf(ch, charac);
			break;

		case 'd':
			printf(ch, va_arg(args, int));
			break;

		case 'f':
			f = va_arg(args, int);
			printf(ch, f);
			break;

		case 's':
			cha = va_arg(args, char *);

			if (cha == NULL)
				cha = "(nil)";

			printf(ch, cha);
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
	int i = 0, j = 0;
	char *ch = malloc(sizeof(char) * 3);
	va_list args;
	fmt  fm[5] = {
		{'c', "c"},
		{'i', "d"},
		{'f', "f"},
		{'s', "s"},
		{'\0', "\0"}
	};

	va_start(args, format);

	while (format[i])
	{
		j = 0;

		while (fm[j].c)
		{
			if (format[i] == fm[j].c)
			{
				ch[0] = '%';
				ch[1] = '\0';
				_strcat(ch, fm[j].chara);
				print(fm[j].chara[0], ch, args);

				if (format[i + 1] != '\0')
					printf(", ");
			}

			j++;
		}

		i++;
	}

	printf("\n");
	free(ch);
	va_end(args);
}
