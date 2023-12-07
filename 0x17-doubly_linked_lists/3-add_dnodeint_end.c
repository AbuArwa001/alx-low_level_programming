#include "lists.h"
/**
 * add_dnodeint_end - add to the end of the list
 * @head: head of the list
 * @n: data
 * Return: returns new node
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t)), *ptr = *head;

	if (temp == NULL)
	{
		return (NULL);
	}

	temp->n = n;
	temp->prev = NULL;
	temp->next = NULL;

	if (ptr == NULL)
	{
		*head = temp;
		return (temp);
	}

	while (ptr && ptr->next != NULL)
	{
		ptr = ptr->next;
	}

	temp->prev = ptr;
	ptr->next = temp;
	return (temp);
}
