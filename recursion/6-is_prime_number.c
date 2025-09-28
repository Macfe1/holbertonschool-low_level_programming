#include "main.h"

/**
 * aux - function to know if n is a prime number
 *
 * @prime: index number
 * @n:number
 *
 * Return: 1 if n is integer otherwise 0
 */
int aux(int prime, int n)
{
	if (n <= 1 || (prime != n && n % prime == 0))
		return (0);

	if (prime == n)
		return (1);
	return (aux(prime + 1, n));
}

/**
 * is_prime_number - function to know if n is integer or not
 *
 * @n: number
 *
 * Return: aux function
 */
int is_prime_number(int n)
{
	return (aux(2, n));
}
