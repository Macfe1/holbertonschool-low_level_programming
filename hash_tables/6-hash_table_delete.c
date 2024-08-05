#include "hash_tables.h"

/**
 * hash_table_delete - to delete a hash table.
 *
 * @ht: hash table
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *node, *temp_node;

	if (ht == NULL)
		return;

	for (index = 0; index < ht->size; index++)
	{
		node = ht->array[index];
		while (node != NULL)
		{
			temp_node = node;
			node = node->next;
			free(temp_node->value);
			free(temp_node->key);
			free(temp_node);
		}
	}
	free(ht->array);
	free(ht);
}
