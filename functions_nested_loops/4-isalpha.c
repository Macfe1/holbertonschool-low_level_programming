#include "main.h"

/**
 * _isalpha - function
 *
 * @c: number
 *
 * Return: 0
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	return (0);
}
