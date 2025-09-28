#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_char - function to pass an arg of the va_list a print it as char
 *
 * @arg: adtional arguments from the va_list
 *
 * Retun: void
 */
void print_char(va_list arg)
{
	printf("%c", va_arg(arg, int));
}

/**
 * print_int - function to pass an arg of the va_list a print it as an int
 *
 * @arg: adtional arguments from the va_list
 *
 * Retun: void
 */
void print_int(va_list arg)
{
	printf("%d", va_arg(arg, int));
}

/**
 * print_float - function to pass an arg of the va_list a print it as float
 *
 * @arg: adtional arguments from the va_list
 *
 * Retun: void
 */
void print_float(va_list arg)
{
	printf("%f", va_arg(arg, double));
}

/**
 * print_string - function to pass an arg of the va_list a print it as string
 *
 * @arg: adtional arguments from the va_list
 *
 * Retun: void
 */
void print_string(va_list arg)
{
	char *str = va_arg(arg, char*);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}


/**
 * print_all - a function that prints all the arguments
 *
 * @format: string of types to print
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i = 0, j = 0;
	char *separator = "";

	list_arg arg_struct[] = {

		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};

	va_list extra_argm;

	va_start(extra_argm, format);

	while (format != NULL && format[i] != '\0')
	{
		j = 0;

		while (arg_struct[j].name != '\0')
		{
			if (arg_struct[j].name == format[i])
			{
				printf("%s", separator);
				arg_struct[j].print(extra_argm);
				separator = ", ";

				break;
			}

			j++;
		}

		i++;
	}

	va_end(extra_argm);

	printf("\n");
}
