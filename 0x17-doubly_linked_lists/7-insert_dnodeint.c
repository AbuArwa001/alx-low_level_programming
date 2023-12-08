#include "lists.h"
#include "5-get_dnodeint.c"
#include "1-dlistint_len.c"

/**
 * insert_dnodeint_at_index - insert at nth index
 * @h:  start of the list
 * @idx: where to insert
 * @n: data to insert
 * Return: return the inserted node
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h, *new_node = NULL, *node = NULL;
	size_t size = dlistint_len(temp);

	if (size < idx)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	node = get_dnodeint_at_index(*h, idx);

	if (node)
	{
		new_node->prev = node->prev;
		node->prev->next = new_node;
		node->prev = new_node;
		new_node->next = node;
	}

	return (new_node);
}
