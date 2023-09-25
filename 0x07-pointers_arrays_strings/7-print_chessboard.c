#include "main.h"

/**
 * print_chessboard - prints chess board
 * @a: 2 dimensinal array
 * Return: returns printed chessboard
 */
void print_chessboard(char (*a)[8])
{
	int i = 0, j = 0;

	for (; i < 8 ; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar((a[i])[j]);
		}

		_putchar('\n');
	}
}
