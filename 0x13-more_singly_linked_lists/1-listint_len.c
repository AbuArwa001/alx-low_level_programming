#include "lists.h"
/**
 * listint_len - returns number of elements in linkedlis
 * @h: list to be traversed
 *
 * Return: returns number of elelments in the list
*/
size_t listint_len(const listint_t *h)
{
	size_t size = 0;
	listint_t *tmp = (listint_t *)h;

	while (tmp != NULL)
	{
		tmp = tmp->next;
		size++;
	}

	return (size);
}
