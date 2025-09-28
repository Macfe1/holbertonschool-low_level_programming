#include "main.h"

/**
 * _memcpy - function
 *
 * @dest: memory are of destiny
 * @src: memory area of destiny
 * @n: number of ch copied
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j = 0;

	for (j = 0; j < n; j++)
		dest[j] = src[j];

	return (dest);
}

