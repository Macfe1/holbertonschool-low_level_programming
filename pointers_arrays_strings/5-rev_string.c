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
	int longi = 0;
	int i;

	while (*s != '0')

	{
		longi++;
		s++;
	}

	s -= longi;

	for (i = 0; i < longi / 2; i++)
	{
		char tempo = s[i];

		s[i] = s[longi - i - 1];
		s[longi - i - 1] = tempo;
	}


}
