#include "main.h"

/**
 * aux_recur - funcion para encontrar la raiz cuadrada de n
 *
 * @n: numero al que le hayamos la raiz
 * @root: raiz cuadrada de n
 *
 * Return: devuelve la ra+iz cuadrada de n si la tiene
 */
int aux_recur(int n, int root)
{
	if (root * root == n)
	{
		return (root);
	}

	if (root * root > n)
	{
		return (-1);
	}

	return (aux_recur(n, root + 1));
}

/**
 * _sqrt_recursion - funcion para retornar la raiz cuadrad de n
 *
 * @n: el numero al que le hayamos la raiz cuadrada
 *
 * Return: raiz cuadrada de n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (0);

	if (n == 1)
		return (1);

	return (aux_recur(n, 1));
}
