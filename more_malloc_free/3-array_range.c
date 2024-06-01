#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates a string from min to max
 *
 * @min: number where the array starts
 * @max: maximum numbers in the array
 *
 * Return: pointer to an array of integers
 */
int *array_range(int min, int max)
{
	int *new_array = NULL;
	int array_len = 0;
	int i = 0;

	if (min > max)
		return (NULL);

	array_len = max - min + 1;

	new_array = (int *) malloc(array_len * sizeof(int));

	if (new_array == NULL)
		return (NULL);

	for (i = min; i < max; i++)
	{
		new_array[i - min] = i;
	}

	return (new_array);

}
