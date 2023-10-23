#include "lists.h"
/**
 * delete_nodeint_at_index - deletess node at a certain index
 * @head: of the list
 * @index: index to be used deleted
 *
 * Return: returns the new node added
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head, *curr = *head;
	unsigned int ptr = 0;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (curr->next != NULL)
	{
		if (ptr + 1 == index)
		{
			temp = curr->next;
			curr->next = curr->next->next;
			free(temp);
			return (1);
		}

		curr = curr->next;
		ptr++;
	}

	return (-1);
}
