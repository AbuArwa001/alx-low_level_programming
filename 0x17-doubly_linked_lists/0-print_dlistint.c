#include "lists.h"

/**
 * print_dlistint - print list
 * @h: head of double linked list
 * Return: returns the size of the list
 *
*/
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *tem = h;
	size_t sz = 0;

	while (tem != NULL)
	{
		printf("%d\n", tem->n);
		tem = tem->next;
		sz++;
	}


	return (sz);
}
