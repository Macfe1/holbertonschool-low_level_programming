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
 * _strcat - Function to concatenates the strings
 *
 * @dest: string one
 * @src: string two
 *
 * Return: pointer
 */
char *_strcat(char *dest, char *src)

{
	int i = _strlen(dest);
	int j = 0;

	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}

	dest[i + j] = '\0';

	return dest;
}

