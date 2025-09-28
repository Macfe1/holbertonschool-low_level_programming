#include "main.h"

/**
 * _memset - function to  fills memory with b
 *
 * @b: constant byte
 * @n: numbers of bytes
 * @s: pointer to memory area
 *
 * Return: pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
