#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 *
 * @ht: pointer to the table
 * @key: key
 * @value: value
 *
 * Return: 1 if success otherwise 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	char *dup_value = strdup(value), *dup_key = strdup(key);
	hash_node_t *new_node, *current_node, *pointer_to_old_head;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);
	if (dup_value == NULL)
		return (0);
	if (dup_key == NULL)
	{
		free(dup_value);
		return (0);
	}
	index = key_index((const unsigned char *)key, ht->size);

	pointer_to_old_head = ht->array[index];
	current_node = pointer_to_old_head;
	while (current_node != NULL)
	{
		if (strcmp(current_node->key, key) == 0)
		{
			free(current_node->value);
			current_node->value = dup_value;
			free(dup_key);
			return (1);
		}
		current_node = current_node->next;
	}
	new_node = (hash_node_t *) malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(dup_value);
		free(dup_key);
		return (0);
	}
	new_node->key = dup_key;
	new_node->value = dup_value;
	new_node->next = pointer_to_old_head;
	ht->array[index] = new_node;
	return (1);
}
