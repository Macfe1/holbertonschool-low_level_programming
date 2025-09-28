#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory
 *
 * @b: number
 *
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *memory = NULL;

	memory = (void *) malloc(b);

	if (memory == NULL)
	{
		exit(98);
		return (NULL);
	}

	return (memory);
}
