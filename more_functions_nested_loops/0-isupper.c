#include "main.h"
/**
 * _isupper - return 1 if is uppercase if is not return 0
 *
 * @c: Is the number
 *
 * Return: 1 if is uppercase otherwise 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}

	return (0);
}
