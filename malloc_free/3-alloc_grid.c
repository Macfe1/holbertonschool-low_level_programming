#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 *
 * @width: number of cols
 * @height: number of rows
 *
 * Return: pointer to a 2 dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int i = 0, j = 0;
	int **matriz = NULL;

	if (width <= 0 || height <= 0)
		return (NULL);

	matriz = (int **)malloc(height * sizeof(int *));
	if (matriz == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		matriz[i] = (int *)malloc(width * sizeof(int));
		if (matriz[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(matriz[j]);
			}

			free(matriz);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			matriz[i][j] = 0;
		}
	}

	return (matriz);

}
