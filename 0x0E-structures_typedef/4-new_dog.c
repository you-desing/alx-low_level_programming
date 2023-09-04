#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - creates a new dog.
 *
 * @name: The name the dog
 *
 * @age: The age the  dog
 *
 * @owner: The owner the  dog
 *
 * Return: returns d or NULL
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	if (d->name == NULL || d->owner == NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
		return (NULL);
	}
	return (d);
	}
	else
		return (NULL);
}
