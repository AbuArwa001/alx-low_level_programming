#include "main.h"
/**
 * check - checks if character is an int
 * @c: charcter to be checked
 * Return: returns 1 if int
 *         0 if not
 */
int check(char c)
{
	int i = '0';

	for (; i <= '9' ; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}

	return (0);
}
/**
 * digits_only - checks if a string has digits only
 * @s: string to be checked
 * Return: returns 0 if  false
 *         1 if true
 */
int digits_only(char *s)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != '\n')
	{
		if ((s[i]) == '-' && (check(s[i + 1])) == 1)
		{
			i++;
			continue;
		}

		if (check(s[i]) == 0)
		{
			return (0);
		}

		i++;
	}

	return (1);
}
/**
 * main - prints sum of  arguments
 * @argc: arguments count
 * @argv: argument vector
 * Return: returns 0 on success and non zero on fail
 */
int main(int argc, char **argv)
{
	int sum = 0, i = 1;

	if (argc > 2)
	{
		for (; i < argc ; i++)
		{
			if (argv[i][0] == '0' && argv[i][1] == '\0')
			{
				sum += atoi(argv[i]);
				continue;
			}

			if (digits_only(argv[i]) == 0)
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
