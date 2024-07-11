#include "lists.h"

/**
 * sum_dlistint - to sum all the data n in a dlistint_t linked list
 *
 * @head: pointer to the first node in the linked list
 *
 * Return: the sum all the the data n
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *iterator = head;
	int sum_data = 0;

	while (iterator != NULL)
	{
		sum_data += iterator->n;
		iterator = iterator->next;
	}

	return (sum_data);
}
