#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_list - prints contents of the list
 * @h: poiter to the first node
 *
 * Return: returns number of nodes in the lis
 *
*/
size_t print_list(const list_t *h)
{
	int nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] %s\n", "nil");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}

		h = h->next;
		nodes++;
	}

	return (nodes);
}
