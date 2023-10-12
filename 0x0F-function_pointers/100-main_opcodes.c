#include "function_pointers.h"
#include <stdio.h>

/**
 * main - prints opcodes
 * @argc: number of arguments
 * @argv: array of strings
 * Return: Always return 0
 */
int main(int argc, char *argv[])
{
	int  i = 0, num = 0;
	int (*ptr)(int, char **);
	unsigned char *bytes;

	ptr = main;
	bytes = (unsigned char *)ptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num = atoi(argv[1]);

	if (num < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < num; i++)
	{
		printf("%02x", bytes[i]);

		if (i + 1 != num)
		{
			printf(" ");
		}
	}

	printf("\n");
	return (0);
}
