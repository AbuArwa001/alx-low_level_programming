#ifndef LIST_H
#define LIST_H
#include <stdlib.h>
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;
/**
 * print_list - prints contents of the list
 * @h: poiter to the first node
 *
 * Return: returns number of nodes in the lis
 *
*/
size_t print_list(const list_t *h);
/**
 * list_len - finds the lenth of the node
 * @h: node head
 * Return: returns the number of nodes in the list
*/
size_t list_len(const list_t *h);
/**
 * add_node - adds node at the begining of the list
 * @head: its the head of the lis
 * @str: string data to add
 * Return: returns the pointer to the addrres of added node
*/
list_t *add_node(list_t **head, const char *str);
/**
 * _strlen - computes the size of a string
 *
 * @s: the string to be examined
 * Return: returns the length in number
 */
int _strlen(char *s);
/**
 * add_node_ed - adds node at the end of the list
 * @head: its the head of the lis
 * @str: string data to add
 * Return: returns the pointer to address of the added node
*/
list_t *add_node_end(list_t **head, const char *str);
/**
 * free_list - frees every node in the list
 * @head: list head
*/
void free_list(list_t *head);
#endif
