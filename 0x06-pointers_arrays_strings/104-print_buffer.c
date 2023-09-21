#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_buffer - prints buffer
 * @b: buffer to be printed
 * @size: size to be printed
 */
void print_buffer(char *b, int size)
{
	int i = 0, j = 0, l = 0, k = 0, m = 0;

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);
		for (j = 0; j < 10 ; j++)
		{
			if (j % 2 == 0)
			{
				printf(" ");
			}
			if (m >= size)
			{
				printf("  ");
			}
			else
			{
				printf("%02x", b[m]);
			}
			m++;
		}
		printf(" ");
		for (l = 0; l < 10  && k < size; l++)
		{
			if ((b[k] >= 0 && b[k] <= 31))
				printf(".");
			else
				printf("%c", b[k]);
			k++;
		}
		printf("\n");
	}
	if (size <= 0)
		printf("\n");
}
