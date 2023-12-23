#include "hash_tables.h"
/**
 * hash_table_get -  function that retrieves a value associated with a key
 * @ht: is the hash table you want to look into
 * @key: is the key you are looking for
 * Return: returns the value for the key
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i = 0;
	hash_node_t *tmp_node = NULL;
	char *value = NULL;

	if (!key || strlen(key) == 0 || !ht || *key == '\0' || ht->size == 0)
		return (NULL);

	i = key_index((const unsigned char *)key, ht->size);
	tmp_node = ht->array[i];

	while (tmp_node)
	{
		if (strcmp(tmp_node->key,  key) == 0)
		{
			value = tmp_node->value;
			return (value);
		}
		tmp_node = tmp_node->next;
	}

	return (value);
}
