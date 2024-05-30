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
 * str_concat - function to concatenates two arrays
 *
 * @s1: pointer to the first array
 * @s2: pointer to the second array
 *
 * Return: new_a the array with the two arrays
 */
char *str_concat(char *s1, char *s2)
{
	char *new_a = NULL;
	int longi_1 = 0, longi_2 = 0, longi_3 = 0;
	int i = 0, j = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	longi_1 = _strlen(s1);
	longi_2 = _strlen(s2);
	longi_3 = longi_1 + longi_2 + 1;

	new_a = (char *) malloc(longi_3 * sizeof(char));

	if (new_a == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < longi_1; i++)
	{
		new_a[i] = s1[i];
	}

	i = longi_1;

	for (j = 0; j < longi_2; j++)
	{
		new_a[i] = s2[j];
		i++;
	}

	new_a[i] = '\0';

	return (new_a);
}
