#include "main.h"

/**
 * print_triangle - function to print a rectangle
 *
 * @size: number of the triangle's size
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i;
	int esp;
	int simb;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (i = 1; i <= size; i++)
	{
		for (esp = 1; esp <= size - i; esp++)
		{
			_putchar(' ');
		}

			for (simb = 1; simb <= i; simb++)
			{
				_putchar('#');
			}

		_putchar('\n');
	}
}
