#inlcude "lists.h"

/**
 *
 *
 * 
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *temp_head = *h;
	unsigned int iterator = 0;

	newnode = (dlistint_t *) malloc(sizeof(dlistint_t));

	if (newnode == NULL)
		return (NULL);

	if (temp_head == NULL)
		return (NULL);

	while (temp_head != NULL && iterator < idx)
	{
		if (temp_head->next == NULL)
			return (NULL);
		temp_head = temp_head->next;
		iterator++;
	}
	/*temp_head = temp_head->next;*/
	
	newnode->n = n;
	newnode->prev = temp_head;
	newnode->next = temp_head->next

	if (temp_head->next != NULL)
		temp_head->next = newnode;
	
	


		

}
