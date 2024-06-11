#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - function that searches an int into another function
 *
 * @array: array of integers
 * @size: size of the array
 * @cmp: pointer to a function
 *
 * Return: -1 if no element matches or size is <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;
	int cmp_result;

	if (size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		cmp_result = cmp(array[i]);

		if (cmp_result != 0)
			return (i);
	}

	return (-1);
}
