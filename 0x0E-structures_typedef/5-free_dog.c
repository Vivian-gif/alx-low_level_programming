#include "dog.h"
#include <stdlib.h>

/**
 *eturn: no return.
 */
void free_dog(dog_t *d)
{
	i free_dog - frees dogs.
 * @d: struct dog.
 *
 * Rf (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
