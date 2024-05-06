#include "main.h"

/**
 * puts2 - function to print every other character of a string
 *
 * @str: Pointer
 *
 * Return: void
 */
void puts2(char *str)
{
	int cont = 0;
	char *caract = str;

	while (*caract != '\0')
	{
		if (cont % 2 == 0)
		{
			_putchar(*caract);
		}

		cont++;
		caract++;
	}
}
