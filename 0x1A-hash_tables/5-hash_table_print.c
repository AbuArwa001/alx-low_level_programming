#include "hash_tables.h"
/**
 * hash_table_print - print hash tablecontents
 * @ht: table to be proccessed
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i = 0, count = 0;
	hash_node_t *node = NULL;

	if (!ht)
	{
		return;
	}
	while (i < ht->size)
	{
		if (ht->array[i])
		{
			node =  ht->array[i];
			while (node)
			{
				count++;
				node = node->next;
			}
		}
		i++;
	}
	printf("{");
	i = 0;
	while (i < ht->size)
	{
			node =  ht->array[i];
			while (node)
			{
                printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (count != 1)
					printf(", ");
				count--;
			}
		i++;
	}
	printf("}\n");
}
