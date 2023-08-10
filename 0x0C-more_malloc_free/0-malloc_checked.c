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
	int sv = 98;

	p = (void *)malloc(b);
	if (p == NULL)
		exit(98);
	if (b == INT_MAX)
		exit(1);
	return (p);
}
