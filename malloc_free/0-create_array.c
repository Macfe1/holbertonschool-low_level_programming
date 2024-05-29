#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars
 *
 * @size: size of the array
 * @c: character to fill the array with
 *
 * Return: arreglo_1 if the size isn't 0
 */
char *create_array(unsigned int size, char c)
{
	char *arreglo_1 = NULL;
	unsigned int i = 0;

	if (size == 0)
	{
		return (arreglo_1);
	}

	arreglo_1 = (char *) malloc(size * sizeof(char));

	if (arreglo_1 == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arreglo_1[i] = c;
	}

	return (arreglo_1);
}
