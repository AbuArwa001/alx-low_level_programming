#include "lists.h"
/**
 * add_dnodeint - add new node at the begining of the list
 * @head: head of the lis
 * @n: data of the list
 * Return: returns new added node
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
	{
		return (NULL);
	}

	temp->n = n;
	temp->next = NULL;
	temp->prev = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}

	temp->next = *head;
	(*head)->prev = temp;
	*head = temp;
	return (temp);
}
