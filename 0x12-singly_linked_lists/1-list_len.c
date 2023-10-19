#include "lists.h"
/**
 * list_len - finds the lenth of the node
 * @h: node head
 * Return: returns the number of nodes in the list
*/
size_t list_len(const list_t *h)
{
	int nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}

	return (nodes);
}
