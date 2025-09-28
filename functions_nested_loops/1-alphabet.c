#include "main.h"

/**
 * print_alphabet - Print the alphabet in lowercase
 *
 * Description: This function prints the lowercase alphabet using _putchar.
 *
 * Return: void
 */
void print_alphabet(void)

{
char lowcase = 'a';

for (lowcase = 'a'; lowcase <= 'z'; lowcase++)
{
_putchar(lowcase);
}

_putchar('\n');

}

