#include "lists.h"
/**
 * insert_nodeint_at_index - adds node at a certain index
 * @head: of the list
 * @idx: index to be used insert
 * @n: member of the node
 *
 * Return: returns the new node added
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head;
	unsigned int ptr = 0;
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	if (idx == 0)
	{
		*head = new_node;
		(*head)->next = temp;
			return (*head);
	}

	while (idx - 1 != ptr && temp)
	{
		temp = temp->next;
		ptr++;
	}

	if (temp)
	{
		new_node->n = n;
		new_node->next = temp->next;
		temp->next = new_node;
	}
	else
	{
		return (NULL);
	}

	return (new_node);
}
