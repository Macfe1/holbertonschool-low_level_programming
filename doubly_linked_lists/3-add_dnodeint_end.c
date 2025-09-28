#include "lists.h"

/**
 * *add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 *
 * @head: pointer to the first node
 * @n: int data
 *
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode;
	dlistint_t *temp = *head;

	newnode = (dlistint_t *) malloc(sizeof(dlistint_t));

	if (newnode == NULL)
		return (NULL);

	while (temp != NULL)
	{
		if (temp->next == NULL)
			break;

		temp = temp->next;
	}

	newnode->n = (int)n;
	newnode->prev = temp;
	newnode->next = NULL;

	if (temp == NULL)
		*head = newnode;

	if (temp != NULL)
		temp->next = newnode;

	return (newnode);
}
