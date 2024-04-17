#include "main.h"

/**
 * print_alphabet_x10 - Print 10 times the alphabet
 *
 * Description: This function prints the lowercase alphabet using _putchar.
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
int times = 10;
int letter;

for (letter = 'a'; letter <= 'z'; letter++)
{
for (times = 1; times <= 10; times++)
{
_putchar(letter);
}
_putchar('\n');
}

}

