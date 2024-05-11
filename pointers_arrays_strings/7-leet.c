#include "main.h"

/**
 * leet - function
 *
 * @s: pointer
 *
 * Return: s
 */
char *leet(char *s)
{
	int i = 0;
	int j = 0;
	char let[] = "aAeEoOtTlL";
	char num[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == let[j])
			{
				s[i] = num[j];
			}
		}
	}

	return (s);
}
