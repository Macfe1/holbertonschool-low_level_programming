#include "main.h"

/**
 * _strpbrk - function that locates a byte from s in accept
 *
 * @s: first string
 * @accept: second string
 *
 * Return: s
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
	}

	return (NULL);
}
