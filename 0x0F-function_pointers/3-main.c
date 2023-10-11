#include "3-calc.h"
/**
 * main - calculates th operatin fo 2 nums
 * @argc: number of arguments
 * @argv: array of strings
 * Return: Always returns 0
 */
int main(int argc, char *argv[])
{
	int num1 = 0, num2 = 0, result = 0;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);


	if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	if (get_op_func(argv[2]) != NULL && get_op_func(argv[2])(num1, num2))
	{

		result =  get_op_func(argv[2])(num1, num2);
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		exit(99);
	}

	return (0);
}
