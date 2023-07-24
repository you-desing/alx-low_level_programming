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
int i;

	for (i = 0; i < strlen(src); i++)

		dest[i] = src[i];

	for ( ; i < strlen(dest); i++)
		dest[i] = '\0';


	return (dest);
}
