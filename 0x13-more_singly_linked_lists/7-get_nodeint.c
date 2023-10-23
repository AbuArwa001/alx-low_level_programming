#include "lists.h"
/**
 * get_nodeint_at_index - finds and returns the nth node of the lis
 * @head: head of the list
 * @index: index to ind
 * Return: returns the nth node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node = 0;
	listint_t *temp = head;

	while (temp != NULL)
	{
		if (node == index)
		{
			return (temp);
		}
		else
		{
			temp = temp->next;
			node++;
		}

	}

	return (NULL);
}
