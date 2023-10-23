#include "lists.h"
/**
 * sum_listint - sums all ns in the list
 * @head: heade of the list
 * Return: retirns the total sum of ints n in the list
*/
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
