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

	for (i = 0; i < strlen(dest); i++)
	{
		j++;
	}
	for (i = 0; src[i]; i++)
	{
		dest[i++] = src[j];
	}
return (dest);
}
