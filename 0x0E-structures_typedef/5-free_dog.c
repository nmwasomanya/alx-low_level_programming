#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees dog from memory
 * @d: struct
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
