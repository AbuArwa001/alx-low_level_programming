#include "lists.h"
/**
 * sum_dlistint - finds the sum of the list
 * @head: start of the list
 * Return: returns the sum of the list
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp = head;

	if (head == NULL)
		return (0);

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
