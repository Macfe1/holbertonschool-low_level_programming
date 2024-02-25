#include <stdio.h>

/**
*main - principal function
*
*Return: 0 if the 0 is teh answer success
*/

int main(void)
{
char letra;
for (letra = 'a'; letra <= 'z'; letra++)
{
putchar(letra);
putchar(' ');
}

for (letra = 'A'; letra <= 'Z'; letra++)
{
putchar(letra);
if (letra != 'Z')
{
putchar(' ');
}
}
putchar('\n');
return (0);
}
