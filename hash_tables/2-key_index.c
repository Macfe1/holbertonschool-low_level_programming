#include "hash_tables.h"

/**
 * key_index - Takes the return value of hash_djb2 and
 * use % operation to generate the index
 *
 * @key: The string to the key
 * @size: size of the table
 *
 * Return: the index where the key/value is
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;

	return (index);
}
