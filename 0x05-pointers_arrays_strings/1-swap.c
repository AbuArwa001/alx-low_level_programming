#include "main.h"
/**
* swap_int - swap integers
* @a: int to be swapped with b
* @b: int to be swaped with a
*/

void swap_int(int *a, int *b)
{
	int tmp = 0;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
