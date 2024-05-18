#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print the sum of the diagonals
 *
 * @a: pointer to the first number in the matrix
 * @size: of the matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int diag_1 = 0;
	int diag_2 = 0;

	for (i = 0; i < size; i++)
	{
		diag_1 += *((a + i * size) + i);
		diag_2 += *((a + i * size) + (size - 1 - i));
	}

	printf("%d, %d\n", diag_1, diag_2);
}
