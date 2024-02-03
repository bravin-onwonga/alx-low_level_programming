#include "hash_tables.h"

int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

/**
 * shash_table_create - create a shash table
 * @size: size of shash table
 *
 * Return: address of shash table
 */

shash_table_t *shash_table_create(unsigned long int size)
{
}

/**
 * shash_table_set - adds key value to shash table in ordered manner
 * @ht: shash table
 * @key: key
 * @value: value
 *
 * Return: 1 success; otherwise 0
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
}

/**
 * shash_table_get - gets value at key
 * @ht: shash table
 * @key: key
 *
 * Return: value of the key
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
}

/**
 * shash_table_print - prints the values of a shash table
 *
 * @ht: shash table
 */

void shash_table_print(const shash_table_t *ht)
{
}

/**
 * shash_table_print_rev - prints shash table in reverse
 *
 * @ht: shash table
 */

void shash_table_print_rev(const shash_table_t *ht)
{
}

/**
 * shash_table_delete - frees a shash table
 *
 * @ht: shash table
 */

void shash_table_delete(shash_table_t *ht)
{
}
