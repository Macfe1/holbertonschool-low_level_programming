#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - function that returns the length of a string
 *
 * @s: Pointer
 *
 * Return: The length of a string
 */
int _strlen(char *s)
{
	int longitd = 0;

	while (*s != '\0')
	{
		longitd++;
		s++;
	}

	return (longitd);
}

/**
 * _strncpy - function
 *
 * @dest: pointer
 * @src: pointer
 * @n: number of ch
 *
 * Return: poin
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; n > i && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);

}

/**
 * new_dog - create a new structure and copy the name and the owner
 *
 * @name: the dog's name
 * @age: the dog's age
 * @owner: name of the owner
 *
 * Return: Pointer to the structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *store;

	int name_len = _strlen(name) + 1;
	int owner_len = _strlen(owner) + 1;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	store = (dog_t *) malloc(sizeof(dog_t));

	if (store == NULL)
	{
		free(store);
		return (NULL);
	}

	store->name = (char *) malloc(name_len * sizeof(char));

	if (store->name == NULL)
	{
		free(store);
		return (NULL);
	}

	store->owner = (char *) malloc(owner_len * sizeof(char));

	if (store->owner == NULL)
	{
		free(store);
		return (NULL);
	}

	_strncpy(store->name, name, name_len);
	_strncpy(store->owner, owner, owner_len);

	store->age = age;

	return (store);
}
