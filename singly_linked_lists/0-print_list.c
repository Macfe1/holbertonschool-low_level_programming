#include "lists.h"

/**
 * print_list - function to print every node
 *
 * @h: pointer to the head
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *iterator = h;
	size_t counter = 0;

	while (iterator != NULL)
	{
		if (iterator->str == NULL)
		{
			printf("[0] (nil)\n");
		}

		if (iterator->str != NULL)
		{
			printf("[%u] %s\n", iterator->len, iterator->str);
		}

		iterator = iterator->next;
		counter++;
	}
	return (counter);
}
