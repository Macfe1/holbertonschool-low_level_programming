#include "main.h"

/**
 * reverse_array - function to reverse an array of int
 *
 * @a: pointer
 * @n: length
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int tempo = 0;

	for (i = n - 1; i >= n / 2; i--)
	{
		tempo = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tempo;
	}
}
