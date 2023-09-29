#include "main.h"

/**
 * main - prints the arguments passed to it
 * @argc: arguments count
 * @argv: argument vector
 * Return: returns 0 on success and non zero on fail
 */
int main(int argc, char **argv)
{
	int i = 0;

	for (; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (EXIT_SUCCESS);
}
