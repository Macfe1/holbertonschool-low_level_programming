#include "lists.h"
#include <stddef.h>

/**
 * list_len - function to count the number of elements in a linked list
 *
 * @h: head, where starts the linked list
 *
 * Return: counter -> the number of elements or nodes
 */
size_t list_len(const list_t *h)
{
	const list_t *iterator = h;
	size_t counter = 0;

	if (iterator == NULL)
	{
		return (-1);
	}

	while (iterator != NULL)
	{
		iterator = iterator->next;
		counter++;
	}

	return (counter);
}
