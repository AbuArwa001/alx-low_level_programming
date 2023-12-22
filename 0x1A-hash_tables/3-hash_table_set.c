#include "hash_tables.h"
/**
 * hash_table_set - insert n a hash table
 * @ht: table to add data
 * @key: its the key to be searched
 * @value: value to be inserted
 * Return: return 0 on failiure and 1 on success
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i = 0;
	hash_table_t *temp = ht;
	hash_node_t *tmp_node = NULL;
	hash_node_t *node  = malloc(sizeof(hash_node_t));

	if (!node)
		return (0);
	if (!key || strlen(key) == 0)
		return (0);
	if (ht == NULL || *key == '\n' || *value == '\n')
		return (0);
	/*find the index*/
	i = key_index((const unsigned char *)key, ht->size);
	tmp_node = temp->array[i]; /*find the value in the idx if exist*/
	/*create a node*/
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;
	if (!node->key || !node->value)
	{
		free(node->key);
		free(node->value);
		free(node);
		return (0);
	}
	if (!tmp_node)
	{

		temp->array[i] = node;
	}
	else
	{

		hash_node_t *nd = tmp_node;

		node->next = nd;
		tmp_node  =  node;
		temp->array[i] = tmp_node;
	}
	return (1);
}
