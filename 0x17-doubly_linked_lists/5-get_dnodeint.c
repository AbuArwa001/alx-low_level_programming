#include "lists.h"
/**
 * get_dnodeint_at_index -  getss the value at nth index
 * @head: head of the list
 * @index: index of the node
 * Return: returns the nth node
 *
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t size = 0;
	dlistint_t *temp = head;

	if (temp ==  NULL)
	{
		return (NULL);
	}

	while (temp)
	{
		if (size == index)
		{
			return (temp);
		}

		temp = temp->next;
		size++;
	}

	return (NULL);
}
