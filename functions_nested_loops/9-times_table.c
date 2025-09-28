#include "main.h"

/**
 * times_table - main function
 *
 * Description: Print the 9 times table, starting with 0.
 *
 * Return: void
 */
void times_table(void)
{
	int multiplicando, multiplicador;

	for (multiplicando = 0; multiplicando <= 9; multiplicando++)
	{
		for (multiplicador = 0; multiplicador <= 9; multiplicador++)
		{
			int producto = multiplicando * multiplicador;

			if (producto < 10)
			{
				if (multiplicador != 0)
				{
					_putchar (' ');
					_putchar (' ');
				}
				_putchar ('0' + producto);

				if (multiplicador != 9)

				{
					_putchar (',');
				}

				continue;
			}

			_putchar (' ');
			_putchar ('0' + (producto / 10));
			_putchar ('0' + (producto % 10));

			if (multiplicador <= 8)
			{
				_putchar (',');
			}
		}
		_putchar ('\n');
	}
}
