#include <stdio.h>
#include <stdint.h>
/**
 * main - prints fibonanci sequence
 *
 *
 * Return: always retunr 0
 *
 **/
int main(void)
{	int64_t seq = 1, p = 1, cur = 2, nxt = 0, tmp = 0;
int set = 4;
	printf("%ld, \n", p);
	printf("%ld, \n", cur);
	while (set <= 98)
	{	nxt = p + cur;
		printf("%d: ",set);
		printf("%ld, \n", nxt);
		tmp = cur;
		cur = nxt;
		p = tmp;
		seq++;
		set++;
	}
	return (0);
}
