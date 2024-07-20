#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array
 *
  @nmemb: number of elements
 * @size: size of the elements
 *
 * Return: A void pointer that points to the memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *new_array = NULL;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	new_array = malloc(nmemb * size);

	if (new_array == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		new_array[i] = 0;

	return ((void *)new_array);
}
