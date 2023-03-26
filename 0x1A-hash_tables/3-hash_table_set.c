#include "hash_tables.h"

/**
 * hash_table_set- adds an element to the hash table
 * @ht: hash table you want to add or update key/value to
 * @key: the key, cannot be an empty string
 * @value: the value associated with the key, can be an empty string
 *
 * Return: 1 if succeeded, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new;

	if (key)
		index = key_index( (const unsigned char *) key, ht->size);
	else
		return (0);

	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);

	if (!ht->array[index])
	{
		ht->array[index] = new;
		new->next = NULL;
	}
	else
	{
		new->next = ht->array[index];
		ht->array[index] = new;
	}

	new->key = strdup(key);
	if (!new->key)
		return (0);
	new->value = strdup(value);
	if (!new->value)
		return (0);

	return (1);
}
