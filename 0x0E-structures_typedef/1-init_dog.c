#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - Entry point
 *
 * @d: ptr with structure
 * @name: dog's name checked
 * @age: dog's age checked
 * @owner: dog's owner name checked
 *
 * Return: (Success)
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
