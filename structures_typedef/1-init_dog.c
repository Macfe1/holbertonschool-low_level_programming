#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - Initialize a variable of type struct dog
 *
 * @d: Pointer to the struct dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: the dog's owner
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}
