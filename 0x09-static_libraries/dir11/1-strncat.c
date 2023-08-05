#include "main.h"
#include <string.h>
/**
 * *_strncat - concatenates two strings
 *
 * @dest: first string
 *
 * @src: second string
 *
 * @n: bytes from src
 *
 * Return: pointer to the resulting string dest
 *
*/


char *_strncat(char *dest, char *src, int n)
{
int i, j = 0;

	while (dest[j])
	{
		j++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
		{
		dest[i + j] = src[i];
		}

	dest[i + j] = '\0';
return (dest);
}
