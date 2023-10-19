#include "lists.h"
#include "strlen.c"
#include <string.h>
/**
 * add_node - adds node at the begining of the list
 * @head: its the head of the lis
 * @str: string data to add
 * Return: returns the pointer to address of the added node
*/
list_t *add_node(list_t **head, const char *str)
{
	char *strd = strdup(str);
	int len = 0;
	list_t *ptr = malloc(sizeof(list_t));

	if (ptr == NULL)
	{
		return (NULL);
	}

	if (strd == NULL)
		len = 0;
	else
	{
		len = _strlen(strd);
	}

	ptr->str = strd;
	ptr->len = len;
	ptr->next = NULL;

	ptr->next = *head;
	*head = ptr;
	return (*head);
}
