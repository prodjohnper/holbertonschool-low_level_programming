#include "hash_tables.h"

/**
 * hash_table_delete - Function that deletes a hash table.
 *
 * @ht: is the hash table.
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current, *next;
	unsigned long int i, size = 0;

	if (ht == NULL || ht->array == NULL)
	{
		return;
	}

	size = ht->size;

	for (i = 0; i < size; i++)
	{
		current = ht->array[i];

		while (current)
		{
			next = current->next;
			free(current->key);
			free(current->value);
			free(current);
			current = next;
		}
	}
	free(ht->array);
	free(ht);
}
