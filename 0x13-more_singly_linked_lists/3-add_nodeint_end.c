#include "lists.h"
/**
 *  add_nodeint_end - adds int at the end of the list
 *  @head: head of the list
 *  @n: number member to be added to the list
 *
 * Return: returns the newly added node
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = *head;
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (temp != NULL)
	{
		if (temp->next == NULL)
		{
			temp->next = new_node;
			temp = NULL;
		}
		else
		{
			temp = temp->next;
		}

	}

	return (new_node);
}
