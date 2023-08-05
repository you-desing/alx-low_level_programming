#include "main.h"
#include <string.h>
/**
 * *_memcpy - copies memory area
 *
 * @n: input the function
 *
 * @dest: first character
 *
 * @src: second character
 *
 * Return: return src
 *
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
return (dest);
}
