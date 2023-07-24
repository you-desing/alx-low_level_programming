#include "main.h"
#include <string.h>
/**
 * *_strcpy - copies the string pointed to by src
 *
 * @dest: input 1 the function
 *
 * @src: input 2 the function
 *
 * Return: the pointer to dest
 *
*/

char *_strcpy(char *dest, char *src)
{
int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
