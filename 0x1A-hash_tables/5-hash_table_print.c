#include "hash_tables.h"

void print_linked_list(hash_node_t *node);

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
	while (i < ht->size && count > 0)
	{
		if (ht->array[i])
		{
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			temp = ht->array[i]->next;
			print_linked_list(temp);
			count--;
		}
		if (count > 0 && ht->array[i])
			printf(", ");
		i++;
	}
	printf("}\n");
}

/**
 * print_linked_list - prints a linked list
 * @node: node to start printing at
 */

void print_linked_list(hash_node_t *node)
{
	hash_node_t *temp = node;

	while (temp)
	{
		printf(", '%s': '%s'", temp->key, temp->value);
		temp = temp->next;
	}
}
