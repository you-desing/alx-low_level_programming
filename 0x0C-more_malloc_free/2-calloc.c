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
	void *a;
	unsigned char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = malloc(nmemb * size);
	if (a != NULL)
	{
		ptr = (unsigned char *)a;
		for (i = 0; i < nmemb * size; i++)
		{
			ptr[i] = 0;
		}
		return (a);
	}
	else
		return (NULL);
}
