#include <stdio.h>
/**
* main - It printss The alphabet in lowercase followd by anew line
*
* Return: Always reurns 0
*/

int main(void)
{
	char c = 'a';

	for (; c <= 'z'; c++)
	{
		if (c == 'q' || c == 'e')
		{
			continue;
		}
		putchar(c);
	}
	putchar('\n');
	return (0);
}
