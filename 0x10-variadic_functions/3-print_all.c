#include "variadic_functions.h"
#include "0-strcat.c"
#include <stdio.h>
/**
 * print_all - prints anything
 * @format: a list of types of arguments
 */
void print_all(const char *const format, ...)
{
	int i = 0, j = 0;
	char *ch = malloc(sizeof(char) * 3), *cha;
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
				cha = va_arg(args, char *);

				printf(ch, cha);
				/*print(fm[j].chara[0], ch, args);*/
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
