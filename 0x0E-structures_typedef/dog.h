#ifndef DOG_H
#define DOG_H
/**
 * struct dog - information about dog
 * @name: name the dog
 * @age: age the dog
 * @owner: owner the dog
 *
 * Description: stucture define name, age and owner
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/**
 * dog_t - Typedef for dog
 */
typedef struct dog dog_t;
#endif
