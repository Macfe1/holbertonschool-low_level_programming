#include <stdio.h>
/**
*main - Principal Function
*
*Return: 0 if that is the anwser the succes
*/

int main(void)
{
char letra;
int numero;

for (numero = '0'; numero <= '9'; numero++)
{

putchar(numero);

}

for (letra = 'a'; letra <= 'f'; letra++)
{

putchar(letra);

}

putchar('\n');
return (0);
}
