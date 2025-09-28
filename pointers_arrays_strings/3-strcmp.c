#include "main.h"

/**
 * _strcmp - function that compares two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: diff
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int diff = 0;

	for (i = 0; (s1[i] != '\0' && s2[i] != '\0') && (s1[i] == s2[i]); i++)
		;

	diff = s1[i] - s2[i];

	return (diff);
}
