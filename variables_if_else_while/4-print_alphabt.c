#include <stdio.h>

/**
*main - principal function
*
*Return: 0 if the 0 is teh answer success
*/
int main(void)
{
char alf;

for (alf = 'a'; alf <= 'z'; alf++)
{
if (alf != 'q' && alf != 'e')
{
putchar(alf);
}
}
putchar('\n');
return (0);
}
