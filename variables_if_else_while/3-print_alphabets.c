#include <stdio.h>

/**
 * main - principal function
 *
 * Return: 0 if the program is successful
 */

int main(void)
{
char low = 'a';

while (low <= 'z' || low <= 'Z')
{
putchar(low);
if (low == 'z')
{
low = 'A';
}
low++;
}
putchar('\n');
return (0);
}
