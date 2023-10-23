#include "lists.h"
/**
 * print_listint - prints number of nodes in the lis
 * @h: list passed
 * Return: returns the number of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t size = 0;
	listint_t *tmp = (listint_t *)h;

	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		size++;
	}

	return (size);
}
