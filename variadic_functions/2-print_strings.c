#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function to print strings followed by a separator
 *
 * @separator: separator after the string
 * @n: number of parameters to show
 *
 * Return: the n strings with its separator
 */
void print_strings(const char *separator, const unsigned int n, ...)

{
	unsigned int i = 0;
	char *next_strings;

	va_list print_string;

	if (separator == NULL)
		separator = "";

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(print_string, n);
	next_strings = va_arg(print_string, char*);

	for (i = 0; i < n - 1; i++, next_strings = va_arg(print_string, char*))
	{
		if (next_strings == NULL)
			printf("(nil)%s", separator);

		else if (next_strings[0] == '\0')
			printf("\"\"%s", separator);
		else
			printf("%s%s", next_strings, separator);
	}

	next_strings = va_arg(print_string, char*);

	if (next_strings == NULL)
		printf("(nil)");

	else if (next_strings[0] == '\0')
		printf("\"\"");

	else
		printf("%s", next_strings);

	va_end(print_string);
	printf("\n");
}
