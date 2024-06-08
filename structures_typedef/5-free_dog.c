#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees the memory of the structure
 *
 * @d: pointer to the structure
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	free(d);
}
