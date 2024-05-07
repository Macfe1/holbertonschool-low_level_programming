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
 * _strcpy - function
 *
 *@dest: pointer
 *@src: pointer
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int lenght = _strlen(src);
	int i = 0;

	for (i = 0; i < lenght; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
