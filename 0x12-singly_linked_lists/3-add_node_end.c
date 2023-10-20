#include "lists.h"
#include "strlen.c"
#include <string.h>
/**
 * add_node_end - adds node at the end of the list
 * @head: its the head of the lis
 * @str: string data to add
 * Return: returns the pointer to address of the added node
*/
list_t *add_node_end(list_t **head, const char *str)
{
	char *strd = strdup(str);
	int len = 0;
	list_t *temp = malloc(sizeof(list_t)), *ptr;

	if (temp == NULL)
	{
		return (NULL);
	}
    ptr = *head;
	if (strd == NULL)
		len = 0;
	else
	{
		len = _strlen(strd);
	}

	temp->str = strd;
	temp->len = len;
	temp->next = NULL;

	if (ptr == NULL)
	{
		*head = temp;
	}
	else
	{
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = temp;
	}
	return (temp);
}
