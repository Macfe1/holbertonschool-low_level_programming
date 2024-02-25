#include <stdio.h>

/**
*main - principal function
*
*Return: 0 if the 0 is teh answer success
*/

int main(void)
{
char low = 'a';
char up = 'A';

{
putchar(low);
low++;
}
while (low <= 'z')
{
putchar(up);
up++;
}
while (up <= 'Z')

putchar('\n');

return (0);
}
