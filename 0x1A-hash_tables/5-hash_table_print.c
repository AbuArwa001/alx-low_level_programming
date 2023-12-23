#include "hash_tables.h"
/**
 * hash_table_print - print hash tablecontents
 * @ht: table to be proccessed
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i = 0, count = 0;

	if (!ht)
	{
		return;
	}

	while (i < ht->size)
	{
		if (ht->array[i])
			count++;

		i++;
	}

	printf("{");
	i = 0;

	while (i < ht->size)
	{
		if (ht->array[i])
		{
			printf("'%s': '%s'", ht->array[i]->key,  ht->array[i]->value);

			if (count != 1)
				printf(", ");

			count--;
		}

		i++;
	}

	printf("}\n");


}
