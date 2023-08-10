#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _calloc - prints buffer in hexa
 * @nmemb: the number of the array
 * @size: the size of the memory to print
 *
 * Return: pointer ot NULL.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *a;

	a = (int *)malloc(nmemb * size);
	if (nmemb == 0 || size == 0)
		return (NULL);
	if (a == NULL)
		return (NULL);
	return (a);
}
