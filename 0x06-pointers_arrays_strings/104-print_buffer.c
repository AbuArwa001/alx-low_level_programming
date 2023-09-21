#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strlen - computes the size of a string
 *
 * @s: the string to be examined
 * Return: returns the length in number
 */
int _strlen1(char *s)
{
	int length = 0, i = 0;

	while (s[i] != '\0')
	{
		length++;
        i++;
	}
	return (length);
}

/**
 * print_buffer - prints buffer
 * @b: buffer to be printed
 * @size: size to be printed
 */
void print_buffer(char *b, int size)
{
	int i = 0, j = 0, l = 0, k = 0, m= 0;

	for (i = 0; i < size; i += 10)
	{

		printf("%08x: ", i);

		for (j = 0; j < 10 ; j++)
		{

            if (j %2 == 0)
            {
                printf(" ");
            }
            if (m >= size) {
                printf("  ");
            }else {
                printf("%02x", b[m]);
            }
            m++;
		}
        printf(" ");

		for (l = 0; l < 10  && k < size; l++)
		{
            if (b[k] == '\0')
            {
			  printf(".");
            }
            else
            {
                if (b[k] == '\n' || (b[k] > 0 && b[k] < 8))
                {
                  printf(".");
                }
                else {
 			printf("%c", b[k]);

                }
            }
            k++;
		}
		printf("\n");
	}
}
