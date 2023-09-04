#include <stdlib.h>
#include <limits.h>
#include "main.h"
/**
 * malloc_checked -  that allocates memory using malloc
 *
 * @b: size of variable
 *
 * Return: returns a pointer
*/
void *malloc_checked(unsigned int b)
{
	void *p;

	p = (void *)malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
