#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dogs(memory)
 *
 * @d: memory to free is allocated and not in use
 *
 * Return: nothing
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
