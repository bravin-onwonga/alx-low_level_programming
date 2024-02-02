#include "hash_tables.h"

unsigned long int hash_key(const char *str);
hash_node_t *create_pair(const char *key, const char *value);

/**
 * hash_table_set - adds an element to the hash table.
 *
 * @ht: hash table
 * @key: key
 * @value: value at key
 * Return: 1 success; otherwise 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node;

	if (!key)
		return (0);

	index = hash_key(key) % ht->size;

	if (index >= ht->size)
		return (0);

	node = create_pair(key, value);

	if (!node)
		return (0);

	if (ht->array[index] == NULL)
	{
		ht->array[index] = node;
		return (1);
	}

	/* Incase of collision */
	node->next = ht->array[index];
	ht->array[index] = node;

	return (1);
}

/**
 * create_pair - creates a new key value pair node
 *
 * @key: key
 * @value: value at key
 * Return: new node; otherwise 0
 */

hash_node_t *create_pair(const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
		return (NULL);

	new_node->key = malloc(sizeof(key) + 1);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->value = malloc(sizeof(value) + 1);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (NULL);
	}

	strcpy(new_node->key, key);
	strcpy(new_node->value, value);
	new_node->next = NULL;

	return (new_node);
}

/**
 * hash_key - implementation of the djb2 algorithm
 * @str: string used to generate hash value
 *
 * Return: hash value
 */

unsigned long int hash_key(const char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
