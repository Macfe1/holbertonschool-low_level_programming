#include "lists.h"

/**
 * free_list - function that frees all the node memory
 *
 * @head: a pointer to the first node of the linked list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *current_node = head, *next;

	if (head == NULL)
	{
		return;
	}

	while (current_node != NULL)
	{
		next = current_node->next;
		free(current_node);
		current_node = next;
	}
}
