#include "hash_tables.h"

/**
 * hash_table_delete - deletes elements of a hash table
 * @ht: hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp, *curr;
	unsigned long int i = 0;

	if (ht)
	{

		while (i < ht->size)
		{
			curr = ht->array[i];
			if (curr)
			{
				while (curr)
				{
					temp = curr->next;
					free(curr->key);
					free(curr->value);
					if (temp)
						free(curr->next);
					curr = temp;
				}
			}
			i++;
		}

		free(ht->array);
		free(ht->size);
		free(ht);
	}
}
