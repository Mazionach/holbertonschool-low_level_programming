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
	dog_t *d;
       
	if (name && owner)
		d = malloc(sizeof(dog_t));
	else
		return (NULL);

	if (!d)
		return (d);

	d->name = strdup(name);
	d->age = age;
	d->owner = strdup(owner);

	return (d);
}
