#include "hash_tables.h"

/**
 * hash_table_set - Function that
 * adds an element to the hash table.
 *
 * @ht: the hash table.
 * @key: key.
 * @value: value associated with the key.
 *
 * Return: 1 Success, 0 otherwise.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	unsigned long int i;

	if (ht == NULL || key == NULL)
	{
		return (0);
	}

	i = key_index((unsigned char *) key, ht->size);
	node = ht->array[i];

	while (node)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = strdup(value);
			return (1);
		}
		node = node->next;
	}
	node = malloc(sizeof(hash_table_t));
	if (node == NULL)
	{
		return (0);
	}
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = ht->array[i];
	ht->array[i] = node;

	return (1);
}
