#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * create_array - creates an array of chars
 *
 * @size: size of character
 *
 * @c: character input
 *
 * Return: Returns a pointer to the array, or NULL
 *
*/
char *create_array(unsigned int size, char c)
{
	char *ch;
	unsigned int i;

	if (size != 0)
	{
	ch = malloc(size * sizeof(*ch));
	if (ch == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ch[i] = c;
	return (ch);
	}
	else
		return (NULL);
}
