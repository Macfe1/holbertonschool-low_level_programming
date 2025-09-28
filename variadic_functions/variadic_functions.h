#ifndef MAIN_H
#define MAIN_H

/*Library*/
#include <stdarg.h>

/*Prototypes*/

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/*structures*/

typedef struct list_arg
{
	char name;
	void (*print)(va_list arg);
} list_arg;


#endif

