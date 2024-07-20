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
	int first_one = 0;

	if (n == 0)
	{
		_putchar('0');
		_putchar('\n');
		return;
	}

	while (mask > 0)
	{
		if (n & mask)
		{
			first_one = 1;
			_putchar('1');
		}

		if (first_one && !(n & mask))
		{
			_putchar('0');
		}

		mask >>= 1;

	}
	_putchar('\n');
}

