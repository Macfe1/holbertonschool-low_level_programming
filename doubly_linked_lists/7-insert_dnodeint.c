#include "lists.h"

/**
 * *insert_dnodeint_at_index - inserts a new node at a given position
 *
 * @h: pointer to teh first node
 * @idx: info to know where paste the new node
 * @n: data
 *
 * Return: the addres of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *temp_head = *h, *temp_nextnode;
	unsigned int iterator = 0;

	newnode = (dlistint_t *) malloc(sizeof(dlistint_t));

	if (newnode == NULL)
		return (NULL);

	if (temp_head == NULL)
	{
		newnode->n = n;
		newnode->prev = NULL;
		newnode->next = NULL;
	}
	if (idx == 0)
		return (add_dnodeint(h, n));

	while (temp_head != NULL && iterator < idx - 1)
	{
		if (temp_head->next == NULL)
			return (NULL);
		temp_head = temp_head->next;
		iterator++;
	}
	temp_nextnode = temp_head->next;
	newnode->n = n;
	newnode->prev = temp_head;
	newnode->next = temp_head->next;

	if (temp_nextnode != NULL)
		temp_nextnode->prev = newnode;

	temp_head->next = newnode;

	return (newnode);
}
