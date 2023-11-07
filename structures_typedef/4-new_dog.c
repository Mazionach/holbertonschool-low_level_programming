#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - allocates dog
 * @name: the name
 * @age: the age
 * @owner: the owner's name
 *
 * Return: created dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(dog_t));

	if (!d)
		return (NULL);

	d->name = strdup(name);
	d->age = age;
	d->owner = strdup(owner);

	return (d);
}
