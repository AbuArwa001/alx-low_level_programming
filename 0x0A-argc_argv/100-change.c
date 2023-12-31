#include "main.h"
/**
 * change - calculates the amount of coins to be returned
 * @money: money given to calculate change from
 * Return: returns the amount of coins calculated
 */
int change(int money)
{
	int cents = 0;

	while (money > 0)
	{
		if (money >= 25)
		{
			cents += 1;
			money -= 25;
		}
		else if (money >= 10)
		{
			cents += 1;
			money -= 10;
		}
		else if (money >= 5)
		{
			cents += 1;
			money -= 5;
		}
		else if (money >= 2)
		{
			cents += 1;
			money -= 2;
		}
		else if (money >= 1)
		{
			cents += 1;
			money -= 1;
		}
	}


	return (cents);
}
/**
 * main - prints number of coins  will be given s change
 * @argc: arguments count
 * @argv: argument vector
 * Return: returns 1 on Error if no arguments given or less than 0
 *         or  number of cents to be given
 */
int main(int argc, char **argv)
{
	int cents = 0, money = 0;

	if (argc == 2)
	{
		money = atoi(argv[1]);

		if (money < 0)
		{
			printf("%d\n", 0);
			return (1);
		}

		cents = change(money);
		printf("%d\n", cents);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (EXIT_SUCCESS);
}
