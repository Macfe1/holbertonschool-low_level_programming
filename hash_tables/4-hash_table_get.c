#include "hash_tables.h"

/**
 * hash_table_get - To retrieve a value associated with a key
 *
 * @key: key to find
 * @ht: hash table
 *
 * Return: if success the value associated with the key otherwise NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (ht == NULL || key == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);

	node = ht->array[index];

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			return (node->value);
		}
		node = node->next;
	}

	return (NULL);
}
