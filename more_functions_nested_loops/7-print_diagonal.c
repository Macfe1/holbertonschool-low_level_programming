#include "main.h"

/**
 * print_diagonal - function to print _ if n is bigger than 0
 *
 * @n: number of _
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i;
	int spc;


	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		for (spc = 0; spc < i; spc++)
		{
			_putchar(' ');
		}

		_putchar('\\');
		_putchar('\n');
	}
}
