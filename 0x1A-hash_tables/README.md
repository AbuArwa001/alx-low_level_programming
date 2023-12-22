# Hash Tables Project

## Overview

This project, part of the ALX low-level programming curriculum, focuses on understanding and implementing hash tables in the C programming language. The project involves creating a hash table data structure, implementing a hash function, and developing functions for adding, retrieving, printing, and deleting elements from the hash table.

## Project Details

### Project Information

- **Title:** Hash Tables
- **Language:** C
- **Author:** Julien Barbier
- **Weight:** 1
- **Project Start:** Dec 21, 2023, 6:00 AM
- **Project Deadline:** Dec 23, 2023, 6:00 AM
- **Checker Release:** Dec 21, 2023, 6:00 PM
- **Auto Review:** Scheduled for the deadline

### Learning Objectives

By completing this project, participants are expected to achieve the following learning objectives:

- Understand what a hash function is and what makes a good hash function.
- Learn about hash tables, how they work, and how to use them.
- Handle collisions in the context of a hash table.
- Explore the advantages and drawbacks of using hash tables.
- Identify common use cases for hash tables.

### Resources

Participants are encouraged to read or watch the following resources:

- [What is a HashTable Data Structure - Introduction to Hash Tables, Part 0](https://www.youtube.com/watch?v=MfhjkfocRR0)
- [Hash function](https://en.wikipedia.org/wiki/Hash_function)
- [Hash table](https://en.wikipedia.org/wiki/Hash_table)
- [All about hash tables](https://medium.com/basecs/all-about-hash-tables-a66d98f084b)
- [Why hash tables and not arrays](https://stackoverflow.com/questions/730620/how-does-a-hash-table-work)


## Project Requirements

### General Requirements

- **Allowed Editors:** vi, vim, emacs
- **Compilation:** Ubuntu 20.04 LTS, using gcc with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- **File Endings:** All files should end with a new line.
- **README.md:** A mandatory README.md file should be present at the root of the project folder.
- **Coding Style:** Code should follow the Betty style, and it will be checked using `betty-style.pl` and `betty-doc.pl`.
- **Global Variables:** Not allowed.
- **Functions per File:** No more than 5 functions per file.
- **C Standard Library:** Allowed for use.
- **Header File:** Prototypes of all functions should be included in a header file named `hash_tables.h`.
- **Header File Guard:** All header files should use include guards.

### Data Structures

For this project, participants should use the following data structures:

```c
/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
     char *key;
     char *value;
     struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
     unsigned long int size;
     hash_node_t **array;
} hash_table_t;
