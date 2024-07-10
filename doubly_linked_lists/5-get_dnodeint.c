#include "lists.h"

/**
 * *get_dnodeint_at_index - get the nth node of a dlistint_t linked list.
 *
 * @head: pointer ti the first node
 * @index: position to get the needed element
 *
 * Return: the node in the index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int counter = 0;
	
	if (head == NULL)
	{
		return (NULL);
	}

	while (counter < index)
	{
		temp = temp->next;
		counter++;
	}

	return (temp);
}
