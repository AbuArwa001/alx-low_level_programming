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
/**
 * add_dnodeint_end( - add to the end of the list
 * @head: head of the list
 * @n: data
 * Return: returns new node
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
/**
 * free_dlistint - free list
 * @head: head of the list
*/
void free_dlistint(dlistint_t *head);
/**
 * get_dnodeint_at_index -  getss the value at nth index
 * @head: head of the list
 * @index: index of the node
 * Return: returns the nth node
 *
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
/**
 * sum_dlistint - finds the sum of the list
 * @head: start of the list
 * Return: returns the sum of the list
*/
int sum_dlistint(dlistint_t *head);
/**
 * insert_dnodeint_at_index - insert at nth index
 * @h:  start of the list
 * @idx: where to insert
 * @n: data to insert
 * Return: return the inserted node
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
#endif
