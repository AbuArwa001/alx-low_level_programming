#include <stdio.h>
/**
 * main - prints sum whoes values dont exceed 4m
 *
 *
 * Return: always retunr 0
 *
 **/
int main(void)
{	unsigned long int sum = 2, p = 1, cur = 2, nxt = 0, tmp = 0;

	while (sum <= 4000000)
	{	nxt = p + cur;
		if ((nxt % 2) != 0)
		{
			sum += nxt;

		}
		tmp = cur;
		cur = nxt;
		p = tmp;
	}
	printf("%ld\n", sum);
	return (0);
}
