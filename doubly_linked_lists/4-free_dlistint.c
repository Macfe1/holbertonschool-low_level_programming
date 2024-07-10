#include "lists.h"

/**
 * free_dlistint - function to frees all teh linked list memory
 *
 * @head: pointer to the first node in the linked list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp_head = head, *next;

	while (temp_head != NULL)
	{
		next = temp_head->next;
		free(temp_head);
		temp_head = next;
	}
}
