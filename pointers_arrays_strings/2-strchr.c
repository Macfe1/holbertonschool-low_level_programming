#include "main.h"

/**
 * _strchr - function to return a pointer to c
 *
 * @s: string
 * @c: character
 *
 * Return: s if the character is there
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (c == '\0')
		{
			return ('\0');
		}

		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
		return (NULL);
}
