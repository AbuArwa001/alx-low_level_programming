#include "main.h"

/**
 * main - prints multiplictaion of 2 numbers
 * @argc: arguments count
 * @argv: argument vector
 * Return: returns 0 on success and non zero on fail
 */
int main(int argc, char **argv)
{
	int mult = 0;

	if (argc == 3)
	{
		mult =  atoi(argv[1]) * atoi(argv[2]);

		printf("%d\n", mult);
	}
	else
	{
		printf("%s\n", "Error");
	}


	return (EXIT_SUCCESS);
}
