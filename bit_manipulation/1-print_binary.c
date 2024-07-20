#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number
 *
 * @n: number
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(n) * 8 - 1);
	int zeros = 1;

	while (mask > 0)
	{
		if (n & mask)
		{
			zeros = 0;
			_putchar('1');
		}

		if (zeros == 0 && !(n & mask))
		{
			_putchar('0');
		}
	}
	if (zeros)
	{
		_putchar('0');
		_putchar('\n');
	}
}

