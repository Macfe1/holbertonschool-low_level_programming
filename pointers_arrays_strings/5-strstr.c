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
 * _strstr - function  finds the first occurrence of needle
 *
 * @haystack: first string where will be find needle
 * @needle: second string to find
 *
 * Return: a pointer to the beginning of needle
 */


char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;
	int needle_len = _strlen(needle);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] != needle[j])
		{
			continue;
		}

		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}

			if (j == needle_len - 1)
			{
				return (&haystack[i]);
			}
		}
	}
	return (NULL);
}
