#include "main.h"

/**
 * _strlen - function that returns the length of a string
 *
 * @s: Pointer
 *
 * Return: The length of a string
 */
int _strlen(char *s)
{
	int longitd = 0;

	while (*s != '\0')
	{
		longitd++;
		s++;
	}

	return (longitd);
}

/**
 * _strncat - function to concatenate
 *
 * @dest: fisrt string
 * @src: second string
 * @n: number of characters
 *
 * Return: pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int l = _strlen(dest);
	int i = 0;
	char *f = dest + i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[l + i] = src[i];
	}

	return (f);
}
