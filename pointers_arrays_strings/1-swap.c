#include "main.h"
/**
 * swap_int - function to swap the values
 *
 * @a: pointer
 * @b: pointer
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int letra_a = *a;
	*a = *b;
	*b = letra_a;
}
