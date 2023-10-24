#include "lists.h"
/**
 * __free - frees all the node in a list.
 * @head: pointer to a list.
 */
void __free(listint_t *head)
{
	if (!head)
		return;
	__free(head->next);
	free(head);
}
/**
 * free_listint2 - frees all the node in a list and reset the head to NULL.
 * @head: pointer of pointer to a list.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!head)
		return;
	if (*head)
	{
		temp = *head;
		*head = NULL;
		__free(temp);
		return;
	}
}

