#include "hash_tables.h"

/**
 * *hash_table_create - To create a hash table
 *
 * @size: Size of the table
 *
 * Return: if success return new table otherwise NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *new_table;

	new_table = (hash_table_t *) malloc(sizeof(hash_table_t));
	if (new_table == NULL)
	{
		free(new_table);
		return (NULL);
	}

	new_table->array = (hash_node_t **) malloc(sizeof(hash_node_t *) * size);
	if (new_table->array == NULL)
	{
		free(new_table->array);
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		new_table->array[i] = NULL;
	}

	return (new_table);
}
