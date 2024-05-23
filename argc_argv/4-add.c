#include "main.h"
#include <stdlib.h>
#include <ctype.h>

/**
 * main - program that adds positive numbers
 *
 * @argc: number
 * @argv: array
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int suma = 0;
	int i = 1;
	int j = 0;
	int temp;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}

		temp = atoi(argv[i]);
		suma += temp;

	}

	printf("%d\n", suma);
	return (0);


}

