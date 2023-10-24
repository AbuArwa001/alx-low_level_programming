#include "lists.h"
/**
 * free_listint2 - frees list and sets head to null
 * @head: is the head/beginning of the list
*/
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (*head == NULL)
	{
		return;
	}

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);

		if (temp == *head)
		{
			break;
		}

	}

	*head = NULL;
}
