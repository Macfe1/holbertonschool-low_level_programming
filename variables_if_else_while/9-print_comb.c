#include <stdio.h>
/**
*main - Principal Function
*
*Return: 0 if that is the anwser the succes
*/

int main(void)
{
int numero;
for (numero = '0'; numero <= '9'; numero++)
{
putchar(numero + '0');
if (numero < '9')
{
putchar(',');
putchar(' ');
}
}

putchar('\n');
return (0);
}
