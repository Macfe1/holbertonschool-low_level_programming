#include "main.h"
#include <stdio.h>

/**
 * main - function that prints all arguments
 *
 * @argc: unused
 * @argv: print all the arguments, one per line
 *
 * Return: 0
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	int i = 0;

	while (argv[i] != NULL)
	{
		printf("%s\n", argv[i]);

		i += 1;
	}
	return (0);
}
