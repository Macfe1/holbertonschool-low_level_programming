#ifndef DOG_H
#define DOG_H

/**
 * struct dog - this structure provide a dog info
 * @name: The name of the dog
 * @age: The age of teh dog
 * @owner: The owner's name
 */

/*Structures*/
typedef struct dog
{
char *name; /*The name of the dog*/
float age; /*The age of the dog*/
char *owner; /*The dog's owner'*/
} dog_t;

/*Prototypes*/

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
