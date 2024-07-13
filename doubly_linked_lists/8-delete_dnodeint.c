#include "lists.h"

/**
 * delete_dnodeint_at_index - function to delete a node
 *
 * @head: pointer to the first node
 * @index: info to know what node to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp_head = *head, *temp_nextnode, *temp_prevnode;
	unsigned int iterator = 0;

	if (temp_head == NULL)
		return (-1);

	if (index == 0)
	{
		if (temp_head->next != NULL)
			temp_head->next->prev = NULL;

		*head = temp_head->next;
		free(temp_head);
		return (1);
	}

	while (temp_head != NULL && iterator < index)
	{
		if (temp_head->next == NULL)
			return (-1);
		temp_head = temp_head->next;
		iterator++;
	}

	temp_nextnode = temp_head->next;
	temp_prevnode = temp_head->prev;
	if (temp_prevnode != NULL)
		temp_prevnode->next = temp_nextnode;

	if (temp_nextnode != NULL)
		temp_nextnode->prev = temp_prevnode;

	free(temp_head);

	return (1);
}
