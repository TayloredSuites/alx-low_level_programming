#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * free_dog - a function that frees dogs.
 * @d: pointer to the structure d of dog_t struct
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	free(d->owner);
	free(d);
}
