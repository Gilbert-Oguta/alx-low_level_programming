#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: the hash table.
 *
 * Return: 0 (Success)
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int y = 0;
	hash_node_t *node;

	while (y < ht->size)
	{
		while (ht->array[y] != NULL)
		{
			node = ht->array[y]->next;
			free(ht->array[y]->key);
			free(ht->array[y]->value);
			free(ht->array[y]);
			ht->array[y] = node;
		}
		y++;
	}
	free(ht->array);
	free(ht);
}
