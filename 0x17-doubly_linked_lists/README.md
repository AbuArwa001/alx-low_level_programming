# Project: 0x17. C - Doubly linked lists

## Table of Contents

- [Description](#description)
- [Learning Objectives](#learning-objectives)
- [Requirements](#requirements)
- [Resources](#resources)
- [Data Structure](#data-structure)
- [Tasks](#tasks)
  - [0. Print list](#0-print-list)
  - [1. List length](#1-list-length)
  - [2. Add node](#2-add-node)
  - [3. Add node at the end](#3-add-node-at-the-end)
  - [4. Free list](#4-free-list)
  - [5. Get node at index](#5-get-node-at-index)
  - [6. Sum list](#6-sum-list)
  - [7. Insert at index](#7-insert-at-index)
  - [8. Delete at index](#8-delete-at-index)

## Description

This project focuses on implementing and working with doubly linked lists in C. By completing the tasks, you'll gain a solid understanding of the following concepts:

- Doubly linked lists
- Implementation of various operations (deletion, insertion, etc.) with doubly linked lists
- Proper usage of pointers and memory allocation
- Basic file structure in C programming

## Learning Objectives

Upon completion of this project, you should be able to:

- Explain what a doubly linked list is and how to use it
- Implement operations (deletion, insertion, etc.) with doubly linked lists
- Search for information independently to solve programming problems

## Requirements

- Allowed editors: vi, vim, emacs
- All your files will be interpreted/compiled on Ubuntu 20.04 LTS using python3 (version 3.8.5)
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project, is mandatory
- Your code should use the Betty style. It will be checked using `betty-style.pl` and `betty-doc.pl`
- You are not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are `malloc`, `free`, `printf`, and `exit`
- The prototypes of all your functions should be included in your header file called `lists.h`
- Don’t forget to push your header file
- All your header files should be include guarded

## Resources

- [What is a Doubly Linked List](https://en.wikipedia.org/wiki/Doubly_linked_list)

## Data Structure

Please use the following data structure for this project:

```
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
```
Tasks
0. Print list
Write a function that prints all the elements of a dlistint_t list.


Copy code
size_t print_dlistint(const dlistint_t *h);
...

1. List length
Write a function that returns the number of elements in a linked dlistint_t list.


Copy code
size_t dlistint_len(const dlistint_t *h);
...

2. Add node
Write a function that adds a new node at the beginning of a dlistint_t list.


Copy code
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
...

3. Add node at the end
Write a function that adds a new node at the end of a dlistint_t list.


Copy code
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
...

4. Free list
Write a function that frees a dlistint_t list.


Copy code
void free_dlistint(dlistint_t *head);
...

5. Get node at index
Write a function that returns the nth node of a dlistint_t linked list.


Copy code
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
...

6. Sum list
Write a function that returns the sum of all the data (n) of a dlistint_t linked list.


Copy code
int sum_dlistint(dlistint_t *head);
...

7. Insert at index
Write a function that inserts a new node at a given position.


Copy code
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
...

8. Delete at index
Write a function that deletes the node at index index of a dlistint_t linked list.


Copy code
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
...

vbnet
Copy code

This template provides an organized and easy-to-read structure for your project's `README.md` file. You can copy and paste this template into your existing `README.md` and customize the content as need