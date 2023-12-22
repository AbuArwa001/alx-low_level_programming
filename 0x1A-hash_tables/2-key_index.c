#include "hash_tables.h"
/**
 * key_index - finds the index to be used
 * @key: key to be placed
 * @size: size of the table
 * Return: returns the index matched
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0;

	index = hash_djb2(key) % size;

	return (index);
}
