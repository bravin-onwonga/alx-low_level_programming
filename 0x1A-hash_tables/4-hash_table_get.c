#include "hash_tables.h"

/**
 * hash_table_get - get a value at an index
 *
 * @ht: hash table
 * @key: key
 * Return: value at key; otherwise NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (!ht || !key)
		return (NULL);

	index = hash_key(key) % ht->size;

	if (index >= ht->size)
		return (0);

	if (!(ht->array[index]))
		return (NULL);

	node = ht->array[index];

	while (node)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}

	return (NULL);
}
