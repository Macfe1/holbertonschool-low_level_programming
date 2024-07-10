#include "lists.h"

/**
 * dlistint_len - returns the number of nodes
 *
 * @h: pointer to the first node
 *
 * Return: The number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t counter = 0;

	while (temp != NULL)
	{
		temp = temp->next;
		counter++;
	}

	return (counter);
}
