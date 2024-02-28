#include "main.h"

/**
* print_alphabet_x10 - Imprime diez veces el abecedario
*
* Return: Any return
*/

void print_alphabet_x10(void)
{

	int times;

	for (times = 0; times < 10; times++)
	{
		char al;

		for (al = 'a'; al <= 'z'; al++)
		{
			_putchar(al);
		}
		_putchar('\n');
	}
}
