#include "main.h"

/**
 * print_numbers - function to print numbers from 0 to 9
 *
 *
 */
void print_numbers(void)
{
	int numbers;

	for (numbers = 0; numbers <= 9; numbers++)
	{
		_putchar('0' + numbers);
	}

	_putchar('\n');
}
