#include "lists.h"

/**
 * add_node - function to create a new node and put it as the head
 *
 * @head: pointer to the first node
 * @str: pointer to the string
 *
 * Return: the addres of the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *new_string;
	unsigned int new_len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	new_string = strdup(str);
	if (new_string == NULL)
	{
		return (NULL);
	}

	while (str[new_len] != '\0')
	{
		new_len++;
	}

	new_node = (list_t *) malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = new_string;
	new_node->len = new_len;
	new_node->next = *head;
	*head = new_node;

	return (new_node);

}


