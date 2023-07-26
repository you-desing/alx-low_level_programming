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

	for (i = 0; i < strlen(dest); i++)
	{
		j++;
	}

	if (n > strlen(src))
	{
		for (i = 0; i < strlen(src); i++)
		{
		dest[i + j] = src[i];
		}
	}
	else
	{
		for (i = 0; i < n; i++)
		{
		dest[i + j] = src[i];
		}
	}
	dest[i + j] = '\0';
return (dest);
}
