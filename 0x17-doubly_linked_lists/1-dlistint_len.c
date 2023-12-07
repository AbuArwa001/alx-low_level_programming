#include "lists.h"
/**
 * dlistint_len - finds the size of the list
 * @h: ist to find size
 * Return: returns the size of the list
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t siz = 0;
	const dlistint_t *temp = h;

	while (temp != NULL)
	{
		temp = temp->next;
		siz++;
	}


	return (siz);
}
