#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints every element of the structure unless if is NULL
 *
 * @d: Pointer to a structure
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}

	else
		printf("Name: %s\n", d->name);

	printf("Age: %f\n", d->age);

	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}

	printf("Owner: %s\n", d->owner);
}
