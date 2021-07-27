#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - I let the dogs out.
 * @d: pointer to the dog.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
