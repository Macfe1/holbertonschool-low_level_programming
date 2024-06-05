#include "main.h"
#include <stdio.h>

/**
 * main - function to print the name of the file it was compiled from
 *
 * @void: notthing
 *
 * Return: 0 if success
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
