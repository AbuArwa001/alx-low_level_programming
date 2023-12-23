#ifndef _HASH_H
#define _HASH_H
#include <stdlib.h>
#include <string.h>

#define SIZE 1000

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
/**
 * hash_table_t - is the size of the creted
 * @size: size of the array table
 * Return: returns the has table
*/
hash_table_t *hash_table_create(unsigned long int size);
/**
 * hash_djb2 - implementation of the djb2 algorithm
 * @str: string used to generate hash value
 *
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str);
/**
 * key_index - finds the index to be used
 * @key: key to be placed
 * @size: size of the table
 * Return: returns the index matched
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size);
/**
 * hash_table_set - insert n a hash table
 * @ht: table to add data
 * @key: its the key to be searched
 * @value: value to be inserted
 * Return: return 0 on failiure and 1 on success
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
/**
 * hash_table_get -  function that retrieves a value associated with a key
 * @ht: is the hash table you want to look into
 * @key: is the key you are looking for
 * Return: returns the value for the key
*/
char *hash_table_get(const hash_table_t *ht, const char *key);
#endif