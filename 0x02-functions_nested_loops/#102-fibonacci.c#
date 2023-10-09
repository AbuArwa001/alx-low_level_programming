#include <stdio.h>
/**
 * main - prints fibonanci sequence
 *
 *
 * Return: always retunr 0
 *
 **/
int main(void)
{	unsigned long int seq = 48, p = 1, cur = 2, nxt = 0, tmp = 0;

	printf("%ld, ", p);
	printf("%ld, ", cur);
	while (seq >= 1)
	{	nxt = p + cur;
		if (seq == 1)
		{
			printf("%ld", nxt);
			break;
		}
		printf("%ld, ", nxt);
		tmp = cur;
		cur = nxt;
		p = tmp;
		seq--;
	}
	printf("\n");
	return (0);
}
