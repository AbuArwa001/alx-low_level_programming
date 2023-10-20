#include "lists.h"
/**
 * free_list - frees every node in the list
 * @head: list head
*/
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
