#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dog data
 * @d: the dog
 */
void free_dog(struct dog *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
	}
	free(d);
	d = NULL;
}
