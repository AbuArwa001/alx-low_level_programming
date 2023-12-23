#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table.
 * @ht:  is the hash table
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *hash = ht;
	hash_node_t *node = NULL;
	unsigned int i = 0;

	while (i < hash->size)
	{
		if (hash->array[i])
		{
			node = hash->array[i];

			while (node)
			{
				hash->array[i] = hash->array[i]->next;
				free(node->key);
				free(node->value);
				free(node);
				node = hash->array[i];
			}

			free(hash->array[i]);
		}

		i++;
	}

	free(hash->array);
	free(ht);

}
