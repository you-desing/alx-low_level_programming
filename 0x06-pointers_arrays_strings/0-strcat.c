#include "main.h"
#include <string.h>
/**
 * *_strcat - function that concatenates two strings
 *
 * @dest: first character
 *
 * @src: second character
 *
 * Return: pointer to the resulting string dest
 *
*/

char *_strcat(char *dest, char *src)
{
int i, j = 0;

	while (dest[j])
	{
		j++;
	}
	for (i = 0; src[i]; i++)
	{
		dest[j++] = src[i];
	}
return (dest);
}
