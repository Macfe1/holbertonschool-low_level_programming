#include "lists.h"

/**
 * *add_dnodeint -  adds a new node at the beginning of a dlistint_t list
 *
 * @head: pointer to the first node
 * @n: int data
 *
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;
	dlistint_t *temp = *head;

	newnode = (dlistint_t *) malloc(sizeof(dlistint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = (int)n;
	newnode->prev = NULL;
	newnode->next = temp;

	if (temp != NULL)
		temp->prev = newnode;

	*head = newnode;

	return (newnode);
}
