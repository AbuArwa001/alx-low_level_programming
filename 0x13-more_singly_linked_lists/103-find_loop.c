#include "lists.h"

/**
 * find_listint_loop - FINDS where loop starts
 *                     in a safe way.
 * @head: pointer of pointer to a list.
 * Return: returns the size of the lst
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptr1 =  head, *ptr2 = head;
	int flag = 0;

	while (ptr2 != NULL && ptr2->next !=  NULL)
	{
		ptr1 = ptr1->next;
		ptr2 = ptr2->next->next;

		if (ptr1 == ptr2)
		{
			flag = 1;
			ptr1 = head;
			break;
		}

	}

	while (ptr1->next != ptr2->next)
	{
		ptr1 = ptr1->next;
		ptr2 = ptr2->next;
	}

	if (flag == 1)
	{
		return (ptr1->next);
	}

	return (NULL);
}
