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
	if (name)
	{
		d->name = strdup(name);
		if (!d->name)
		{
			free(d);
			return (NULL);
		}
	}
	else
	{
		free(d);
		return (NULL);
	}
	d->age = age;
	if (owner)
	{
		d->owner = strdup(owner);
		if (!d->owner)
		{
			free(d->name);
			free(d);
			return (NULL);
		}
	}
	else
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	free(d->name);
	free(d->owner);
	free(d);
	return (d);
}
