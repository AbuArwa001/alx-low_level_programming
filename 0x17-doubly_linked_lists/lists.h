#ifndef _LISTS_H
#define _LISTS_H
#include <stdlib.h>
#include <stdio.h>

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 *
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;
/**
 * print_dlistint - print list
 * @h: head of double linked list
 * Return: returns the size of the list
 *
*/
size_t print_dlistint(const dlistint_t *h);
/**
 * dlistint_len - finds the size of the list
 * @h: ist to find size
 * Return: returns the size of the list
*/
size_t dlistint_len(const dlistint_t *h);
/**
 * add_dnodeint - add new node at the begining of the list
 * @head: head of the lis
 * @n: data of the list
 * Return: returns new added node
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
#endif
