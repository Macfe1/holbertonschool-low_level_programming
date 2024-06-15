#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - function to print numbers with the separator
 *
 * @separator: separator after the number
 * @n: number of parameters to show
 *
 * Return: the n numbers with its separator
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0, num;

	va_list print_num;

	if (separator == NULL)
		separator = "";

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(print_num, n);

	num = va_arg(print_num, unsigned int);

	for (i = 0; i < n - 1; i++, num = va_arg(print_num, unsigned int))
	{
		printf("%d%s", num, separator);
	}
	printf("%d", num);

	va_end(print_num);

	printf("\n");
}
