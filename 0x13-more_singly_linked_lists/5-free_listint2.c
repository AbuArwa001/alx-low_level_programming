#include "lists.h"
/**
 * free_listint2 - frees list and sets head to null
 * @head: is the head/beginning of the list
*/
void free_listint2(listint_t **head)
{
	listint_t *temp, *h = *head;

	if (*head == NULL)
	{
		return;
	}

	while (h != NULL)
	{
		temp = h;
		h = h->next;
		free(temp);
	}

	*head = NULL;
}
