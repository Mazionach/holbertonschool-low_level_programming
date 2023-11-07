#include "dog.h"

/**
 * init_dog - initializes a dog
 * @d: the dog
 * @name: the name
 * @age: the age
 * @owner: the owner's name
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
