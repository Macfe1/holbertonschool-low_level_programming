#include "main.h"
#include <stdlib.h>

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
 * _strdup - function that returns a pointer to a newly allocated space
 *
 * @str: pointer to a string of characters
 *
 * Return: second_a if str isn't a NULL
 */

char *_strdup(char *str)
{
	int longi_str = 0;
	int i = 0;
	char *second_a = NULL;

	if (str == NULL)
	{
		return (NULL);
	}

	longi_str = _strlen(str);
	second_a = (char *) malloc(longi_str + 1 * sizeof(char));

	if (second_a == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < longi_str; i++)
	{
		second_a[i] = str[i];
	}

	return (second_a);

}
