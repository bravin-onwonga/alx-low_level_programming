#include "hash_tables.h"

/**
 * hash_table_print - print the key value pairs in a hash table
 * @ht: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int count = 0;

	if (ht)
	{

		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i])
				count++;
		}

		printf("{");

		i = 0;
		while (i < ht->size && count >= 0)
		{
			if (ht->array[i] && count != 0)
			{
				printf("\'%s\' : \'%s\', ", ht->array[i]->key, ht->array[i]->value);
				count--;
			}

			if (ht->array[i] && count == 0)
			{
				printf("\'%s\' : \'%s\'", ht->array[i]->key, ht->array[i]->value);
				count--;
			}
			i++;
		}
		printf("}\n");
	}
}
