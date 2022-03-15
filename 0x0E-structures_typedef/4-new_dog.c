#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "dog.h"
/**
 * new_dog - Entry point
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 * Return: Always npup (Success)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int lname = 0, lowner = 0;
	dog_t *npup;

	while (name[lname] != '\0')
	{
		lname++;
	}
	while (owner[lowner] != '\0')
	{
		lowner++;
	}

	npup = malloc(sizeof(dog_t));
	if (npup == NULL)
	{
		return (NULL);
	}

	npup->name = malloc(sizeof(char) * (lname + 1));
	if (npup->name == NULL)
	{
		free(npup);
		return (NULL);
	}

	npup->owner = malloc(sizeof(char) * (lowner + 1));
	if (npup->owner == NULL)
	{
		free(npup);
		free(npup->name);
		return (NULL);
	}

	npup->age = age;
	strcpy(npup->name, name);
	strcpy(npup->owner, owner);
	return (npup);
}
