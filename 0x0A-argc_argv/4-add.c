#include "main.h"

/**
 * main - prints sum of  arguments
 * @argc: arguments count
 * @argv: argument vector
 * Return: returns 0 on success and non zero on fail
 */
int main(int argc, char **argv)
{
	int sum = 0, i = 1;

	if (argc > 1)
	{
		for (; i < argc ; i++)
		{
			if (atoi(argv[i]) == 0)
			{
				sum += atoi(argv[i]);
				continue;
			}

			if (!atoi(argv[i]))
			{
				printf("Error\n");
				return (1);
			}

			sum += atoi(argv[i]);
		}

		printf("%d\n", sum);
	}
	else
	{
		printf("%d\n", 0);
	}


	return (EXIT_SUCCESS);
}
