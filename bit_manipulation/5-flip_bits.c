#include "main.h"

/**
 * flip_bits - counts the number of bits you would need to flip
 * to get from one number to another
 *
 * @n: number one
 * @m: number two
 *
 * Return: the number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int total = 0, counter = 0;

	total = n ^ m;

	while (total > 0)
	{
		if (total & 1)
		{
			counter++;
		}
		total >>= 1;
	}

	return (counter);
}
