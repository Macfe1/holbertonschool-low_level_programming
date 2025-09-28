#include "main.h"
#include <stdlib.h>
#include <stdio.h>

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
 * string_nconcat - function that concatenates two arrays or n bytes
 *
 * @s1: first array
 * @s2: second array
 * @n: number of bytes from second array
 *
 * Return: pointer to array
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len_s1 = 0, len_s2 = 0, sum_all = 0;
	unsigned int i = 0;
	char *new_array = NULL;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len_s1 = _strlen(s1);
	len_s2 = _strlen(s2);
	sum_all = len_s1 + (n > len_s2 ? len_s2 : n);

	new_array = (char *) malloc((sum_all + 1) * sizeof(char));

	if (new_array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len_s1; i++)
	{
		new_array[i] = s1[i];
	}

	for (i = 0; i < sum_all - len_s1; i++)
	{
		new_array[len_s1 + i] = s2[i];
	}

	new_array[sum_all] = '\0';

	return (new_array);
}
