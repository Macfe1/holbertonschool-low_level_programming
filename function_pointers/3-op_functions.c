#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - function to add a and b
 *
 * @a: num1
 * @b: num2
 *
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function to subtract a and b
 *
 * @a: num1
 * @b: num2
 *
 * Return: the subtraction of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function to multiply a and b
 *
 * @a: num1
 * @b: num2
 *
 * Return: the multiplication of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function to divide a and b
 *
 * @a: num1
 * @b: num2
 *
 * Return: the division of a and b
 */
int op_div(int a, int b)
{
	if (b != 0)
	{
		return (a / b);
	}
	printf("Error\n");
	exit(100);
}

/**
 * op_mod - function to have de residue of division a and b
 *
 * @a: num1
 * @b: num2
 *
 * Return: the residue of a and b
 */
int op_mod(int a, int b)
{
	if (b != 0)
	{
		return (a % b);
	}

	printf("Error\n");
	exit(100);
}
