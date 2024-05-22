#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program to print a multiplication
 *
 * @argc: to count the number of arguments
 * @argv: arguments
 *
 * Return: 0 if the program successful
 */
int main(int argc, char *argv[])
{
	int firstn, secondn;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	firstn = atoi(argv[1]);
	secondn = atoi(argv[2]);

	printf("%d\n", firstn * secondn);

	return (0);
}
