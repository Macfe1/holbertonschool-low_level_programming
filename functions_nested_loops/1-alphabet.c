#include "main.h"
/**
 * main - principal function where starts the program to print the aphabet in lowercase
 *
 * Return: 0 then success
 */

void print_alphabet(void)

{
  char lowcase = 'a';

   for (lowcase = 'a'; lowcase<='z'; lowcase++)
   {

   _putchar(lowcase);
   
   }

   _putchar('\n');

  }

