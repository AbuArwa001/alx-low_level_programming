#include "hash_tables.h"
/**
 * hash_table_create - is the size of the creted
 * @size: size of the array table
 * Return: returns the has table
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (!table)
	{
		return (NULL);
	}

	table->size = size;
	table->array = calloc(table->size, sizeof(hash_node_t *));

	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;

	return (table);
}
