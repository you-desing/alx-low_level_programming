#include "dog.h"
/**
 * init_dog -  initialize a variable of type struct dog
 * @d: the dog
 * @name: name the dog
 * @age: age the dog
 * @owner: name the owner
 *
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
