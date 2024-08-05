#include "hash_tables.h"

/**
 * hash_table_print - to print a hash table
 *
 * @ht: hash table
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *node;
	int first_flag = 1;

	if (ht == NULL)
		return;

	printf("{");

	for (index = 0; index < ht->size; index++)
	{
		node = ht->array[index];
		while (node != NULL)
		{
			if (first_flag == 0)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			first_flag = 0;
			node = node->next;
		}
	}
	printf("}\n");
}
