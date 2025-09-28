#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 *
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if fails
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int total = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		total = (total << 1) | (b[i] - '0');
	}

	return (total);
}
