#include "main.h"

/**
 * print_last_digit - main function
 *
 * @numero: numero
 *
 * Description: Print the last digit of a number
 *
 * Return: The last digit
 */
int print_last_digit(int numero)
{
	int x;

	x = numero % 10;

	if (x < 0)
	{
		x *= -1;
	}
	_putchar ('0' + x);
	return (x);
}
