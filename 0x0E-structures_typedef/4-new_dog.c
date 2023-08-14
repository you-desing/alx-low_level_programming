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
	return (d);
	}
	else
		return (NULL);
}
