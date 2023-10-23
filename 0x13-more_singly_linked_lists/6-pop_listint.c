#include "lists.h"
/**
 * pop_listint - deletes the firt element in the list
 * @head: head of the list
 * Return: returns the member of the element deleted
*/
int pop_listint(listint_t **head)
{
	listint_t *temp = *head, *h = *head;
	int memb =  0;

	if (temp == NULL)
	{
		return (0);
	}
	else
	{
		memb = temp->n;
		*head = h->next;
		free(temp);

	}

	return (memb);
}
