#include "hash_tables.h"

/**
 * hash_table_get - Function that
 * retrieves a value associated with a key.
 *
 * @ht: is the hash table you want to look into.
 * @key: is the key you're looking for.
 *
 * Returns: the value associated with the element, or
 * NULL if key couldn't be found.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp;
	unsigned long int i;

	if (ht == NULL || key == NULL)
	{
		return (0);
	}

	i = key_index((unsigned char *) key, ht->size);
	temp = ht->array[i];

	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			return (temp->value);
		}
		temp = temp->next;
	}
	return (NULL);
}
