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

	index = hash_key(key) % ht->size;

	if (!(ht->array[index]))
		return (NULL);

	return (ht->array[index]->value);
}
