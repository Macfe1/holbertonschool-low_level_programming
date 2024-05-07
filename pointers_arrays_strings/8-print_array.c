#include "main.h"
#include <stdio.h>

/**
 * print_array - function
 *
 * @a: pointer
 * @n: lenght
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i = 0;

	if (n < 1)
	{
		return;
	}

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != n - 1)
		{
			printf(", ");
			continue;
		}

		printf("\n");
	}
}
