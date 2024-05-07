#include "main.h"
/**
 * _strlen - function that returns the length of a string
 *
 * @s: Pointer
 *
 * Return: The length of a string
 */
int _strlen(char *s)
{
	int longitd = 0;

	while (*s != '\0')
	{
		longitd++;
		s++;
	}

	return (longitd);
}

/**
 * puts_half - function to print hal of a string
 *
 * @str: Pointer to the string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int length_of_the_string = _strlen(str);
	int n = 0;

	for (n = (length_of_the_string + 1) / 2; n < length_of_the_string; n++)
	{
		_putchar (str[n]);
	}

	_putchar('\n');
}
