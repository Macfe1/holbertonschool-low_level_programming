#include "main.h"

/**
 * _strncpy - function
 *
 * @dest: pointer
 * @src: pointer
 * @n: number of ch
 *
 * Return: poin
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; src[i] && i != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);

}
