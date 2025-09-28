#include "main.h"

/**
 * jack_bauer - main function
 *
 * Description: Print every minute of the day of Jack Bauer
 *
 * Return: void
 */
void jack_bauer(void)
{
	int hora, min;

	for (hora = 0; hora <= 23; hora++)
	{
		for (min = 0; min <= 59; min++)
		{
			_putchar ('0' + (hora / 10));
			_putchar ('0' + (hora % 10));
			_putchar (':');
			_putchar ('0' + (min / 10));
			_putchar ('0' + (min % 10));
			_putchar ('\n');
		}
	}
}

