#include "main.h"

/**
 * print_line - to draw a straight line in the terminal.
 *
 * @n: the number of times to print the line
 *
 */
void print_line(int n)
{
	int inx;

	if (n <= 0)
	{
		_putchar('\n');
	}

	for (inx = 0; inx <= n; inx++)
	{
		_putchar('_');
	}

	_putchar('\n');
}
