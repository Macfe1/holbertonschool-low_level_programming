#include "main.h"

/**
 * rev_string - function
 *
 * @s: pointer
 *
 * Return: void
 */
void rev_string(char *s)
{
	char *str_1 = s;
	char *str_2 = s;

	while (*str_1 != '\0')

	{
		str_1++;
	}

	str_1--;

	while (str_2 < str_1)
	{
		char tempo = *str_1;

		*str_1 = *str_2;
		*str_2 = tempo;

		str_2++;
		str_1--;
	}
}
