#include "main.h"

/**
 * print_square - print a square
 *
 * @size: square's size
 *
 * Return: void
 */
void print_square(int size)
{
	int fila;
	int columna;

	for (fila = 0; fila < size; fila++)
	{
		for (columna = 0; columna < size; columna++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}
}
