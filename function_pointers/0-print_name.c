#include "function_pointers.h"

/**
 * print_name - to provide the name to other functions to print
 *
 * @name: name of the user
 * @f: pointer to function
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;

	f(name);
}
