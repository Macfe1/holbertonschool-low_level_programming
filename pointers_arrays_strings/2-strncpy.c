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
	int length = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		length++;
	}

	if (n < length)
	{
		length = n;
	}

	for (i = 0; i < length; i++)
	{
		dest[i] = src[i];
	}

	return (dest);

}
