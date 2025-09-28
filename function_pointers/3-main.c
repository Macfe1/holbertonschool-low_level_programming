#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - function to perform mathematical operations
 *
 * @argc: number of arguments
 * @argv: string
 *
 * Return: the result of the operations
 */
int main(int argc, char *argv[])
{
	int num_1, num_2, result;
	int (*calcul)(int, int);

	if (argc != 4)
	{
		printf("Error\n");

		exit(98);
	}

	num_1 = atoi(argv[1]);
	num_2 = atoi(argv[3]);

	calcul = get_op_func(argv[2]);

	result = calcul(num_1, num_2);

	printf("%d\n", result);

	return (0);
}
