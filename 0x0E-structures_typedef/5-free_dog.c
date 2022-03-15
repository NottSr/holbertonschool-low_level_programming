#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * free_dog - Entry point
 *
 * @d: ptr with structure
 *
 * Return: (Success)
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
