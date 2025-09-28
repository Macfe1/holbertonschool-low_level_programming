#include "main.h"

/**
 * _strspn - function to find the i bytes from s in accept
 *
 * @s: initial string
 * @accept: second string
 *
 * Return: i, number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				break;
		}

		if (accept[j] == '\0')
			break;
	}

	return (i);
}
