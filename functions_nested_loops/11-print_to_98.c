#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Print from n until 98
 *
 * @n: Starter point until 98
 *
 * Return: 0
 */
void print_to_98(int n)
{
	int target = 98;

	printf("%d", n);

	if (n != target)
	{
		printf(", ");
		print_to_98((n < target) ? ++n : --n);
		return;
	}
	if (n == target)
	{
		printf("\n");
	}
}
