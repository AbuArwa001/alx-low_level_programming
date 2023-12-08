#include "lists.h"
#include "5-get_dnodeint.c"
#include "1-dlistint_len.c"

/**
 * delete_dnodeint_at_index - deletes the node at given index of a list
 * @head: pointer to head of the list
 * @index: index to delete from, starting from 0
 * Return: 1 on success or -1 on failure
 **/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node, *temp = NULL;
	size_t size = dlistint_len(temp);

	if (*head == NULL)
		return (-1);

	temp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}
	node = get_dnodeint_at_index(*head, index);
	if (node != NULL)
	{
		temp = node;

		if (node && size - 1 == index)
		{
			node->prev->next = NULL;
			free(temp);
			return (1);
		}

		node->prev->next = node->next;
		node->next->prev = node->prev;
		free(temp);
	}
	else
	{
		return (-1);
	}

	return (1);
}
