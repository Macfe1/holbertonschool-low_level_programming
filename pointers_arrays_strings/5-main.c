#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 *
int main(void)
{
    char s[10] = "My School";

    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);
    return (0);
}

#include "main.h"
#include <stdio.h>

**
 * main - check the code
 *
 * Return: Always 0.
 *
int main(void)
{
    char str[] = "Look up!\n";
    char *ptr;

    ptr = string_toupper(str);
    printf("%s", ptr);
    printf("%s", str);
    return (0);
}

#include "main.h"
#include <stdio.h>


 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "First, solve the problem. Then, write the code.";
    char *f = "solve";
    char *t;

    t = _strstr(s, f);
    printf("%s\n", t);
    return (0);
}
