#include "lists.h"

/**
 * print_dlistint - function to print all the elements of the list
 *
 * @h: pointer to the first node
 *
 * Return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t counter = 0;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		counter++;
	}

	return (counter);
}
