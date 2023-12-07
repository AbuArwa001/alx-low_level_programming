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

	temp->n = n;
	temp->next = *head;
	temp->prev = NULL;

	*head = temp;
	return (temp);
}
