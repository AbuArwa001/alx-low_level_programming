#include "main.h"
/**
 * main - prints the name of pragram running
 * @argc: argument count
 * @argv: array of arguments
 * Return: will return 0 on succes
 *         and non-zero on failiure
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (EXIT_SUCCESS);
}
