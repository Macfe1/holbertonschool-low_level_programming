#include "main.h"
/**
 * print_sign - function
 *
 * @n: number
 *
 * Description: print 1, 0 or -1
 *
 * Return: 1, 0 or -1
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar ('-');
		return (-1);
	}

	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}

	_putchar('0');
	return (0);

}
