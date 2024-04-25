#include "main.h"

/**
 * more_numbers - print the numbers from 0 to 14 ten times
 *
 * Return: void
 */
void more_numbers(void)
{
	int numeros;
	int veces;

	for (veces = 1; veces <= 10; veces++)

	{
		for (numeros = 0; numeros <= 14; numeros++)
		{
			if (numeros > 9)
			{
				_putchar('0' + numeros / 2);
				_putchar('0' + numeros % 10);
			}
		}

	_putchar ('\n');

	}
}
