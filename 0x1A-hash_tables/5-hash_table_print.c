#include "hash_tables.h"

/**
 * hash_table_print - print the key value pairs in a hash table
 * @ht: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int count = 0;
	hash_node_t *temp;

	if (!ht)
		return;

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

			temp = ht->array[i]->next;
			while (temp)
			{
				printf("\'%s\' : \'%s\', ", ht->array[i]->key, temp->value);
				temp = temp->next;
			}
			count--;
		}

		if (ht->array[i] && count == 0)
		{
			if (!ht->array[i]->next)
				printf("\'%s\' : \'%s\'", ht->array[i]->key, ht->array[i]->value);
			else
			{
				printf("\'%s\' : \'%s\', ", ht->array[i]->key, temp->value);
				temp = ht->array[i]->next;
				while (temp->next)
				{
					printf("\'%s\' : \'%s\', ", ht->array[i]->key, temp->value);
					temp = temp->next;
				}
			}
			count--;
		}
		i++;
	}
	printf("}\n");
}
