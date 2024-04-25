#include "main.h"

/**
 * _isdigit - return  if is a digit otherwise 0
 *
 * @c: numero
 *
 * Return: 1 if is a digit otherwise 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}

	return (0);
}

