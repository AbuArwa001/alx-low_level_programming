#include "main.h"
/**
 * main - prints the numnber of arguments passed to it
 * @argc: arguments count
 * @argv: argument vector
 * Return: returns 0 on success and non zero on fail
 */

int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (EXIT_SUCCESS);
}
