#include <unistd.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Error)
 */
int main(void)
{
	char text[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	
	write(2, text, sizeof(text) - 1);

	return (1);
}
