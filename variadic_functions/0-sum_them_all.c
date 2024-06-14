#include "variadic_functions.h"

/**
 * sum_them_all - funtion to make the sum of all its parameters
 *
 * @n: number of arguments
 *
 * Return: the sum of all the parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int sum = 0;

	va_list args_sum;

	va_start(args_sum, n);


	for (i = 0; i < n; i++)
	{
		sum += va_arg(args_sum, int);
	}

	va_end(args_sum);

	return (sum);
}
