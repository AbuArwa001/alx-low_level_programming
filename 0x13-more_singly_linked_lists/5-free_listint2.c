#include "lists.h"
/**
 * free_listint2 - frees list and sets head to null
 * @head: is the head/beginning of the list
*/
void free_listint2(listint_t **head)
{


	listint_t *temp = *head;
	listint_t *next;

	if (*head == NULL)
	{
		return;
	}

	while (temp != NULL)
	{
		next = temp->next;
		free(temp);
		temp = next;

		if (temp == *head)
		{
			break;
		}
	}

	*head = NULL;
}
