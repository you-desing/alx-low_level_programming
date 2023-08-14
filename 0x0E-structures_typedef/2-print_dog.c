#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints a struct dog
 * @d: structure the dog
 *
*/
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
	printf("Name: %s\n", (*d).name);
	printf("Age: %f\n", (*d).age);
	printf("Owner: %s\n", (*d).owner);
	}
	else
		exit(0);
	if ((*d).name == NULL)
		printf("Name: nil");
	if ((*d).owner == NULL)
		printf("nil");
	if ((*d).age == 0)
		printf("nil");
}
