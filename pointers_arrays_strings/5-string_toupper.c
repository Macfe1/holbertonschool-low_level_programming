#include "main.h"

/**
 * string_toupper - changes lowercase to uppercase
 *
 * @p: pointer to an array
 *
 * Return: pointer to the uppercase array
 */
char *string_toupper(char *p)
{
	int i = 0;

	for (i = 0; p[i] != '\0'; i++)
	{
		if (p[i] >= 'a' && p[i] <= 'z')
		{
			p[i] = p[i] - 32;
		}
	}
	return (p);
}
